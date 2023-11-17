#include "main.h"

/**
 * init_params - clears struct fields and reset buf
 * @params: the parameters struct
 * @ap: the argument pointer
 *
 * Return: void
 */
void init_params(params_t *params, va_list ap)
{
<<<<<<< HEAD
params->unsign = 0;
params-›plus_flag = 0;
params->space_flag = 0;
params->hashtag_flag = 0;
params-›zero_flag = 0;
params->minus_flag = 0;
params->width = 0;
params->precision = UINT MAX;
params->h _modifier = 0;
params->1 modifier = 0;
(void) ap;
}
