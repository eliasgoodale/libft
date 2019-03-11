
#include "../include/libft.h"



typedef struct  s_hashtable 
{
    int         *keys;
    char        **data;
    size_t      size;
}               t_hashtable;

enum hash_codes
{

    MALLOC_ERROR = -1,
    SUCCESS,
    VALUE_EXISTS,

};

size_t get_next_prime(int n)
{
    int i;
    int j;

    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            return((size_t)i);
        }
    }
}

int create_key(const char *new_value, size_t table_size)
{
    int sum;
    int new_key;

    sum = 0;
    while (*new_value)
    {
        sum += *new_value;
        new_value++;
    }
    new_key = sum % table_size;
    return (new_key);
}

t_hashtable *initialize(size_t size)
{
    t_hashtable         *new;
    size_t              prime_size;
    
    if (!(new = (t_hashtable *)malloc(sizeof(t_hashtable))))
        return (0);
    prime_size = get_next_prime(size);
    new->data = (char *)malloc((sizeof(char *) * prime_size) + 1);

    return new;
}

int store(t_hashtable *h, const char *new_value)
{
    int len;
    int idx;

    len = (int)ft_strlen(new_value);
    idx = create_key(new_value, h->size);

    if (h->data[idx])
        return (VALUE_EXISTS);
    else if(!(h->data[idx] = ft_strdup(new_value)))
        return (MALLOC_ERROR);
    else
        h->data[idx] = ft_strdup(new_value);
    return (SUCCESS);
}
