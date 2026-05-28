// SPDX-License-Identifier: MIT
// cctest_csmith_c241eea5.c --- cctest case csmith_c241eea5 (csmith seed 3259100837)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2a18c637 */
/* @exp_ticks 0x67b3 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3259100837 -o /tmp/csmith_gen_iuulrkbm/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
};

union U2 {
   int32_t  f0;
   uint32_t  f1;
   const struct S0  f2;
   int16_t  f3;
};


static int32_t g_2 = 0L;
static uint32_t g_14 = 0x41637C1DL;
static struct S0 g_15 = {4294967292UL,0x2A17D0B0L};
static uint32_t g_30 = 0x491D0B6BL;
static int16_t g_40 = 0L;
static int8_t g_41 = 1L;
static uint8_t g_59[3][1] = {{0x54L},{0x54L},{0x54L}};
static int32_t g_79[3][5] = {{1L,0L,0x05CE631DL,1L,1L},{0L,1L,0L,0x05CE631DL,1L},{0x11CF5FC6L,0x14FD4295L,1L,0x14FD4295L,0x11CF5FC6L}};
static int32_t g_198[3][2][4] = {{{1L,0L,1L,1L},{0L,0L,(-1L),0L}},{{0L,1L,1L,0L},{1L,0L,1L,1L}},{{0L,0L,(-1L),0L},{0L,1L,1L,0L}}};
static uint32_t g_199 = 0xAA08B820L;
static const uint8_t g_231 = 0xE8L;
static uint32_t g_267 = 4294967290UL;
static uint64_t g_269[5][2][5] = {{{18446744073709551607UL,1UL,1UL,18446744073709551607UL,0UL},{0x31240E19525CCEA2LL,18446744073709551612UL,1UL,1UL,18446744073709551612UL}},{{0UL,0xDA2ECC26A7BBD49ELL,1UL,9UL,9UL},{0xE203852692D5F5ADLL,0xEB0AC4D87749283ELL,0xE203852692D5F5ADLL,1UL,0xC61834C530886110LL}},{{18446744073709551615UL,1UL,9UL,1UL,18446744073709551615UL},{0xE203852692D5F5ADLL,0x31240E19525CCEA2LL,0xEB0AC4D87749283ELL,18446744073709551612UL,0xEB0AC4D87749283ELL}},{{0UL,0UL,9UL,18446744073709551615UL,18446744073709551607UL},{0x31240E19525CCEA2LL,0xE203852692D5F5ADLL,0xE203852692D5F5ADLL,0x31240E19525CCEA2LL,0xEB0AC4D87749283ELL}},{{1UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL},{0xEB0AC4D87749283ELL,0xE203852692D5F5ADLL,1UL,0xC61834C530886110LL,0xC61834C530886110LL}}};
static uint16_t g_271[2] = {65530UL,65530UL};
static uint64_t g_292 = 0x7214903B10FF59F6LL;



static uint8_t  func_1(void);
static uint64_t  func_10(const uint32_t  p_11, struct S0  p_12);
static union U2  func_21(struct S0  p_22, uint32_t  p_23, uint8_t  p_24);
static uint16_t  func_28(int8_t  p_29);




static uint8_t  func_1(void)
{ 
    int64_t l_202[1][1][5];
    uint32_t l_232 = 0UL;
    uint32_t l_266[2];
    int32_t l_277 = 0L;
    int32_t l_278 = (-1L);
    int32_t l_291[4] = {7L,7L,7L,7L};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_202[i][j][k] = 0x9221738AD2CF8168LL;
        }
    }
    for (i = 0; i < 2; i++)
        l_266[i] = 18446744073709551609UL;
    for (g_2 = 0; (g_2 < 15); g_2 = safe_add_func_uint8_t_u_u(g_2, 2))
    { 
        uint32_t l_13[5];
        int32_t l_204 = 0x0CD2700CL;
        int32_t l_257 = (-1L);
        int64_t l_272[1];
        int i;
        for (i = 0; i < 5; i++)
            l_13[i] = 1UL;
        for (i = 0; i < 1; i++)
            l_272[i] = 1L;
        if (g_2)
        { 
            int16_t l_203 = 0x01D1L;
            int32_t l_233 = 1L;
            struct S0 l_234 = {5UL,0L};
            if ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((!func_10((g_14 = ((g_2 <= l_13[1]) >= (-1L))), g_15)), 0xFFL)), l_13[1])))
            { 
                int32_t l_230 = 0x0FB57AB8L;
                l_204 = ((l_203 ^= l_202[0][0][4]) >= g_30);
                g_79[2][4] &= ((safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((l_233 |= (!(((safe_mul_func_uint16_t_u_u(l_202[0][0][4], (-1L))) ^ ((((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((((safe_div_func_uint64_t_u_u(((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((safe_div_func_int32_t_s_s(((l_202[0][0][4] < ((((((safe_sub_func_uint32_t_u_u((l_13[4] , l_202[0][0][4]), l_230)) < g_59[2][0]) | g_198[2][0][1]) <= l_202[0][0][0]) & g_231) != g_15.f0)) , l_230), (-2L))) < 1UL) , 0xE09CL), 5)), 0xEEL)) | l_230) == l_204) >= l_202[0][0][3]), g_198[1][1][0])) , l_204) != g_14) ^ g_198[1][1][0]), 0x98FBL)), 7)) && l_232) | 0x8053L) == l_230)) != g_14))), 4)) , g_15.f0), l_203)), l_203)) ^ g_14);
            }
            else
            { 
                l_204 = l_202[0][0][4];
                l_234 = g_15;
            }
        }
        else
        { 
            uint32_t l_268 = 0x6D44F74CL;
            int32_t l_270 = 0xCA114316L;
            for (l_204 = 0; (l_204 == 22); l_204++)
            { 
                uint32_t l_243 = 0xB76DF01CL;
                uint8_t l_244 = 0UL;
                int32_t l_245 = 0x9A3F20F4L;
                g_79[1][3] = g_79[1][3];
                l_245 = (((((safe_div_func_int8_t_s_s((+(g_14 | g_79[1][3])), ((safe_mul_func_uint16_t_u_u((l_202[0][0][4] , (~l_243)), l_244)) , 0xAEL))) & 0x8EL) || g_59[2][0]) > 0xB22501F1L) == g_30);
                l_272[0] ^= ((((g_271[1] ^= ((((((!(safe_lshift_func_uint8_t_u_s(g_41, ((+(safe_lshift_func_uint8_t_u_s((l_245 |= (safe_rshift_func_uint8_t_u_u(((~((((((safe_lshift_func_int8_t_s_u((l_257 ^ (l_268 = (safe_add_func_uint32_t_u_u(l_204, ((g_267 = (g_79[1][3] = (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_266[0] > g_79[2][1]), g_2)), l_266[0])), g_14)))) & 1L))))), g_198[1][1][0])) , g_79[1][3]) , 1L) | g_269[4][0][3]) <= l_270) != l_270)) || g_15.f1), g_269[4][0][4]))), l_204))) > 1UL)))) ^ 0x05L) , g_79[0][4]) < 0x0E365370L) == 4294967295UL) < 0x0E0F48A35905E24FLL)) == 255UL) < 0L) ^ g_269[3][1][3]);
            }
        }
        l_204 |= (safe_lshift_func_uint16_t_u_u(0xA994L, ((0x55L < ((1L < g_198[0][0][3]) != g_15.f0)) | (-4L))));
    }
    l_277 = (g_79[0][4] |= (0x8DL < ((++g_271[1]) < (l_278 |= (safe_rshift_func_int8_t_s_u((l_277 <= (((safe_mod_func_int64_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_292 = (l_291[2] | g_30)), g_15.f1)), (-1L))), l_291[2])), g_41)) != l_202[0][0][4]) <= l_277)), 0))))));
    return g_267;
}



static uint64_t  func_10(const uint32_t  p_11, struct S0  p_12)
{ 
    uint32_t l_16[3][3][1] = {{{7UL},{4UL},{7UL}},{{4UL},{7UL},{4UL}},{{7UL},{4UL},{7UL}}};
    struct S0 l_25 = {4294967295UL,-1L};
    int32_t l_46 = (-1L);
    int32_t l_64 = 0L;
    int8_t l_65[4] = {(-1L),(-1L),(-1L),(-1L)};
    int64_t l_92 = (-6L);
    const uint32_t l_105 = 0UL;
    uint8_t l_109 = 6UL;
    int32_t l_163 = (-1L);
    int32_t l_164 = 1L;
    int32_t l_166[1][4] = {{0L,0L,0L,0L}};
    int32_t l_170[4][2] = {{0x00182948L,0x00182948L},{0x9385D059L,0x00182948L},{0x00182948L,0x9385D059L},{0x00182948L,0x00182948L}};
    int i, j, k;
    for (p_12.f1 = 0; p_12.f1 < 3; p_12.f1 += 1)
    {
        for (g_14 = 0; g_14 < 3; g_14 += 1)
        {
            for (g_15.f1 = 0; g_15.f1 < 1; g_15.f1 += 1)
            {
                l_16[p_12.f1][g_14][g_15.f1] = 0xCFD66C4AL;
            }
        }
    }
    if ((((((l_46 &= (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(((func_21(l_25, p_12.f0, (g_41 &= (safe_lshift_func_int16_t_s_u(p_12.f0, func_28(l_16[1][2][0]))))) , p_12.f0) , p_12.f1), g_15.f0)), l_16[2][0][0]))) , p_11) == l_25.f1) > g_15.f0) , 5L))
    { 
        int16_t l_50 = 0L;
        int32_t l_66 = (-1L);
        uint32_t l_67[5] = {0xAD7B5901L,0xAD7B5901L,0xAD7B5901L,0xAD7B5901L,0xAD7B5901L};
        int32_t l_154[3][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
        int32_t l_155 = (-4L);
        int32_t l_156 = 0L;
        int32_t l_157 = (-9L);
        uint8_t l_171 = 254UL;
        int32_t l_197 = 0xC8282892L;
        int i, j;
        if (((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u(((((((l_66 = (l_50 , ((safe_div_func_uint32_t_u_u(((((l_64 |= (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u((0xFDL <= (safe_mod_func_uint64_t_u_u((1L | ((--g_59[2][0]) == (safe_mod_func_int64_t_s_s(p_12.f1, l_50)))), l_16[2][1][0]))), 1)) | l_50), 4))) && g_59[0][0]) | 0x48991CD3L) && l_65[3]), 0x453D1DD1L)) < 1UL))) <= l_50) , l_65[2]) , 0L) <= (-8L)) & g_15.f0))) , 1UL), p_12.f0)) , l_67[4]))
        { 
            struct S0 l_68[4][2][3] = {{{{1UL,0x2CFEAA3CL},{0x70EAE325L,0xC1C08558L},{5UL,1L}},{{0UL,9L},{0x339AA88DL,0L},{0UL,9L}}},{{{0x48F7C4FBL,0x7F4763CDL},{1UL,0x2CFEAA3CL},{5UL,1L}},{{1UL,0x5B2DFF54L},{1UL,0x5B2DFF54L},{0UL,0x76B242CFL}}},{{{0x427032CDL,1L},{1UL,0x2CFEAA3CL},{1UL,0x2CFEAA3CL}},{{0UL,0x76B242CFL},{0x339AA88DL,0L},{0xEDA29731L,-3L}}},{{{0x427032CDL,1L},{0x70EAE325L,0xC1C08558L},{0x427032CDL,1L}},{{1UL,0x5B2DFF54L},{0UL,0x76B242CFL},{0xEDA29731L,-3L}}}};
            int32_t l_93 = 0x658C465DL;
            int i, j, k;
            l_68[0][1][1] = g_15;
            l_64 &= ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((0x4112691DL > (((safe_sub_func_int64_t_s_s(g_2, (g_79[1][3] ^= ((((((((safe_sub_func_uint32_t_u_u((g_30 , (p_12.f0 = 4294967291UL)), g_59[2][0])) & g_41) , 1UL) | g_15.f1) >= l_46) <= p_12.f1) ^ 0x4C0ACF25L) , (-4L))))) < 1UL) < 1L)) < g_15.f1), p_11)), g_40)), 0UL)) <= p_11);
            if (g_59[0][0])
            { 
                struct S0 l_94[5][3] = {{{0x45DBD19AL,5L},{0x45DBD19AL,5L},{0x45DBD19AL,5L}},{{4294967295UL,0x116D361FL},{4294967295UL,1L},{4294967295UL,0x116D361FL}},{{0x45DBD19AL,5L},{0x45DBD19AL,5L},{0x45DBD19AL,5L}},{{4294967295UL,0x116D361FL},{4294967295UL,1L},{4294967295UL,0x116D361FL}},{{0x45DBD19AL,5L},{0x45DBD19AL,5L},{0x45DBD19AL,5L}}};
                int i, j;
                g_15 = g_15;
                l_93 |= (func_21(g_15, (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_66 = l_66), (safe_sub_func_uint16_t_u_u(((p_12.f0 > (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(l_65[1], 4UL)), l_92)) ^ g_40), 5))) , p_12.f1), p_12.f1)))), 13)), g_2) , l_68[0][1][1].f1);
                g_15 = (p_12.f1 , l_94[2][2]);
            }
            else
            { 
                uint64_t l_95 = 18446744073709551615UL;
                g_79[1][3] = (-9L);
                l_95 = 0x724DDD4CL;
            }
        }
        else
        { 
            int32_t l_104[3];
            int i;
            for (i = 0; i < 3; i++)
                l_104[i] = 1L;
            p_12 = p_12;
            g_79[1][3] = p_11;
            g_79[1][4] = (safe_mul_func_uint8_t_u_u(((l_66 , (l_64 = (0xE8E9F827A0C98A99LL <= (safe_add_func_int64_t_s_s(((255UL >= ((safe_rshift_func_int16_t_s_u(((((safe_mul_func_int16_t_s_s(l_104[2], l_105)) == l_50) & g_30) != 0x338CL), l_104[2])) <= 0xCA51L)) > g_2), l_66))))) >= 0x173955FA40266A50LL), p_11));
        }
        if ((((g_15.f0 = p_11) <= (safe_mul_func_uint8_t_u_u((+l_105), ((((g_79[1][4] <= (p_12.f1 , g_14)) > 1UL) , g_41) , g_59[2][0])))) == l_109))
        { 
            int16_t l_112[2];
            int i;
            for (i = 0; i < 2; i++)
                l_112[i] = 0x8C34L;
            for (g_30 = 0; (g_30 < 52); ++g_30)
            { 
                return g_59[2][0];
            }
            g_79[1][3] |= 0x7C363354L;
            l_112[0] |= l_67[3];
        }
        else
        { 
            int32_t l_125[1];
            int32_t l_129 = 0xDE28A808L;
            int32_t l_158 = 0xAEF97A49L;
            int32_t l_159 = 0xE3320B12L;
            int32_t l_165 = (-1L);
            int32_t l_167 = 1L;
            int32_t l_168 = 1L;
            int32_t l_169[3];
            int i;
            for (i = 0; i < 1; i++)
                l_125[i] = 8L;
            for (i = 0; i < 3; i++)
                l_169[i] = 0xB5BA5489L;
            if (((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((0xC46DEB76L >= (l_46 &= (((g_79[0][2] == l_125[0]) != (safe_sub_func_uint32_t_u_u((1L && g_2), 0xFE5E71FFL))) <= p_12.f0))), 0xCFL)), 0xC8C0L)) ^ 1L) , g_15.f1), p_12.f0)), p_12.f1)) || g_14), 0L)) || 1L), g_59[2][0])) != g_79[0][0]))
            { 
                uint32_t l_128 = 5UL;
                int32_t l_160 = 0xAEE789F3L;
                int32_t l_161 = 4L;
                int32_t l_162[2][3][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}};
                int i, j, k;
                l_129 = (l_128 > 1L);
                g_79[1][3] = (safe_mod_func_int32_t_s_s((l_66 = g_41), (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_128, (safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((l_158 &= ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_129 <= ((((l_157 = (((l_156 = ((l_155 = (((((safe_div_func_int64_t_s_s((((l_154[0][2] = (((safe_rshift_func_uint16_t_u_u((((g_59[2][0] = (3UL & p_11)) ^ l_128) , l_16[2][1][0]), g_30)) ^ g_41) < g_15.f1)) && l_125[0]) == 0x23A2376BBF86D33BLL), l_25.f1)) != p_12.f0) , 0xC3C174B8878B8117LL) & 7L) ^ l_65[2])) , 3L)) , l_16[0][1][0]) >= 0x4A55L)) > g_41) != 0xD4L) | 0x23F93586B99F0C8DLL)), 2)), 6)), 0xFAL)), 250UL)), g_41)) < (-10L))), p_12.f0)), l_67[4])))), g_79[1][3]))));
                l_171++;
            }
            else
            { 
                uint16_t l_183 = 65531UL;
                uint64_t l_184 = 0x4460A3BB4AA2B9E0LL;
                g_79[2][1] = (((0x8045L && (g_59[2][0] , ((l_183 = (safe_unary_minus_func_uint8_t_u((safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((l_154[0][2] , p_11), g_41)) > g_14), g_40)), p_12.f1)) < l_168), g_2))))) && l_184))) && g_14) ^ p_11);
            }
            for (g_41 = 15; (g_41 == 20); g_41 = safe_add_func_uint8_t_u_u(g_41, 7))
            { 
                g_79[1][3] = (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_79[0][0], (safe_mod_func_uint8_t_u_u(((1UL < 1UL) & l_197), l_170[3][1])))), p_11)), 3)), g_15.f0));
                return g_59[2][0];
            }
        }
    }
    else
    { 
        return p_12.f0;
    }
    g_199++;
    return l_170[3][1];
}



static union U2  func_21(struct S0  p_22, uint32_t  p_23, uint8_t  p_24)
{ 
    uint32_t l_42 = 0xF85024D8L;
    union U2 l_45 = {0x31FC5313L};
    ++l_42;
    return l_45;
}



static uint16_t  func_28(int8_t  p_29)
{ 
    int8_t l_38 = 0x36L;
    uint8_t l_39[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_39[i][j] = 0x52L;
    }
    ++g_30;
    g_40 = (safe_sub_func_int16_t_s_s(p_29, (((+p_29) > (safe_mod_func_int32_t_s_s((18446744073709551610UL != ((l_39[0][0] = (((l_38 > l_38) >= g_15.f0) < g_14)) || 0xFC7127B1AA435C52LL)), l_38))) , p_29)));
    return l_39[0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_59[i][j], "g_59[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_79[i][j], "g_79[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_198[i][j][k], "g_198[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_269[i][j][k], "g_269[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_271[i], "g_271[i]", print_hash_value);

    }
    transparent_crc(g_292, "g_292", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
