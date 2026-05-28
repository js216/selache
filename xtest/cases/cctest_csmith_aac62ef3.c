// SPDX-License-Identifier: MIT
// cctest_csmith_aac62ef3.c --- cctest case csmith_aac62ef3 (csmith seed 2865114867)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe857133a */
/* @exp_ticks 0x5170 */

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

// Options:   -s 2865114867 -o /tmp/csmith_gen_vfm2p3ls/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
};

struct S1 {
   uint8_t  f0;
};

struct S2 {
   int64_t  f0;
   int32_t  f1;
   const uint32_t  f2;
   int16_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   struct S1  f0;
};
#pragma pack(pop)

union U4 {
   uint32_t  f0;
   uint64_t  f1;
   const int32_t  f2;
};


static uint8_t g_5 = 0x2CL;
static struct S0 g_6[5] = {{0x887E08A1L},{0x887E08A1L},{0x887E08A1L},{0x887E08A1L},{0x887E08A1L}};
static union U4 g_16 = {0x002891BAL};
static struct S3 g_39 = {{0xF6L}};
static uint32_t g_43 = 0xA30FB9C0L;
static uint32_t g_49 = 0UL;
static int16_t g_54 = 0x28C2L;
static uint64_t g_60[4][2][5] = {{{0x26829A6E4C1C17FALL,18446744073709551615UL,18446744073709551615UL,0x26829A6E4C1C17FALL,18446744073709551615UL},{18446744073709551614UL,18446744073709551614UL,1UL,18446744073709551614UL,18446744073709551614UL}},{{18446744073709551615UL,0x26829A6E4C1C17FALL,18446744073709551615UL,18446744073709551615UL,0x26829A6E4C1C17FALL},{18446744073709551614UL,0x360852B186EC4F4DLL,0x360852B186EC4F4DLL,18446744073709551614UL,0x360852B186EC4F4DLL}},{{0x26829A6E4C1C17FALL,0x26829A6E4C1C17FALL,0xA03C9D266AB0C02ELL,0x26829A6E4C1C17FALL,0x26829A6E4C1C17FALL},{0x360852B186EC4F4DLL,18446744073709551614UL,0x360852B186EC4F4DLL,0x360852B186EC4F4DLL,18446744073709551614UL}},{{0x26829A6E4C1C17FALL,18446744073709551615UL,18446744073709551615UL,0x26829A6E4C1C17FALL,18446744073709551615UL},{18446744073709551614UL,18446744073709551614UL,1UL,18446744073709551614UL,18446744073709551614UL}}};
static uint8_t g_61[3] = {255UL,255UL,255UL};
static uint16_t g_66 = 0x3341L;
static uint16_t g_68 = 0x1C04L;
static int32_t g_77 = 0x7E1B1CD7L;
static struct S3 g_78 = {{1UL}};
static struct S3 g_105 = {{1UL}};
static struct S3 g_106 = {{0x9BL}};
static int64_t g_125 = 7L;
static int64_t g_127 = (-1L);
static int16_t g_129 = 8L;
static int32_t g_130 = 1L;
static uint16_t g_131 = 5UL;
static struct S2 g_139 = {-4L,-1L,0x173CA947L,0x1538L};
static int32_t g_176 = 1L;
static uint64_t g_178 = 0xC6D902931447B9B5LL;
static const uint32_t g_183 = 0xAC48A367L;
static int32_t g_188 = 0L;



static int8_t  func_1(void);
static struct S1  func_2(int8_t  p_3);
static int32_t  func_7(struct S3  p_8, int32_t  p_9, struct S2  p_10);
static struct S3  func_11(uint8_t  p_12, struct S0  p_13, uint32_t  p_14);




static int8_t  func_1(void)
{ 
    uint32_t l_4 = 0x734F0946L;
    int32_t l_123 = (-1L);
    const struct S1 l_160 = {0UL};
    uint16_t l_162 = 0xAE31L;
    uint32_t l_163 = 1UL;
    int8_t l_164 = 0x3FL;
    if ((func_2(l_4) , (safe_sub_func_uint64_t_u_u((((((safe_mod_func_int16_t_s_s((l_123 = (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((0x5EL != ((l_123 ^ g_60[2][0][4]) <= g_61[2])), 3)) & 0x7F91L), g_5))), 6UL)) ^ g_39.f0.f0) || l_4) ^ g_43) ^ (-4L)), g_60[2][0][4]))))
    { 
        int32_t l_124 = 0x34A4F5E2L;
        struct S0 l_154 = {1UL};
        uint16_t l_159 = 7UL;
        int16_t l_161 = 0xED22L;
        uint16_t l_165 = 65535UL;
        int32_t l_166 = (-5L);
        int32_t l_167 = 1L;
        int32_t l_175 = 0x3022FE48L;
        int32_t l_177[1][1][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_177[i][j][k] = (-1L);
            }
        }
        if (l_124)
        { 
            int32_t l_126 = (-1L);
            int64_t l_128 = 0x2B3379FE0895C1B5LL;
            --g_131;
lbl_150:
            for (g_105.f0.f0 = (-7); (g_105.f0.f0 == 12); g_105.f0.f0 = safe_add_func_uint8_t_u_u(g_105.f0.f0, 8))
            { 
                int16_t l_136 = 0x8770L;
                if (g_130)
                    break;
                l_136 = l_124;
                if (l_124)
                    goto lbl_150;
                g_130 = ((((safe_add_func_int32_t_s_s(((g_139 , (((((safe_lshift_func_int16_t_s_u(((l_126 <= (safe_div_func_uint32_t_u_u((l_123 = (((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((((safe_add_func_int32_t_s_s(l_136, 4294967295UL)) != 4294967289UL) | l_124), l_128)), g_54)) | g_139.f3) >= 0UL)), g_78.f0.f0))) == l_136), 10)) , g_77) >= 0x474206E0452890DCLL) <= g_139.f2) ^ g_131)) || g_125), 0x73E46763L)) , g_139.f3) > 0x3F4F8798L) == l_136);
            }
            if ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(((g_6[4] = l_154) , (safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_159, (((((l_160 , (l_126 , l_161)) == l_160.f0) < 3L) ^ g_129) ^ l_162))), l_126))))), l_163)))
            { 
                l_123 = 2L;
                g_130 &= 0x0D2E18EFL;
            }
            else
            { 
                uint32_t l_168 = 18446744073709551609UL;
                g_77 = ((((l_124 , (g_129 > (((((((((g_139 , ((g_106.f0 , l_162) <= 0xF2L)) != 5UL) || g_68) < g_60[0][1][2]) != 0x2BD85DC1L) >= l_164) && g_39.f0.f0) , g_139.f2) <= l_128))) ^ g_66) & l_165) , l_166);
                l_168++;
            }
        }
        else
        { 
            int32_t l_173 = 1L;
            int32_t l_174[3][5][1] = {{{7L},{0x123A930BL},{7L},{0x123A930BL},{7L}},{{0x123A930BL},{7L},{0x123A930BL},{7L},{0x123A930BL}},{{7L},{0x123A930BL},{7L},{0x123A930BL},{7L}}};
            int i, j, k;
            if (g_106.f0.f0)
            { 
                return g_60[2][0][4];
            }
            else
            { 
                l_167 = (((((((l_124 = g_106.f0.f0) & 4294967295UL) ^ (safe_lshift_func_int8_t_s_s((((l_159 > g_16.f0) != g_16.f0) != g_68), g_66))) < g_54) < 0L) & g_125) == g_61[1]);
            }
            --g_178;
        }
    }
    else
    { 
        g_106 = g_105;
        return l_123;
    }
    g_77 ^= (g_54 != ((safe_add_func_uint64_t_u_u(g_183, (((safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s(l_123, l_164)), g_61[2])) || 1UL) >= l_160.f0))) & g_61[1]));
    l_123 = (l_160.f0 && g_61[1]);
    return g_188;
}



static struct S1  func_2(int8_t  p_3)
{ 
    uint8_t l_79 = 0x6DL;
    struct S2 l_80[4] = {{0x18A56EC073B9F6D4LL,0x686F2FD6L,18446744073709551615UL,-4L},{0x18A56EC073B9F6D4LL,0x686F2FD6L,18446744073709551615UL,-4L},{0x18A56EC073B9F6D4LL,0x686F2FD6L,18446744073709551615UL,-4L},{0x18A56EC073B9F6D4LL,0x686F2FD6L,18446744073709551615UL,-4L}};
    int32_t l_98[5][2][3];
    int32_t l_99 = (-1L);
    struct S1 l_114 = {0UL};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
                l_98[i][j][k] = 1L;
        }
    }
    if (g_5)
    { 
        for (p_3 = 4; (p_3 >= 1); p_3 -= 1)
        { 
            uint32_t l_15 = 0x3C017F21L;
            int32_t l_85 = 0L;
            for (g_5 = 0; (g_5 <= 4); g_5 += 1)
            { 
                int32_t l_17 = 0xD3E018EBL;
                int i;
                l_85 = func_7((g_78 = func_11(l_15, (g_6[g_5] = (g_16 , g_6[g_5])), l_17)), l_79, l_80[0]);
                g_77 &= ((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((l_98[0][1][0] = ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((1UL | ((p_3 <= g_68) , (g_60[2][0][4] ^= p_3))), l_17)), p_3)), p_3)) > 0x79AEL)) >= 0x93154CD5L), 0xD7ACB2E3L)), p_3)), p_3)) <= g_68);
            }
        }
    }
    else
    { 
        uint64_t l_100 = 0UL;
        l_100 ^= (0x92L == ((l_99 &= 0x445F7642676EBEA2LL) , 0x0CL));
    }
    g_106 = (((l_99 = (safe_sub_func_int64_t_s_s(((255UL ^ (safe_rshift_func_int8_t_s_s((g_39.f0.f0 <= (p_3 ^ (1L & (-1L)))), p_3))) <= l_79), g_66))) , p_3) , g_105);
    for (g_66 = 0; (g_66 != 2); ++g_66)
    { 
        int8_t l_113[1][5][5] = {{{(-7L),1L,(-7L),(-7L),1L},{0x2EL,(-4L),(-6L),1L,1L},{(-4L),(-7L),(-6L),1L,(-6L)},{1L,1L,(-7L),0x2EL,0x0BL},{(-4L),0x0BL,(-7L),0x2EL,0x2EL}}};
        int i, j, k;
        if (p_3)
            break;
        l_113[0][2][1] = (safe_add_func_int32_t_s_s(l_99, (safe_mul_func_uint8_t_u_u(p_3, p_3))));
        return l_114;
    }
    return g_78.f0;
}



static int32_t  func_7(struct S3  p_8, int32_t  p_9, struct S2  p_10)
{ 
    const struct S0 l_81 = {0UL};
    int32_t l_84 = (-5L);
    l_84 &= (l_81 , ((0xF01DDAC0L <= ((g_16.f0 || ((((safe_mul_func_uint16_t_u_u((p_10.f3 || g_78.f0.f0), 0xB2D9L)) >= l_81.f0) != g_78.f0.f0) <= 0xFE7B9702L)) & l_81.f0)) | l_81.f0));
    return l_84;
}



static struct S3  func_11(uint8_t  p_12, struct S0  p_13, uint32_t  p_14)
{ 
    int32_t l_27[5] = {0x8CA0E2C2L,0x8CA0E2C2L,0x8CA0E2C2L,0x8CA0E2C2L,0x8CA0E2C2L};
    union U4 l_28 = {0x716E3113L};
    int32_t l_35 = 0x1FE01AF0L;
    int32_t l_37 = 1L;
    struct S3 l_38 = {{1UL}};
    int i;
    if ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((g_5 == g_5), (safe_mod_func_int32_t_s_s(((~l_27[2]) > (l_28 , g_16.f0)), 0xF314D41BL)))), 4)) > 18446744073709551610UL) == l_28.f0), l_28.f0)))
    { 
        int32_t l_36 = 0x12393DFEL;
        struct S3 l_44[1][4][4] = {{{{{1UL}},{{1UL}},{{0UL}},{{1UL}}},{{{1UL}},{{0xA9L}},{{0xA9L}},{{1UL}}},{{{0xA9L}},{{1UL}},{{0xA9L}},{{0xA9L}}},{{{1UL}},{{1UL}},{{0UL}},{{1UL}}}}};
        int32_t l_67 = 0L;
        int i, j, k;
        for (p_14 = 0; (p_14 <= 4); p_14 += 1)
        { 
            int i;
            if ((((((safe_lshift_func_int8_t_s_s((4UL | ((l_27[p_14] | (l_28 , (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((l_37 = (l_36 = (p_12 |= ((l_35 = ((g_6[p_14] , 0x1BL) == 0xF5L)) > g_16.f0)))), g_6[p_14].f0)), l_28.f2)))) , 0x166DA9A1L)), 5)) & g_16.f0) , p_13.f0) & p_13.f0) , 0xF9DEAB2DL))
            { 
                uint8_t l_40[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_40[i] = 0xF1L;
                g_39 = l_38;
                l_40[2]--;
            }
            else
            { 
                g_43 ^= g_39.f0.f0;
                l_38 = l_44[0][0][2];
            }
        }
        for (g_16.f1 = 0; (g_16.f1 >= 44); ++g_16.f1)
        { 
            int8_t l_65 = 0x5AL;
            for (l_37 = 0; (l_37 < (-3)); l_37 = safe_sub_func_uint32_t_u_u(l_37, 1))
            { 
                const uint8_t l_64 = 4UL;
                --g_49;
                if (p_13.f0)
                    break;
                g_66 = ((safe_add_func_uint64_t_u_u(((g_54 = 1L) ^ ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_60[2][0][4] = (~l_37)), 13)), (g_61[1] |= 0xCFL))) , ((((((safe_rshift_func_int8_t_s_u((1L | g_16.f1), l_64)) , g_49) == g_16.f2) == g_16.f1) > p_12) , 7UL))), 1L)) < l_65);
            }
        }
        ++g_68;
    }
    else
    { 
        uint16_t l_73 = 0xF873L;
        l_73 &= (l_35 = (safe_add_func_int16_t_s_s((-1L), (p_14 && 3L))));
    }
    for (p_14 = (-9); (p_14 <= 27); p_14 = safe_add_func_uint64_t_u_u(p_14, 3))
    { 
        uint32_t l_76 = 0x7687144BL;
        l_35 ^= (p_13.f0 != g_66);
        g_77 ^= l_76;
    }
    return l_38;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_6[i].f0, "g_6[i].f0", print_hash_value);

    }
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_39.f0.f0, "g_39.f0.f0", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_60[i][j][k], "g_60[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78.f0.f0, "g_78.f0.f0", print_hash_value);
    transparent_crc(g_105.f0.f0, "g_105.f0.f0", print_hash_value);
    transparent_crc(g_106.f0.f0, "g_106.f0.f0", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2, "g_139.f2", print_hash_value);
    transparent_crc(g_139.f3, "g_139.f3", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
