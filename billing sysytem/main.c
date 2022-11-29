
//How to add even and odd number using pointer in C?
#include<stdio.h>
#include<stdlib.h>

int *arrayPtr = &array;
int *pEven = &arrayEven;
int * pOdd = &arrayOdd;


int array[10];


int *arrayPtr = array;




void copy_if( const int a1[], size_t n, int *a2, int *a3, int predicate( int ) )
{
    for ( const int *p = a1; p != a1 + n; ++p )
    {
        if ( predicate( *p ) )
        {
            *a2++ = *p;
        }
        else
        {
            *a3++ = *p;
        }
    }
}

size_t count_if( const int a[], size_t n, int predicate( int ) )
{
    size_t  cnt = 0;

    for ( const int *p = a; p != a + n; ++p )
    {
        if ( predicate( *p ) ) ++cnt;
    }

    return cnt;
}

int is_even( int x )
{
    return x % 2 == 0;
}

int main(void)
{
    enum { N = 10 };
    int a1[N];

    srand( ( unsigned int )time( NULL ) );

    for ( int *p = a1; p != a1 + N; ++p )
    {
        *p = rand() % N;
    }

    for ( const int *p = a1; p != a1 + N; ++p )
    {
        printf( "%d ", *p );
    }

    putchar( '\n' );

    size_t cnt = count_if( a1, N, is_even );

    if ( cnt != 0 && cnt != N )
    {
        int a2[cnt];
        int a3[N-cnt];

        copy_if( a1, N, a2, a3, is_even );

        for ( const int *p = a2; p != a2 + cnt; ++p )
        {
            printf( "%d ", *p );
        }

        putchar( '\n' );

        for ( const int *p = a3; p != a3 + N - cnt; ++p )
        {
            printf( "%d ", *p );
        }

        putchar( '\n' );
    }

    return 0;
}
