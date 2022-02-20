#include <stdio.h>

struct hoc_sinh
{
    char ten_hs[32];
    int diem_so;
};

void ghi_diem(struct hoc_sinh *hs, int diem)
{
    hs->diem_so = diem;
}

void in_diem(struct hoc_sinh *hs)
{
    printf("%s: %d \n", hs->ten_hs, hs->diem_so);
}

void ghi_ten(struct hoc_sinh *hs, const char ten[])
{
    char *p = (char *)ten; // cast(char *) = ...
    char *t = hs->ten_hs;
    while (*p != '\0')
    {
        *t = *p;
        p++;
        t++;
    }
}

int main()
{
    struct hoc_sinh H1 = {0};
    struct hoc_sinh H2 = {0};
    ghi_ten(&H1, "VAN");
    ghi_ten(&H2, "HAI");
    ghi_diem(&H1, 5);
    ghi_diem(&H2, 8);
    in_diem(&H1);
    in_diem(&H2);
}