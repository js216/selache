// SPDX-License-Identifier: MIT
// cctest_csmith_a65781a9.c --- cctest case csmith_a65781a9 (csmith seed 2790752681)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8d9cc87b */
/* @exp_ticks 0x37c7 */

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

// Options:   -s 2790752681 -o /tmp/csmith_gen_dajz_b7f/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint8_t  f1;
   const uint8_t  f2;
   uint32_t  f3;
   const uint8_t  f4;
   uint32_t  f5;
};

union U1 {
   int32_t  f0;
   int16_t  f1;
};

union U2 {
   const int16_t  f0;
   int8_t  f1;
};

union U3 {
   int32_t  f0;
   uint16_t  f1;
   const int32_t  f2;
   uint64_t  f3;
};

union U4 {
   const uint8_t  f0;
};

union U5 {
   const int32_t  f0;
   const struct S0  f1;
   int8_t  f2;
};


static int32_t g_3 = (-9L);
static uint16_t g_15 = 0xA37DL;
static union U2 g_34 = {0x187BL};
static union U5 g_37 = {0x8FC786C7L};
static uint8_t g_38 = 1UL;
static int8_t g_39 = 0x84L;
static int8_t g_70[5] = {0x4BL,0x4BL,0x4BL,0x4BL,0x4BL};
static int8_t g_77 = 0x04L;
static uint8_t g_79 = 0xECL;
static union U1 g_84 = {-1L};
static int8_t g_85 = 0x50L;
static int32_t g_90 = (-2L);
static int64_t g_91 = 0L;
static uint16_t g_94 = 0xA3F7L;
static union U4 g_117 = {0xD1L};
static int32_t g_120[1][3] = {{(-3L),(-3L),(-3L)}};
static const union U3 g_135 = {1L};
static uint16_t g_148 = 65535UL;
static struct S0 g_158 = {0xD512875DL,0xBEL,0xD3L,4294967295UL,255UL,7UL};
static int8_t g_187 = (-4L);
static uint32_t g_214 = 4UL;
static int32_t g_227 = (-4L);



static union U5  func_1(void);
static int32_t  func_7(uint8_t  p_8, union U4  p_9);
static uint8_t  func_22(union U1  p_23, union U1  p_24, uint16_t  p_25, int64_t  p_26, int32_t  p_27);
static uint8_t  func_30(int16_t  p_31, uint64_t  p_32, union U3  p_33);




static union U5  func_1(void)
{ 
    int32_t l_2[2];
    union U4 l_10[3] = {{0UL},{0UL},{0UL}};
    uint8_t l_247 = 0x58L;
    int64_t l_248 = 0x28A66A1571C5A3C1LL;
    int i;
    for (i = 0; i < 2; i++)
        l_2[i] = (-1L);
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { 
        uint32_t l_4 = 6UL;
        ++l_4;
        for (l_4 = 0; (l_4 <= 1); l_4 += 1)
        { 
            int i;
            if (l_2[l_4])
                break;
        }
    }
    l_247 = func_7(l_2[1], l_10[1]);
    l_248 &= l_2[0];
    return g_37;
}



static int32_t  func_7(uint8_t  p_8, union U4  p_9)
{ 
    uint32_t l_11[5][1] = {{6UL},{0xCD7D393EL},{6UL},{0xCD7D393EL},{6UL}};
    int32_t l_92 = 0xA61860F4L;
    union U1 l_149 = {0x8293F6A8L};
    uint64_t l_150 = 1UL;
    int32_t l_151 = 0L;
    int32_t l_192 = 0L;
    int32_t l_193 = 1L;
    int8_t l_195 = 0x23L;
    int32_t l_196 = 0xDE1B36AAL;
    int32_t l_197 = (-1L);
    int32_t l_198 = 0x6E0624A2L;
    uint32_t l_231 = 0xF1988929L;
    union U3 l_243 = {3L};
    int i, j;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        union U3 l_40 = {-3L};
        int32_t l_93 = (-6L);
        uint16_t l_153[4];
        int i;
        for (i = 0; i < 4; i++)
            l_153[i] = 0x5A66L;
    }
    l_92 = (((safe_sub_func_int16_t_s_s((g_94 == (~(l_149.f1 ^ (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(9UL, (((18446744073709551615UL >= g_15) | l_11[3][0]) , p_9.f0))), g_158.f1))))), (-10L))) , 0x2B2AL) || p_9.f0);
    for (g_84.f1 = (-2); (g_84.f1 <= (-9)); --g_84.f1)
    { 
        uint16_t l_185[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
        int32_t l_186 = 8L;
        uint16_t l_200 = 0UL;
        int32_t l_212 = 0xBAF6B6E5L;
        union U2 l_244 = {0x810AL};
        int i, j;
        if ((l_92 && (g_187 = ((l_186 = (g_158.f3 == ((((-3L) ^ (-3L)) || 248UL) ^ l_185[3][1]))) != p_8))))
        { 
            int8_t l_194 = 1L;
            int32_t l_211 = 9L;
            int32_t l_213 = (-1L);
            if (l_149.f0)
                break;
            if (l_151)
                break;
            for (g_94 = 25; (g_94 >= 54); g_94 = safe_add_func_uint16_t_u_u(g_94, 1))
            { 
                int8_t l_190 = 0x67L;
                int32_t l_191 = 0x0059E374L;
                int32_t l_199[3][2] = {{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)}};
                int i, j;
                l_186 = (0x2DL < l_190);
                ++l_200;
                l_197 = (((0x64L < ((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((g_39 < ((safe_mod_func_uint64_t_u_u((++g_214), (p_8 && (safe_lshift_func_uint16_t_u_s(((l_199[1][0] = 0xCAL) , p_9.f0), l_194))))) != g_34.f0)), 11)) <= l_211) >= 0xC0L), 0L)) && 0x14L)) && p_8) | p_9.f0);
            }
        }
        else
        { 
            int32_t l_228[4] = {0x65A498E7L,0x65A498E7L,0x65A498E7L,0x65A498E7L};
            int i;
            if ((safe_mul_func_int8_t_s_s((g_158.f0 || (safe_div_func_int64_t_s_s((l_212 |= l_196), 0xA445FDDC11C7F1A5LL))), (safe_mod_func_int32_t_s_s(((l_228[2] = (((l_193 = (safe_sub_func_uint8_t_u_u(l_193, 6L))) , g_227) != g_158.f0)) | 5UL), g_94)))))
            { 
                int16_t l_238 = (-7L);
                int32_t l_239 = (-10L);
                l_193 = (l_186 = (l_239 |= (safe_rshift_func_uint16_t_u_u(l_231, (safe_sub_func_int16_t_s_s((l_151 = (safe_mul_func_int8_t_s_s(0x42L, ((g_91 = ((safe_mul_func_uint16_t_u_u((l_238 & p_9.f0), 0xFC9AL)) < g_85)) | p_9.f0)))), 0UL))))));
            }
            else
            { 
                int16_t l_240 = 0x70AAL;
                return l_240;
            }
        }
        l_151 |= l_198;
        for (l_92 = 3; (l_92 >= 0); l_92 -= 1)
        { 
            int i;
            l_198 = (safe_lshift_func_uint8_t_u_u(g_70[(l_92 + 1)], ((l_243 , ((((((l_244 , ((safe_sub_func_int8_t_s_s((g_148 <= l_186), g_79)) , 0x07E6L)) >= p_8) >= 65531UL) <= 0x87BEL) > g_70[(l_92 + 1)]) > g_79)) && 6UL)));
        }
    }
    return l_11[0][0];
}



static uint8_t  func_22(union U1  p_23, union U1  p_24, uint16_t  p_25, int64_t  p_26, int32_t  p_27)
{ 
    uint32_t l_86 = 18446744073709551615UL;
    int32_t l_89[2][3] = {{1L,1L,1L},{4L,4L,4L}};
    int i, j;
    g_91 = (g_90 = ((++l_86) & l_89[0][2]));
    return l_89[0][2];
}



static uint8_t  func_30(int16_t  p_31, uint64_t  p_32, union U3  p_33)
{ 
    uint16_t l_43 = 0UL;
    int32_t l_69 = 0x7F0936A7L;
    int32_t l_71 = 0x3DFA8E8BL;
    int32_t l_72[5][3][2] = {{{0L,0L},{9L,0L},{0L,9L}},{{9L,9L},{0xC4D9805FL,9L},{9L,0xC4D9805FL}},{{9L,9L},{0xC4D9805FL,9L},{9L,0xC4D9805FL}},{{9L,9L},{0xC4D9805FL,9L},{9L,0xC4D9805FL}},{{9L,9L},{0xC4D9805FL,9L},{9L,0xC4D9805FL}}};
    int32_t l_73 = 8L;
    int16_t l_78 = 0x904CL;
    int i, j, k;
    l_73 = (l_72[1][0][1] = ((l_71 = (safe_div_func_int64_t_s_s((l_43 || (-1L)), (((safe_add_func_uint32_t_u_u(l_43, (safe_lshift_func_uint16_t_u_s(((g_70[0] = ((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((((safe_div_func_uint8_t_u_u((l_69 = (safe_sub_func_uint32_t_u_u(((~(safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((safe_div_func_int16_t_s_s(p_33.f1, 0x0138L)) && p_32), 0x54FD57ECL)) && l_43), 0xA796L)), 11))) < p_31), g_34.f1))), 0xFBL)) != g_3) < p_32), p_33.f0)), g_15)) == p_31), p_33.f2)) <= l_43) != 4294967295UL), 3)) | 0x0027488FL)) & l_43), 11)))) & (-4L)) , p_33.f1)))) < l_43));
    for (g_34.f1 = 3; (g_34.f1 >= 28); ++g_34.f1)
    { 
        int32_t l_76[3];
        int i;
        for (i = 0; i < 3; i++)
            l_76[i] = 0x5CE76562L;
        g_79--;
    }
    for (g_77 = 0; (g_77 == (-11)); g_77 = safe_sub_func_int32_t_s_s(g_77, 6))
    { 
        return l_72[1][2][0];
    }
    return g_3;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_70[i], "g_70[i]", print_hash_value);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_120[i][j], "g_120[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_135.f1, "g_135.f1", print_hash_value);
    transparent_crc(g_135.f2, "g_135.f2", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_158.f1, "g_158.f1", print_hash_value);
    transparent_crc(g_158.f2, "g_158.f2", print_hash_value);
    transparent_crc(g_158.f3, "g_158.f3", print_hash_value);
    transparent_crc(g_158.f4, "g_158.f4", print_hash_value);
    transparent_crc(g_158.f5, "g_158.f5", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
