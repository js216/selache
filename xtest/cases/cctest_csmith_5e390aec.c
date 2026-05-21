// SPDX-License-Identifier: MIT
// cctest_csmith_5e390aec.c --- cctest case csmith_5e390aec (csmith seed 1580796652)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x63f152c8 */

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

// Options:   -s 1580796652 -o /tmp/csmith_gen_kspk_j1c/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   int32_t  f3;
   uint16_t  f4;
   const uint32_t  f5;
   int32_t  f6;
};

struct S1 {
   const uint64_t  f0;
};

union U2 {
   const uint32_t  f0;
   const uint32_t  f1;
   uint64_t  f2;
   uint64_t  f3;
   int64_t  f4;
};


static int32_t g_2 = 0xD811F07BL;
static int32_t g_40 = 0xE91CB64BL;
static struct S1 g_50 = {0x7BFBC35CF455DBFELL};
static int16_t g_52 = 0xB0C7L;
static uint64_t g_59 = 18446744073709551606UL;
static uint16_t g_81 = 1UL;
static uint16_t g_87 = 65530UL;
static struct S0 g_93 = {1UL,9UL,0xDC13L,0x29C6F6B9L,0x0F87L,0x6DE133A9L,1L};
static int32_t *g_95 = &g_40;
static int16_t *g_113 = &g_52;
static int32_t g_168 = 0L;
static uint8_t g_169 = 1UL;
static uint16_t *g_198 = (void*)0;
static uint16_t *g_199 = &g_87;
static const int32_t g_218 = 0x4EC0B727L;
static union U2 g_231 = {0xB664D11AL};
static uint32_t g_234[5][4] = {{0x7E71CC03L,0x7E71CC03L,0x7E71CC03L,0x7E71CC03L},{0x7E71CC03L,0x7E71CC03L,0x7E71CC03L,0x7E71CC03L},{0x7E71CC03L,0x7E71CC03L,0x7E71CC03L,0x7E71CC03L},{0x7E71CC03L,0x7E71CC03L,0x7E71CC03L,0x7E71CC03L},{0x7E71CC03L,0x7E71CC03L,0x7E71CC03L,0x7E71CC03L}};
static int8_t g_246 = 9L;
static int32_t g_247 = 0x1824737FL;
static int32_t **g_286 = &g_95;
static int32_t ***g_285 = &g_286;
static uint64_t g_305 = 0UL;
static uint8_t g_338 = 0xA0L;
static const int32_t g_363 = (-5L);
static int32_t g_370 = 0x43B05D4DL;
static uint8_t g_371[1] = {246UL};
static uint32_t g_390[7][5] = {{0xE6C064D1L,18446744073709551612UL,0xAAF17BE2L,6UL,7UL},{18446744073709551608UL,0xE6C064D1L,0x34005440L,1UL,0x34005440L},{1UL,1UL,7UL,6UL,0xAAF17BE2L},{18446744073709551615UL,0x37000E7CL,7UL,0x7FCAB4B8L,18446744073709551608UL},{0x91062EF3L,7UL,0x34005440L,7UL,0x91062EF3L},{0x37000E7CL,18446744073709551606UL,0x34005440L,18446744073709551612UL,7UL},{0x37000E7CL,7UL,0x7FCAB4B8L,18446744073709551608UL,18446744073709551608UL}};
static int64_t g_398[7][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
static int64_t *g_397[3][3] = {{(void*)0,&g_398[3][0],(void*)0},{&g_398[3][0],&g_398[3][0],&g_398[3][0]},{(void*)0,&g_398[3][0],(void*)0}};
static int64_t g_419 = (-10L);
static int32_t *g_421 = &g_2;
static uint64_t *g_436 = &g_59;
static uint64_t **g_435[3] = {&g_436,&g_436,&g_436};
static struct S0 g_454 = {0xCF12418AL,8UL,0xFD6BL,8L,65535UL,0xF2AA02D7L,0x5E3DA1E9L};
static int32_t *** const *g_499 = (void*)0;
static int32_t *** const **g_498[1] = {&g_499};
static struct S0 *g_570 = &g_454;
static struct S0 **g_569 = &g_570;
static int64_t ****g_588 = (void*)0;
static uint64_t ***g_604 = &g_435[2];
static uint64_t ***g_605 = &g_435[0];
static uint16_t g_840 = 1UL;
static uint64_t **** const *g_930 = (void*)0;
static struct S1 *g_977 = &g_50;
static struct S1 **g_976[4][3] = {{&g_977,&g_977,&g_977},{&g_977,&g_977,&g_977},{&g_977,&g_977,&g_977},{&g_977,&g_977,&g_977}};
static uint8_t g_1030 = 9UL;
static uint16_t g_1048 = 0x12A2L;
static uint32_t g_1094 = 4UL;
static uint8_t *g_1108 = &g_338;
static uint8_t **g_1107 = &g_1108;
static uint64_t g_1136 = 0x66965E81CB332A3CLL;
static uint64_t g_1230 = 0x99E4EC670D2F9B25LL;
static uint64_t ****g_1264 = &g_605;
static uint8_t g_1272 = 0xD9L;
static int16_t **g_1394 = &g_113;
static int64_t **g_1442 = &g_397[2][1];
static int64_t ***g_1441 = &g_1442;
static uint16_t g_1463[4] = {0UL,0UL,0UL,0UL};
static int64_t g_1516 = 1L;
static const union U2 g_1551 = {0x83CB66A1L};
static union U2 *g_1564[7][1] = {{&g_231},{&g_231},{&g_231},{&g_231},{&g_231},{&g_231},{&g_231}};
static union U2 **g_1563[3][7] = {{&g_1564[0][0],&g_1564[0][0],(void*)0,&g_1564[0][0],(void*)0,&g_1564[0][0],&g_1564[0][0]},{&g_1564[0][0],(void*)0,&g_1564[0][0],(void*)0,&g_1564[0][0],&g_1564[0][0],(void*)0},{&g_1564[3][0],&g_1564[0][0],&g_1564[3][0],(void*)0,(void*)0,&g_1564[3][0],&g_1564[0][0]}};
static int8_t *g_1579 = &g_246;
static int8_t **g_1578 = &g_1579;
static union U2 g_1656 = {0xB8B46222L};
static int64_t g_1731 = 0x1EB08723838EDFBCLL;
static int64_t g_1735[4] = {1L,1L,1L,1L};
static struct S0 g_1800 = {0x6F78E89EL,4294967293UL,0xEE47L,0xDEE0E052L,0x1A3CL,0UL,-1L};
static struct S1 g_1826 = {8UL};
static struct S1 g_1834 = {0xE7E5E13EF1AE49A7LL};
static union U2 g_1867[2] = {{0UL},{0UL}};
static uint32_t g_1882 = 6UL;
static struct S1 * const *g_1940 = &g_977;
static struct S1 * const **g_1939 = &g_1940;
static struct S1 * const ***g_1938 = &g_1939;
static uint16_t **g_1946 = &g_199;
static uint16_t ** const *g_1945 = &g_1946;
static uint64_t g_2021 = 18446744073709551615UL;
static int8_t g_2036 = 4L;
static uint16_t g_2125 = 0UL;
static int64_t g_2135 = 2L;
static union U2 **g_2158 = &g_1564[1][0];
static uint8_t g_2299 = 0x49L;
static struct S1 g_2356[2] = {{0x2D8B73B3AB43E131LL},{0x2D8B73B3AB43E131LL}};
static uint8_t *** const g_2438 = &g_1107;
static uint8_t *** const *g_2437 = &g_2438;
static int8_t g_2503 = 0x1DL;
static struct S1 g_2516[5][2] = {{{18446744073709551614UL},{18446744073709551614UL}},{{18446744073709551614UL},{18446744073709551614UL}},{{18446744073709551614UL},{18446744073709551614UL}},{{18446744073709551614UL},{18446744073709551614UL}},{{18446744073709551614UL},{18446744073709551614UL}}};
static uint8_t g_2718 = 0x17L;



static int64_t  func_1(void);
static int32_t  func_9(int16_t  p_10, uint16_t  p_11, uint32_t  p_12, uint32_t  p_13, uint16_t  p_14);
static int16_t  func_17(uint16_t  p_18, uint32_t  p_19, const union U2  p_20, uint16_t  p_21, uint64_t  p_22);
static uint16_t  func_25(struct S0  p_26, const int16_t  p_27);
static struct S0  func_28(uint64_t  p_29, int32_t  p_30, int32_t  p_31, uint32_t  p_32);
static union U2  func_35(int32_t  p_36, int32_t  p_37);
static struct S1 * func_41(int32_t * p_42, struct S1 * p_43, int16_t  p_44, struct S1 * p_45, union U2  p_46);
static struct S0  func_47(int32_t  p_48);




static int64_t  func_1(void)
{ 
    int64_t l_891 = (-1L);
    uint64_t *l_2668[1];
    int32_t l_2682[5];
    int32_t *l_2689[6][4][2] = {{{&g_40,&g_40},{&g_40,&g_168},{&g_40,&g_40},{&g_168,&g_40}},{{&g_168,(void*)0},{(void*)0,(void*)0},{&g_168,&g_40},{&g_168,&g_40}},{{&g_40,&g_168},{&g_40,&g_40},{&g_40,(void*)0},{&g_40,&g_40}},{{&g_40,&g_168},{&g_40,&g_40},{&g_168,&g_40},{&g_168,(void*)0}},{{(void*)0,(void*)0},{&g_168,&g_40},{&g_168,&g_40},{&g_40,&g_168}},{{&g_40,&g_40},{&g_40,(void*)0},{&g_40,&g_40},{&g_40,&g_168}}};
    int64_t *****l_2772 = &g_588;
    uint16_t l_2774[5] = {0x0F57L,0x0F57L,0x0F57L,0x0F57L,0x0F57L};
    uint16_t l_2784 = 0x9B15L;
    int16_t l_2802 = 0x7F57L;
    int32_t l_2803 = 0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2668[i] = &g_1136;
    for (i = 0; i < 5; i++)
        l_2682[i] = 0x80B8E852L;
    for (g_2 = 0; (g_2 == (-19)); g_2--)
    { 
        int32_t l_7 = 7L;
        int16_t **l_2656[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_2676 = 0L;
        uint8_t l_2715 = 0x59L;
        int32_t l_2742[7][4] = {{0xE121784DL,0xDF425658L,0x3399B629L,0xDF425658L},{0xDF425658L,5L,0x3399B629L,0x3399B629L},{0xE121784DL,0xE121784DL,0xDF425658L,0x3399B629L},{(-9L),5L,(-9L),0xDF425658L},{(-9L),0xDF425658L,0xDF425658L,(-9L)},{0xE121784DL,0xDF425658L,0x3399B629L,0xDF425658L},{0xDF425658L,5L,0x3399B629L,0x3399B629L}};
        int32_t l_2744[4] = {0x6E867775L,0x6E867775L,0x6E867775L,0x6E867775L};
        uint64_t l_2745 = 0x70A80883D3BD603FLL;
        uint64_t l_2747[2];
        int64_t *****l_2771 = (void*)0;
        int i, j;
        for (i = 0; i < 2; i++)
            l_2747[i] = 1UL;
    }
    (*g_286) = l_2689[5][1][1];
    (**g_285) = l_2689[5][1][1];
    return l_2803;
}



static int32_t  func_9(int16_t  p_10, uint16_t  p_11, uint32_t  p_12, uint32_t  p_13, uint16_t  p_14)
{ 
    struct S0 *l_2150[7] = {&g_1800,&g_1800,&g_1800,&g_1800,&g_1800,&g_1800,&g_1800};
    int32_t l_2155[7][2] = {{0x9BF7EEB7L,4L},{(-1L),(-2L)},{0x9BF7EEB7L,0x9BF7EEB7L},{0x9BF7EEB7L,(-2L)},{(-1L),(-3L)},{(-2L),(-3L)},{(-1L),(-2L)}};
    union U2 ***l_2156 = &g_1563[2][2];
    union U2 **l_2157[6];
    uint64_t l_2159 = 0UL;
    uint32_t l_2168 = 4UL;
    int32_t l_2174 = 9L;
    int32_t ****l_2200 = &g_285;
    int32_t *****l_2199[4][1][3] = {{{&l_2200,(void*)0,&l_2200}},{{&l_2200,(void*)0,&l_2200}},{{&l_2200,(void*)0,&l_2200}},{{&l_2200,(void*)0,&l_2200}}};
    const struct S1 *****l_2217 = (void*)0;
    uint16_t l_2308[2][6] = {{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}};
    int64_t l_2309[7] = {1L,1L,1L,1L,1L,1L,1L};
    uint8_t l_2363[4];
    int16_t *l_2378 = (void*)0;
    uint32_t *l_2429[2][6] = {{&g_1094,&g_1094,&g_93.f1,&g_1094,&g_1094,&g_93.f1},{&g_1094,&g_1094,&g_93.f1,&g_1094,&g_1094,&g_93.f1}};
    uint16_t l_2513 = 0x4FF8L;
    uint64_t **l_2525[7][7][5] = {{{(void*)0,&g_436,&g_436,&g_436,(void*)0},{&g_436,&g_436,(void*)0,&g_436,&g_436},{&g_436,&g_436,&g_436,&g_436,&g_436},{&g_436,&g_436,(void*)0,&g_436,&g_436},{&g_436,&g_436,&g_436,&g_436,&g_436},{&g_436,(void*)0,&g_436,&g_436,&g_436},{(void*)0,&g_436,&g_436,(void*)0,&g_436}},{{&g_436,&g_436,(void*)0,&g_436,(void*)0},{&g_436,&g_436,&g_436,&g_436,&g_436},{&g_436,&g_436,&g_436,&g_436,&g_436},{&g_436,&g_436,&g_436,&g_436,&g_436},{&g_436,&g_436,&g_436,(void*)0,&g_436},{(void*)0,&g_436,(void*)0,&g_436,(void*)0},{&g_436,(void*)0,&g_436,&g_436,&g_436}},{{&g_436,(void*)0,&g_436,&g_436,&g_436},{(void*)0,(void*)0,&g_436,&g_436,&g_436},{&g_436,(void*)0,&g_436,&g_436,&g_436},{&g_436,&g_436,(void*)0,&g_436,&g_436},{(void*)0,(void*)0,&g_436,(void*)0,&g_436},{(void*)0,&g_436,&g_436,&g_436,(void*)0},{&g_436,&g_436,&g_436,&g_436,&g_436}},{{&g_436,&g_436,(void*)0,&g_436,(void*)0},{(void*)0,&g_436,&g_436,&g_436,&g_436},{(void*)0,(void*)0,(void*)0,&g_436,&g_436},{&g_436,(void*)0,&g_436,&g_436,(void*)0},{&g_436,&g_436,&g_436,&g_436,&g_436},{(void*)0,&g_436,&g_436,(void*)0,&g_436},{&g_436,(void*)0,&g_436,&g_436,&g_436}},{{&g_436,&g_436,&g_436,&g_436,&g_436},{(void*)0,&g_436,&g_436,&g_436,&g_436},{&g_436,(void*)0,&g_436,&g_436,&g_436},{&g_436,&g_436,(void*)0,&g_436,&g_436},{&g_436,&g_436,(void*)0,&g_436,&g_436},{&g_436,&g_436,(void*)0,&g_436,&g_436},{(void*)0,&g_436,&g_436,(void*)0,(void*)0}},{{&g_436,(void*)0,&g_436,&g_436,&g_436},{&g_436,&g_436,(void*)0,&g_436,&g_436},{&g_436,&g_436,&g_436,&g_436,&g_436},{&g_436,(void*)0,&g_436,&g_436,&g_436},{&g_436,&g_436,&g_436,&g_436,&g_436},{&g_436,&g_436,(void*)0,&g_436,&g_436},{&g_436,&g_436,&g_436,&g_436,(void*)0}},{{(void*)0,&g_436,(void*)0,&g_436,(void*)0},{(void*)0,(void*)0,(void*)0,&g_436,(void*)0},{&g_436,&g_436,&g_436,(void*)0,&g_436},{&g_436,&g_436,(void*)0,(void*)0,(void*)0},{&g_436,(void*)0,&g_436,&g_436,(void*)0},{(void*)0,(void*)0,&g_436,&g_436,(void*)0},{&g_436,&g_436,&g_436,&g_436,&g_436}}};
    int32_t l_2550 = 0x4ED6A9CDL;
    const uint8_t *l_2583 = &l_2363[0];
    const uint8_t **l_2582[7] = {&l_2583,&l_2583,&l_2583,&l_2583,&l_2583,&l_2583,&l_2583};
    const uint8_t ***l_2581 = &l_2582[1];
    const uint8_t ****l_2580 = &l_2581;
    int64_t l_2592 = 0x7ECD44D46BF9C461LL;
    uint8_t **l_2619 = (void*)0;
    int32_t l_2621 = 0x537A4D13L;
    uint8_t l_2635 = 255UL;
    int64_t **l_2642 = (void*)0;
    int64_t **l_2643[5];
    uint64_t l_2644[2][7] = {{1UL,0x9D20A2705DFCEE4ELL,0xC14EEC460345F6C6LL,0xC14EEC460345F6C6LL,0x9D20A2705DFCEE4ELL,1UL,0UL},{1UL,0x9D20A2705DFCEE4ELL,0xC14EEC460345F6C6LL,0xC14EEC460345F6C6LL,0x9D20A2705DFCEE4ELL,1UL,0UL}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_2157[i] = &g_1564[3][0];
    for (i = 0; i < 4; i++)
        l_2363[i] = 0x81L;
    for (i = 0; i < 5; i++)
        l_2643[i] = &g_397[1][1];
lbl_2460:
    (*g_569) = (p_12 , l_2150[4]);
    if ((safe_sub_func_int32_t_s_s((((((safe_rshift_func_int16_t_s_u(((l_2155[1][1] ^ ((((((((*g_113) |= 0x13EBL) && (p_12 == (((*l_2156) = &g_1564[1][0]) == (g_2158 = l_2157[1])))) , 0xDD6EL) && ((void*)0 == &g_398[3][0])) & l_2159) <= l_2159) || (*g_421))) , (**g_1394)), 4)) != p_10) >= l_2155[1][1]) != l_2155[3][0]) == p_14), l_2159)))
    { 
        uint32_t l_2165 = 4294967288UL;
        int32_t l_2182 = (-1L);
        int32_t l_2186 = 0x977CA5CBL;
        int32_t l_2187 = 9L;
        int32_t l_2188 = (-10L);
        int32_t l_2189[3][7] = {{4L,0L,4L,4L,0L,4L,4L},{0L,0L,(-10L),0L,0L,(-10L),0L},{0L,4L,4L,0L,4L,4L,0L}};
        uint32_t l_2241 = 0UL;
        int64_t ****l_2302 = &g_1441;
        int32_t l_2304 = 0x98932A73L;
        struct S1 l_2322 = {1UL};
        uint16_t *l_2326 = (void*)0;
        union U2 l_2353 = {2UL};
        struct S1 *l_2355 = &g_2356[0];
        struct S1 *l_2357 = (void*)0;
        int32_t l_2421 = 0xB34B950AL;
        int32_t *l_2461[5][7][5] = {{{&l_2155[1][0],&l_2189[2][0],&g_168,&l_2174,(void*)0},{&l_2155[1][1],&g_40,&g_40,&l_2155[1][1],(void*)0},{&l_2174,&g_168,&l_2189[2][0],&l_2155[1][0],(void*)0},{(void*)0,&l_2187,(void*)0,&l_2187,&l_2304},{&g_168,&l_2186,&l_2186,&l_2155[1][0],&l_2189[1][6]},{(void*)0,(void*)0,&g_40,&l_2155[1][1],&g_40},{&l_2186,&l_2186,(void*)0,&l_2174,&l_2186}},{{&l_2304,&l_2187,&l_2174,(void*)0,(void*)0},{&l_2189[2][5],&l_2189[0][4],(void*)0,(void*)0,&g_168},{&g_40,(void*)0,(void*)0,&l_2174,&g_40},{&l_2182,&l_2189[1][6],(void*)0,&l_2189[1][6],&l_2182},{&l_2187,&g_40,&l_2189[2][5],&l_2304,&l_2186},{&g_168,&l_2174,(void*)0,&l_2189[2][5],(void*)0},{&l_2189[2][5],&l_2304,&l_2174,&g_40,&l_2186}},{{&g_168,&l_2189[2][5],&g_168,&l_2182,&l_2182},{&l_2186,&l_2155[3][0],&l_2186,&l_2187,&g_40},{&l_2186,(void*)0,&l_2189[2][0],&g_168,&g_168},{&l_2155[3][0],&g_40,(void*)0,&l_2189[2][5],(void*)0},{(void*)0,&l_2155[1][0],&l_2189[2][0],&g_168,&l_2174},{&l_2182,&g_168,&l_2186,&l_2186,&g_168},{&g_2,&g_168,&g_168,&l_2186,&g_40}},{{&l_2304,&l_2187,&l_2174,&l_2155[3][0],(void*)0},{&l_2189[2][0],(void*)0,(void*)0,(void*)0,&l_2155[1][1]},{&l_2304,(void*)0,&l_2189[2][5],&l_2182,&g_40},{&g_2,(void*)0,(void*)0,&g_2,&g_168},{&l_2182,&l_2189[2][5],(void*)0,&l_2304,&l_2155[1][1]},{(void*)0,(void*)0,(void*)0,&l_2189[2][0],(void*)0},{&l_2155[3][0],&l_2174,&l_2187,&l_2304,&l_2304}},{{&l_2186,&g_168,&g_168,&g_2,&g_168},{&l_2186,&l_2186,&g_168,&l_2182,&l_2174},{&g_168,&l_2189[2][0],&l_2155[1][0],(void*)0,&g_2},{&l_2189[2][5],(void*)0,&g_40,&l_2155[3][0],&l_2304},{&g_168,&l_2189[2][0],(void*)0,&l_2186,(void*)0},{&l_2187,&l_2186,&l_2155[3][0],&l_2186,&l_2187},{&l_2182,&g_168,&l_2189[2][5],&g_168,&l_2189[1][6]}}};
        uint32_t l_2491 = 0x57527AA8L;
        int i, j, k;
lbl_2382:
        for (g_168 = 0; (g_168 >= 0); g_168 -= 1)
        { 
            union U2 l_2164 = {4294967295UL};
            union U2 **l_2171[1];
            int32_t l_2175 = (-1L);
            int32_t l_2190[6] = {1L,1L,(-3L),1L,1L,(-3L)};
            uint16_t l_2218 = 3UL;
            int32_t *l_2222[1][1];
            int64_t *l_2229[4][6][7] = {{{&g_1735[0],&g_1516,&g_1735[3],&g_419,&g_1731,&g_1731,&g_419},{&g_231.f4,&g_419,&g_1735[0],&g_419,&g_1735[0],&g_419,&g_231.f4},{&g_419,&g_1731,&g_1731,&g_419,&g_1735[3],&g_1516,&g_1735[0]},{&g_1735[0],&g_419,(void*)0,(void*)0,&g_231.f4,&g_419,&g_1735[0]},{&g_1516,&g_231.f4,&g_1731,&g_419,&g_2135,&g_1735[3],&g_1735[3]},{&g_2135,&g_1735[3],&g_1735[0],&g_1735[3],&g_2135,&g_231.f4,&g_419}},{{(void*)0,&g_231.f4,&g_1735[3],&g_1731,&g_419,&g_1516,&g_419},{&g_1735[0],&g_2135,&g_1516,&g_419,&g_419,&g_231.f4,&g_2135},{&g_419,&g_1516,&g_1516,&g_1735[3],&g_1735[1],&g_1735[1],&g_1735[3]},{(void*)0,&g_1735[0],(void*)0,&g_231.f4,&g_1735[0],&g_419,&g_2135},{&g_419,&g_1731,&g_231.f4,&g_1516,(void*)0,&g_1516,&g_231.f4},{&g_1735[0],&g_1735[3],&g_419,(void*)0,&g_1735[0],&g_419,&g_1735[0]}},{{&g_1731,&g_2135,&g_1735[1],&g_1735[0],&g_1735[0],&g_1735[1],&g_2135},{&g_1516,&g_1516,&g_1735[0],(void*)0,&g_1735[0],&g_231.f4,&g_1516},{&g_1735[1],&g_419,(void*)0,&g_2135,(void*)0,&g_419,&g_1735[1]},{&g_1516,&g_231.f4,&g_1735[0],(void*)0,&g_1735[0],&g_1516,&g_1516},{&g_2135,&g_1735[1],&g_1735[0],&g_1735[0],&g_1735[1],&g_2135,&g_1731},{&g_1735[0],&g_419,&g_1735[0],(void*)0,&g_419,&g_1735[3],&g_1735[0]}},{{&g_231.f4,&g_1516,(void*)0,&g_1516,&g_231.f4,&g_1731,&g_419},{&g_2135,&g_419,&g_1735[0],&g_231.f4,(void*)0,&g_1735[0],(void*)0},{&g_1735[3],&g_1735[1],&g_1735[1],&g_1735[3],&g_1516,&g_1516,&g_419},{&g_2135,&g_231.f4,&g_419,&g_419,&g_1516,&g_2135,&g_1735[0]},{&g_231.f4,&g_419,&g_231.f4,&g_1516,&g_2135,&g_1735[0],&g_419},{&g_1735[0],&g_1516,(void*)0,&g_419,&g_1735[1],&g_419,(void*)0}}};
            uint16_t ***l_2296 = &g_1946;
            uint16_t ****l_2295 = &l_2296;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2171[i] = &g_1564[0][0];
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2222[i][j] = &l_2189[2][4];
            }
            l_2174 ^= (safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((((**g_1578) = ((l_2164 , l_2165) && ((safe_rshift_func_uint16_t_u_u((l_2168 | (l_2155[1][1] = (safe_add_func_int16_t_s_s(((((*l_2156) != l_2171[0]) , (safe_mul_func_uint8_t_u_u((l_2164.f0 | l_2165), l_2165))) & 0xCBBAL), 65528UL)))), 13)) , p_12))) ^ 0UL) ^ p_12), 1L)), p_13));
            if (((void*)0 != (**g_1945)))
            { 
                int32_t *l_2176 = &l_2175;
                int32_t *l_2177 = &l_2175;
                int32_t *l_2178 = &l_2174;
                int32_t *l_2179 = &l_2155[5][0];
                int32_t *l_2180 = &l_2155[1][1];
                int32_t *l_2181 = &l_2175;
                int32_t *l_2183 = &g_40;
                int32_t *l_2184 = &l_2175;
                int32_t *l_2185[3];
                uint64_t l_2191[4][4][6] = {{{0UL,18446744073709551615UL,0x73DF49C3B0B6DBF3LL,0xE3DCEB5DA8AD4155LL,0x73DF49C3B0B6DBF3LL,18446744073709551615UL},{0x73DF49C3B0B6DBF3LL,0UL,0UL,0UL,0UL,0UL},{0x73DF49C3B0B6DBF3LL,0x73DF49C3B0B6DBF3LL,0UL,0xE3DCEB5DA8AD4155LL,0x67543B5B0640C903LL,0xE3DCEB5DA8AD4155LL},{0UL,0x73DF49C3B0B6DBF3LL,0UL,0UL,0UL,0UL}},{{18446744073709551615UL,0UL,0UL,18446744073709551615UL,0x73DF49C3B0B6DBF3LL,0xE3DCEB5DA8AD4155LL},{0xE3DCEB5DA8AD4155LL,18446744073709551615UL,0UL,18446744073709551615UL,0xE3DCEB5DA8AD4155LL,0UL},{18446744073709551615UL,0xE3DCEB5DA8AD4155LL,0UL,0UL,0xE3DCEB5DA8AD4155LL,18446744073709551615UL},{0UL,18446744073709551615UL,0x73DF49C3B0B6DBF3LL,0xE3DCEB5DA8AD4155LL,0x73DF49C3B0B6DBF3LL,18446744073709551615UL}},{{0x73DF49C3B0B6DBF3LL,0UL,0UL,0UL,0UL,0UL},{0x73DF49C3B0B6DBF3LL,0x73DF49C3B0B6DBF3LL,0UL,0xE3DCEB5DA8AD4155LL,0x67543B5B0640C903LL,0xE3DCEB5DA8AD4155LL},{0UL,0x73DF49C3B0B6DBF3LL,0UL,0UL,0UL,0UL},{18446744073709551615UL,0UL,0UL,18446744073709551615UL,0x73DF49C3B0B6DBF3LL,0xE3DCEB5DA8AD4155LL}},{{0UL,0UL,0x73DF49C3B0B6DBF3LL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0xE3DCEB5DA8AD4155LL,0UL,0x67543B5B0640C903LL,0UL,0x67543B5B0640C903LL,0UL},{0x67543B5B0640C903LL,0xE3DCEB5DA8AD4155LL,0UL,0x73DF49C3B0B6DBF3LL,0x73DF49C3B0B6DBF3LL,0UL}}};
                const uint32_t l_2194 = 0xD7682062L;
                uint64_t l_2221[1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_2185[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_2221[i] = 0xB83DE37D660F181ELL;
                ++l_2191[1][0][1];
                for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
                { 
                    int64_t l_2213 = 0xB441791E6E40424BLL;
                    const struct S1 ** const *l_2216 = (void*)0;
                    const struct S1 ** const **l_2215 = &l_2216;
                    const struct S1 ** const ***l_2214 = &l_2215;
                    if (l_2194)
                        break;
                    if (p_12)
                        continue;
                    (**g_285) = &l_2188;
                    (*l_2183) |= ((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_u((-1L), (((*l_2180) &= (l_2174 | (l_2199[2][0][1] != (((safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_mod_func_uint32_t_u_u((((l_2175 &= (-10L)) <= (**g_1578)) > (safe_sub_func_int8_t_s_s((g_2036 |= 0xBEL), p_10))), p_12)) && 0x0CL) < p_12), l_2213)), p_13)), p_10)) && 0UL), p_12)) <= l_2190[3]) , &g_499)))) != 1L))) ^ 4294967295UL) , l_2214) == l_2217), 4294967295UL)) && (****l_2200));
                }
                if (l_2218)
                    break;
                for (g_454.f3 = 0; (g_454.f3 <= 0); g_454.f3 += 1)
                { 
                    (*l_2181) = (safe_lshift_func_uint8_t_u_s(255UL, 5));
                    if (p_11)
                        continue;
                    (*l_2179) = l_2221[0];
                }
                (*l_2181) ^= p_14;
            }
            else
            { 
                return p_11;
            }
            l_2222[0][0] = (void*)0;
            (***l_2200) = &l_2175;
            for (g_2021 = 0; (g_2021 <= 0); g_2021 += 1)
            { 
                int64_t *l_2230[6];
                int32_t l_2239[7] = {8L,8L,0L,8L,8L,0L,8L};
                uint8_t l_2246[5];
                uint32_t l_2274 = 0x62E6BC3FL;
                int16_t l_2279 = 0x8546L;
                int32_t l_2290 = 0x10901DBAL;
                int i;
                for (i = 0; i < 6; i++)
                    l_2230[i] = &g_231.f4;
                for (i = 0; i < 5; i++)
                    l_2246[i] = 0xC2L;
            }
            for (g_454.f2 = 0; (g_454.f2 <= 0); g_454.f2 += 1)
            { 
                int32_t *****l_2314[3][4] = {{&l_2200,&l_2200,&l_2200,&l_2200},{&l_2200,&l_2200,&l_2200,&l_2200},{&l_2200,&l_2200,&l_2200,&l_2200}};
                uint32_t *l_2338 = &l_2165;
                int i, j;
                for (g_1800.f0 = 0; (g_1800.f0 <= 0); g_1800.f0 += 1)
                { 
                    if (l_2308[1][4])
                        break;
                    if (l_2309[6])
                        break;
                    l_2188 = ((safe_rshift_func_int16_t_s_s((-9L), (safe_rshift_func_int16_t_s_s((l_2314[1][3] == &g_499), ((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((*g_113), p_14)), ((safe_sub_func_uint8_t_u_u(0x54L, ((**g_1107) |= (&l_2296 != (void*)0)))) || l_2182))) < g_234[3][1]))))) != 0xD4L);
                }
                (*g_569) = (*g_569);
                for (g_370 = 0; (g_370 <= 0); g_370 += 1)
                { 
                    uint32_t l_2327 = 3UL;
                    (***g_285) = (+(l_2322 , (~((((void*)0 != &g_588) && ((safe_div_func_int16_t_s_s((((**l_2296) = (*g_1946)) == l_2326), l_2182)) , (((((*g_1108) || l_2327) && 0UL) <= (**g_286)) <= p_12))) == (-8L)))));
                }
                l_2189[1][6] = (l_2304 >= ((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((p_11 = ((****l_2295) = (**g_1946))), (safe_lshift_func_uint8_t_u_s(1UL, 4)))), ((**g_286) = (***g_285)))), ((*l_2338)--))), (safe_lshift_func_int8_t_s_s((p_14 != ((((l_2189[2][5] | (l_2322 , p_14)) == 1L) >= 0L) >= p_10)), 3)))) , p_11));
            }
        }
        for (p_13 = (-7); (p_13 >= 8); ++p_13)
        { 
            int32_t *l_2345 = &g_40;
            int8_t *l_2352 = (void*)0;
            struct S1 *l_2354 = &g_50;
            int32_t l_2358 = 0xD54B7434L;
            int32_t l_2359 = 0x549275E4L;
            int32_t l_2360 = 0x0AD85E00L;
            int32_t l_2361 = 1L;
            int32_t l_2362[6];
            const int32_t **l_2402 = (void*)0;
            const int32_t ***l_2401[7][1] = {{&l_2402},{&l_2402},{&l_2402},{&l_2402},{&l_2402},{&l_2402},{&l_2402}};
            const int32_t ****l_2403 = &l_2401[3][0];
            int i, j;
            for (i = 0; i < 6; i++)
                l_2362[i] = (-9L);
            l_2357 = (l_2355 = l_2354);
            l_2363[0]++;
            if ((*l_2345))
                break;
            for (g_454.f6 = (-30); (g_454.f6 >= (-3)); g_454.f6 = safe_add_func_uint64_t_u_u(g_454.f6, 6))
            { 
                uint64_t l_2379 = 1UL;
                struct S1 l_2380 = {0xAA7E5032B20FDAC4LL};
                int32_t l_2381 = (-1L);
                if ((safe_mod_func_uint32_t_u_u((((*l_2345) <= (*l_2345)) < ((((l_2381 = ((((l_2186 = ((l_2187 = (((**g_569) , ((*g_113) = (((p_11 <= g_1551.f0) || (safe_lshift_func_uint8_t_u_u(1UL, ((((safe_rshift_func_int8_t_s_s((l_2379 = (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((**g_1578) = ((l_2378 = &p_10) == (*g_1394))), p_10)) >= (***g_1945)), p_12))), p_12)) , l_2380) , p_14) , 0x63L)))) == (*l_2345)))) , 0L)) > g_1867[1].f0)) > (***g_605)) | (-1L)) < 0xB8L)) || 0xABL) == (*l_2345)) >= 0UL)), 0xA5A386D9L)))
                { 
                    l_2361 &= ((*l_2345) ^= (*g_421));
                    return (*g_421);
                }
                else
                { 
                    if (p_14)
                        goto lbl_2382;
                }
            }
            if ((l_2358 = ((((*l_2345) = (safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(l_2189[1][0], (safe_mul_func_uint8_t_u_u(((*l_2345) && (((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((l_2182 > ((**g_1107) ^ (*g_1579))) && ((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((*l_2200) != ((*l_2403) = l_2401[5][0])) , l_2189[2][5]), p_10)), (-1L))), (**g_1394))) , (****g_1264))), (*g_1108))) , p_12), 7)), 0x593B963BEDA2E692LL)) , &g_570) == &g_570)), 0x4DL)))), 1))) , 0x70L) & 0x89L)))
            { 
                int16_t l_2418 = 6L;
                uint32_t *l_2419 = &g_1094;
                uint8_t *l_2420 = &g_371[0];
                l_2360 = ((((*g_1946) = ((~(safe_div_func_int64_t_s_s(((((safe_mul_func_uint16_t_u_u(0xFFBDL, (((!((safe_rshift_func_uint8_t_u_u((p_10 , ((*l_2420) = (((*l_2345) &= (p_10 || (((*l_2419) = (p_10 ^ ((safe_mul_func_uint32_t_u_u((((((safe_mod_func_uint32_t_u_u(((-5L) && (safe_lshift_func_int8_t_s_u(p_14, ((*g_1108) &= (p_12 > p_11))))), l_2418)) >= l_2189[2][5]) > p_10) == (-6L)) , 4294967293UL), 0L)) > l_2304))) < l_2353.f1))) >= p_11))), l_2165)) | g_419)) > (**g_1394)) & l_2421))) >= (*g_436)) , (void*)0) == (void*)0), p_10))) , &p_11)) != (void*)0) ^ l_2188);
                for (g_1656.f3 = (-20); (g_1656.f3 != 28); g_1656.f3 = safe_add_func_int32_t_s_s(g_1656.f3, 6))
                { 
                    return l_2418;
                }
                return p_10;
            }
            else
            { 
                uint32_t l_2424 = 3UL;
                int32_t *l_2427 = (void*)0;
                l_2424--;
                for (g_1272 = 0; (g_1272 <= 1); g_1272 += 1)
                { 
                    int32_t *l_2428 = &l_2359;
                    (**g_285) = (l_2428 = l_2427);
                    (***l_2200) = (**g_285);
                    return l_2424;
                }
                (*l_2345) = (l_2429[0][5] != (void*)0);
            }
        }
        for (g_231.f2 = 0; (g_231.f2 <= 46); g_231.f2++)
        { 
            int32_t *l_2432 = (void*)0;
            (***l_2200) = l_2432;
            return p_13;
        }
        for (g_1800.f2 = 0; (g_1800.f2 <= 6); g_1800.f2 += 1)
        { 
            const struct S1 ***l_2434 = (void*)0;
            const struct S1 *** const * const l_2433 = &l_2434;
            struct S1 * const ***l_2435 = &g_1939;
            struct S1 * const ****l_2436 = &l_2435;
            int32_t l_2452 = 0x5F2B4DD0L;
            int32_t l_2453 = (-9L);
            int32_t l_2454 = (-6L);
            int8_t l_2481 = (-9L);
            int32_t l_2483[3];
            int32_t l_2486 = (-1L);
            uint32_t l_2488 = 6UL;
            struct S0 ** const *l_2495[7][1][2] = {{{&g_569,&g_569}},{{&g_569,&g_569}},{{&g_569,&g_569}},{{&g_569,&g_569}},{{&g_569,&g_569}},{{&g_569,&g_569}},{{&g_569,&g_569}}};
            struct S0 ** const **l_2494 = &l_2495[3][0][0];
            struct S1 *l_2515 = &g_2516[1][0];
            int32_t *l_2517 = &l_2188;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2483[i] = (-1L);
            l_2187 = (((*g_1579) , l_2433) == ((*l_2436) = l_2435));
            for (p_12 = 0; (p_12 <= 0); p_12 += 1)
            { 
                int32_t l_2451[3][6] = {{0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L},{0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L},{0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L,0x9142D2C3L}};
                int32_t l_2474[2][4] = {{(-3L),0xC921ABD4L,0xC921ABD4L,(-3L)},{0xC921ABD4L,(-3L),0xC921ABD4L,0xC921ABD4L}};
                int i, j;
                if (l_2186)
                { 
                    uint8_t *** const **l_2439 = &g_2437;
                    int32_t l_2450[6];
                    uint32_t l_2455 = 0xC7EED556L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2450[i] = (-8L);
                    (*l_2439) = g_2437;
                    l_2450[1] = ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((p_12 < ((-2L) != ((safe_add_func_uint32_t_u_u((&p_11 == (void*)0), 4294967290UL)) <= (safe_mod_func_int8_t_s_s((((+0x40CB33A1L) && ((safe_unary_minus_func_int8_t_s((((**g_1394) , 0x3ECD709BD73319C6LL) , (**g_1578)))) != l_2353.f0)) | 0x6F6058557AE5AE87LL), (***g_2438)))))), l_2353.f0)), 0)) & (**g_1394));
                    ++l_2455;
                    l_2451[1][3] = 0x08C02327L;
                    l_2451[0][1] &= p_12;
                }
                else
                { 
                    const int32_t *l_2458 = &g_218;
                    const int32_t **l_2459 = &l_2458;
                    (*l_2459) = l_2458;
                    if (g_93.f2)
                        goto lbl_2382;
                    if (p_11)
                        continue;
                    (**g_285) = &l_2453;
                }
                if (g_2021)
                    goto lbl_2460;
                (***l_2200) = l_2461[0][6][4];
                l_2474[0][2] ^= (l_2451[0][0] = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((p_10 >= ((safe_mod_func_int64_t_s_s(((((*g_113) = (safe_mod_func_uint16_t_u_u(((void*)0 != (*g_569)), (safe_lshift_func_uint8_t_u_s((65535UL > p_14), 2))))) , 0x87L) && 249UL), l_2451[1][0])) < p_13)) | l_2451[1][0]) | p_10), l_2451[0][4])), p_14)));
            }
            for (l_2454 = 1; (l_2454 <= 6); l_2454 += 1)
            { 
                int32_t l_2477 = 0xCEC666D2L;
                int32_t l_2478 = (-1L);
                int32_t l_2479 = 0xDEAD5DF2L;
                int32_t l_2480 = 0x4C6D0E1CL;
                int32_t l_2482 = 0x473D50FFL;
                int32_t l_2484 = 1L;
                int32_t l_2485[4][2][2] = {{{0x1B40D792L,0x1B40D792L},{4L,0x1B40D792L}},{{0x1B40D792L,4L},{0x1B40D792L,0x1B40D792L}},{{4L,0x1B40D792L},{0x1B40D792L,4L}},{{0x1B40D792L,0x1B40D792L},{4L,0x1B40D792L}}};
                int32_t l_2487 = 0L;
                int i, j, k;
                l_2453 &= (safe_mul_func_uint8_t_u_u((l_2477 < l_2477), (**g_1107)));
                ++l_2488;
            }
            l_2491--;
            (*l_2494) = (void*)0;
            for (p_14 = 2; (p_14 <= 6); p_14 += 1)
            { 
                int32_t l_2506 = (-3L);
                l_2513 = ((!(safe_add_func_int32_t_s_s(p_13, (safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(p_12, ((((*g_113) = ((((g_2503 ^ (safe_mod_func_uint64_t_u_u(l_2453, l_2506))) && ((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s((+253UL), 1)))) <= (safe_add_func_uint64_t_u_u(0xF67758415FE688E5LL, 1L)))) < p_11) < (*g_436))) != p_13) ^ p_10))) , p_14) && 0x93CF7336B561A30DLL), 1))))) , l_2506);
                for (g_169 = 0; (g_169 <= 0); g_169 += 1)
                { 
                    struct S1 *l_2514 = (void*)0;
                    int i, j;
                    l_2515 = l_2514;
                    l_2517 = &l_2304;
                }
            }
        }
    }
    else
    { 
        uint8_t l_2518 = 0UL;
        union U2 l_2524 = {0xF23005C0L};
        int32_t l_2552 = 1L;
        int32_t l_2553 = 0L;
        int32_t l_2565 = 0x0AEC6F41L;
        uint8_t l_2568[5];
        const int32_t l_2615[3] = {(-1L),(-1L),(-1L)};
        int32_t l_2626 = (-1L);
        int32_t l_2627 = 0xA0FBCB9AL;
        int32_t l_2629 = 0L;
        int32_t l_2631 = 0xCD2BA98FL;
        int32_t l_2633 = (-1L);
        int32_t l_2634 = (-1L);
        int i;
        for (i = 0; i < 5; i++)
            l_2568[i] = 255UL;
        if (((**g_1107) != (l_2518 > (p_10 > (safe_unary_minus_func_uint32_t_u(p_12))))))
        { 
            return p_12;
        }
        else
        { 
            uint64_t **l_2526[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_2539 = 0xC59D11C0L;
            int32_t l_2544 = 0xF471843DL;
            struct S1 l_2549[2] = {{0x3C66A4A1A216B22ELL},{0x3C66A4A1A216B22ELL}};
            uint32_t l_2551 = 4294967287UL;
            int8_t l_2566 = (-1L);
            uint32_t l_2575 = 0UL;
            int32_t l_2622 = (-6L);
            int32_t l_2628 = 0x06AAFFC9L;
            int32_t l_2630 = (-8L);
            int32_t l_2632 = 6L;
            int i;
            if (((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(0L, (l_2524 , ((l_2525[5][1][0] != ((*g_605) = l_2526[0])) | (++(*g_436)))))), ((safe_add_func_int64_t_s_s(((((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(l_2539, ((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0UL, (l_2544 = ((g_231.f3++) != (((safe_mod_func_int16_t_s_s((((l_2549[0] , p_14) <= l_2524.f1) > 0x48L), (**g_1394))) != 0xF530L) ^ p_11))))) & l_2550), 0x43L)) ^ p_13))), (*g_199))) , 1UL), l_2524.f1)), 0x23L)) , p_13) <= (*g_199)) , p_10), p_14)) , p_11))) == p_14))
            { 
                int32_t l_2567 = 0xF940950BL;
                uint32_t l_2593 = 18446744073709551608UL;
lbl_2594:
                if (l_2551)
                { 
                    uint16_t l_2554 = 1UL;
                    int64_t **l_2561 = &g_397[2][1];
                    (**g_285) = &l_2539;
                    (***l_2200) = (*g_286);
                    (****l_2200) = (-8L);
                    ++l_2554;
                    (****l_2200) = ((((*g_436) = ((((((safe_lshift_func_uint8_t_u_u((***g_2438), (safe_add_func_int16_t_s_s(((l_2561 != (void*)0) || (((safe_sub_func_int8_t_s_s(((*g_1579) = (((!g_370) , g_169) ^ g_454.f1)), 0x2FL)) < (*g_95)) >= 0x0181L)), p_14)))) & (****l_2200)) && (**g_1107)) , l_2552) & 0UL) || l_2524.f1)) != 0x39249F6948AD6ABDLL) | l_2554);
                }
                else
                { 
                    uint8_t ***l_2579[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint8_t ****l_2578 = &l_2579[0];
                    const uint8_t *****l_2584 = &l_2580;
                    int64_t *l_2585 = &g_398[1][0];
                    int32_t l_2589 = (-5L);
                    int i;
                    ++l_2568[4];
                    (*g_286) = &l_2567;
                    l_2552 |= (((safe_lshift_func_uint16_t_u_u(((((p_13 = (p_13 != (((safe_sub_func_uint16_t_u_u(l_2575, (p_11 <= (safe_div_func_int64_t_s_s((l_2553 = ((*l_2585) = (l_2578 != ((*l_2584) = l_2580)))), (safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint64_t_u((l_2589 ^ ((safe_add_func_uint32_t_u_u(g_338, (***g_285))) && (***g_285))))), 4294967295UL))))))) | p_10) , l_2592))) , l_2544) <= (*g_1579)) , l_2593), l_2589)) ^ 18446744073709551612UL) >= l_2565);
                    if (g_93.f4)
                        goto lbl_2594;
                    (*g_286) = &l_2567;
                }
                l_2553 ^= 0x4CF12502L;
            }
            else
            { 
                uint32_t l_2597 = 0x336B32C3L;
                int32_t *l_2600 = (void*)0;
                int32_t l_2602 = 0x234F4C2AL;
                int32_t l_2607 = 0xDCE6ED47L;
                uint8_t **l_2620 = (void*)0;
                int32_t l_2623 = 0xFAC22771L;
                int32_t l_2624 = (-1L);
                int32_t l_2625[7] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
                struct S0 *l_2640 = (void*)0;
                int i;
                for (g_231.f4 = 0; (g_231.f4 <= (-2)); g_231.f4 = safe_sub_func_uint32_t_u_u(g_231.f4, 8))
                { 
                    int32_t *l_2601[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2601[i] = (void*)0;
                    l_2597++;
                    if (p_12)
                        break;
                    l_2601[0] = l_2600;
                    l_2602 = p_14;
                }
                for (g_231.f3 = 0; (g_231.f3 < 20); g_231.f3 = safe_add_func_uint32_t_u_u(g_231.f3, 7))
                { 
                    int8_t l_2608[6][5] = {{(-1L),5L,0x42L,(-1L),0xEEL},{(-7L),0x42L,0x61L,0x42L,(-7L)},{1L,5L,(-7L),(-7L),1L},{1L,1L,0xEEL,0xEAL,0xEAL},{(-7L),1L,(-7L),5L,1L},{(-1L),0xEAL,1L,5L,(-7L)}};
                    int i, j;
                    l_2539 |= (safe_rshift_func_int16_t_s_u(l_2575, 1));
                    if (l_2607)
                        continue;
                    l_2608[2][4] |= (*g_421);
                    l_2539 ^= (l_2544 = ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(l_2615[2], (*g_1579))), (!p_14))), (l_2524.f1 & (safe_lshift_func_uint8_t_u_u(((((*g_2438) = l_2619) != l_2620) <= 0xA1ADL), 2))))) , l_2621));
                    l_2544 = 1L;
                }
                l_2635++;
                for (g_1272 = 0; (g_1272 <= 31); g_1272++)
                { 
                    uint32_t l_2641 = 0x228831C3L;
                    (*g_569) = l_2640;
                    if (l_2552)
                        break;
                    return l_2641;
                }
            }
        }
    }
    l_2644[0][4] ^= (l_2642 != (l_2643[1] = l_2642));
    return p_14;
}



static int16_t  func_17(uint16_t  p_18, uint32_t  p_19, const union U2  p_20, uint16_t  p_21, uint64_t  p_22)
{ 
    int8_t *l_1554 = (void*)0;
    uint8_t ***l_1561 = (void*)0;
    struct S1 l_1562 = {18446744073709551615UL};
    union U2 ***l_1565 = &g_1563[2][2];
    int32_t l_1566[4];
    int32_t l_1567[4][7] = {{0x7AB66BBDL,1L,1L,0x7AB66BBDL,1L,0x333D7CB9L,0xCD3FEAE7L},{3L,0x333D7CB9L,0x2810EB56L,1L,1L,0x2810EB56L,0x333D7CB9L},{1L,3L,0L,0L,1L,0xCD3FEAE7L,0xCD3FEAE7L},{0L,3L,1L,3L,0L,0L,1L}};
    struct S0 l_1573 = {0x60032A78L,1UL,0UL,1L,0x5B04L,1UL,0xB040A486L};
    int8_t **l_1581 = (void*)0;
    int8_t ***l_1580 = &l_1581;
    uint32_t l_1610 = 18446744073709551615UL;
    int8_t l_1619 = 0x0EL;
    int32_t l_1648 = 0x19E0E78CL;
    union U2 *l_1655 = &g_1656;
    int8_t l_1702 = 0L;
    uint32_t l_1741 = 0xC28D05A3L;
    const uint64_t **l_1754 = (void*)0;
    const uint64_t ***l_1753 = &l_1754;
    const uint64_t ****l_1752 = &l_1753;
    const struct S1 *l_1791 = (void*)0;
    const struct S1 **l_1790[1][7] = {{&l_1791,&l_1791,&l_1791,&l_1791,&l_1791,&l_1791,&l_1791}};
    uint32_t l_1796 = 4294967295UL;
    struct S0 *l_1799[2][1];
    int32_t *l_1829 = &l_1567[1][3];
    struct S1 *l_1833 = &g_1834;
    int32_t ***l_1837 = &g_286;
    int8_t l_1849 = 0xCEL;
    int32_t ****l_1884 = &g_285;
    int32_t *****l_1883 = &l_1884;
    int8_t ***l_1958 = (void*)0;
    const int64_t *l_1972 = (void*)0;
    const int64_t **l_1971 = &l_1972;
    const int64_t *** const l_1970 = &l_1971;
    const int64_t *** const *l_1969[6][7] = {{&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970},{&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970},{&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970},{&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970},{&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970},{&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970,&l_1970}};
    const int64_t *** const **l_1968[1];
    uint32_t l_2037[2][3] = {{0x548DA63EL,0x548DA63EL,0x548DA63EL},{1UL,1UL,1UL}};
    union U2 **l_2042[1][7];
    uint64_t l_2072 = 0xA9909253A2E16D3BLL;
    int8_t l_2087 = (-1L);
    uint64_t l_2088 = 0x983A5E91E5FC21DELL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_1566[i] = (-1L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1799[i][j] = &g_1800;
    }
    for (i = 0; i < 1; i++)
        l_1968[i] = &l_1969[1][5];
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_2042[i][j] = &l_1655;
    }
lbl_2061:
    l_1567[2][4] = ((((*g_199) &= (safe_mul_func_int8_t_s_s((l_1566[3] = ((((g_246 = 9L) , (safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((**g_1107) = (safe_add_func_uint16_t_u_u((&g_1107 != (l_1561 = &g_1107)), ((*g_1108) != ((l_1562 , (&g_231 != ((((*l_1565) = g_1563[2][2]) == (void*)0) , &p_20))) && (**g_1107)))))), l_1562.f0)), l_1562.f0))) >= l_1562.f0) <= 4UL)), l_1562.f0))) <= p_19) ^ l_1562.f0);
lbl_1803:
    l_1567[1][1] = (((+((safe_mul_func_int8_t_s_s((p_20.f0 && ((***g_605)--)), ((**g_1107) = (((l_1573 , p_22) & (safe_sub_func_int64_t_s_s(p_20.f0, ((2L > 18446744073709551615UL) | ((((safe_mod_func_uint8_t_u_u(((1UL < p_21) <= 4294967295UL), p_20.f0)) == (**g_1394)) | (*g_199)) & (*g_113)))))) != p_20.f1)))) >= 0xFA7FD467E1DBA2B7LL)) < l_1562.f0) ^ p_22);
    if ((g_1578 != ((*l_1580) = &g_1579)))
    { 
        uint8_t l_1609[2];
        int16_t **l_1612 = &g_113;
        int32_t l_1615 = 0L;
        int32_t l_1617 = 0L;
        int32_t l_1618 = 3L;
        int32_t l_1620 = 0x4E52E737L;
        int32_t l_1621 = 0xAC9F163FL;
        int32_t l_1624 = 0xA4B2337AL;
        uint16_t l_1625[5];
        struct S1 l_1667[2][7][1] = {{{{0xBCF351CA6C1BD893LL}},{{0xBCF351CA6C1BD893LL}},{{6UL}},{{0xF3582DEA9D76811DLL}},{{6UL}},{{0xF3582DEA9D76811DLL}},{{6UL}}},{{{0xBCF351CA6C1BD893LL}},{{0xBCF351CA6C1BD893LL}},{{6UL}},{{0xF3582DEA9D76811DLL}},{{6UL}},{{0xF3582DEA9D76811DLL}},{{6UL}}}};
        int32_t l_1732 = 2L;
        int32_t l_1733[4] = {(-2L),(-2L),(-2L),(-2L)};
        int32_t l_1738 = 0x008444D3L;
        uint32_t l_1792 = 18446744073709551610UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1609[i] = 4UL;
        for (i = 0; i < 5; i++)
            l_1625[i] = 5UL;
        for (g_1516 = 13; (g_1516 != 6); g_1516 = safe_sub_func_uint8_t_u_u(g_1516, 1))
        { 
            int32_t *l_1608 = (void*)0;
            union U2 l_1611 = {0xB5CB18D9L};
            int32_t l_1622 = 0x5FAAD5DDL;
            int32_t l_1623[4];
            struct S1 ***l_1699 = &g_976[1][1];
            struct S1 ****l_1698 = &l_1699;
            uint8_t l_1712[3];
            int32_t l_1736 = 0L;
            int64_t l_1737 = 0x15DD74BF2E9F9004LL;
            int16_t l_1739 = (-4L);
            int i;
            for (i = 0; i < 4; i++)
                l_1623[i] = 0xDEB2529AL;
            for (i = 0; i < 3; i++)
                l_1712[i] = 0x64L;
            if ((safe_mul_func_uint16_t_u_u((++(*g_199)), (l_1573 , (p_19 < (safe_lshift_func_uint16_t_u_s(((((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((p_20 , (*g_1579)), (p_20.f1 == ((safe_add_func_uint16_t_u_u((((((p_20.f0 , l_1608) == l_1608) && l_1573.f3) != (*g_1108)) >= 255UL), 0UL)) >= p_20.f0)))), l_1573.f5)), 1L)) & l_1609[1]), l_1609[1])), (*g_421))) && l_1566[1]), p_21)) != p_19) || 2L), l_1573.f1)), (-1L))) < (-5L)) > l_1610) & l_1609[1]), 11)))))))
            { 
                int32_t *l_1613 = &g_40;
                struct S1 **l_1614 = &g_977;
                (*l_1613) |= (9L > (l_1611 , ((*g_1579) , ((***l_1580) = ((l_1612 != (void*)0) > p_22)))));
                (*l_1614) = &l_1562;
                l_1566[0] = 0x734F3AC6L;
            }
            else
            { 
                int32_t *l_1616[3];
                const int64_t *l_1647 = (void*)0;
                const int64_t **l_1646 = &l_1647;
                union U2 *l_1654[6] = {(void*)0,&l_1611,&l_1611,(void*)0,&l_1611,&l_1611};
                union U2 **l_1657 = &l_1654[4];
                uint8_t * const ***l_1671 = (void*)0;
                uint32_t l_1672 = 1UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1616[i] = &g_40;
                ++l_1625[4];
                for (l_1618 = 0; (l_1618 <= (-30)); l_1618 = safe_sub_func_uint64_t_u_u(l_1618, 2))
                { 
                    uint32_t *l_1633 = &g_93.f0;
                    l_1615 |= ((safe_sub_func_uint8_t_u_u((+((((*l_1633) ^= 18446744073709551615UL) , ((((safe_sub_func_int16_t_s_s(((&g_976[3][0] != &g_976[3][2]) == ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(p_22, ((((p_22 & (((((((void*)0 != l_1646) == l_1619) && p_20.f0) <= p_22) > l_1624) , (-1L))) || (*g_1579)) , p_21) , l_1648))), 0L)), 0x66EDL)) <= p_20.f1), (**g_1578))), p_20.f1)) < 255UL)), 0x54DDL)) , 1UL) ^ (**g_1578)) && p_21)) && p_21)), l_1562.f0)) , 1L);
                    return p_21;
                }
                l_1618 |= (~0xB8878CEC30854B69LL);
                l_1623[0] = (l_1620 = ((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((*l_1657) = (l_1655 = l_1654[4])) == ((((*g_1108) && (safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s((l_1672 = (safe_rshift_func_uint16_t_u_u((+((((((p_19 || ((safe_rshift_func_uint8_t_u_u(((**g_1107) = 2UL), (l_1667[0][1][0] , p_21))) < (((safe_unary_minus_func_int32_t_s((safe_add_func_int64_t_s_s(3L, 18446744073709551610UL)))) , (void*)0) != l_1671))) > l_1623[2]) & 0x12FAL) , 7L) == 0x91L) >= p_21)), p_20.f1))), l_1617)), p_18))) ^ 0x1B1E7383L) , (void*)0)), p_19)), p_20.f0)) > p_20.f1));
            }
            if ((0x0FL || (*g_1579)))
            { 
                const uint8_t *l_1675 = &l_1609[1];
                const uint8_t **l_1674[1][5] = {{&l_1675,&l_1675,&l_1675,&l_1675,&l_1675}};
                const uint8_t ** const *l_1673 = &l_1674[0][3];
                int32_t l_1679 = 0x9C826D83L;
                int32_t l_1710 = 0L;
                int32_t l_1711[6] = {0x19140F88L,0x19140F88L,0x19140F88L,0x19140F88L,0x19140F88L,0x19140F88L};
                int64_t l_1734 = 0xC22986920D5DFEE4LL;
                int32_t l_1740 = (-1L);
                int i, j;
                if (p_19)
                { 
                    uint8_t ****l_1676 = &l_1561;
                    int32_t *l_1680 = &g_168;
                    int32_t *l_1692[1];
                    struct S1 ** const *l_1701 = (void*)0;
                    struct S1 ** const ** const l_1700 = &l_1701;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1692[i] = &l_1622;
                    l_1679 = ((l_1673 == ((*l_1676) = &g_1107)) <= (safe_mod_func_int32_t_s_s(((*l_1680) = (p_20 , (g_390[5][0] && l_1679))), (+(safe_div_func_int64_t_s_s(((++(*g_199)) | ((safe_rshift_func_uint16_t_u_u(0xC0F9L, ((safe_div_func_int16_t_s_s(((void*)0 != &l_1622), l_1667[0][1][0].f0)) || (**g_1578)))) & 0L)), p_18))))));
                    l_1622 = (((void*)0 == (*g_1107)) == (((*g_1108) >= ((((**l_1612) = p_19) , (l_1567[2][4] = ((*l_1680) = p_18))) >= (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u((l_1698 == l_1700), l_1625[1])))), l_1702)))) > p_20.f0));
                    return l_1679;
                }
                else
                { 
                    int32_t *l_1703 = &l_1617;
                    int32_t *l_1704 = &l_1621;
                    int32_t *l_1705 = &l_1624;
                    int32_t *l_1706 = &l_1679;
                    int32_t *l_1707 = &l_1623[2];
                    int32_t *l_1708 = &g_168;
                    int32_t *l_1709[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1709[i] = &l_1622;
                    l_1712[2]--;
                }
                for (g_419 = 0; (g_419 <= 3); g_419 += 1)
                { 
                    int32_t l_1729 = 1L;
                    int32_t *l_1730[7] = {&l_1567[3][0],&l_1567[3][0],&l_1567[3][0],&l_1567[3][0],&l_1567[3][0],&l_1567[3][0],&l_1567[3][0]};
                    uint8_t *l_1755 = &l_1712[2];
                    uint32_t *l_1756 = &l_1573.f1;
                    uint64_t l_1757[7][4] = {{0xDD9E770C7303CC35LL,0x626D30F4F9C2B38DLL,0xDD9E770C7303CC35LL,18446744073709551611UL},{0xDD9E770C7303CC35LL,18446744073709551611UL,18446744073709551611UL,0xDD9E770C7303CC35LL},{1UL,18446744073709551611UL,0x44D777D173ED70B0LL,18446744073709551611UL},{18446744073709551611UL,0x626D30F4F9C2B38DLL,0x44D777D173ED70B0LL,0x44D777D173ED70B0LL},{1UL,1UL,18446744073709551611UL,0x44D777D173ED70B0LL},{0xDD9E770C7303CC35LL,0x626D30F4F9C2B38DLL,0xDD9E770C7303CC35LL,18446744073709551611UL},{0xDD9E770C7303CC35LL,18446744073709551611UL,18446744073709551611UL,0xDD9E770C7303CC35LL}};
                    int i, j;
                    l_1711[1] = (safe_lshift_func_int8_t_s_s((l_1611 , (((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(p_20.f1, (((((safe_div_func_int16_t_s_s((*g_113), (safe_lshift_func_int16_t_s_s((*g_113), (((--(*g_1108)) <= (l_1573.f0 != 0xB6L)) | 65529UL))))) > g_390[5][0]) || 255UL) <= (-1L)) , p_19))), 14)) > p_20.f1) , (**g_1578))), p_18));
                    l_1741++;
                    (**g_285) = &l_1711[3];
                    (***g_285) = ((0x1321FB6F934533FELL ^ ((-4L) ^ ((safe_add_func_uint64_t_u_u(((((*l_1756) = ((--g_1463[g_419]) | ((++(***l_1561)) != ((*l_1755) = ((safe_sub_func_int32_t_s_s(p_19, (((void*)0 == l_1752) , l_1667[0][1][0].f0))) <= (*g_199)))))) == 0x31C305F3L) ^ l_1734), 0x53A728E7A96F2475LL)) || (***g_604)))) != p_20.f0);
                    if (l_1757[0][1])
                        break;
                }
                if (l_1740)
                    continue;
            }
            else
            { 
                int64_t l_1758 = 0x42D9829212702B81LL;
                int32_t *l_1759 = &l_1733[1];
                int32_t *l_1760 = &l_1623[2];
                int32_t *l_1761 = &g_40;
                int32_t *l_1762 = &l_1738;
                int32_t *l_1763 = &l_1621;
                int32_t *l_1764 = &l_1566[3];
                int32_t *l_1765 = &l_1623[3];
                int32_t *l_1766[7][5][2] = {{{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2}},{{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2}},{{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2}},{{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2}},{{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2}},{{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2}},{{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2},{&g_2,&g_2}}};
                uint32_t l_1767 = 0x5C14DB22L;
                const int16_t *l_1786[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j, k;
                --l_1767;
                if (l_1573.f3)
                    continue;
                for (l_1648 = (-21); (l_1648 < 23); ++l_1648)
                { 
                    (*l_1759) &= p_19;
                }
                for (g_247 = (-8); (g_247 <= (-19)); g_247 = safe_sub_func_int8_t_s_s(g_247, 6))
                { 
                    (*l_1760) |= ((void*)0 != (*l_1565));
                }
                for (l_1573.f3 = 0; (l_1573.f3 <= 18); l_1573.f3 = safe_add_func_int16_t_s_s(l_1573.f3, 4))
                { 
                    int8_t ** const *l_1788 = (void*)0;
                    int8_t ** const **l_1787 = &l_1788;
                    int32_t l_1789[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1789[i] = 0L;
                    (*l_1759) = (safe_mod_func_uint16_t_u_u(((*g_199) |= (safe_rshift_func_uint16_t_u_s(p_19, ((((((safe_sub_func_uint8_t_u_u(((l_1567[2][4] = (((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((void*)0 != l_1786[0][3]), ((1L >= ((((((((((***l_1561) |= 1UL) , (((*l_1787) = &g_1578) != &g_1578)) != (*l_1759)) , 1L) ^ (*g_421)) | l_1789[5]) || (-9L)) ^ p_18) || p_21)) == l_1667[0][1][0].f0))), 13)) , (void*)0) != l_1790[0][4])) || l_1792), 0x8EL)) <= p_20.f0) >= l_1702) | p_19) >= 0xD452L) , (-4L))))), 2UL));
                    return p_20.f1;
                }
            }
            if (p_20.f0)
                continue;
        }
    }
    else
    { 
        int32_t *l_1793 = &l_1567[1][6];
        int32_t *l_1794 = &l_1566[3];
        int32_t *l_1795[2][4];
        struct S1 *l_1824[7][4][7] = {{{&l_1562,&g_50,&g_50,&g_50,&g_50,&g_50,&g_50},{&l_1562,&l_1562,&g_50,&g_50,&l_1562,&g_50,&l_1562},{&l_1562,&l_1562,&g_50,(void*)0,&l_1562,&g_50,&l_1562},{&l_1562,&l_1562,&l_1562,&l_1562,(void*)0,&l_1562,&l_1562}},{{&l_1562,(void*)0,&g_50,(void*)0,&l_1562,(void*)0,&l_1562},{&l_1562,&l_1562,(void*)0,&l_1562,&l_1562,&l_1562,(void*)0},{&l_1562,&l_1562,&g_50,&g_50,&g_50,&l_1562,&g_50},{(void*)0,&l_1562,(void*)0,&g_50,&l_1562,&g_50,&g_50}},{{&l_1562,(void*)0,&g_50,&g_50,&g_50,(void*)0,&l_1562},{(void*)0,&l_1562,&g_50,&l_1562,&l_1562,&l_1562,&l_1562},{&g_50,&l_1562,&l_1562,&l_1562,&l_1562,&l_1562,&g_50},{&l_1562,&g_50,&l_1562,&l_1562,(void*)0,&l_1562,&g_50}},{{&l_1562,&l_1562,&l_1562,&g_50,&l_1562,&g_50,&g_50},{&l_1562,&l_1562,&l_1562,&g_50,&l_1562,&l_1562,&g_50},{(void*)0,&g_50,&l_1562,&l_1562,&g_50,&g_50,&l_1562},{&l_1562,&l_1562,(void*)0,&l_1562,(void*)0,(void*)0,&l_1562}},{{&l_1562,&l_1562,&l_1562,&l_1562,&g_50,(void*)0,&l_1562},{&l_1562,(void*)0,(void*)0,&l_1562,&l_1562,&g_50,&g_50},{&g_50,&l_1562,&g_50,&l_1562,&l_1562,(void*)0,&g_50},{&l_1562,&l_1562,&l_1562,&l_1562,&l_1562,(void*)0,&l_1562}},{{&l_1562,&l_1562,&g_50,&g_50,&g_50,&g_50,&g_50},{(void*)0,(void*)0,&l_1562,&l_1562,&g_50,&l_1562,&g_50},{(void*)0,&l_1562,&g_50,&g_50,&l_1562,&g_50,(void*)0},{&l_1562,&l_1562,&g_50,&l_1562,&l_1562,&l_1562,&l_1562}},{{&l_1562,&l_1562,&l_1562,&l_1562,&l_1562,&l_1562,(void*)0},{&l_1562,&g_50,&g_50,&g_50,&l_1562,&l_1562,&l_1562},{&g_50,&l_1562,&l_1562,&g_50,&l_1562,&l_1562,&g_50},{&g_50,(void*)0,&l_1562,&g_50,&l_1562,&g_50,&g_50}}};
        struct S0 *l_1850 = &g_1800;
        union U2 *l_1865 = &g_1656;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_1795[i][j] = &l_1566[3];
        }
        l_1796++;
        l_1799[0][0] = (void*)0;
        for (g_454.f2 = 0; (g_454.f2 <= 0); g_454.f2 += 1)
        { 
            uint8_t * const *l_1802 = &g_1108;
            uint32_t l_1847 = 1UL;
            int16_t ***l_1876 = &g_1394;
            int i;
            if (l_1567[2][4])
            { 
                uint32_t l_1801 = 0x842DCFC6L;
                uint32_t l_1804 = 4294967292UL;
                (*l_1793) ^= (l_1801 = l_1610);
                (*l_1794) ^= ((void*)0 != &p_19);
                if ((*g_421))
                    break;
                (*l_1794) ^= (l_1802 != (void*)0);
                for (g_305 = 0; (g_305 <= 0); g_305 += 1)
                { 
                    if (p_20.f0)
                        goto lbl_1803;
                    if (l_1804)
                        continue;
                }
            }
            else
            { 
                struct S1 l_1805 = {0xDCEAE806B97EE273LL};
                uint8_t *l_1821 = &g_169;
                uint8_t *l_1822 = (void*)0;
                uint8_t *l_1823 = &g_371[0];
                struct S1 *l_1825 = &g_1826;
                l_1825 = (l_1805 , ((~(safe_rshift_func_int8_t_s_u(p_18, 5))) , &l_1805));
                (*l_1793) = (safe_rshift_func_int8_t_s_u((**g_1578), 5));
                (**g_285) = &l_1566[2];
                l_1829 = l_1795[0][3];
                return (*g_113);
            }
            for (g_1136 = 0; (g_1136 <= 0); g_1136 += 1)
            { 
                uint8_t l_1831[3];
                struct S1 **l_1832[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1831[i] = 6UL;
                for (i = 0; i < 3; i++)
                    l_1832[i] = &l_1824[3][1][6];
                for (l_1573.f0 = 0; l_1573.f0 < 4; l_1573.f0 += 1)
                {
                    for (g_93.f6 = 0; g_93.f6 < 3; g_93.f6 += 1)
                    {
                        g_976[l_1573.f0][g_93.f6] = (void*)0;
                    }
                }
                for (g_247 = 0; (g_247 >= 0); g_247 -= 1)
                { 
                    int32_t l_1830 = 0xD35DC95CL;
                    if (l_1830)
                        break;
                    return l_1831[1];
                }
                l_1824[3][1][6] = (l_1833 = l_1824[3][1][6]);
            }
            if (((safe_rshift_func_uint16_t_u_s((l_1837 != (void*)0), 12)) <= p_19))
            { 
                struct S1 l_1845[1] = {{0x013DE45F96C4E4ADLL}};
                int64_t *l_1848[6][5] = {{&g_1731,&g_398[3][0],&g_398[3][0],&g_1731,&g_231.f4},{&g_1731,&g_398[3][0],&g_398[3][0],&g_1731,&g_231.f4},{&g_1731,&g_398[3][0],&g_398[3][0],&g_1731,&g_231.f4},{&g_1731,&g_398[3][0],&g_398[3][0],&g_1731,&g_231.f4},{&g_1731,&g_398[3][0],&g_398[3][0],&g_1731,&g_231.f4},{&g_1731,&g_398[3][0],&g_398[3][0],&g_1731,&g_231.f4}};
                struct S0 l_1863 = {0xD557DCB2L,4294967292UL,0xDC4FL,6L,0UL,0xC131F236L,-1L};
                int i, j;
                if ((((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((~(*l_1829)), (((**l_1581) = (p_20.f1 > ((l_1849 = (safe_mod_func_int32_t_s_s(((*l_1794) ^= (l_1845[0] , ((void*)0 != &g_113))), (~((((l_1847 = p_22) || (((**g_569) , 0xF32F4AED5A6270B5LL) && p_19)) < 0xEA16L) > g_231.f0))))) | p_22))) != p_18))), g_1463[2])) & p_20.f1) > (*g_1108)))
                { 
                    uint32_t *l_1859 = &g_93.f1;
                    int32_t l_1864 = (-6L);
                    (*g_569) = l_1850;
                    (*l_1793) ^= (p_22 && (((((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_s((((safe_div_func_uint8_t_u_u((+(p_20.f1 > ((*l_1859)--))), 0xC0L)) , (((*g_421) ^ g_50.f0) & l_1845[0].f0)) && (((((+(l_1863 , (*g_436))) | 0xE1B523B9L) && p_20.f1) | p_22) && p_20.f1)), l_1863.f2)))), l_1864)) , 0x115C13D6L) & l_1864) >= 1L) <= p_22));
                    return (*g_113);
                }
                else
                { 
                    union U2 *l_1866 = &g_1867[1];
                    (*l_1794) |= p_21;
                    (**g_285) = l_1793;
                    l_1866 = l_1865;
                    (**l_1837) = l_1793;
                }
                (*l_1794) |= (safe_add_func_uint16_t_u_u(65528UL, (((((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((*g_436) = ((safe_div_func_int8_t_s_s(((***l_1580) = (l_1876 != ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((1UL != (&g_570 != &l_1850)) , (((((*g_199) = p_22) ^ p_20.f1) || (*l_1829)) , (***g_604))) >= 1L), p_19)), 9)) , &g_1394))), (-1L))) < (*l_1829))), 18446744073709551612UL)), 0UL)) <= 0L) & p_20.f0) > 0xA7AA061FA9E9E9E2LL) & 0x35L)));
            }
            else
            { 
                struct S1 l_1881 = {0xC68A91F018BD7DE5LL};
                int32_t l_1891 = 0x116AC64CL;
                for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
                { 
                    uint8_t l_1890 = 255UL;
                    (*l_1829) = ((*g_421) | (l_1881 , ((*l_1794) = ((*l_1794) && (g_1882 = (**g_1394))))));
                    l_1890 ^= (((l_1881.f0 <= (((void*)0 != l_1883) | p_18)) ^ (safe_sub_func_uint16_t_u_u((0x9948L > ((!(p_18 != (((safe_sub_func_int32_t_s_s((((p_22 < p_18) || 0x442958419406BC05LL) < (*l_1829)), l_1881.f0)) & p_20.f0) , (*g_113)))) < p_19)), p_21))) ^ 0x1E8CL);
                    if (p_18)
                        break;
                    l_1891 &= p_19;
                }
            }
        }
        l_1824[3][1][6] = l_1824[3][1][6];
    }
    for (g_93.f4 = 0; (g_93.f4 <= 0); g_93.f4 += 1)
    { 
        struct S1 l_1892[2][4][4] = {{{{7UL},{0x60B576A34F60A4D1LL},{0x60B576A34F60A4D1LL},{7UL}},{{0UL},{0x60B576A34F60A4D1LL},{1UL},{0x60B576A34F60A4D1LL}},{{0x60B576A34F60A4D1LL},{8UL},{1UL},{1UL}},{{0UL},{0UL},{0x60B576A34F60A4D1LL},{1UL}}},{{{7UL},{8UL},{7UL},{0x60B576A34F60A4D1LL}},{{7UL},{0x60B576A34F60A4D1LL},{0x60B576A34F60A4D1LL},{7UL}},{{0UL},{0x60B576A34F60A4D1LL},{1UL},{0x60B576A34F60A4D1LL}},{{0x60B576A34F60A4D1LL},{8UL},{1UL},{1UL}}}};
        uint64_t *** const *l_1895 = &g_605;
        int32_t *l_1901 = &l_1566[2];
        union U2 **l_1937 = &g_1564[0][0];
        const int64_t *** const **l_1973 = &l_1969[1][4];
        int32_t l_2015 = 0x73BB4937L;
        int32_t l_2024 = (-1L);
        int32_t l_2025[5][4];
        uint8_t l_2027 = 0UL;
        const uint16_t l_2075 = 0UL;
        int32_t l_2085[1];
        int8_t l_2094 = 0xC0L;
        uint64_t * const *l_2110 = (void*)0;
        uint64_t * const **l_2109 = &l_2110;
        uint64_t * const ***l_2108 = &l_2109;
        const int16_t *l_2124 = &g_52;
        const int16_t **l_2123 = &l_2124;
        const int16_t ***l_2122 = &l_2123;
        int64_t *l_2148 = &g_419;
        int32_t *l_2149[1];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_2025[i][j] = 0xD53E4540L;
        }
        for (i = 0; i < 1; i++)
            l_2085[i] = 0x64C6238FL;
        for (i = 0; i < 1; i++)
            l_2149[i] = &l_2085[0];
        if ((l_1892[1][3][1] , (p_19 && (safe_rshift_func_int16_t_s_u((l_1895 != (void*)0), p_20.f0)))))
        { 
            uint32_t l_1896 = 0xE34E7171L;
            int32_t l_1944 = 0x0D77203BL;
            uint16_t ** const *l_1948 = &g_1946;
            int16_t l_1959 = 1L;
            struct S1 l_1964[5][5][2] = {{{{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL}},{{0x09C01B62E8133558LL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL}},{{0x09C01B62E8133558LL},{18446744073709551606UL}}},{{{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{0xC3EFF0DEC6CCAFDALL}},{{0x09C01B62E8133558LL},{0UL}},{{0xC3EFF0DEC6CCAFDALL},{18446744073709551606UL}},{{18446744073709551612UL},{0xC3EFF0DEC6CCAFDALL}}},{{{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{0xC3EFF0DEC6CCAFDALL}},{{18446744073709551612UL},{18446744073709551606UL}},{{0xC3EFF0DEC6CCAFDALL},{0UL}},{{0x09C01B62E8133558LL},{0xC3EFF0DEC6CCAFDALL}}},{{{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL}},{{0x09C01B62E8133558LL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL}},{{0x09C01B62E8133558LL},{18446744073709551606UL}}},{{{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{0xC3EFF0DEC6CCAFDALL}},{{0x09C01B62E8133558LL},{0UL}},{{0xC3EFF0DEC6CCAFDALL},{18446744073709551606UL}},{{18446744073709551612UL},{0xC3EFF0DEC6CCAFDALL}}}};
            struct S1 **l_2005 = &l_1833;
            int32_t l_2020[5];
            int16_t l_2035[7][7][4] = {{{0xF628L,6L,(-4L),(-1L)},{0x7EBBL,0x490AL,0xA3CCL,0L},{0x668DL,0x86D3L,0L,0x86D3L},{9L,0xE3A5L,0L,0x0B11L},{0x9C2CL,(-3L),0x77DBL,2L},{0x86D3L,(-1L),0x69ACL,1L},{0x86D3L,4L,0x77DBL,(-6L)}},{{0x9C2CL,1L,0L,5L},{9L,(-1L),0L,(-6L)},{0x668DL,0x77DBL,0xA3CCL,0x0526L},{0x7EBBL,0x668DL,(-4L),0x7EBBL},{0xF628L,(-1L),0xB289L,8L},{0x0B11L,0x1CD8L,(-1L),1L},{3L,(-6L),0x7EBBL,0xAC20L}},{{0x45A1L,1L,0x712CL,8L},{(-1L),(-10L),3L,1L},{6L,0x668DL,0x429FL,0x2EA4L},{(-8L),0xC40FL,0xF628L,0x2EA4L},{2L,(-1L),0x603FL,(-1L)},{0x4B94L,(-8L),(-1L),(-8L)},{5L,5L,0xEE9CL,(-8L)}},{{0x429FL,0x96A4L,0x69ACL,5L},{0x55B8L,0xAC20L,(-1L),0x8A62L},{0x77DBL,0x9C2CL,1L,0x15CBL},{2L,0xB289L,0L,0xAC20L},{(-6L),0x429FL,1L,1L},{0x5C11L,0x5C11L,0x9230L,0x9C2CL},{0x7EBBL,0x234FL,0xFC70L,0x171EL}},{{0x23AFL,0xA3CCL,(-1L),0xFC70L},{6L,0xA3CCL,(-1L),0x171EL},{0xA3CCL,0x234FL,0xC809L,0x9C2CL},{0L,0x5C11L,4L,1L},{(-4L),0x429FL,0x0526L,0xAC20L},{0x1CD8L,0xB289L,0x4B94L,0x15CBL},{0xFC70L,0x9C2CL,0xA0A3L,0x8A62L}},{{3L,0xAC20L,0x0B11L,5L},{0x15CBL,0x96A4L,(-7L),(-8L)},{0xB289L,5L,0x9A7EL,(-8L)},{3L,(-8L),1L,(-1L)},{0x60A4L,(-1L),0x4B94L,0x2EA4L},{4L,0xC40FL,(-9L),0x69ACL},{(-4L),0x1CD8L,1L,(-4L)}},{{0L,0L,0xC809L,(-10L)},{0x8A62L,0L,0x96A4L,0x712CL},{6L,0x2EA4L,0x668DL,(-7L)},{0x9C2CL,0L,0xFC70L,(-10L)},{(-1L),0x171EL,(-8L),(-1L)},{0x5C11L,0x1CD8L,(-1L),0x57A9L},{(-8L),0x9A7EL,0L,0x2EA4L}}};
            union U2 **l_2041 = &l_1655;
            int16_t l_2086 = 0x26ECL;
            int32_t *l_2091 = &l_2085[0];
            int32_t *l_2092 = &l_2024;
            int32_t *l_2093[7] = {&l_2085[0],&l_2085[0],&l_2085[0],&l_2085[0],&l_2085[0],&l_2085[0],&l_2085[0]};
            uint64_t l_2095 = 18446744073709551615UL;
            int16_t l_2098[1];
            int32_t ****l_2104[7];
            int32_t l_2114 = 0x5027A194L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_2020[i] = (-2L);
            for (i = 0; i < 1; i++)
                l_2098[i] = (-1L);
            for (i = 0; i < 7; i++)
                l_2104[i] = &l_1837;
            for (l_1573.f1 = 0; (l_1573.f1 <= 0); l_1573.f1 += 1)
            { 
                int32_t *l_1900 = &g_168;
                uint32_t *l_1917 = &g_1800.f1;
                struct S1 l_1951 = {1UL};
                --l_1896;
                for (g_1800.f1 = 0; (g_1800.f1 <= 0); g_1800.f1 += 1)
                { 
                    int32_t *l_1899[7] = {&g_168,&g_168,&g_168,&g_168,&g_168,&g_168,&g_168};
                    int i, j;
                    l_1900 = l_1899[1];
                    return g_398[(g_93.f4 + 6)][g_93.f4];
                }
                (**g_285) = l_1901;
                (*l_1900) = (&g_1264 == (((((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((*****l_1883) = p_21), ((*l_1917) ^= (safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s((p_22 || (*g_199)), l_1896)), ((safe_unary_minus_func_int16_t_s(((4294967295UL && (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((1UL >= 18446744073709551610UL), 8)) <= (*l_1900)) > 0L), 0x60L)), 10))) | (*l_1900)))) & 7UL)))))), (*g_199))) , (*l_1900)) && p_21) , (*g_977)) , &l_1752));
                if ((safe_mod_func_uint32_t_u_u((***l_1837), (((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((~(safe_add_func_int64_t_s_s(((safe_add_func_uint8_t_u_u((+((*g_436) = p_20.f0)), ((((0x92L || (safe_mod_func_int16_t_s_s(((**g_1394) = ((((*l_1829) = (safe_div_func_int64_t_s_s((((*l_1917) ^= ((*l_1901) == (safe_mod_func_uint8_t_u_u(0xA2L, ((p_20.f1 , ((safe_div_func_uint8_t_u_u((*g_1108), (*l_1900))) , p_21)) , 0x55L))))) == p_18), 0x79B4BA6015979478LL))) , (*g_199)) < p_20.f1)), 0x2826L))) >= 0xB06B48C412C66294LL) > 0xE65A3E1CL) , (*l_1900)))) | l_1896), l_1896))) > p_19))), 0x03L)) >= 0L) || 0x1DEE2E66L))))
                { 
                    struct S1 * const ****l_1941 = &g_1938;
                    int64_t *l_1942 = (void*)0;
                    int64_t *l_1943[6] = {&g_398[3][0],&g_398[4][0],&g_398[4][0],&g_398[3][0],&g_398[4][0],&g_398[4][0]};
                    uint16_t ** const **l_1947[4][1] = {{&g_1945},{&g_1945},{&g_1945},{&g_1945}};
                    int i, j;
                    (*l_1900) = ((&g_1564[0][0] == l_1937) | (l_1944 = (p_19 , ((((((**g_569) , func_35(((0x6B5A6717L || (((*l_1941) = g_1938) == (void*)0)) != (-6L)), p_21)) , p_22) || 0x84L) != 0L) | p_21))));
                    l_1948 = g_1945;
                    (*l_1937) = (void*)0;
                    if (g_454.f1)
                        goto lbl_1803;
                    if ((*g_421))
                        continue;
                }
                else
                { 
                    uint16_t l_1954 = 65528UL;
                    (*l_1901) &= (1UL && ((**l_1581) = (((*l_1900) = ((p_19 ^= (safe_rshift_func_int8_t_s_u((l_1951 , (safe_sub_func_int32_t_s_s(l_1954, 0xF72ADFD8L))), 4))) ^ (g_93.f1 = (safe_unary_minus_func_uint8_t_u(((*g_1108) = (*g_1108))))))) , ((***g_1945) <= (safe_mul_func_uint16_t_u_u(((((-8L) || p_18) <= 0xE6L) & 5UL), p_20.f0))))));
                    (*l_1829) ^= ((l_1958 != &l_1581) , (l_1959 | (safe_mod_func_uint32_t_u_u(((((*g_436) > ((safe_lshift_func_int8_t_s_u(((l_1964[1][3][0] , (**g_569)) , (safe_div_func_uint8_t_u_u(((((*g_1108) = ((safe_unary_minus_func_int16_t_s(p_21)) >= (****l_1884))) == 1L) == 0x0CL), l_1954))), 6)) == g_1030)) == 0UL) || (***g_604)), (*l_1900)))));
                }
            }
            l_1973 = l_1968[0];
            if ((safe_lshift_func_int16_t_s_u((((l_1944 , (((++(****l_1895)) ^ 0xB18910D34329DD94LL) <= ((*l_1901) = ((safe_rshift_func_int8_t_s_s((-6L), 6)) && (l_1944 ^= ((((((**g_1578) , p_22) , (*g_1940)) == (void*)0) , (void*)0) != &l_1610)))))) , (*l_1901)) >= l_1964[1][3][0].f0), (***g_1945))))
            { 
                uint8_t l_1993 = 0x6FL;
                struct S1 ***l_2006[5];
                const struct S1 **l_2007 = &l_1791;
                const struct S1 ***l_2008 = &l_1790[0][4];
                int64_t *l_2013[7] = {&g_1735[0],(void*)0,&g_1735[0],&g_1735[0],(void*)0,&g_1735[0],&g_1735[0]};
                int32_t l_2014 = 8L;
                int32_t *l_2016 = &l_1566[3];
                int32_t *l_2017 = &l_1567[1][3];
                int32_t *l_2018 = (void*)0;
                int32_t *l_2019[6] = {&g_40,&g_40,&l_1944,&g_40,&g_40,&l_1944};
                int64_t l_2026 = (-6L);
                int i;
                for (i = 0; i < 5; i++)
                    l_2006[i] = (void*)0;
                for (g_1800.f2 = 0; (g_1800.f2 < 55); g_1800.f2++)
                { 
                    struct S0 **l_1982[6][1][4] = {{{&g_570,&l_1799[1][0],&g_570,&l_1799[1][0]}},{{&g_570,&l_1799[1][0],&g_570,&l_1799[1][0]}},{{&g_570,&l_1799[1][0],&g_570,&l_1799[1][0]}},{{&g_570,&l_1799[1][0],&g_570,&l_1799[1][0]}},{{&g_570,&l_1799[1][0],&g_570,&l_1799[1][0]}},{{&g_570,&l_1799[1][0],&g_570,&l_1799[1][0]}}};
                    int32_t l_1988 = 0x968DEBF3L;
                    int i, j, k;
                    (*l_1829) ^= (((&l_1799[0][0] == l_1982[3][0][2]) , (safe_sub_func_int8_t_s_s(((((*l_1901) || 1L) != (!((safe_add_func_uint8_t_u_u(((l_1988 = (&g_1563[0][0] == (void*)0)) ^ (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((l_1993 |= (p_18 > (*g_1579))), (**g_1107))), 4))), (**g_1107))) & l_1896))) > p_20.f0), (*g_1108)))) & (*g_113));
                    (*l_1829) &= (safe_rshift_func_uint16_t_u_s(0UL, l_1944));
                }
                if (p_19)
                    break;
                (*l_1829) = (~(safe_add_func_int8_t_s_s(((*g_1579) = (safe_mul_func_uint8_t_u_u((*l_1901), ((((safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((*g_1108) = ((g_976[3][2] = l_2005) != ((*l_2008) = l_2007))), (((p_21 != ((9UL >= ((~(+(l_2014 = (safe_mod_func_uint8_t_u_u((p_21 , ((void*)0 != (*g_1939))), p_18))))) & (**g_1394))) <= l_1993)) > (*l_1901)) <= (-1L)))) ^ g_169), p_20.f0)) && p_19) && l_2014) ^ 0x5EL)))), p_20.f1)));
                g_2021++;
                l_2027++;
            }
            else
            { 
                int32_t l_2031 = 0x7913DCBDL;
                int32_t l_2034[5] = {0xDD6323D7L,0xDD6323D7L,0xDD6323D7L,0xDD6323D7L,0xDD6323D7L};
                struct S0 *l_2062[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_2062[i] = (void*)0;
                if (p_21)
                { 
                    int32_t *l_2030 = &l_2020[2];
                    int32_t *l_2032 = &l_1567[3][3];
                    int32_t *l_2033[4] = {&l_1566[3],&l_1566[3],&l_1566[3],&l_1566[3]};
                    int32_t *l_2040 = &l_1944;
                    uint32_t *l_2052 = &g_1882;
                    int i;
                    --l_2037[1][1];
                    (****l_1883) = l_2040;
                    l_2020[2] = ((l_2041 != (l_2042[0][2] = ((*l_1565) = (*l_1565)))) | (l_2034[2] >= ((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u((((**g_1394) &= (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_2020[2], (((*l_2052) = g_454.f4) != ((((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*l_1901) >= (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((p_20 , (*****l_1883)), 0x6CL)), (*g_1579)))), (*g_1108))), (*l_2040))) != 0x1F9CACD20372B711LL) , (void*)0) == (void*)0)))), 1)), 0x81L))) & p_21))), (*g_1579))) >= (*l_2032))));
                    (***g_285) |= (*l_1829);
                    if ((***g_285))
                        continue;
                }
                else
                { 
                    if (g_338)
                        goto lbl_2061;
                    (*g_569) = l_2062[5];
                    return p_18;
                }
                for (g_840 = 0; g_840 < 4; g_840 += 1)
                {
                    for (g_169 = 0; g_169 < 7; g_169 += 1)
                    {
                        l_1567[g_840][g_169] = (-6L);
                    }
                }
                for (l_2027 = 3; (l_2027 <= 5); l_2027 = safe_add_func_uint32_t_u_u(l_2027, 1))
                { 
                    if (l_1648)
                        goto lbl_1803;
                }
                for (g_2036 = 0; (g_2036 > (-21)); --g_2036)
                { 
                    int32_t *l_2067[6][7] = {{&l_2020[2],&l_2034[0],(void*)0,&l_2034[0],&g_168,&g_168,&l_2034[0]},{&l_2025[2][3],&l_2024,&l_2025[2][3],&l_2034[0],&g_40,&l_2015,&l_2020[2]},{&l_2024,&l_2025[2][2],&l_2025[2][3],(void*)0,(void*)0,(void*)0,&l_2025[2][3]},{&g_40,&g_40,(void*)0,&g_40,(void*)0,&l_2015,&l_2024},{&g_40,&g_40,&g_168,&l_2015,&l_2015,&g_168,&g_40},{&g_168,&l_2025[2][2],&g_40,&l_2025[2][3],(void*)0,&l_2034[0],&g_40}};
                    int i, j;
                    (*g_286) = l_2067[4][4];
                    l_1944 ^= ((*l_1829) |= (((safe_mul_func_int8_t_s_s((0xAD9FL && (**g_1394)), p_21)) || (safe_add_func_uint16_t_u_u((***g_1945), (l_2072 & ((safe_lshift_func_uint16_t_u_s(((l_2075 ^ ((((&l_1753 != l_1895) && (*g_1579)) , 8UL) , l_2031)) == (***g_605)), p_19)) == p_20.f1))))) <= (*l_1901)));
                    (*l_1829) |= (((void*)0 != &g_1394) ^ (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((+(0xDB36L <= 0x85A2L)), (safe_lshift_func_uint16_t_u_s(0UL, 7)))), p_19)) >= 0UL), 1L)));
                    l_2088--;
                    l_2034[0] = (l_1973 != &l_1969[1][1]);
                }
            }
            l_2095++;
            if (p_22)
            { 
                uint8_t l_2099 = 1UL;
                l_2099--;
                for (g_168 = 0; (g_168 == (-5)); g_168 = safe_sub_func_int64_t_s_s(g_168, 4))
                { 
                    (*l_1901) = (*l_1829);
                    (*l_1829) &= ((void*)0 != l_2104[0]);
                }
                for (g_1656.f2 = (-25); (g_1656.f2 < 58); g_1656.f2 = safe_add_func_int16_t_s_s(g_1656.f2, 5))
                { 
                    uint64_t ****l_2107[2];
                    uint64_t * const ****l_2111 = &l_2108;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2107[i] = &g_604;
                    (*l_1829) = ((l_2107[1] == ((*l_2111) = l_2108)) >= (0x60A474B6L ^ (((((*l_1901) |= (0x55L || (*g_1108))) == (safe_sub_func_int16_t_s_s(0xC749L, ((18446744073709551606UL && p_19) < (**g_1946))))) <= p_22) < (*l_1829))));
                    if ((*l_1901))
                        break;
                }
            }
            else
            { 
                (*l_2092) = l_2114;
                (*l_2092) |= (safe_div_func_int16_t_s_s((*l_1901), (0xA2L || (safe_add_func_int32_t_s_s((-1L), g_398[2][0])))));
            }
        }
        else
        { 
            uint64_t *l_2134 = &g_59;
            (*l_1829) = (safe_add_func_uint32_t_u_u(p_21, (~(((*l_1901) = ((void*)0 != l_2122)) >= g_2125))));
            (*l_1901) = ((((***g_1945) = ((+((((**g_604) != (((+(-9L)) && (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((5L != ((**g_1578) <= ((safe_mod_func_uint16_t_u_u(((p_21 , ((void*)0 == &g_499)) , 65535UL), (*g_113))) > (-4L)))), (*l_1901))), 14))) , l_2134)) == p_22) != p_18)) <= 0x4D18608EL)) , p_20.f0) == p_22);
            if (g_2135)
                break;
        }
        l_1648 = (p_20 , (safe_mod_func_uint32_t_u_u(g_1656.f1, (safe_lshift_func_int8_t_s_u(((*g_421) & (safe_add_func_int64_t_s_s(0L, ((*g_977) , ((safe_add_func_uint64_t_u_u((*g_436), ((*l_2148) = (safe_add_func_int32_t_s_s(((*l_1829) = ((*l_1901) = (safe_div_func_uint16_t_u_u(((**g_1394) , 0x0DCDL), (*l_1901))))), 4294967289UL))))) <= 1UL))))), p_22)))));
    }
    return (*g_113);
}



static uint16_t  func_25(struct S0  p_26, const int16_t  p_27)
{ 
    uint8_t **l_1259 = (void*)0;
    uint64_t ****l_1263 = &g_604;
    int32_t l_1274 = 4L;
    int32_t l_1300 = 0L;
    union U2 *l_1315 = &g_231;
    union U2 **l_1314 = &l_1315;
    uint16_t *l_1338 = &g_87;
    int32_t l_1365 = 1L;
    uint64_t ***l_1371 = &g_435[2];
    int32_t *l_1372[7][1];
    int16_t ***l_1438[3][7];
    int8_t l_1473 = 0L;
    int8_t l_1485[5] = {0L,0L,0L,0L,0L};
    uint32_t l_1501 = 18446744073709551615UL;
    struct S1 l_1514 = {0UL};
    int16_t l_1539[5];
    uint16_t l_1543 = 65535UL;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1372[i][j] = &l_1365;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_1438[i][j] = &g_1394;
    }
    for (i = 0; i < 5; i++)
        l_1539[i] = 0xBAB4L;
    for (g_231.f3 = 0; (g_231.f3 <= 2); g_231.f3 += 1)
    { 
        uint8_t ***l_1260 = &l_1259;
        uint64_t ****l_1262 = &g_604;
        uint64_t *****l_1261 = &l_1262;
        int32_t l_1273 = 1L;
        struct S0 l_1275 = {18446744073709551607UL,0x105AF5C9L,0UL,2L,1UL,0x101B71D6L,0L};
        int8_t l_1279 = 0x93L;
        union U2 *l_1331 = &g_231;
        struct S1 *** const l_1334 = (void*)0;
        struct S1 *** const *l_1333[6][4] = {{&l_1334,&l_1334,&l_1334,&l_1334},{&l_1334,&l_1334,&l_1334,&l_1334},{&l_1334,&l_1334,&l_1334,&l_1334},{&l_1334,&l_1334,&l_1334,&l_1334},{&l_1334,&l_1334,&l_1334,&l_1334},{&l_1334,&l_1334,&l_1334,&l_1334}};
        int32_t l_1356 = (-1L);
        int32_t l_1357 = 9L;
        uint16_t l_1358 = 0x37BFL;
        int32_t l_1398 = (-1L);
        int32_t l_1400 = 0x5CD57FD6L;
        int32_t l_1401 = 0xCD0DC098L;
        int32_t l_1402 = 0xEA35DE7AL;
        int32_t l_1403 = 0x3EF9876CL;
        int32_t l_1404 = 0xA57E4EADL;
        int32_t l_1405 = 0xA011947CL;
        int32_t l_1406 = 0x52142538L;
        int32_t l_1407 = 1L;
        int32_t l_1410[2];
        int32_t ***l_1437 = &g_286;
        int64_t ***l_1439 = (void*)0;
        int64_t l_1491 = 0x735067305A881971LL;
        int32_t ** const **l_1503 = (void*)0;
        int32_t ** const ***l_1502 = &l_1503;
        uint16_t l_1515 = 0x2A46L;
        union U2 l_1532 = {6UL};
        int16_t l_1533 = 0x9B3BL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1410[i] = 0xC98AE49CL;
        (*l_1260) = l_1259;
    }
    return (*g_199);
}



static struct S0  func_28(uint64_t  p_29, int32_t  p_30, int32_t  p_31, uint32_t  p_32)
{ 
    int16_t l_898 = 0x7D8EL;
    uint64_t ** const *l_905 = &g_435[1];
    uint64_t ** const ** const l_904[4][6][1] = {{{(void*)0},{&l_905},{(void*)0},{&l_905},{(void*)0},{&l_905}},{{(void*)0},{&l_905},{(void*)0},{&l_905},{(void*)0},{&l_905}},{{(void*)0},{&l_905},{(void*)0},{&l_905},{(void*)0},{&l_905}},{{(void*)0},{&l_905},{(void*)0},{&l_905},{(void*)0},{&l_905}}};
    uint64_t **l_909 = &g_436;
    uint64_t *** const l_908 = &l_909;
    uint64_t *** const *l_907 = &l_908;
    uint64_t *** const **l_906 = &l_907;
    int64_t *l_910 = &g_419;
    int64_t l_911 = 0x2435348247B3C9E0LL;
    int32_t l_912[6][5] = {{(-1L),0L,0xBC7FE7DEL,0xBC7FE7DEL,0L},{0xA5F1D2C4L,0xDC356489L,0xBC7FE7DEL,0L,0xDC356489L},{0xA5F1D2C4L,0L,(-1L),0L,0L},{(-1L),0L,0xBC7FE7DEL,0xBC7FE7DEL,0L},{0xA5F1D2C4L,0xDC356489L,0xBC7FE7DEL,0L,0xDC356489L},{0xA5F1D2C4L,0L,(-1L),0L,0L}};
    const int32_t *l_914 = &g_218;
    const int32_t ** const l_913 = &l_914;
    uint64_t ***l_933 = &g_435[0];
    uint64_t ***l_934 = &l_909;
    uint64_t **** const l_932[2][2] = {{&l_934,&l_934},{&l_934,&l_934}};
    uint64_t **** const *l_931 = &l_932[1][0];
    struct S0 l_985 = {0UL,0x34F93F20L,0UL,0L,0x44E0L,0UL,0xDC635097L};
    int64_t l_1018 = 0L;
    int32_t l_1035 = 9L;
    uint16_t l_1055 = 9UL;
    int64_t **l_1072 = &l_910;
    int64_t ***l_1071 = &l_1072;
    int64_t ****l_1070 = &l_1071;
    struct S1 **l_1073 = &g_977;
    const uint8_t **l_1109 = (void*)0;
    union U2 l_1149 = {0x219B57CFL};
    uint32_t l_1156 = 0x5CF12FACL;
    int32_t ****l_1236[6][6] = {{&g_285,&g_285,&g_285,&g_285,&g_285,&g_285},{&g_285,&g_285,&g_285,&g_285,&g_285,&g_285},{&g_285,&g_285,&g_285,&g_285,&g_285,&g_285},{&g_285,&g_285,&g_285,&g_285,&g_285,&g_285},{&g_285,&g_285,&g_285,&g_285,&g_285,&g_285},{&g_285,&g_285,&g_285,&g_285,&g_285,&g_285}};
    struct S1 ***l_1251 = &g_976[0][1];
    int8_t l_1257[2];
    uint16_t l_1258[5][1][6] = {{{0x70A4L,0UL,0x70A4L,0UL,0x70A4L,0UL}},{{0x70A4L,0UL,0x70A4L,0UL,0x70A4L,0UL}},{{0x70A4L,0UL,0x70A4L,0UL,0x70A4L,0UL}},{{0x70A4L,0UL,0x70A4L,0UL,0x70A4L,0UL}},{{0x70A4L,0UL,0x70A4L,0UL,0x70A4L,0UL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1257[i] = 0L;
    if ((safe_rshift_func_int8_t_s_u(((*g_285) == ((l_912[4][1] = (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_898 , (((*l_910) |= (!(((**g_569) , (safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u((((p_29 <= (0x92A8L >= (l_904[3][1][0] != ((*l_906) = &g_604)))) ^ g_363) | 0xD3C29757L), (-1L))), 0xBBECF8D4C4B62808LL))) || 0x52EAFDCA9B8AC06CLL))) & l_911)) < 0x7A8E780E6053818ELL), (*g_113))), 0x82BBL))) , l_913)), 1)))
    { 
        uint16_t l_920 = 0xB507L;
        int32_t **** const l_923 = &g_285;
        uint32_t l_942 = 0x7DCDE9E1L;
        int64_t l_1016 = (-1L);
        int32_t l_1017 = 5L;
        int32_t l_1020 = 1L;
        int32_t l_1024 = 0xA0AFCA26L;
        int32_t l_1025 = 0x7D12476DL;
        int32_t l_1027 = (-3L);
        int32_t l_1029 = (-9L);
        int32_t l_1054[5] = {0x51E06CEEL,0x51E06CEEL,0x51E06CEEL,0x51E06CEEL,0x51E06CEEL};
        int32_t *l_1058 = (void*)0;
        uint32_t *l_1074 = &l_985.f1;
        const int8_t *l_1098[1];
        int16_t **l_1161[7][7] = {{&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113}};
        union U2 *l_1168 = &l_1149;
        union U2 **l_1167 = &l_1168;
        const struct S1 *l_1178 = (void*)0;
        const struct S1 **l_1177 = &l_1178;
        struct S1 **l_1179 = &g_977;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1098[i] = &g_246;
        for (g_231.f4 = 4; (g_231.f4 >= 1); g_231.f4 -= 1)
        { 
            int32_t *l_915 = &g_40;
            int32_t *l_916 = (void*)0;
            int32_t *l_917 = &l_912[0][2];
            int32_t *l_918 = &l_912[1][1];
            int32_t *l_919[3];
            int32_t ****l_924 = &g_285;
            const int64_t * const l_941 = &g_231.f4;
            uint8_t *l_988 = &g_338;
            int8_t l_994 = 0x60L;
            uint32_t *l_995[3][4] = {{(void*)0,(void*)0,&l_985.f1,(void*)0},{(void*)0,&g_93.f1,&g_93.f1,(void*)0},{&g_93.f1,(void*)0,&g_93.f1,&g_93.f1}};
            uint8_t l_1000 = 255UL;
            union U2 l_1004 = {0x225DE31FL};
            int16_t l_1011 = 0x83F0L;
            uint8_t l_1047 = 248UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_919[i] = &l_912[4][3];
            l_920++;
            (*l_917) |= ((l_923 != l_924) , (**l_913));
            if (((*l_918) = (*g_421)))
            { 
                if (p_31)
                    break;
            }
            else
            { 
                uint16_t *l_927 = &g_454.f4;
                int32_t l_964[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_964[i] = (-9L);
                if ((((*l_927) = (--(*g_199))) < (safe_mul_func_uint8_t_u_u(0x1AL, (p_32 && (((l_931 = g_930) == (g_93 , (((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((&g_231 == (void*)0), (safe_sub_func_int8_t_s_s((l_941 == l_941), g_52)))), l_942)) < (-7L)) , (void*)0))) | 1L))))))
                { 
                    int32_t *l_943[1];
                    int16_t *l_965 = &l_898;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_943[i] = &g_2;
                    (*l_913) = (g_231.f0 , l_943[0]);
                    (***l_923) = l_915;
                    (**g_286) = (safe_mul_func_int16_t_s_s((*g_113), ((safe_rshift_func_int8_t_s_u(0x2EL, 2)) || (((*l_910) ^= 0x7A467CF04CEF891CLL) && (((safe_lshift_func_int16_t_s_u(((*l_965) = (safe_mul_func_int8_t_s_s(0xA6L, (safe_div_func_uint16_t_u_u(((*g_199) = (safe_div_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((((*l_910) = ((g_81 , ((((safe_mod_func_int32_t_s_s((-1L), (safe_div_func_int8_t_s_s((((((safe_mod_func_int8_t_s_s((g_363 || (***g_285)), p_32)) , l_964[1]) | 1UL) || p_29) && l_964[1]), 0x53L)))) < (*l_914)) < p_29) >= (****l_923))) != 0xCEL)) == 1L), 1)) & 0UL) <= 7L), p_29))), (*g_113)))))), g_246)) == 0x96505FD9L) | g_93.f5)))));
                }
                else
                { 
                    (*l_918) = (safe_lshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0x5DL, g_305)), 10)) | (g_976[3][2] != &g_977)), (safe_rshift_func_int16_t_s_s(0x94A8L, 7)))), (*g_113))) & ((safe_add_func_int64_t_s_s(((*g_199) != p_32), p_32)) & 4294967295UL)), (*g_199)));
                }
            }
            (*l_915) = (+((p_32 = (((*g_113) = (safe_lshift_func_uint8_t_u_s((l_985 , (p_31 || ((++(***g_605)) > (((*l_988) = 7UL) , (0x7D48E4A17C5F1A69LL || (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_32, 1)), (((((+g_454.f2) < l_994) && 0x8D6AL) , p_32) > p_32)))))))), p_32))) >= p_31)) ^ p_30));
            for (g_169 = 0; (g_169 <= 2); g_169 += 1)
            { 
                int8_t *l_1003 = &l_994;
                uint16_t *l_1014 = (void*)0;
                uint16_t *l_1015[4][6][7] = {{{&g_840,&g_93.f4,(void*)0,&g_840,(void*)0,(void*)0,&g_93.f4},{&g_840,&g_454.f4,&l_985.f4,&g_840,&g_454.f4,&g_81,&g_93.f4},{(void*)0,&g_454.f4,&g_454.f4,&l_985.f2,&l_985.f4,&g_840,&g_93.f4},{&l_985.f2,&g_93.f4,&l_985.f2,&l_920,&g_81,&l_920,&l_985.f2},{&g_840,&g_840,(void*)0,&g_454.f4,&g_93.f4,&g_454.f2,(void*)0},{(void*)0,&g_840,&l_985.f4,(void*)0,&g_840,(void*)0,&g_454.f4}},{{&l_985.f4,&l_920,&l_920,&g_454.f4,&g_93.f4,&l_920,&g_81},{&g_840,&g_454.f4,&g_454.f4,&l_985.f2,&g_81,(void*)0,&l_985.f4},{&l_920,(void*)0,(void*)0,&g_81,&l_985.f4,&g_93.f2,&l_985.f2},{(void*)0,&g_840,&l_985.f4,&l_985.f2,&g_454.f4,(void*)0,&g_840},{(void*)0,&g_454.f4,&g_454.f2,(void*)0,(void*)0,&l_985.f2,&g_93.f2},{&l_920,(void*)0,&l_985.f2,&g_840,&g_840,&l_985.f2,(void*)0}},{{&g_840,&g_454.f4,&g_840,(void*)0,&g_93.f4,&g_93.f2,&g_93.f4},{&l_985.f4,&l_985.f2,&g_840,&l_920,&l_985.f4,&l_920,&g_454.f4},{(void*)0,&l_985.f2,&l_985.f2,(void*)0,&g_454.f4,&g_840,&g_840},{&g_840,&g_454.f4,&l_985.f4,&g_840,&l_985.f2,&g_454.f2,&l_985.f4},{&l_985.f2,(void*)0,&g_454.f2,&l_985.f4,&g_93.f2,&g_454.f4,&l_985.f2},{&l_985.f2,&g_840,&g_454.f4,(void*)0,(void*)0,&l_985.f4,&l_985.f2}},{{(void*)0,&g_81,&l_920,&l_985.f2,&l_985.f2,(void*)0,&g_840},{&g_454.f4,&g_454.f4,&l_985.f2,&g_454.f4,&l_985.f2,&g_454.f4,&g_454.f4},{&g_454.f4,&g_93.f2,&g_81,&l_920,&g_93.f2,&l_985.f4,&g_81},{&g_454.f2,&g_454.f2,&l_985.f2,&l_985.f4,&l_920,&g_840,&g_840},{&g_840,(void*)0,&g_81,&l_985.f2,&g_840,&g_840,(void*)0},{(void*)0,&g_840,&l_985.f2,&l_985.f4,&g_454.f2,&l_985.f2,&l_920}}};
                int32_t l_1019 = 0x6A3090B0L;
                int32_t l_1021 = 0x7066494BL;
                int32_t l_1022 = 1L;
                int32_t l_1028 = 0x47FFD738L;
                int i, j, k;
                l_1000 &= ((l_912[g_169][g_231.f4] , (p_31 || (safe_sub_func_uint32_t_u_u(((**l_913) != 0x333B3DFAL), (++p_32))))) || 0xAEL);
                (*l_917) = (0x39L >= ((*l_1003) ^= (safe_rshift_func_int16_t_s_u((-1L), 13))));
                if ((((l_1004 , (safe_div_func_uint64_t_u_u((((*g_113) = (((g_454.f2 = (safe_lshift_func_uint16_t_u_s(((((*g_113) > (safe_div_func_int64_t_s_s(((((((p_32 < l_1011) >= ((safe_mul_func_uint16_t_u_u(((*g_199) = (0x71273B62D234402DLL & ((**l_909) |= (p_31 != l_912[(g_231.f4 + 1)][g_231.f4])))), (*g_113))) || 0x3CL)) && g_93.f5) != g_454.f6) ^ (*g_113)) , p_29), p_30))) <= (**l_913)) && l_942), 8))) | 5UL) != 0UL)) <= 0xCD6AL), 0x56C3EC8FF28B4F1BLL))) == 1L) , p_31))
                { 
                    int8_t l_1023 = 2L;
                    int32_t l_1026 = 0x7AC02083L;
                    g_1030--;
                    (*g_286) = &l_1026;
                }
                else
                { 
                    uint8_t **l_1038[5];
                    int32_t l_1049[2];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1038[i] = &l_988;
                    for (i = 0; i < 2; i++)
                        l_1049[i] = 1L;
                    (*l_917) = ((*l_915) ^= p_30);
                    l_1049[0] &= (safe_rshift_func_uint16_t_u_s(((l_912[(g_231.f4 + 1)][g_231.f4] < ((((l_1021 = (((*g_199)--) < p_29)) || ((*g_199) = (((l_988 = (void*)0) == (void*)0) >= (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(p_31, 0x4FB26B7CL)) >= (safe_div_func_int32_t_s_s(l_1047, p_31))), 0)), 1UL))))) ^ p_32) | 0x99A1L)) == (*l_915)), g_1048));
                    if (p_31)
                        continue;
                    (*g_286) = &l_1021;
                }
                (*l_915) |= (*l_914);
                for (g_338 = 0; (g_338 <= 3); g_338 += 1)
                { 
                    int32_t l_1050 = 0xBF08258CL;
                    int32_t l_1051 = 1L;
                    int32_t l_1052 = 0xD8C95347L;
                    int32_t l_1053[6][3][2] = {{{0xD625BB79L,0xD625BB79L},{0xD625BB79L,0xE41D2138L},{(-8L),0x08012272L}},{{0xE41D2138L,0x08012272L},{(-8L),0xE41D2138L},{0xD625BB79L,0xD625BB79L}},{{0xD625BB79L,0xE41D2138L},{(-8L),0x08012272L},{0xE41D2138L,0x08012272L}},{{(-8L),0xE41D2138L},{0xD625BB79L,0xD625BB79L},{0xD625BB79L,0xE41D2138L}},{{(-8L),0x08012272L},{0xE41D2138L,0x08012272L},{(-8L),0xE41D2138L}},{{0xD625BB79L,0xD625BB79L},{0xD625BB79L,0xE41D2138L},{(-8L),0x08012272L}}};
                    int i, j, k;
                    ++l_1055;
                }
            }
        }
lbl_1082:
        l_1025 = (l_1035 = p_31);
lbl_1162:
        (*l_913) = l_1058;
        if ((safe_mod_func_uint32_t_u_u(((*l_1074) &= (safe_mod_func_uint8_t_u_u((g_93.f1 < ((((((safe_mod_func_uint32_t_u_u(p_30, ((+(safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((p_29 != ((void*)0 == l_1070)) >= ((*g_199) |= p_32)) != g_419), p_29)), g_840))) & 4294967294UL))) > g_454.f1) , (void*)0) == l_1073) && p_32) , g_363)), l_1017))), p_32)))
        { 
            int64_t l_1090 = (-1L);
            int32_t l_1091 = 0L;
            int32_t l_1093 = (-9L);
            for (p_31 = 0; (p_31 != (-18)); p_31 = safe_sub_func_int8_t_s_s(p_31, 6))
            { 
                uint64_t l_1077 = 0UL;
                int32_t l_1084[6] = {0L,0L,0L,0L,0L,0L};
                int64_t l_1092 = (-1L);
                int i;
                --l_1077;
                for (l_1077 = 0; (l_1077 != 33); ++l_1077)
                { 
                    int32_t *l_1083 = &l_912[4][1];
                    int32_t l_1085[6][4] = {{1L,0x7C30AF97L,0x4D2A9A72L,(-1L)},{0L,(-1L),0L,(-1L)},{0x4D2A9A72L,0x7C30AF97L,1L,(-8L)},{1L,5L,0x7C30AF97L,0x7C30AF97L},{(-1L),(-1L),0x7C30AF97L,0L},{1L,5L,1L,5L}};
                    int32_t *l_1086 = (void*)0;
                    int32_t *l_1087 = &l_912[0][2];
                    int32_t *l_1088 = &l_1054[1];
                    int32_t *l_1089[2][6][1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 6; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1089[i][j][k] = (void*)0;
                        }
                    }
                    if (l_985.f4)
                        goto lbl_1082;
                    (*l_1083) ^= p_32;
                    --g_1094;
                    (*l_1083) ^= ((!((0L < (((void*)0 == l_1098[0]) , (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((((*l_1074) = p_32) > 0x6E50C58CL) , (safe_add_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((((0x16L & g_231.f1) == l_1090) && l_1077), p_30)) | 3UL), 9UL))), 65535UL)), g_93.f5)))) == p_32)) , 0L);
                    l_1091 &= (0xC6L <= (((g_1107 != l_1109) || (safe_mod_func_uint8_t_u_u((8UL >= (p_29 , p_30)), ((safe_mod_func_int64_t_s_s(0x0A0DD0C0A4464669LL, 0xD6DA8F0C9FC2DEB3LL)) ^ 0x498902A3L)))) & g_246));
                }
            }
        }
        else
        { 
            struct S1 l_1120 = {18446744073709551615UL};
            int16_t *l_1129 = &l_898;
            union U2 l_1130 = {0x0602BBC2L};
            int32_t *l_1131 = &l_1020;
            struct S0 l_1150[4] = {{3UL,0x49F58445L,0x8975L,0xE330F768L,0xBBA9L,0xF6706549L,0xD664FC40L},{3UL,0x49F58445L,0x8975L,0xE330F768L,0xBBA9L,0xF6706549L,0xD664FC40L},{3UL,0x49F58445L,0x8975L,0xE330F768L,0xBBA9L,0xF6706549L,0xD664FC40L},{3UL,0x49F58445L,0x8975L,0xE330F768L,0xBBA9L,0xF6706549L,0xD664FC40L}};
            uint64_t *** const *l_1151[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_1153 = 4L;
            const uint64_t *l_1154 = &g_50.f0;
            int i, j;
            (*l_1131) = (p_31 > (l_1130 , p_31));
            for (p_31 = 0; (p_31 == (-13)); p_31--)
            { 
                int32_t *l_1134 = &l_1017;
                int32_t *l_1135[6] = {(void*)0,&l_1027,(void*)0,(void*)0,&l_1027,(void*)0};
                union U2 l_1143 = {4294967288UL};
                uint64_t ****l_1152 = &l_934;
                int32_t ****l_1155 = &g_285;
                int i;
                g_1136++;
                (*l_913) = (*l_913);
                for (g_93.f2 = 0; (g_93.f2 == 15); g_93.f2 = safe_add_func_int32_t_s_s(g_93.f2, 6))
                { 
                    uint16_t **l_1141 = (void*)0;
                    uint16_t ***l_1142 = &l_1141;
                    int32_t l_1148 = (-2L);
                    l_1153 ^= ((*l_1131) , ((((((((*l_1142) = l_1141) != &g_199) ^ 4UL) != ((*l_1131) = (l_1143 , (safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(l_1148, ((l_1150[2] , l_1151[0][2]) != l_1152))), (***g_605)))))) , (*l_1131)) || p_30) >= 0xEC5FL));
                    if (p_30)
                        continue;
                }
                l_912[4][1] ^= ((l_1154 != ((*l_1131) , &p_29)) , ((p_29 & (((0L && ((((((p_30 && ((*g_199) = ((l_1155 != (void*)0) , 1UL))) <= l_1156) != 0x3A0A2AEAL) == p_32) || 0x8DL) != (*l_1134))) <= (*l_1131)) ^ (-5L))) >= 0x13L));
            }
            (*l_1131) = ((((*l_1070) = (*l_1070)) == (void*)0) > (safe_rshift_func_int8_t_s_u((g_169 <= (safe_lshift_func_uint8_t_u_s((*g_1108), (l_1120 , (((void*)0 == l_1161[5][5]) && 0xA8CCL))))), 0)));
            if (g_305)
                goto lbl_1162;
        }
        for (p_32 = 0; (p_32 >= 21); p_32 = safe_add_func_uint8_t_u_u(p_32, 1))
        { 
            uint64_t l_1176 = 0x645494C1DC5C88B5LL;
            struct S1 ***l_1180 = &g_976[3][2];
            int32_t *l_1181 = &l_912[4][1];
            int32_t *l_1182 = (void*)0;
            int32_t *l_1183 = &l_1027;
            int32_t *l_1184 = &l_912[4][1];
            int32_t *l_1185 = &l_912[2][1];
            int32_t *l_1186 = (void*)0;
            int32_t l_1187 = 1L;
            int32_t *l_1188 = &l_1017;
            int32_t *l_1189[5][4][6] = {{{&l_1020,&l_1029,&l_1024,&l_1020,&l_1020,&l_1024},{&l_1020,&l_1020,&l_1024,&l_1024,&l_1020,&l_1020},{&l_1020,&l_1029,&l_1024,&l_1020,&l_1020,&l_1024},{&l_1020,&l_1020,&l_1024,&l_1024,&l_1020,&l_1020}},{{&l_1020,&l_1029,&l_1024,&l_1020,&l_1020,&l_1024},{&l_1020,&l_1020,&l_1024,&l_1024,&l_1020,&l_1020},{&l_1020,&l_1029,&l_1024,&l_1020,&l_1020,&l_1024},{&l_1020,&l_1020,&l_1024,&l_1024,&l_1020,&l_1020}},{{&l_1020,&l_1029,&l_1024,&l_1020,&l_1020,&l_912[4][1]},{&l_1027,&l_1020,&l_912[4][1],&l_912[4][1],&l_1020,&l_1027},{&l_1027,&l_1024,&l_912[4][1],&l_1027,&l_1020,&l_912[4][1]},{&l_1027,&l_1020,&l_912[4][1],&l_912[4][1],&l_1020,&l_1027}},{{&l_1027,&l_1024,&l_912[4][1],&l_1027,&l_1020,&l_912[4][1]},{&l_1027,&l_1020,&l_912[4][1],&l_912[4][1],&l_1020,&l_1027},{&l_1027,&l_1024,&l_912[4][1],&l_1027,&l_1020,&l_912[4][1]},{&l_1027,&l_1020,&l_912[4][1],&l_912[4][1],&l_1020,&l_1027}},{{&l_1027,&l_1024,&l_912[4][1],&l_1027,&l_1020,&l_912[4][1]},{&l_1027,&l_1020,&l_912[4][1],&l_912[4][1],&l_1020,&l_1027},{&l_1027,&l_1024,&l_912[4][1],&l_1027,&l_1020,&l_912[4][1]},{&l_1027,&l_1020,&l_912[4][1],&l_912[4][1],&l_1020,&l_1027}}};
            uint8_t l_1190 = 250UL;
            int i, j, k;
            l_912[4][1] = (((***l_905) = ((--(**g_1107)) != ((l_1167 != (void*)0) >= ((*g_199) ^= (+p_30))))) >= ((&p_32 == (((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_1176 | ((l_1177 == ((*l_1180) = l_1179)) | p_29)), l_1176)), p_29)) >= 5L), 10)) > l_1176) , (void*)0)) > p_29));
            --l_1190;
        }
    }
    else
    { 
        int64_t l_1193 = 0x174EE2780A570FB9LL;
        int32_t l_1208 = 0x5505966FL;
        struct S1 l_1214 = {5UL};
        uint32_t *l_1231 = (void*)0;
        uint32_t *l_1232 = &l_985.f1;
        uint64_t *l_1233 = &g_305;
        int16_t *l_1234[1];
        struct S0 l_1235 = {18446744073709551615UL,0xD0CDF774L,65532UL,0x5F38AC8DL,0xF9ECL,4UL,0x2F918203L};
        int32_t l_1241 = (-7L);
        int32_t l_1243[7];
        uint16_t l_1246 = 0xAD13L;
        int i;
        for (i = 0; i < 1; i++)
            l_1234[i] = &g_52;
        for (i = 0; i < 7; i++)
            l_1243[i] = (-7L);
lbl_1209:
        l_1193 ^= (**l_913);
        if (l_1193)
        { 
            uint16_t l_1196 = 1UL;
            int8_t *l_1205 = (void*)0;
            int8_t *l_1206 = &g_246;
            int32_t *l_1207[6][2][7] = {{{(void*)0,&l_912[3][1],&l_1035,(void*)0,&l_912[4][1],&l_1035,&l_1035},{&g_168,&g_168,&g_40,&g_168,&g_168,(void*)0,&g_168}},{{&l_912[4][1],(void*)0,&l_1035,&l_912[3][1],(void*)0,(void*)0,&l_912[3][1]},{&l_912[4][1],&g_168,&l_912[4][1],&g_40,&l_912[4][1],&g_40,&l_912[4][1]}},{{&l_912[4][1],&l_912[3][1],&l_1035,&l_912[4][1],&l_912[4][1],&l_1035,&l_912[3][1]},{&g_168,&g_40,&l_912[5][2],&g_168,&l_912[5][2],&g_40,&g_168}},{{(void*)0,&l_912[4][1],&l_1035,&l_1035,&l_912[4][1],(void*)0,&l_1035},{&l_912[4][1],&g_168,&g_40,&g_168,&l_912[4][1],(void*)0,&l_912[4][1]}},{{&l_912[4][1],&l_1035,&l_1035,&l_912[4][1],(void*)0,&l_1035,&l_912[3][1]},{&l_912[5][2],&g_168,&l_912[5][2],&g_40,&g_168,&g_40,&l_912[5][2]}},{{&l_912[4][1],&l_912[4][1],&l_1035,&l_912[3][1],&l_912[4][1],&l_912[1][1],&l_912[3][1]},{&l_912[4][1],&g_40,&l_912[4][1],&g_168,&l_912[4][1],&g_40,&l_912[4][1]}}};
            int i, j, k;
            l_1208 &= (!((+(l_1196 >= 0UL)) < (((*l_1206) = (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((p_30 & (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((0x44A03271AF9BD0A7LL & p_30), 14)) < (*l_914)), (-8L)))) , (*g_113)), l_1196)), 0xF05CL))) , 0UL)));
            if (g_59)
                goto lbl_1209;
        }
        else
        { 
            return l_985;
        }
        l_1208 = (((safe_rshift_func_int16_t_s_u((((((**l_913) , (safe_mod_func_int16_t_s_s((l_1214 , ((((*g_1108)--) != (-1L)) != p_32)), ((((((safe_sub_func_int64_t_s_s((((((&g_840 != (void*)0) , ((safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((((*l_1232) = (safe_add_func_uint8_t_u_u((g_1230 & p_30), 2UL))) , &p_29) == l_1233), l_1193)), 3)) , &l_898) == l_1234[0]))), l_1193)) , 0xC1L), p_32)) | 0L)) >= p_31) == l_1214.f0) != (**l_913)), 1UL)) || 1UL) > p_32) < p_32) , l_1235) , 0xF9E4L)))) != p_30) , l_1236[5][2]) != l_1236[5][2]), p_29)) , &g_398[3][0]) == (***l_1070));
        l_1208 |= 0xE72A8077L;
        for (g_419 = 0; (g_419 < (-20)); g_419 = safe_sub_func_int8_t_s_s(g_419, 2))
        { 
            int64_t l_1239 = 1L;
            int32_t l_1240 = 1L;
            int32_t l_1242 = 0xB4A7C273L;
            int32_t l_1244 = 0xBA366F0EL;
            int32_t l_1245[1][6][7] = {{{0x9A2E704AL,0L,0x9A2E704AL,0x9A2E704AL,0L,0x9A2E704AL,0x9A2E704AL},{0L,0L,0x5F3F3A71L,0L,0L,0x5F3F3A71L,0L},{0L,0x9A2E704AL,0x9A2E704AL,0L,0x9A2E704AL,0x9A2E704AL,0L},{0x9A2E704AL,0L,0x9A2E704AL,0x9A2E704AL,0L,0x9A2E704AL,0x9A2E704AL},{0L,0L,0x5F3F3A71L,0L,0L,0x5F3F3A71L,0L},{0L,0x9A2E704AL,0x9A2E704AL,0L,0x9A2E704AL,0x5F3F3A71L,0x9A2E704AL}}};
            int i, j, k;
            l_1246++;
        }
    }
    l_1258[3][0][2] &= (((safe_sub_func_int8_t_s_s(((1L | 3UL) != ((g_1048 , &l_1073) == (l_1251 = &g_976[3][2]))), 0x8EL)) || (((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((!p_31), p_29)) <= (***g_605)) > 4294967292UL), 0xC3627B20L)) , l_1257[0]) < (*g_436))) | 0x36169F104F60D65BLL);
    return l_985;
}



static union U2  func_35(int32_t  p_36, int32_t  p_37)
{ 
    int64_t l_38[3];
    int32_t l_53 = 0x53AA9B22L;
    struct S1 *l_422 = &g_50;
    int16_t l_423[4][3][7] = {{{8L,0L,8L,0x3886L,0L,1L,1L},{0xFE2DL,0x7733L,0xB798L,0x7733L,0xFE2DL,0xB798L,(-6L)},{0xE93DL,1L,0x3886L,0xE93DL,0x3886L,1L,0xE93DL}},{{0xA767L,(-6L),(-3L),0x9A29L,(-6L),0x9A29L,(-3L)},{0xE93DL,0xE93DL,1L,0L,0xDCEAL,1L,0xDCEAL},{0xFE2DL,(-3L),(-3L),0xFE2DL,0x9A29L,0xA767L,0xFE2DL}},{{8L,0xDCEAL,0x3886L,0x3886L,0xDCEAL,8L,1L},{0x7733L,0xFE2DL,0xB798L,(-6L),(-6L),0xB798L,0xFE2DL},{0xDCEAL,1L,8L,0xDCEAL,0x3886L,0x3886L,0xDCEAL}},{{0xA767L,0xFE2DL,0xA767L,0x9A29L,0xFE2DL,(-3L),(-3L)},{0L,0xDCEAL,1L,0xDCEAL,0L,1L,0xE93DL},{(-6L),(-3L),0x9A29L,(-6L),0x9A29L,(-3L),(-6L)}}};
    union U2 l_424 = {4294967295UL};
    int32_t ****l_831 = (void*)0;
    int8_t l_832 = 0xB5L;
    uint8_t *l_837 = &g_169;
    uint32_t l_857 = 0x88011774L;
    uint64_t *l_862 = &g_305;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_38[i] = 0x0DF39281C1D99EA5LL;
    for (p_37 = 2; (p_37 >= 0); p_37 -= 1)
    { 
        int32_t *l_39 = &g_40;
        struct S1 *l_49[5][4];
        int16_t *l_51[3][4] = {{&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52}};
        uint32_t *l_820 = (void*)0;
        uint32_t *l_821[3][5];
        const int32_t *l_830[4][6][1] = {{{&g_363},{&g_363},{&g_363},{&g_363},{&g_363},{&g_363}},{{&g_363},{&g_363},{&g_363},{&g_363},{&g_363},{&g_363}},{{&g_363},{&g_363},{&g_363},{&g_363},{&g_363},{&g_363}},{{&g_363},{&g_363},{&g_363},{&g_363},{&g_363},{&g_363}}};
        const int32_t **l_829 = &l_830[3][3][0];
        const int32_t ***l_828[1][5] = {{&l_829,&l_829,&l_829,&l_829,&l_829}};
        const int32_t ****l_827 = &l_828[0][1];
        int32_t *l_833 = &l_53;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_49[i][j] = &g_50;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
                l_821[i][j] = &g_93.f1;
        }
        (*l_39) = 0L;
        (*l_39) = l_38[p_37];
    }
    if ((((g_93.f0 != (((g_397[1][2] = &l_38[2]) != &l_38[0]) , (safe_sub_func_int8_t_s_s(g_234[2][3], ((((g_50 , ((*l_837) = (safe_unary_minus_func_uint16_t_u(p_37)))) >= (safe_rshift_func_uint8_t_u_u((g_840 , g_398[1][0]), p_36))) , l_423[0][0][5]) , g_2))))) , p_37) == p_37))
    { 
        uint64_t **l_846 = &g_436;
        int32_t l_850 = 0x023CA399L;
        struct S0 *l_851 = &g_454;
        union U2 l_852 = {0x35E34954L};
        (**g_286) = (((((0x35L != ((p_37 | (safe_unary_minus_func_uint16_t_u((((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u(((l_846 != ((*g_605) = l_846)) <= ((*l_837)++)), ((safe_unary_minus_func_uint32_t_u(0UL)) | (g_246 = ((p_36 >= g_87) != p_36))))) < l_850), p_37)) && g_305) >= p_36)))) ^ 0UL)) , &g_113) == (void*)0) >= l_850) & 0xF63FE3BDL);
        l_851 = l_851;
        return l_852;
    }
    else
    { 
        (**g_286) = (-5L);
    }
    for (g_246 = 0; (g_246 <= 2); g_246 += 1)
    { 
        int32_t *l_853 = &g_40;
        int32_t *l_854 = (void*)0;
        int32_t *l_855 = (void*)0;
        int32_t l_856 = 3L;
        (*g_286) = &p_37;
        l_857--;
        if (p_36)
            break;
        for (p_37 = 2; (p_37 >= 0); p_37 -= 1)
        { 
            int8_t *l_863 = &l_832;
            int32_t l_882[6][2] = {{0x9282E1B4L,8L},{0x9282E1B4L,8L},{0x9282E1B4L,8L},{0x9282E1B4L,8L},{0x9282E1B4L,8L},{0x9282E1B4L,8L}};
            int32_t *l_883 = (void*)0;
            int32_t *l_884 = &g_168;
            int32_t *l_885 = &l_856;
            int i, j;
            if (p_37)
                break;
            (*l_885) = (l_53 ^= ((*l_884) = ((*l_853) = (safe_mul_func_int8_t_s_s(((*l_863) = (((**g_604) = (**g_605)) != l_862)), (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((*l_853) ^ (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((p_37 > (((&l_862 == (*g_605)) != (((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x800805DBL, 0UL)), (*g_113))) | l_882[1][0]) & (*g_199))) <= 0xF4L)), 0L)), p_37))), g_52)) , l_882[1][0]), (*g_113))), (*g_113))), p_36)), 0xC919DD8B6EBE0396LL)))))));
            for (g_81 = 0; (g_81 <= 2); g_81 += 1)
            { 
                uint64_t ***l_890 = &g_435[2];
                (*l_853) = (safe_div_func_uint16_t_u_u((*l_884), (safe_rshift_func_int8_t_s_u(((void*)0 == l_890), 4))));
                if (p_37)
                    continue;
                return l_424;
            }
        }
    }
    return l_424;
}



static struct S1 * func_41(int32_t * p_42, struct S1 * p_43, int16_t  p_44, struct S1 * p_45, union U2  p_46)
{ 
    uint64_t *l_434 = (void*)0;
    uint64_t **l_433 = &l_434;
    uint64_t ***l_437 = &g_435[2];
    int32_t l_438 = (-9L);
    uint8_t *l_439 = &g_371[0];
    int32_t l_442 = 0x29C9ED3AL;
    struct S1 l_445[4][5][5] = {{{{18446744073709551615UL},{0xCED354EF3FC444A0LL},{1UL},{0UL},{0x2EC69356C6CD4D1FLL}},{{1UL},{18446744073709551615UL},{0x4D981D13EEEFE5E0LL},{0xCD2B4CA8E427DB72LL},{0x4D981D13EEEFE5E0LL}},{{0xCD2B4CA8E427DB72LL},{0xCD2B4CA8E427DB72LL},{0x2EC69356C6CD4D1FLL},{0UL},{1UL}},{{0xE29DAE9C1C049660LL},{0xB27D5859F1C5D5DFLL},{0x2EC69356C6CD4D1FLL},{0UL},{1UL}},{{0UL},{0x2EC69356C6CD4D1FLL},{0x4D981D13EEEFE5E0LL},{0x2EC69356C6CD4D1FLL},{0UL}}},{{{0UL},{0xB27D5859F1C5D5DFLL},{1UL},{0UL},{0xCD2B4CA8E427DB72LL}},{{0UL},{0xCD2B4CA8E427DB72LL},{1UL},{0xCED354EF3FC444A0LL},{0xCED354EF3FC444A0LL}},{{0UL},{18446744073709551615UL},{0UL},{0xB27D5859F1C5D5DFLL},{0xCD2B4CA8E427DB72LL}},{{0xE29DAE9C1C049660LL},{0xCED354EF3FC444A0LL},{0xCD2B4CA8E427DB72LL},{0xB27D5859F1C5D5DFLL},{0UL}},{{0xCD2B4CA8E427DB72LL},{1UL},{0xCED354EF3FC444A0LL},{0xCED354EF3FC444A0LL},{1UL}}},{{{1UL},{0x278D9F81DC6F38F7LL},{0x2EC69356C6CD4D1FLL},{0xCED354EF3FC444A0LL},{0x4D981D13EEEFE5E0LL}},{{0UL},{1UL},{0xCED354EF3FC444A0LL},{18446744073709551615UL},{0xE29DAE9C1C049660LL}},{{0xCD2B4CA8E427DB72LL},{0UL},{0UL},{0xCD2B4CA8E427DB72LL},{18446744073709551615UL}},{{0UL},{1UL},{0x4D981D13EEEFE5E0LL},{0xB27D5859F1C5D5DFLL},{18446744073709551615UL}},{{0UL},{0UL},{0xE29DAE9C1C049660LL},{0x2EC69356C6CD4D1FLL},{0xE29DAE9C1C049660LL}}},{{{0x2EC69356C6CD4D1FLL},{0x2EC69356C6CD4D1FLL},{18446744073709551615UL},{0xB27D5859F1C5D5DFLL},{0x4D981D13EEEFE5E0LL}},{{0UL},{0x278D9F81DC6F38F7LL},{18446744073709551615UL},{0xCD2B4CA8E427DB72LL},{0UL}},{{0xCED354EF3FC444A0LL},{18446744073709551615UL},{0xE29DAE9C1C049660LL},{18446744073709551615UL},{0xCED354EF3FC444A0LL}},{{0xB27D5859F1C5D5DFLL},{0x278D9F81DC6F38F7LL},{0x4D981D13EEEFE5E0LL},{0xCED354EF3FC444A0LL},{0x2EC69356C6CD4D1FLL}},{{0xB27D5859F1C5D5DFLL},{0x2EC69356C6CD4D1FLL},{0UL},{1UL},{1UL}}}};
    int32_t *l_448 = &g_168;
    struct S0 *l_453 = &g_454;
    const int32_t ** const *** const l_540 = (void*)0;
    int32_t l_549[4] = {(-5L),(-5L),(-5L),(-5L)};
    int16_t l_598 = 1L;
    int16_t **l_635 = &g_113;
    uint16_t l_690 = 1UL;
    uint64_t * const l_788 = (void*)0;
    uint64_t * const * const l_787 = &l_788;
    uint64_t * const * const *l_786[4];
    uint64_t * const l_791 = (void*)0;
    uint64_t * const * const l_790 = &l_791;
    uint64_t * const * const *l_789 = &l_790;
    uint32_t l_818 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_786[i] = &l_787;
    (*l_448) = (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u((l_433 != ((*l_437) = g_435[2])), l_438)) & ((*l_439)--)) & (l_442 || p_46.f1)) || ((safe_mul_func_int8_t_s_s((l_445[1][3][3] , ((((safe_div_func_int16_t_s_s(0x30ADL, p_46.f0)) | 0L) , p_46.f0) == p_46.f0)), 0xC6L)) , (*p_42))), 2)) >= p_44) == (-3L)), l_445[1][3][3].f0)), 0UL));
lbl_819:
    if (((safe_mod_func_uint16_t_u_u(0UL, (((((2UL || (g_234[2][3] , (0x5870L != (~g_93.f0)))) <= (0x6892L > (g_370 , 0x273CL))) , (*g_199)) , 4294967292UL) && (-2L)))) || 0xC658L))
    { 
        struct S0 *l_452 = &g_93;
        (*l_448) = (((*l_439) = (((((*l_433) != (void*)0) , 1UL) && (((l_453 = l_452) != (void*)0) > 0xE6CC2278L)) && ((safe_unary_minus_func_int8_t_s(((*l_448) && g_168))) && (*p_42)))) ^ 0x6EL);
    }
    else
    { 
        uint32_t l_474 = 4294967295UL;
        int32_t l_490[4][2][3] = {{{0x8D195F23L,(-1L),0x8D195F23L},{0x289688EAL,0x289688EAL,0x289688EAL}},{{0x8D195F23L,(-1L),0x8D195F23L},{0x289688EAL,0x289688EAL,0x289688EAL}},{{0x8D195F23L,(-1L),0x8D195F23L},{0x289688EAL,0x289688EAL,0x289688EAL}},{{0x8D195F23L,(-1L),0x8D195F23L},{0x289688EAL,0x289688EAL,0x289688EAL}}};
        uint64_t l_507 = 0x07F36127EAECD1BFLL;
        int32_t l_528 = 0xBAA6782EL;
        int32_t l_555[2][1][5] = {{{0x0C00B2D0L,0x671AC47DL,0x0C00B2D0L,0x671AC47DL,0x0C00B2D0L}},{{(-3L),(-3L),(-3L),(-3L),(-3L)}}};
        uint32_t l_556 = 0xDCF6FDD0L;
        int64_t ***l_590 = (void*)0;
        int64_t ****l_589 = &l_590;
        uint16_t * const *l_601 = &g_199;
        uint64_t ***l_602 = (void*)0;
        uint64_t ****l_603[6];
        int16_t **l_636 = &g_113;
        int32_t ***l_640 = &g_286;
        struct S0 l_696[4] = {{18446744073709551615UL,0xCEEE6331L,0x0F7CL,0x186C5E69L,0xD70EL,4294967292UL,0xCAD00F95L},{18446744073709551615UL,0xCEEE6331L,0x0F7CL,0x186C5E69L,0xD70EL,4294967292UL,0xCAD00F95L},{18446744073709551615UL,0xCEEE6331L,0x0F7CL,0x186C5E69L,0xD70EL,4294967292UL,0xCAD00F95L},{18446744073709551615UL,0xCEEE6331L,0x0F7CL,0x186C5E69L,0xD70EL,4294967292UL,0xCAD00F95L}};
        union U2 **l_747 = (void*)0;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_603[i] = &l_437;
        if ((*p_42))
        { 
            return p_45;
        }
        else
        { 
            uint32_t l_464 = 0xC05B71E5L;
            int64_t *l_467[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_472 = (void*)0;
            uint32_t *l_473 = &g_93.f1;
            uint64_t l_475[4];
            int i;
            for (i = 0; i < 4; i++)
                l_475[i] = 0x3B415A30E4C0C737LL;
            (**g_285) = ((((l_475[0] = (safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((*g_199) = ((((((safe_lshift_func_int16_t_s_u((l_464 , (safe_lshift_func_uint8_t_u_u((p_44 , (l_467[5] != l_467[5])), g_454.f0))), (safe_rshift_func_uint8_t_u_u((((*l_473) = (((safe_mul_func_int8_t_s_s((-4L), l_464)) | 18446744073709551615UL) ^ 0x8B990EC4276A1948LL)) , g_93.f2), 1)))) < (*g_199)) <= (***g_285)) , (*g_113)) || (*g_113)) || (*g_421))), (*l_448))), 18446744073709551607UL)), l_474))) || 0xD1B3L) <= p_46.f1) , p_42);
            (*l_448) = ((safe_rshift_func_int8_t_s_s(0L, 2)) & (0xEF92L && (safe_lshift_func_int8_t_s_s((((safe_add_func_int64_t_s_s(((safe_div_func_int64_t_s_s((safe_add_func_int64_t_s_s((*l_448), p_44)), (*l_448))) < (((*g_113) = (((safe_add_func_uint8_t_u_u(((*l_439) = (((p_44 || (l_490[1][0][0] ^= (*g_421))) | g_218) >= p_46.f0)), p_46.f0)) <= p_46.f0) <= 255UL)) >= (*g_199))), l_464)) <= l_474) , p_44), p_44))));
        }
        for (g_93.f1 = (-23); (g_93.f1 <= 24); g_93.f1++)
        { 
            int8_t *l_508 = (void*)0;
            int8_t *l_509 = &g_246;
            uint32_t *l_510 = &g_454.f1;
            uint16_t *l_511[7];
            int32_t l_512 = (-8L);
            uint64_t l_529 = 0x316FB4B6336E1642LL;
            int32_t l_538 = 0x3A25EF68L;
            union U2 l_539 = {0x7E6014EDL};
            int32_t l_550[3];
            int32_t *l_574 = (void*)0;
            int i;
            for (i = 0; i < 7; i++)
                l_511[i] = &g_93.f4;
            for (i = 0; i < 3; i++)
                l_550[i] = 3L;
        }
        for (g_454.f4 = (-12); (g_454.f4 != 34); g_454.f4 = safe_add_func_int32_t_s_s(g_454.f4, 2))
        { 
            int32_t *l_577 = &g_40;
            int32_t l_584 = (-1L);
            uint64_t l_585 = 18446744073709551615UL;
            (*l_577) = ((*l_448) |= 0L);
            for (g_419 = 7; (g_419 <= (-10)); g_419 = safe_sub_func_uint16_t_u_u(g_419, 3))
            { 
                int32_t *l_580 = &l_490[2][0][2];
                int32_t *l_581 = (void*)0;
                int32_t *l_582 = (void*)0;
                int32_t *l_583[1][7] = {{&l_490[2][0][0],&l_490[1][0][0],&l_490[2][0][0],&l_490[2][0][0],&l_490[1][0][0],&l_490[2][0][0],&l_490[2][0][0]}};
                int i, j;
                l_585++;
                (*l_448) = (g_338 && (((g_588 = g_588) != l_589) <= (((+(-1L)) <= (safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(((*g_113) , (safe_mod_func_uint32_t_u_u((0x6669DC97L != l_598), 0x0DCA4628L))), 0xC0927DF42935A715LL)) , 0xCE58E331A5054A6CLL), 0x45B6AFC406785D5DLL))) <= (*l_577))));
            }
            for (g_247 = 0; g_247 < 4; g_247 += 1)
            {
                for (g_370 = 0; g_370 < 2; g_370 += 1)
                {
                    for (g_93.f3 = 0; g_93.f3 < 3; g_93.f3 += 1)
                    {
                        l_490[g_247][g_370][g_93.f3] = 0x2CD494C5L;
                    }
                }
            }
        }
        (*l_448) = (safe_sub_func_uint64_t_u_u(((void*)0 == l_601), (l_602 == (g_605 = (g_604 = l_602)))));
        if ((safe_div_func_int64_t_s_s((l_528 = ((safe_div_func_int32_t_s_s(((*l_448) <= ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((&l_437 == &l_437), (safe_mul_func_uint16_t_u_u(((*g_199) = p_46.f0), (((void*)0 != &l_590) , (g_454.f4 , p_44)))))), 3)) && 4L)), (*g_421))) && (*l_448))), p_46.f0)))
        { 
            struct S0 l_638[3] = {{0x2BBE005FL,0UL,0x4762L,0x34FC1F83L,65533UL,0x80E80D50L,3L},{0x2BBE005FL,0UL,0x4762L,0x34FC1F83L,65533UL,0x80E80D50L,3L},{0x2BBE005FL,0UL,0x4762L,0x34FC1F83L,65533UL,0x80E80D50L,3L}};
            int32_t ***l_639 = &g_286;
            union U2 l_642 = {1UL};
            int32_t l_643 = 0x8874AB4FL;
            uint32_t l_699 = 0xF80B432BL;
            const int8_t l_730 = (-1L);
            uint32_t * const l_731 = &l_638[0].f1;
            const struct S1 *l_777[2];
            const int64_t *l_780 = &g_398[3][0];
            uint64_t ***l_792 = &l_433;
            int32_t *l_817 = &l_643;
            int i;
            for (i = 0; i < 2; i++)
                l_777[i] = &l_445[1][3][3];
            if ((*g_421))
            { 
                int32_t l_637 = 0xA3B9110AL;
                int32_t l_647[6][2] = {{0xAB2E2FA5L,0xAB2E2FA5L},{4L,0xAB2E2FA5L},{0xAB2E2FA5L,4L},{0xAB2E2FA5L,0xAB2E2FA5L},{4L,0xAB2E2FA5L},{0xAB2E2FA5L,4L}};
                int i, j;
                for (p_46.f4 = 0; (p_46.f4 >= 14); p_46.f4 = safe_add_func_uint32_t_u_u(p_46.f4, 7))
                { 
                    int16_t **l_622 = &g_113;
                    struct S1 *l_641 = (void*)0;
                    int32_t *l_644 = &l_643;
                    int32_t *l_645 = &l_528;
                    int32_t *l_646 = &l_438;
                    int32_t *l_648 = &l_643;
                    int32_t *l_649 = &g_168;
                    int32_t *l_650 = &l_647[3][0];
                    int32_t *l_651 = &l_647[3][0];
                    int32_t *l_652 = &l_438;
                    int32_t *l_653 = &l_549[1];
                    int32_t *l_654 = &l_643;
                    int32_t *l_655 = &g_168;
                    int32_t *l_656 = &g_168;
                    int32_t *l_657 = (void*)0;
                    int32_t *l_658 = (void*)0;
                    int32_t *l_659[4] = {&l_490[1][0][0],&l_490[1][0][0],&l_490[1][0][0],&l_490[1][0][0]};
                    uint16_t l_660 = 0UL;
                    int i;
                    l_643 ^= ((((0x24F9B19EL == (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((void*)0 == l_622), (safe_mul_func_uint32_t_u_u(5UL, ((p_46.f1 != (((((*l_439) = (((l_638[0] , l_639) != l_640) != 1UL)) , l_641) == (void*)0) & (*l_448))) >= 0x8E06L))))), 0x36L))) >= 1UL) , l_642) , (-1L));
                    if ((***l_640))
                        continue;
                    l_644 = l_644;
                    --l_660;
                }
            }
            else
            { 
                const uint8_t l_665 = 1UL;
                union U2 l_678[6][4][4] = {{{{0UL},{0xEE6B65DAL},{8UL},{0xB281FAA4L}},{{0xF149BAF8L},{4294967292UL},{4294967292UL},{0xF149BAF8L}},{{0xDBD5B030L},{0x8AFC7416L},{0xF149BAF8L},{0x1DB773FFL}},{{0xE64FFE39L},{0xB281FAA4L},{0x5544DB41L},{0xA23AA01EL}}},{{{4294967291UL},{4294967295UL},{4294967295UL},{0xA23AA01EL}},{{0x8AFC7416L},{0xB281FAA4L},{4294967287UL},{0x1DB773FFL}},{{0xEE6B65DAL},{0x8AFC7416L},{0xEE6B65DAL},{0xF149BAF8L}},{{4294967295UL},{4294967292UL},{0UL},{0xB281FAA4L}}},{{{0xA23AA01EL},{0xEE6B65DAL},{0x1DB773FFL},{4294967292UL}},{{4294967292UL},{8UL},{0x1DB773FFL},{4294967295UL}},{{0xA23AA01EL},{4294967286UL},{0UL},{0UL}},{{4294967295UL},{4294967295UL},{0xEE6B65DAL},{4294967292UL}}},{{{0xEE6B65DAL},{4294967292UL},{4294967287UL},{0x8AFC7416L}},{{0x8AFC7416L},{0xE64FFE39L},{4294967295UL},{4294967287UL}},{{4294967291UL},{0xE64FFE39L},{0x5544DB41L},{0x8AFC7416L}},{{0xE64FFE39L},{4294967292UL},{0xF149BAF8L},{4294967292UL}}},{{{0xDBD5B030L},{4294967295UL},{4294967292UL},{0UL}},{{0xEE6B65DAL},{4294967295UL},{0xA23AA01EL},{0x5544DB41L}},{{0xF149BAF8L},{0xA23AA01EL},{4294967292UL},{4294967295UL}},{{0xF149BAF8L},{0xDBD5B030L},{0xA23AA01EL},{4294967287UL}}},{{{0xEE6B65DAL},{4294967295UL},{4294967295UL},{0xEE6B65DAL}},{{0xB281FAA4L},{8UL},{0xEE6B65DAL},{0UL}},{{4294967292UL},{4294967287UL},{0x8AFC7416L},{0x1DB773FFL}},{{0xCDD4653EL},{0x5544DB41L},{4294967291UL},{0x1DB773FFL}}}};
                struct S1 *l_711 = &g_50;
                struct S1 **l_710 = &l_711;
                int32_t *** const l_716[5] = {&g_286,&g_286,&g_286,&g_286,&g_286};
                int i, j, k;
                for (l_642.f2 = 0; (l_642.f2 != 48); l_642.f2 = safe_add_func_uint8_t_u_u(l_642.f2, 3))
                { 
                    uint16_t l_674 = 0x2066L;
                    int64_t *l_691[3];
                    int32_t l_692[4];
                    const uint64_t l_693 = 0UL;
                    uint64_t ***l_708 = (void*)0;
                    uint8_t l_709 = 255UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_691[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_692[i] = 0x4A4F9BC4L;
                    if (l_665)
                        break;
                    l_549[3] = (((l_692[3] |= (safe_mul_func_uint16_t_u_u((***l_639), (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((*l_448) = (l_674 > (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((***l_639))), (l_678[2][2][0] , (+(~(((safe_add_func_uint8_t_u_u(g_93.f6, (safe_div_func_uint8_t_u_u((!((safe_mod_func_uint8_t_u_u(7UL, (safe_lshift_func_int16_t_s_u((((**l_636) = (***l_639)) < (*g_199)), 14)))) > 1UL)), l_690)))) , p_46.f1) & 1L)))))))), p_44)) > 7L), (-4L))), 6))))) == l_693) >= (***l_640));
                    (**l_640) = (**l_640);
                    l_692[3] |= (((safe_rshift_func_int16_t_s_s((***l_640), p_46.f0)) , (l_696[2] , ((safe_rshift_func_uint8_t_u_s(l_699, (((0xE05967D6L | (((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((g_169 != (l_708 != (void*)0)), 5)), 1L)), p_46.f1)) , g_454.f5) >= l_709)) , 255UL) , 1L))) <= (*p_42)))) > p_46.f0);
                }
                (*l_710) = &g_50;
                (*l_448) = ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((*l_439) = ((p_44 , (void*)0) != (g_93.f1 , l_716[4]))), 0x44L)), 4)) , (**g_286));
                for (g_305 = 27; (g_305 > 39); g_305 = safe_add_func_int8_t_s_s(g_305, 4))
                { 
                    int32_t *l_719 = &g_40;
                    uint32_t *l_735 = (void*)0;
                    uint32_t *l_736 = &g_390[5][0];
                    (**l_639) = l_719;
                    (*g_95) = (((!(g_93.f2 & (safe_mul_func_int16_t_s_s(((~((g_398[3][0] , ((249UL > ((((((***l_437) &= ((((((*l_736) = (safe_div_func_int16_t_s_s((((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_730, 3)), ((p_42 == l_731) ^ (safe_div_func_int64_t_s_s((safe_unary_minus_func_int8_t_s(1L)), 1UL))))) , 0x4C2BL) >= 0xAD7EL) >= (-3L)) , 7L), (*g_199)))) , 0UL) != (*l_719)) & 0L) & 1L)) >= 0x16E02F8FCD13F851LL) & p_46.f1) & (-1L)) != 5UL)) , 0UL)) > 0xABL)) && 0xE79A16FEA69118A9LL), (*g_113))))) < p_44) <= p_44);
                    (**g_286) = (safe_lshift_func_int16_t_s_s(((**l_635) &= (((void*)0 != &l_716[3]) || (safe_rshift_func_int16_t_s_s(((*p_43) , (*l_719)), (***l_640))))), 0));
                    (***g_285) &= (&g_231 != &g_231);
                    return p_43;
                }
                (*g_286) = (**l_639);
            }
            if (((safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((((***l_639) | g_454.f0) && 0xA10C121528BEC256LL), (***l_639))) != ((safe_rshift_func_int8_t_s_u(((void*)0 == l_747), g_370)) & g_338)), p_46.f0)) ^ g_40))
            { 
                return &g_50;
            }
            else
            { 
                int16_t *l_797 = &l_598;
                int32_t l_800 = 0x8F3544FFL;
                struct S0 l_814 = {0x70606232L,0UL,0xA759L,5L,0xEEFAL,4294967295UL,-1L};
                l_490[1][0][0] &= 1L;
                for (g_305 = 0; (g_305 <= 41); ++g_305)
                { 
                    uint16_t l_766 = 0x9B1AL;
                    int32_t l_769 = 2L;
                    int64_t *l_770 = &g_419;
                    int32_t l_771 = 0L;
                    const int32_t * const l_774 = (void*)0;
                    const int32_t * const *l_773[1];
                    const int32_t * const * const *l_772 = &l_773[0];
                    const struct S1 **l_778 = (void*)0;
                    const struct S1 **l_779 = &l_777[0];
                    uint64_t * const *l_784 = &g_436;
                    uint64_t * const * const *l_783 = &l_784;
                    uint64_t * const * const **l_785 = &l_783;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_773[i] = &l_774;
                    (*g_286) = (void*)0;
                    (*l_448) ^= 0L;
                    (*l_448) ^= ((safe_rshift_func_int16_t_s_s((-6L), 13)) < (safe_unary_minus_func_int8_t_s(((((((safe_div_func_int32_t_s_s((*p_42), (safe_rshift_func_uint16_t_u_u((0xC6L < (((((*p_42) & (safe_div_func_int64_t_s_s(((*l_770) &= ((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u((++(*l_731)))) , p_46.f1), (l_769 = ((*l_439) = ((*p_43) , ((safe_sub_func_uint32_t_u_u((((++l_766) | l_769) , p_46.f0), 0L)) && 246UL)))))) && g_338)), l_771))) | 18446744073709551615UL) < p_44) , g_371[0])), p_44)))) ^ p_46.f0) , l_772) == (void*)0) , p_44) > 0L))));
                    (*l_448) = (safe_mul_func_int16_t_s_s(((&g_50 == ((*l_779) = l_777[0])) >= (l_780 != (void*)0)), (safe_rshift_func_uint8_t_u_s((((l_789 = (l_786[2] = ((*l_785) = l_783))) == l_792) != (safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_uint32_t_u(((*l_731) = (safe_unary_minus_func_int8_t_s(((l_797 == (*l_635)) <= p_44)))))) == 1UL) > p_46.f0), 4))), 2))));
                }
                for (g_52 = 0; (g_52 != (-21)); --g_52)
                { 
                    (*l_448) = (*p_42);
                    if (l_800)
                        break;
                    if ((*l_448))
                        break;
                }
                l_800 |= (((safe_add_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(0x9E01F7D11C58282ELL, (l_638[1] , (safe_mod_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_u((*g_199), (safe_mul_func_int8_t_s_s((((*g_113) <= p_46.f1) , (((*l_636) != (void*)0) & p_46.f0)), p_46.f0)))) != p_46.f1) & g_454.f3) || p_46.f0), (*l_448)))))) && (*g_436)), 3L)) && p_46.f1) , 0x1C7AD3D8L);
                if (l_800)
                { 
                    return &g_50;
                }
                else
                { 
                    int8_t l_815 = 3L;
                    int32_t *l_816[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_816[i] = &g_40;
                    (**l_639) = p_42;
                    l_800 |= (l_549[0] ^= (p_46.f1 , (((!1L) | ((((*l_448) & (((((safe_add_func_int8_t_s_s(8L, 0x6DL)) == (l_814 , (***l_639))) && l_815) || p_46.f0) , (*l_448))) | (*g_199)) ^ 2L)) , (-1L))));
                }
            }
            (*l_817) ^= (l_438 |= ((*l_448) = (***l_639)));
        }
        else
        { 
            l_818 = 0x093738AEL;
        }
    }
    p_42 = p_42;
    if (l_598)
        goto lbl_819;
    return &g_50;
}



static struct S0  func_47(int32_t  p_48)
{ 
    struct S1 *l_56 = &g_50;
    int32_t l_57[2][1][5];
    uint64_t *l_58 = &g_59;
    uint8_t l_92 = 0x8AL;
    int32_t **l_107 = &g_95;
    uint16_t * const l_125 = &g_93.f4;
    uint16_t *l_196 = &g_93.f4;
    const int32_t *l_215 = &g_168;
    union U2 l_242 = {0xB265B679L};
    int32_t l_271[5][4] = {{0x5B4EDB8EL,0x5B4EDB8EL,0xC4D48E72L,0xC4D48E72L},{0x5B4EDB8EL,0x5B4EDB8EL,0xC4D48E72L,0xC4D48E72L},{0x5B4EDB8EL,0x5B4EDB8EL,0xC4D48E72L,0xC4D48E72L},{0x5B4EDB8EL,0x5B4EDB8EL,0xC4D48E72L,0xC4D48E72L},{0x5B4EDB8EL,0x5B4EDB8EL,0xC4D48E72L,0xC4D48E72L}};
    int8_t * const l_292 = &g_246;
    struct S0 *l_314[6][5] = {{&g_93,&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,(void*)0,&g_93,&g_93}};
    struct S0 **l_313 = &l_314[5][4];
    const int32_t *l_362 = &g_363;
    int32_t * const *l_380 = (void*)0;
    int32_t * const **l_379[7][5] = {{&l_380,&l_380,&l_380,&l_380,&l_380},{(void*)0,&l_380,&l_380,&l_380,&l_380},{&l_380,&l_380,&l_380,&l_380,&l_380},{&l_380,&l_380,&l_380,(void*)0,&l_380},{&l_380,&l_380,&l_380,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_380,&l_380},{&l_380,&l_380,&l_380,&l_380,&l_380}};
    int32_t * const ***l_378 = &l_379[2][0];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_57[i][j][k] = (-2L);
        }
    }
    if ((((((safe_div_func_uint8_t_u_u((l_56 != (void*)0), l_57[1][0][2])) || (0xD48A24E228C51F7ELL ^ (--(*l_58)))) >= (((((((void*)0 != &g_50) , (safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((l_56 != l_56), 6)) ^ g_52) | 0x2FA57A88L), 0xA9L))) , &p_48) != &p_48) != 0x09D52FFABE4BCA0FLL) && g_52)) < 0x01DC0BF2L) > p_48))
    { 
        uint32_t l_68[3];
        int32_t *l_71 = &g_40;
        int64_t l_78 = 0xC0C0825FC64312F3LL;
        int32_t *l_79 = &l_57[1][0][2];
        uint16_t *l_80 = &g_81;
        uint16_t *l_86 = &g_87;
        int32_t **l_94[3][7] = {{&l_71,&l_71,&l_71,&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71,&l_71,&l_71,&l_71}};
        int32_t *l_108 = &l_57[1][0][2];
        int32_t l_120 = 0x3ACD9B71L;
        const uint64_t *l_145 = &g_50.f0;
        int8_t l_146 = (-6L);
        int16_t l_183 = 0xBAC3L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_68[i] = 0x2DB44E93L;
        (*l_71) ^= (((((safe_sub_func_uint16_t_u_u(l_68[0], p_48)) , &p_48) == &p_48) >= (safe_rshift_func_uint16_t_u_u(p_48, (l_57[1][0][4] & ((-1L) != p_48))))) && g_59);
        (*l_79) = ((*l_71) = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(g_2, (0x12F0L || (((-3L) ^ (safe_mul_func_uint8_t_u_u((&g_40 != &g_40), (4294967294UL > (((p_48 , l_78) <= g_52) & p_48))))) != p_48)))), g_2)));
        (*l_71) = (((*l_86) = ((--(*l_80)) , (safe_rshift_func_uint8_t_u_s(p_48, 5)))) | (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_92, (l_92 , (0x93AA688ECCDF3378LL && 0x51A330C13F5ED5A8LL)))), ((g_93 , g_93.f4) < g_93.f5))));
        g_95 = &p_48;
        for (l_92 = 0; (l_92 != 54); l_92 = safe_add_func_int64_t_s_s(l_92, 6))
        { 
            int16_t l_135 = (-3L);
            uint16_t *l_143 = &g_93.f4;
            struct S0 l_151 = {18446744073709551613UL,0x896A24D7L,65535UL,0xC418A464L,0x87A4L,0UL,0L};
            int32_t l_180[6] = {0x936D73F1L,0x936D73F1L,0x936D73F1L,0x936D73F1L,0x936D73F1L,0x936D73F1L};
            int i;
        }
    }
    else
    { 
        uint16_t **l_197[2][7] = {{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196,&l_196},{&l_196,&l_196,&l_196,&l_196,&l_196,&l_196,&l_196}};
        int32_t l_203 = 4L;
        uint64_t *l_225 = &g_59;
        union U2 l_278[5] = {{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL}};
        int32_t ** const *l_295 = &l_107;
        struct S0 *l_318 = &g_93;
        struct S1 l_358 = {0xD33F60CF77D2F1C1LL};
        int64_t l_387 = 1L;
        int32_t l_389 = 0x0BC284BAL;
        int64_t *l_395 = &l_387;
        int64_t **l_394 = &l_395;
        int64_t ***l_393 = &l_394;
        int64_t *l_413 = &l_278[3].f4;
        int64_t *l_414 = &g_231.f4;
        int64_t *l_415 = &l_242.f4;
        int64_t *l_416 = &l_242.f4;
        int64_t *l_417 = (void*)0;
        int64_t *l_418 = &g_398[3][0];
        int i, j;
        (*g_95) = (safe_sub_func_int64_t_s_s((((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((g_198 = l_196) != (g_199 = &g_81)) != (safe_unary_minus_func_int8_t_s((0xC145D4FDDE0D53B3LL >= (**l_107))))), ((safe_lshift_func_uint8_t_u_s((((void*)0 != l_58) <= p_48), g_93.f2)) & p_48))) , (*g_113)), g_93.f0)) && l_203) != 0xFBL), p_48));
        for (g_93.f6 = 0; (g_93.f6 <= 4); g_93.f6 = safe_add_func_int32_t_s_s(g_93.f6, 6))
        { 
            const uint32_t l_212[6][5][5] = {{{0xB5425565L,0x7F4FEEF6L,0xA3CFAA44L,0x41EE8A5DL,18446744073709551606UL},{0x92A7B370L,0xA455DDABL,0xEEBA6CA5L,0xEEBA6CA5L,0xA455DDABL},{0x64F93B81L,0x41EE8A5DL,0UL,0x6A95B5F3L,18446744073709551612UL},{0xA455DDABL,0UL,18446744073709551615UL,0UL,0x92A7B370L},{18446744073709551606UL,0x7461C8C1L,0xA3CFAA44L,0x0141F537L,0xA3CFAA44L}},{{0xA455DDABL,0UL,0x4548F125L,0UL,18446744073709551615UL},{0x64F93B81L,0x0141F537L,1UL,0x29044EA9L,0x64F93B81L},{0x92A7B370L,0xEEBA6CA5L,18446744073709551607UL,0UL,0UL},{0xB5425565L,0x0141F537L,0xB5425565L,0x7461C8C1L,18446744073709551606UL},{18446744073709551615UL,0UL,0UL,0xEEBA6CA5L,0x8197DD29L}},{{18446744073709551612UL,0x7461C8C1L,0UL,0x4174CEC6L,0x64F93B81L},{0UL,0UL,0UL,0x8197DD29L,18446744073709551612UL},{18446744073709551606UL,0x41EE8A5DL,0xB5425565L,0x7F4FEEF6L,0xA3CFAA44L},{0x8197DD29L,0xA455DDABL,18446744073709551607UL,0UL,8UL},{18446744073709551612UL,0x7F4FEEF6L,1UL,0x7F4FEEF6L,18446744073709551612UL}},{{18446744073709551612UL,0xEEBA6CA5L,0x4548F125L,0x8197DD29L,0UL},{0xB5425565L,8UL,0xA3CFAA44L,0x4174CEC6L,18446744073709551606UL},{8UL,0xA455DDABL,18446744073709551615UL,0xEEBA6CA5L,0UL},{0x64F93B81L,0x4174CEC6L,0UL,0x7461C8C1L,18446744073709551612UL},{0UL,0UL,0xEEBA6CA5L,0UL,8UL}},{{18446744073709551606UL,0x6A95B5F3L,0xA3CFAA44L,0x29044EA9L,0xA3CFAA44L},{0UL,0UL,0x3F65977CL,0UL,18446744073709551612UL},{0x64F93B81L,0x29044EA9L,1UL,0x0141F537L,0x64F93B81L},{8UL,0xEEBA6CA5L,0x55FCFD51L,0UL,0x8197DD29L},{0xB5425565L,0x29044EA9L,0xB5425565L,0x6A95B5F3L,18446744073709551606UL}},{{18446744073709551612UL,0UL,0UL,0xEEBA6CA5L,0UL},{18446744073709551612UL,0x6A95B5F3L,0UL,0x41EE8A5DL,0x64F93B81L},{0x8197DD29L,0UL,0UL,0x8197DD29L,18446744073709551615UL},{18446744073709551606UL,0x4174CEC6L,0xB5425565L,8UL,0xA3CFAA44L},{0UL,0xA455DDABL,0x55FCFD51L,0UL,0x92A7B370L}}};
            const int32_t *l_217 = &g_218;
            int i, j, k;
            for (l_203 = 18; (l_203 != 21); l_203 = safe_add_func_int8_t_s_s(l_203, 3))
            { 
                uint64_t *l_226 = (void*)0;
                int32_t l_232 = (-8L);
                int32_t l_233 = 7L;
                for (g_93.f3 = 0; (g_93.f3 <= (-14)); --g_93.f3)
                { 
                    const int32_t **l_216[3][3][3] = {{{(void*)0,(void*)0,&l_215},{(void*)0,(void*)0,(void*)0},{&l_215,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{(void*)0,(void*)0,&l_215}},{{(void*)0,(void*)0,(void*)0},{&l_215,(void*)0,(void*)0},{(void*)0,(void*)0,&l_215}}};
                    uint64_t **l_227 = (void*)0;
                    uint64_t **l_228 = &l_226;
                    int i, j, k;
                    (**l_107) = ((safe_sub_func_uint64_t_u_u(p_48, g_52)) & l_212[3][0][3]);
                    (*g_95) = p_48;
                    (*g_95) = (safe_lshift_func_int8_t_s_u(((l_217 = l_215) == &g_218), ((safe_sub_func_uint32_t_u_u(((p_48 == (((safe_sub_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(((l_225 = &g_59) == ((*l_228) = l_226)), ((l_232 = (safe_lshift_func_uint16_t_u_s((*g_199), (((g_231 , 0xA015E9F7B3F3958ALL) , p_48) & g_40)))) <= l_233))) >= g_231.f1) , (*g_95)), g_93.f1)) < p_48) | p_48)) , g_93.f2), g_234[2][3])) , 1UL)));
                }
                if (g_231.f1)
                    goto lbl_420;
            }
            (*g_95) = (*l_217);
        }
        for (g_87 = (-22); (g_87 != 36); ++g_87)
        { 
            const uint64_t l_238 = 0xDEB08E153FFEB0AALL;
            union U2 l_241 = {0x95E92766L};
            int8_t *l_245 = &g_246;
            int32_t l_261 = (-3L);
            struct S0 * const *l_315 = (void*)0;
            struct S1 l_322[4] = {{0xF09BE1A63A71FD06LL},{0xF09BE1A63A71FD06LL},{0xF09BE1A63A71FD06LL},{0xF09BE1A63A71FD06LL}};
            uint32_t *l_323[1];
            int32_t *l_336[1];
            int64_t *l_348 = &l_241.f4;
            int64_t ** const l_347[7] = {&l_348,&l_348,&l_348,&l_348,&l_348,&l_348,&l_348};
            const uint8_t l_359 = 255UL;
            int i;
            for (i = 0; i < 1; i++)
                l_323[i] = &g_93.f1;
            for (i = 0; i < 1; i++)
                l_336[i] = &l_57[1][0][2];
        }
        (***l_295) = (((((((((**l_393) = l_58) == g_397[2][1]) | ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((0L == (((((safe_mul_func_int16_t_s_s(((*g_113) |= (safe_add_func_uint8_t_u_u(255UL, ((safe_lshift_func_uint16_t_u_u(p_48, 13)) > (g_390[5][0] == ((*l_418) ^= ((*l_413) = ((((safe_lshift_func_uint16_t_u_s(65528UL, (*l_362))) && 0UL) , p_48) && 0x4394L)))))))), 0xBB72L)) != g_234[2][3]) && (*g_198)) >= 0xAF693820L) | (***l_295))) >= 0xBAL) ^ 0x56L), g_419)), p_48)) , (**g_286))) <= (***l_295)) || 0x428BL) || p_48) > g_363) == 3UL);
    }
    (**g_285) = &p_48;
lbl_420:
    (**g_285) = (*l_107);
    (*l_107) = g_421;
    return g_93;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_93.f2, "g_93.f2", print_hash_value);
    transparent_crc(g_93.f3, "g_93.f3", print_hash_value);
    transparent_crc(g_93.f4, "g_93.f4", print_hash_value);
    transparent_crc(g_93.f5, "g_93.f5", print_hash_value);
    transparent_crc(g_93.f6, "g_93.f6", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_231.f1, "g_231.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_234[i][j], "g_234[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_371[i], "g_371[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_390[i][j], "g_390[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_398[i][j], "g_398[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_454.f0, "g_454.f0", print_hash_value);
    transparent_crc(g_454.f1, "g_454.f1", print_hash_value);
    transparent_crc(g_454.f2, "g_454.f2", print_hash_value);
    transparent_crc(g_454.f3, "g_454.f3", print_hash_value);
    transparent_crc(g_454.f4, "g_454.f4", print_hash_value);
    transparent_crc(g_454.f5, "g_454.f5", print_hash_value);
    transparent_crc(g_454.f6, "g_454.f6", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_1030, "g_1030", print_hash_value);
    transparent_crc(g_1048, "g_1048", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1230, "g_1230", print_hash_value);
    transparent_crc(g_1272, "g_1272", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1463[i], "g_1463[i]", print_hash_value);

    }
    transparent_crc(g_1516, "g_1516", print_hash_value);
    transparent_crc(g_1551.f0, "g_1551.f0", print_hash_value);
    transparent_crc(g_1551.f1, "g_1551.f1", print_hash_value);
    transparent_crc(g_1656.f0, "g_1656.f0", print_hash_value);
    transparent_crc(g_1656.f1, "g_1656.f1", print_hash_value);
    transparent_crc(g_1731, "g_1731", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1735[i], "g_1735[i]", print_hash_value);

    }
    transparent_crc(g_1800.f0, "g_1800.f0", print_hash_value);
    transparent_crc(g_1800.f1, "g_1800.f1", print_hash_value);
    transparent_crc(g_1800.f2, "g_1800.f2", print_hash_value);
    transparent_crc(g_1800.f3, "g_1800.f3", print_hash_value);
    transparent_crc(g_1800.f4, "g_1800.f4", print_hash_value);
    transparent_crc(g_1800.f5, "g_1800.f5", print_hash_value);
    transparent_crc(g_1800.f6, "g_1800.f6", print_hash_value);
    transparent_crc(g_1826.f0, "g_1826.f0", print_hash_value);
    transparent_crc(g_1834.f0, "g_1834.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1867[i].f0, "g_1867[i].f0", print_hash_value);
        transparent_crc(g_1867[i].f1, "g_1867[i].f1", print_hash_value);

    }
    transparent_crc(g_1882, "g_1882", print_hash_value);
    transparent_crc(g_2021, "g_2021", print_hash_value);
    transparent_crc(g_2036, "g_2036", print_hash_value);
    transparent_crc(g_2125, "g_2125", print_hash_value);
    transparent_crc(g_2135, "g_2135", print_hash_value);
    transparent_crc(g_2299, "g_2299", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2356[i].f0, "g_2356[i].f0", print_hash_value);

    }
    transparent_crc(g_2503, "g_2503", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2516[i][j].f0, "g_2516[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_2718, "g_2718", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
