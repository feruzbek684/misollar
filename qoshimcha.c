#include <stdio.h>
int main()
{
    int choose_language, pin, menu, balance = 1000000, tanlash, som, qoldiq, pul, otkazma, gaz, svet, suv, karta;

    printf("1. uzbek\n2. engilish\nEnter your number: ");

    scanf("%d", &choose_language);

    if (choose_language == 1)
    {
        printf("pin codni kiriting:  ");
        scanf("%d", &pin);

        if (pin == 1111)
        {
            printf("1. balansni bilish\n2. Naxt pul olish\n3. pul otkazish\nMenuni tanlang: ");
            scanf("%d", &menu);
            if (menu == 1)
            {
                printf("sizngning kartangizda bor %d\n", balance);
            }
            if (menu == 2)
            {
                printf("qancha som kerak: \n");
                printf("ixtiyoriy pul tanlang: \n");
                printf("1. 50000\n2. 100000\n3. 150000\n4. 200000\n5. 300000\n6. 400000\n");
                scanf("%d", &som);
                qoldiq = balance - som;
                printf("amaliyot bajarilmoqda iltimos kuting !");
                printf("pul	muvafaqiyatli yechildi");
            }
            if (som >= balance)
            {
                printf("Mablag' yetarli emas");
            }
            if (som == 1)
            {
                qoldiq = balance - 50000;
                printf("amaliyot bajarilmoqda iltimos kuting !\n");
                printf("pul	muvafaqiyatli yechildi\n");
            }
            if (som == 2)
            {
                qoldiq = balance - 100000;
                printf("amaliyot bajarilmoqda iltimos kuting !\n");
                printf("pul	muvafaqiyatli yechildi");
            }
            if (som == 3)
            {
                qoldiq = balance - 150000;
                printf("amaliyot bajarilmoqda iltimos kuting !");
                printf("pul	muvafaqiyatli yechildi");
            }
            if (som == 4)
            {
                qoldiq = balance - 200000;
                printf("amaliyot bajarilmoqda iltimos kuting !");
                printf("pul	muvafaqiyatli yechildi");
            }
            if (som == 5)
            {
                qoldiq = balance - 300000;
                printf("amaliyot bajarilmoqda iltimos kuting !");
                printf("pul	muvafaqiyatli yechildi");
            }
            if (som == 6)
            {
                qoldiq = balance - 400000;
                printf("amaliyot bajarilmoqda iltimos kuting !");
                printf("pul	muvafaqiyatli yechildi");
            }
            if (menu == 3)
            {
                printf("1. gaz\n2. svet\n3. suv\n4.kartaga otkazish\n");
                scanf("%d", &otkazma);
            }
            if (otkazma == 1)
            {
                printf("gaz raqamingizni yozing : ");
                scanf("%d", &gaz);
                printf("amaliyot bajarilmoqda iltimos kuting !");
                printf("pul	muvafaqiyatli yechildi");
            }
            if (otkazma == 2)
            {
                printf("svet raqamingizni yozing : ");
                scanf("%d", &svet);
                printf("amaliyot bajarilmoqda iltimos kuting !");
                printf("pul	muvafaqiyatli yechildi");
            }
            if (otkazma == 3)
            {
                printf("suv raqamingizni yozing : ");
                scanf("%d", &suv);
                printf("amaliyot bajarilmoqda iltimos kuting !\n");
                printf("pul	muvafaqiyatli yechildi\n");
            }
            if (otkazma == 4)
            {
                printf("karta raqamingizni yozing : ");
                scanf("%d", &karta);
                printf("amaliyot bajarilmoqda iltimos kuting !\n");
                printf("pul	muvafaqiyatli yechildi\n");
            }
        }
        else
        {
            printf("pin kod xato qayta kiriting : ");
            scanf("%d", pin);
            if (pin == 1111)
            {
                printf("1. balansni bilish\n2. Naxt pul olish\n3. pul otkazish\nMenuni tanlang: ");
                scanf("%d", &menu);
                if (menu == 1)
                {
                    printf("sizngning kartangizda bor %d\n", balance);
                }
                if (menu == 2)
                {
                    printf("qancha som kerak: \n");
                    printf("ixtiyoriy pul tanlang: \n");
                    printf("1. 50000\n2. 100000\n3. 150000\n4. 200000\n5. 300000\n6. 400000\n");
                    scanf("%d", &som);
                    qoldiq = balance - som;
                    printf("amaliyot bajarilmoqda iltimos kuting !");
                    printf("pul	muvafaqiyatli yechildi");
                }
                if (som >= balance)
                {
                    printf("Mablag' yetarli emas");
                }
                if (som == 1)
                {
                    qoldiq = balance - 50000;
                    printf("amaliyot bajarilmoqda iltimos kuting !\n");
                    printf("pul	muvafaqiyatli yechildi\n");
                }
                if (som == 2)
                {
                    qoldiq = balance - 100000;
                    printf("amaliyot bajarilmoqda iltimos kuting !\n");
                    printf("pul	muvafaqiyatli yechildi");
                }
                if (som == 3)
                {
                    qoldiq = balance - 150000;
                    printf("amaliyot bajarilmoqda iltimos kuting !");
                    printf("pul	muvafaqiyatli yechildi");
                }
                if (som == 4)
                {
                    qoldiq = balance - 200000;
                    printf("amaliyot bajarilmoqda iltimos kuting !");
                    printf("pul	muvafaqiyatli yechildi");
                }
                if (som == 5)
                {
                    qoldiq = balance - 300000;
                    printf("amaliyot bajarilmoqda iltimos kuting !");
                    printf("pul	muvafaqiyatli yechildi");
                }
                if (som == 6)
                {
                    qoldiq = balance - 400000;
                    printf("amaliyot bajarilmoqda iltimos kuting !");
                    printf("pul	muvafaqiyatli yechildi");
                }
                if (menu == 3)
                {
                    printf("1. gaz\n2. svet\n3. suv\n4.kartaga otkazish\n");
                    scanf("%d", &otkazma);
                }
                if (otkazma == 1)
                {
                    printf("gaz raqamingizni yozing : ");
                    scanf("%d", &gaz);
                    printf("amaliyot bajarilmoqda iltimos kuting !");
                    printf("pul	muvafaqiyatli yechildi");
                }
                if (otkazma == 2)
                {
                    printf("svet raqamingizni yozing : ");
                    scanf("%d", &svet);
                    printf("amaliyot bajarilmoqda iltimos kuting !");
                    printf("pul	muvafaqiyatli yechildi");
                }
                if (otkazma == 3)
                {
                    printf("suv raqamingizni yozing : ");
                    scanf("%d", &suv);
                    printf("amaliyot bajarilmoqda iltimos kuting !\n");
                    printf("pul	muvafaqiyatli yechildi\n");
                }
                if (otkazma == 4)
                {
                    printf("karta raqamingizni yozing : ");
                    scanf("%d", &karta);
                    printf("amaliyot bajarilmoqda iltimos kuting !\n");
                    printf("pul	muvafaqiyatli yechildi\n");
                }
            }
        }
    }

    return 0;
}