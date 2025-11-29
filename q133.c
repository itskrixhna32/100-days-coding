#include <stdio.h>

typedef enum
{
    mJan = 0,
    mFeb,
    mMar,
    mApr,
    mMay,
    mJun,
    mJul,
    mAug,
    mSep,
    mOct,
    mNov,
    mDec
} months_t;

int main()
{
    months_t mon = mFeb;

    if (mon == mJan || mon == mMar || mon == mMay || mon == mJul ||
        mon == mAug || mon == mOct || mon == mDec)
    {
        puts("31 days");
    }
    else if (mon == mApr || mon == mJun || mon == mSep || mon == mNov)
    {
        puts("30 days");
    }
    else if (mon == mFeb)
    {
        puts("28 or 29 days");
    }
    else
    {
        puts("Unknown month");
    }

    return 0;
}