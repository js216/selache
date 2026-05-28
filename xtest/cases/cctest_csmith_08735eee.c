// SPDX-License-Identifier: MIT
// cctest_csmith_08735eee.c --- cctest case csmith_08735eee (csmith seed 141778670)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcb3ee6ef */
/* @exp_ticks 0x98e0 */

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

// Options:   -s 141778670 -o /tmp/csmith_gen_6_n_yu3d/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint64_t  f0;
   const uint32_t  f1;
   int32_t  f2;
   int16_t  f3;
   uint64_t  f4;
   int32_t  f5;
   uint32_t  f6;
   int8_t  f7;
};

union U1 {
   uint32_t  f0;
};

union U2 {
   uint64_t  f0;
};


static union U1 g_13[1] = {{0xA3CFCE29L}};
static union U1 g_19 = {0xA85F88E1L};
static union U1 *g_18 = &g_19;
static int16_t g_21 = 0x2489L;
static int64_t g_68 = 0L;
static uint64_t g_72[7] = {0x37BAD6E3F992CE4CLL,0x37BAD6E3F992CE4CLL,0x37BAD6E3F992CE4CLL,0x37BAD6E3F992CE4CLL,0x37BAD6E3F992CE4CLL,0x37BAD6E3F992CE4CLL,0x37BAD6E3F992CE4CLL};
static uint16_t g_104 = 0x7ADBL;
static uint8_t g_109[5][4][1] = {{{1UL},{1UL},{1UL},{8UL}},{{255UL},{8UL},{1UL},{1UL}},{{1UL},{8UL},{255UL},{8UL}},{{1UL},{1UL},{1UL},{8UL}},{{255UL},{8UL},{1UL},{1UL}}};
static uint8_t g_111[1] = {0xC8L};
static int64_t g_124 = 0L;
static uint16_t g_126 = 0x0C4AL;
static int8_t g_151 = 8L;
static uint16_t g_154[2] = {0xF833L,0xF833L};
static int16_t g_159 = (-10L);
static int32_t g_160 = 0x061D4BFAL;
static int8_t g_161 = 0xA6L;
static uint32_t g_163 = 0x4C189411L;
static int32_t g_166 = 0x9C22F73CL;
static int8_t g_167 = 0xDDL;
static int8_t g_168 = 0x2EL;
static int64_t g_169 = 0L;
static int16_t g_170[7][7][5] = {{{0xEA29L,1L,5L,1L,0xEA29L},{(-1L),2L,0x399EL,0xFC2FL,(-2L)},{(-1L),0L,0x1D6FL,0xA309L,0x0632L},{0x228BL,0xA309L,(-1L),0x1D6FL,0xA27BL},{(-1L),1L,0L,0L,(-7L)},{0xA27BL,0x228BL,0xDAB9L,0xFC2FL,(-1L)},{0x0632L,0xCD4FL,2L,5L,0x995BL}},{{1L,1L,2L,(-6L),0x90FFL},{5L,(-1L),0xDAB9L,0xDAB9L,(-1L)},{0x5FEAL,5L,0L,(-1L),0x45F2L},{0xA309L,1L,(-1L),(-7L),0x7F2EL},{0xFEF8L,1L,0x399EL,1L,(-6L)},{0xA309L,0L,0xCA1DL,0x0632L,1L},{0x5FEAL,0xFC2FL,0x90FFL,(-1L),0xA24AL}},{{5L,1L,0xA24AL,0x90FFL,0x8BF2L},{1L,0xCA1DL,(-1L),0x90FFL,0L},{0x0632L,0xFEF8L,(-2L),(-1L),(-2L)},{0xA27BL,0xA27BL,0xE6F3L,0x0632L,1L},{(-1L),0xA24AL,0xFC2FL,1L,0x5FEAL},{0x228BL,0x45A3L,0x995BL,(-7L),0xCD4FL},{0L,0xA24AL,0xA27BL,(-1L),1L}},{{2L,0xA27BL,0x228BL,0xDAB9L,0xFC2FL},{(-7L),0xFEF8L,1L,(-6L),0x0632L},{(-1L),0xCA1DL,(-1L),5L,0x0632L},{0xE6F3L,1L,0xCD4FL,0xFC2FL,0xFC2FL},{0x45A3L,0xFC2FL,0x45A3L,0L,1L},{0xDAB9L,0L,0xEA29L,0x1D6FL,0xCD4FL},{0x995BL,1L,0x1D6FL,1L,0x5FEAL}},{{0x45F2L,1L,0xEA29L,0xCD4FL,1L},{0xCD4FL,5L,0x45A3L,0L,(-2L)},{0xA24AL,(-1L),0xCD4FL,0x03EEL,0L},{1L,1L,(-1L),0x5FEAL,0x8BF2L},{1L,0xCD4FL,1L,0x399EL,0xA24AL},{0xA24AL,0x228BL,0x228BL,0xA24AL,1L},{0xCD4FL,1L,0xA27BL,(-1L),(-6L)}},{{0x45F2L,0xA309L,0x995BL,0xEA29L,0x7F2EL},{0x995BL,(-6L),0xFC2FL,(-1L),0x45F2L},{0xDAB9L,0x1D6FL,0xE6F3L,0xA24AL,(-1L)},{0x45A3L,0L,(-2L),0x399EL,0x90FFL},{0xE6F3L,0x16FEL,(-1L),0x5FEAL,0x995BL},{(-1L),0x16FEL,0xA24AL,0x03EEL,(-1L)},{(-7L),(-6L),0xEA29L,(-6L),(-1L)}},{{0x1D6FL,0x399EL,0x7F2EL,0L,0xE6F3L},{5L,(-1L),0xCA1DL,(-1L),0x5FEAL},{0xA24AL,1L,0L,0x399EL,0xE6F3L},{2L,(-1L),(-6L),1L,(-1L)},{0xE6F3L,0xA24AL,(-1L),0xCD4FL,0x03EEL},{8L,0L,0x1D6FL,0x90FFL,0xDAB9L},{(-2L),0x16FEL,0x1D6FL,(-1L),0xEA29L}}};
static int32_t g_171[6][7] = {{(-1L),0L,(-1L),0xFA26938DL,0xFA26938DL,(-1L),0L},{0x02CC8EEDL,0L,0x3F510E37L,(-1L),(-1L),0x3F510E37L,0L},{(-1L),0L,(-1L),0xFA26938DL,0xFA26938DL,(-1L),0L},{0x02CC8EEDL,0L,0x3F510E37L,(-1L),(-1L),0x3F510E37L,0L},{(-1L),0L,(-1L),0xFA26938DL,0xFA26938DL,(-1L),0L},{0x02CC8EEDL,0L,0x3F510E37L,(-1L),(-1L),0x3F510E37L,0L}};
static struct S0 g_214 = {0xADF56351895DCFA3LL,9UL,1L,0xC362L,0UL,-1L,0x87163799L,-1L};
static uint64_t *g_255[2][1][2] = {{{&g_72[5],&g_72[5]}},{{&g_72[5],&g_72[5]}}};
static uint64_t **g_254[4] = {&g_255[0][0][1],&g_255[0][0][1],&g_255[0][0][1],&g_255[0][0][1]};
static union U2 g_266 = {4UL};
static int32_t g_355 = 0xF755FFD0L;
static const uint32_t *g_369 = &g_214.f6;
static int32_t *g_420 = (void*)0;
static int64_t ***g_424[1] = {(void*)0};
static uint64_t g_434[4] = {0x9565110DE3B479E9LL,0x9565110DE3B479E9LL,0x9565110DE3B479E9LL,0x9565110DE3B479E9LL};
static uint8_t *g_533 = (void*)0;
static int8_t g_624[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static int32_t g_642 = 0x3B3C51D7L;
static int32_t *g_650 = &g_166;
static int32_t **g_649 = &g_650;
static int32_t ***g_697 = (void*)0;
static int32_t ****g_696[4] = {&g_697,&g_697,&g_697,&g_697};
static int32_t g_866 = 0L;
static uint8_t **g_876 = &g_533;
static uint64_t ***g_889[1] = {&g_254[0]};
static uint64_t ****g_888 = &g_889[0];
static struct S0 * const g_987[1][1] = {{(void*)0}};
static struct S0 * const *g_986 = &g_987[0][0];
static const int16_t *g_1013 = (void*)0;
static const int16_t **g_1012 = &g_1013;
static struct S0 *g_1038 = (void*)0;
static struct S0 **g_1037 = &g_1038;
static const int32_t *g_1156 = &g_171[4][0];
static union U1 **g_1165 = &g_18;
static union U1 ***g_1164 = &g_1165;
static int32_t ****g_1201[1] = {&g_697};
static uint32_t g_1315 = 1UL;



static int16_t  func_1(void);
static union U1 * func_2(int16_t  p_3, union U1 * p_4, union U1 * p_5);
static int32_t * const  func_28(int8_t  p_29, union U1 * p_30, int32_t  p_31);
static int64_t  func_34(union U1 * p_35, union U1 * p_36);
static union U1 * func_37(const union U2  p_38, union U1 ** p_39, union U1 ** const  p_40);
static union U1 ** func_42(union U1 * p_43, int8_t  p_44);
static uint64_t  func_45(uint8_t  p_46, union U1 * p_47, int32_t  p_48);
static int64_t  func_49(union U1 ** p_50, union U1 * p_51);




static int16_t  func_1(void)
{ 
    int32_t l_11 = 0xB4E94F93L;
    union U1 *l_12 = &g_13[0];
    union U1 *l_17 = &g_13[0];
    union U1 **l_16[7] = {&l_12,&l_17,&l_17,&l_12,&l_17,&l_17,&l_12};
    int16_t *l_20[2][4] = {{&g_21,(void*)0,&g_21,(void*)0},{&g_21,(void*)0,&g_21,(void*)0}};
    int32_t l_22 = 0x3260389AL;
    uint64_t l_23 = 0xDF8ABFF5ECCE35A1LL;
    int i, j;
    (*g_1165) = func_2(((safe_unary_minus_func_int64_t_s(((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(l_11, 15)) , (l_12 != l_12)), (safe_mod_func_int16_t_s_s(1L, (g_21 = (((g_13[0].f0 >= (l_22 &= ((g_18 = (void*)0) != (void*)0))) , 5L) || 0xEA2C39D5L)))))) <= l_23))) , g_13[0].f0), &g_19, &g_13[0]);
    return l_11;
}



static union U1 * func_2(int16_t  p_3, union U1 * p_4, union U1 * p_5)
{ 
    uint32_t l_462 = 0xF18A7E93L;
    union U1 *l_511 = &g_13[0];
    union U1 ** const l_510 = &l_511;
    uint8_t l_1235 = 0UL;
    int32_t l_1251 = 0xADDE6C06L;
    int32_t l_1252 = (-7L);
    int32_t l_1253 = 4L;
    int32_t l_1254[5][2] = {{0xCDB0E161L,1L},{0xCDB0E161L,1L},{0xCDB0E161L,1L},{0xCDB0E161L,1L},{0xCDB0E161L,1L}};
    int32_t l_1255 = 0x84385169L;
    int8_t l_1256 = 0L;
    int8_t l_1257[4][1][5] = {{{1L,1L,0xF9L,5L,0xF9L}},{{1L,1L,0xF9L,5L,0xF9L}},{{1L,1L,0xF9L,5L,0xF9L}},{{1L,1L,0xF9L,5L,0xF9L}}};
    int16_t l_1261[5];
    uint64_t l_1262 = 1UL;
    const union U2 l_1265[2][5][7] = {{{{18446744073709551615UL},{3UL},{0x1799A7ADFA8EA23ALL},{4UL},{0xE1444AD4F6EB05B0LL},{0xA5C5DC43F2603276LL},{0x8F1E864ECBA9B781LL}},{{0xB64D61B10D523FE7LL},{0x59E648583740220FLL},{0x8F1E864ECBA9B781LL},{0x1799A7ADFA8EA23ALL},{4UL},{0x1799A7ADFA8EA23ALL},{0x8F1E864ECBA9B781LL}},{{0UL},{0UL},{7UL},{18446744073709551615UL},{0x8F1E864ECBA9B781LL},{1UL},{4UL}},{{18446744073709551613UL},{4UL},{9UL},{3UL},{0x4E584A80DA255D88LL},{18446744073709551608UL},{18446744073709551615UL}},{{18446744073709551615UL},{1UL},{0x3D85675404F25F04LL},{0xC24C8B3461496BBDLL},{0x8F1E864ECBA9B781LL},{0x4E584A80DA255D88LL},{0x9E6451A7342AE110LL}}},{{{0x3D85675404F25F04LL},{0x013D00C541C30D22LL},{18446744073709551608UL},{9UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{1UL},{0x59E648583740220FLL},{0xA5C5DC43F2603276LL},{0x59E648583740220FLL},{1UL},{18446744073709551613UL},{4UL}},{{0xB64D61B10D523FE7LL},{3UL},{0x4E584A80DA255D88LL},{0xDB49A283FB9D0E11LL},{3UL},{7UL},{0xA5C5DC43F2603276LL}},{{0x91933F0915C41762LL},{0x013D00C541C30D22LL},{4UL},{0xC24C8B3461496BBDLL},{0x1799A7ADFA8EA23ALL},{3UL},{18446744073709551608UL}},{{0xB64D61B10D523FE7LL},{0xDB49A283FB9D0E11LL},{0UL},{0xE1444AD4F6EB05B0LL},{0x91933F0915C41762LL},{9UL},{0x503CB9FDCC6D62AALL}}}};
    struct S0 ***l_1270 = &g_1037;
    struct S0 **l_1271 = &g_1038;
    int32_t *l_1272 = &l_1252;
    int64_t *l_1273 = &g_124;
    int32_t *l_1274 = (void*)0;
    int32_t *l_1275 = &g_160;
    const int32_t l_1357[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1261[i] = 0xE15CL;
lbl_1370:
    for (g_21 = 0; (g_21 != 9); ++g_21)
    { 
        uint16_t l_32 = 4UL;
        union U1 *l_33 = &g_19;
        int32_t l_1234 = (-1L);
        int32_t *l_1247 = (void*)0;
        int32_t l_1248[3];
        int32_t *l_1249 = &g_171[2][4];
        int32_t *l_1250[2];
        uint16_t l_1258 = 0x578FL;
        int i;
        for (i = 0; i < 3; i++)
            l_1248[i] = (-1L);
        for (i = 0; i < 2; i++)
            l_1250[i] = &g_171[4][0];
        for (p_3 = 10; (p_3 == 19); p_3++)
        { 
            const union U2 l_41 = {7UL};
            union U1 *l_731 = &g_13[0];
            int32_t **l_1222 = &g_420;
            int32_t *l_1223 = &g_171[0][4];
            int32_t *l_1224 = &g_214.f2;
            int32_t *l_1225 = &g_171[0][2];
            int32_t *l_1226 = &g_160;
            int32_t *l_1227 = &g_160;
            int32_t *l_1228 = &g_214.f2;
            int32_t *l_1229 = (void*)0;
            int32_t *l_1230 = (void*)0;
            int32_t *l_1231 = &g_214.f2;
            int32_t *l_1232 = &g_214.f2;
            int32_t *l_1233[3][1][1];
            const int8_t *l_1241 = (void*)0;
            const int8_t **l_1240 = &l_1241;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1233[i][j][k] = &g_214.f2;
                }
            }
        }
        l_1258--;
        l_1262--;
    }
    (*l_1275) &= (((l_1265[0][2][4] , p_3) != (l_1253 &= (safe_rshift_func_uint16_t_u_u(((l_1254[0][0] = (((((****g_888) &= ((l_1261[3] ^ p_3) < ((*l_1273) = (safe_add_func_int32_t_s_s(((*l_1272) = (((*l_1270) = &g_1038) != (p_3 , l_1271))), 0x3FDF7DC0L))))) || p_3) || p_3) , (*l_1272))) ^ 0x21ED07BFL), 0)))) || (*l_1272));
    if (((*l_1272) < (*l_1272)))
    { 
        uint32_t l_1308 = 9UL;
        struct S0 *l_1321 = (void*)0;
        int32_t l_1333 = 0xA9451B4EL;
        const int32_t **l_1348[3][4][6] = {{{&g_1156,(void*)0,&g_1156,&g_1156,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1156,&g_1156},{(void*)0,&g_1156,&g_1156,&g_1156,(void*)0,&g_1156},{&g_1156,(void*)0,&g_1156,&g_1156,(void*)0,&g_1156}},{{&g_1156,&g_1156,&g_1156,(void*)0,&g_1156,&g_1156},{&g_1156,(void*)0,&g_1156,&g_1156,(void*)0,&g_1156},{&g_1156,(void*)0,&g_1156,&g_1156,&g_1156,&g_1156},{&g_1156,(void*)0,(void*)0,(void*)0,&g_1156,&g_1156}},{{&g_1156,&g_1156,(void*)0,(void*)0,&g_1156,&g_1156},{&g_1156,&g_1156,(void*)0,&g_1156,&g_1156,&g_1156},{&g_1156,&g_1156,(void*)0,&g_1156,&g_1156,(void*)0},{&g_1156,&g_1156,(void*)0,(void*)0,&g_1156,&g_1156}}};
        int i, j, k;
        for (g_866 = 0; (g_866 > (-2)); --g_866)
        { 
            int64_t **l_1278 = (void*)0;
            int32_t *l_1279 = &l_1255;
            uint64_t **** const l_1320[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
        }
        if (l_1253)
            goto lbl_1370;
    }
    else
    { 
        union U1 *l_1371 = (void*)0;
        return l_1371;
    }
    return (**g_1164);
}



static int32_t * const  func_28(int8_t  p_29, union U1 * p_30, int32_t  p_31)
{ 
    int64_t l_1214 = (-1L);
    int32_t * const l_1221 = &g_214.f2;
    for (g_866 = 0; (g_866 >= (-22)); g_866--)
    { 
        struct S0 ** const l_1217 = &g_1038;
        struct S0 **l_1218 = (void*)0;
        int32_t l_1219 = (-1L);
        int32_t *l_1220 = &g_214.f2;
        if (p_31)
            break;
        if (p_31)
            break;
        if (l_1214)
            break;
        l_1219 = (((safe_lshift_func_uint8_t_u_s(((void*)0 != &p_29), 6)) < (0xF4C146C25751A7B4LL <= ((****g_888) = l_1214))) <= (l_1217 != l_1218));
        l_1220 = &l_1219;
    }
    return l_1221;
}



static int64_t  func_34(union U1 * p_35, union U1 * p_36)
{ 
    int32_t *l_734[1][3][6] = {{{&g_171[4][0],&g_171[4][0],&g_171[4][1],&g_171[4][0],&g_171[4][1],&g_171[4][0]},{&g_171[4][1],&g_171[4][0],&g_160,&g_214.f2,&g_214.f2,&g_160},{&g_171[4][1],&g_171[4][1],&g_214.f2,&g_171[4][0],(void*)0,&g_171[4][0]}}};
    int8_t l_736 = 0x97L;
    uint8_t l_737 = 0x49L;
    uint32_t l_742 = 18446744073709551609UL;
    int32_t *l_759 = &g_160;
    int32_t l_787 = 0x3A0D40E9L;
    uint64_t ***l_792 = &g_254[0];
    int64_t l_797 = 0x09E0690A56E13AE2LL;
    int64_t ***l_798 = (void*)0;
    int64_t l_840 = 0x16F32396D397A774LL;
    uint64_t ** const **l_900 = (void*)0;
    const struct S0 l_933[4] = {{0xD5E09B2F8C73389ALL,0x2537CB7DL,0L,0xBEB6L,1UL,0xAFFECCEAL,0x7CF84959L,-2L},{0xD5E09B2F8C73389ALL,0x2537CB7DL,0L,0xBEB6L,1UL,0xAFFECCEAL,0x7CF84959L,-2L},{0xD5E09B2F8C73389ALL,0x2537CB7DL,0L,0xBEB6L,1UL,0xAFFECCEAL,0x7CF84959L,-2L},{0xD5E09B2F8C73389ALL,0x2537CB7DL,0L,0xBEB6L,1UL,0xAFFECCEAL,0x7CF84959L,-2L}};
    uint32_t l_964 = 0xD71B32A7L;
    int32_t l_1079 = (-8L);
    uint16_t *l_1083 = &g_154[1];
    const uint16_t l_1205 = 0x0337L;
    int i, j, k;
    for (g_214.f7 = (-26); (g_214.f7 >= 16); g_214.f7 = safe_add_func_int64_t_s_s(g_214.f7, 9))
    { 
        int32_t *l_735[5];
        int32_t l_743[2];
        const union U2 l_747[4] = {{0xD816DC5A01CE5069LL},{0xD816DC5A01CE5069LL},{0xD816DC5A01CE5069LL},{0xD816DC5A01CE5069LL}};
        int32_t l_756 = 1L;
        union U1 ** const l_758 = &g_18;
        uint16_t l_860[7];
        int64_t *l_881 = &g_124;
        uint32_t l_914[1][4];
        int32_t **l_929 = &l_759;
        int32_t ***l_928 = &l_929;
        uint8_t l_959 = 0UL;
        struct S0 *l_967 = (void*)0;
        uint32_t *l_1062 = (void*)0;
        uint32_t **l_1061[1][1][5];
        uint32_t l_1089 = 0x4AD5AF14L;
        uint32_t l_1129 = 0x39673371L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_735[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_743[i] = 0x560169BAL;
        for (i = 0; i < 7; i++)
            l_860[i] = 0x75F6L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_914[i][j] = 4UL;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_1061[i][j][k] = &l_1062;
            }
        }
        l_735[2] = l_734[0][1][4];
        l_737++;
    }
    for (g_355 = 0; (g_355 <= 3); g_355 += 1)
    { 
        uint16_t **l_1132 = &l_1083;
        int32_t l_1135 = 0L;
        int32_t l_1136 = 0x87CE3664L;
        int32_t l_1137 = 0x81F4A8A4L;
        int32_t l_1138 = 0xBAA8D180L;
        int32_t l_1139 = 4L;
        int32_t l_1140 = 0x1394D3E8L;
        int32_t l_1141 = 1L;
        int32_t l_1142[3];
        int16_t l_1144 = 0x59B9L;
        union U1 ***l_1170[1];
        uint32_t l_1206 = 0x19F12F15L;
        int32_t *** const *l_1207[1][6] = {{&g_697,&g_697,&g_697,&g_697,&g_697,&g_697}};
        int32_t **l_1211 = &l_734[0][2][4];
        int32_t ***l_1210 = &l_1211;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1142[i] = (-9L);
        for (i = 0; i < 1; i++)
            l_1170[i] = (void*)0;
        for (l_736 = 0; (l_736 <= 5); l_736 += 1)
        { 
            uint16_t ***l_1133 = &l_1132;
            int32_t l_1134[2][2][1] = {{{0xB3E566BFL},{0L}},{{0xB3E566BFL},{0L}}};
            int64_t l_1143 = 0xC99A1FF23FDABD05LL;
            uint32_t l_1145[7];
            union U1 ***l_1167[2];
            int16_t **l_1172 = (void*)0;
            const int32_t l_1197 = 0x58739C79L;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1145[i] = 0xA574DDF7L;
            for (i = 0; i < 2; i++)
                l_1167[i] = &g_1165;
            (*l_1133) = l_1132;
            l_1145[1]--;
            for (g_214.f2 = 4; (g_214.f2 >= 0); g_214.f2 -= 1)
            { 
                int32_t **l_1169 = &g_650;
                int i;
                if (((g_266 , (((*p_36) = (*p_36)) , (safe_rshift_func_int16_t_s_u((&g_254[g_355] != (void*)0), 1)))) || (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0xA31D8C77L, (safe_unary_minus_func_int16_t_s(g_624[g_214.f2])))), ((*l_1083) ^= (l_1137 , g_214.f6))))))
                { 
                    const int32_t *l_1155 = &l_1138;
                    g_1156 = l_1155;
                    (*l_759) &= 2L;
                    l_1134[0][0][0] = (*g_1156);
                    if ((*l_1155))
                        break;
                    if (g_624[g_214.f2])
                        continue;
                }
                else
                { 
                    union U1 ****l_1166 = &g_1164;
                    (*l_759) |= (((safe_unary_minus_func_uint32_t_u((safe_add_func_int16_t_s_s(0L, (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_1141, g_624[g_214.f2])), (((*l_1166) = g_1164) != l_1167[1]))))))) , (~((**g_649) , ((l_1169 == (void*)0) <= 4294967295UL)))) < l_1145[4]);
                }
            }
            (*l_759) ^= g_624[l_736];
            for (l_1079 = 3; (l_1079 >= 0); l_1079 -= 1)
            { 
                uint16_t l_1171 = 8UL;
                int32_t l_1198 = 3L;
                l_1171 = (l_1170[0] != &g_1165);
                if ((&g_1013 == l_1172))
                { 
                    uint32_t *l_1180 = &g_214.f6;
                    int16_t *l_1192[1][3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1192[i][j] = (void*)0;
                    }
                    l_1198 ^= (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_266 , (~(safe_mod_func_int32_t_s_s(((*l_759) = g_170[l_736][l_1079][(l_1079 + 1)]), ((*l_1180)++))))), 0)), (safe_sub_func_int16_t_s_s(l_1145[g_355], (((***l_792) |= (((+((safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((g_214.f3 = g_624[l_736]), l_1171)) == ((-1L) && (safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((l_1197 & l_1171) ^ l_1137), 0xC7FB4FD10BE16E1CLL)), g_170[l_736][l_1079][(l_1079 + 1)])))), 0xAB0D5C29ED5C1C4BLL)), g_624[1])) & l_1135)) >= l_1143) , l_1142[1])) & 0L)))));
                    if (l_1140)
                        continue;
                    return l_1134[1][0][0];
                }
                else
                { 
                    int8_t l_1204 = 0L;
                    int32_t *** const **l_1208 = &l_1207[0][0];
                    int32_t **l_1209 = &l_734[0][1][4];
                    (*l_1209) = ((safe_mul_func_uint16_t_u_u((g_1201[0] != ((*l_1208) = (l_1197 , (((l_1198 , (((1L ^ (*l_759)) == l_1134[0][1][0]) == (safe_add_func_int16_t_s_s((l_1198 > l_1204), l_1205)))) < l_1206) , l_1207[0][0])))), l_1171)) , &l_1134[1][0][0]);
                    (*l_759) ^= l_1134[0][0][0];
                }
            }
        }
        (*l_759) = ((void*)0 == l_1210);
    }
    return (*l_759);
}



static union U1 * func_37(const union U2  p_38, union U1 ** p_39, union U1 ** const  p_40)
{ 
    int32_t **l_513 = &g_420;
    int32_t ***l_512 = &l_513;
    int32_t l_514 = 1L;
    const struct S0 l_515 = {3UL,0x0117CEC9L,0x765399F3L,0L,1UL,6L,0x8D9228FCL,-8L};
    const uint8_t *l_528 = &g_109[0][2][0];
    uint8_t *l_532 = &g_109[3][2][0];
    int16_t l_537 = 0xB963L;
    int32_t *l_539 = &g_166;
    int32_t l_567 = 0x47802D02L;
    uint64_t l_606 = 0xC204FAF8020E6DFELL;
    uint16_t *l_677[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_691 = 0xD9AD32499B50FA0BLL;
    int32_t ****l_698[2][2][4] = {{{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512}},{{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512}}};
    int i, j, k;
    l_514 = (((((g_170[5][3][4] , &g_420) == ((*l_512) = &g_420)) , p_38.f0) && 0xCECD7A0EF8EEAB73LL) , (-8L));
    return &g_13[0];
}



static union U1 ** func_42(union U1 * p_43, int8_t  p_44)
{ 
    int32_t *l_483 = &g_214.f2;
    int32_t *l_484 = &g_171[3][1];
    int32_t l_485 = 0xAD1F59B6L;
    int32_t *l_486 = (void*)0;
    int32_t *l_487 = &g_214.f2;
    int32_t *l_488 = &g_171[0][5];
    int32_t *l_489[3][7] = {{&g_171[4][0],&g_171[4][0],(void*)0,&g_160,(void*)0,&g_171[4][0],&g_171[4][0]},{&g_171[4][0],&g_171[4][0],(void*)0,&g_160,(void*)0,&g_171[4][0],&g_171[4][0]},{&g_171[4][0],&g_171[4][0],(void*)0,&g_160,(void*)0,&g_171[4][0],&g_160}};
    uint16_t l_490 = 0x79FDL;
    int8_t *l_495[7];
    uint8_t *l_506 = &g_109[4][1][0];
    int i, j;
    for (i = 0; i < 7; i++)
        l_495[i] = (void*)0;
    --l_490;
    g_160 |= (g_167 == (safe_sub_func_int8_t_s_s((p_44 = p_44), (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*l_484) = ((*l_506) &= (*l_488))), (g_434[0] | g_214.f7))), (safe_unary_minus_func_uint64_t_u((((safe_sub_func_uint16_t_u_u(((void*)0 == &l_490), 0UL)) , g_214.f6) , (*l_483)))))), 0x325FF860DD997315LL)), 1)) == 1UL), g_167)))));
    return &g_18;
}



static uint64_t  func_45(uint8_t  p_46, union U1 * p_47, int32_t  p_48)
{ 
    int32_t *l_463[6] = {&g_160,&g_160,&g_160,&g_160,&g_160,&g_160};
    const struct S0 l_464 = {18446744073709551609UL,0x3B7070A0L,-7L,4L,0x0010058EC4570C23LL,0xE3570C58L,4294967290UL,0x9BL};
    union U2 l_472 = {0xDCE8454D5518B215LL};
    uint8_t *l_473[5][7];
    int16_t **l_474[3];
    int64_t *l_477 = (void*)0;
    int64_t *l_478 = &g_124;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            l_473[i][j] = &g_109[4][2][0];
    }
    for (i = 0; i < 3; i++)
        l_474[i] = (void*)0;
    g_160 ^= (-4L);
    g_171[4][0] |= ((l_464 , (safe_mod_func_int64_t_s_s((0L < ((((safe_mul_func_uint8_t_u_u((p_46 = (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u(p_48, (l_472 , 0x16L)))))), 0xECL)) & ((g_434[3] != g_72[4]) , 0x78CFBE9BL)) , l_474[1]) != l_474[1])), p_48))) <= p_48);
    g_171[4][0] |= ((safe_mul_func_int16_t_s_s(((((*l_478) = p_48) | 0x9D8EDF34D92C1AE4LL) >= (0x38167448L != ((safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(0x901FL, p_46)) ^ (l_473[0][4] == l_473[0][4])), 0x92AA5B451EF16127LL)) == (*g_369)))), g_21)) >= p_46);
    return p_46;
}



static int64_t  func_49(union U1 ** p_50, union U1 * p_51)
{ 
    int32_t l_56 = (-3L);
    int8_t l_66 = 9L;
    int64_t *l_67[1][7];
    int32_t l_69 = 0xA4ED9E62L;
    union U1 **l_70 = &g_18;
    uint64_t *l_71 = &g_72[5];
    uint64_t l_86 = 0xE8BE9C2C51C80F86LL;
    int16_t *l_112 = &g_21;
    int32_t l_123 = 0x609A124DL;
    int32_t l_162 = 0x8A32CF90L;
    int32_t l_176 = 0xEF565022L;
    uint64_t l_209 = 0xBCB859E3981A3279LL;
    uint32_t l_226[2];
    union U2 l_313 = {0x4227976AB2E0A6E4LL};
    int32_t l_317 = 0xE3E7ED85L;
    uint64_t l_321[7][2] = {{0x54A7E6BF6D669E67LL,0x54A7E6BF6D669E67LL},{0x54A7E6BF6D669E67LL,0x54A7E6BF6D669E67LL},{0x54A7E6BF6D669E67LL,0x54A7E6BF6D669E67LL},{0x54A7E6BF6D669E67LL,0x54A7E6BF6D669E67LL},{0x54A7E6BF6D669E67LL,0x54A7E6BF6D669E67LL},{0x54A7E6BF6D669E67LL,0x54A7E6BF6D669E67LL},{0x54A7E6BF6D669E67LL,0x54A7E6BF6D669E67LL}};
    uint64_t l_343[3];
    struct S0 l_374 = {18446744073709551615UL,1UL,0xA0247FC8L,0L,0x029325FFDFE8A7A9LL,8L,4294967287UL,-4L};
    const int64_t *l_399 = &g_169;
    const int64_t **l_398 = &l_399;
    uint32_t l_437 = 3UL;
    uint16_t l_454 = 0xEB38L;
    int32_t *l_461 = &g_171[4][0];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_67[i][j] = &g_68;
    }
    for (i = 0; i < 2; i++)
        l_226[i] = 4294967295UL;
    for (i = 0; i < 3; i++)
        l_343[i] = 0x25C51A138A96B655LL;
    if ((((g_21 && g_21) ^ ((safe_lshift_func_int8_t_s_s((((*l_71) |= (&p_51 == ((safe_add_func_int32_t_s_s((l_56 | (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((l_69 = (((safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((l_66 >= g_19.f0))), ((l_56 || l_56) > 0xC25AL))), g_21)) & 65535UL) > l_66)) ^ 4UL), g_68)) < g_19.f0), g_13[0].f0))), l_66)) , l_70))) & l_56), l_56)) == 0x64C6L)) || 0x72949029496125B6LL))
    { 
        const int64_t l_79 = (-10L);
        uint64_t *l_89 = &l_86;
        uint32_t l_90 = 4294967295UL;
        int16_t *l_97 = &g_21;
        int32_t l_119 = 1L;
        int32_t l_125 = 0x12A6D494L;
        int32_t l_152 = 0xFBC4F1BBL;
        int32_t l_153 = 0xDCF4DCFDL;
        uint32_t l_172 = 0x91F21F2EL;
        int32_t l_334 = 0x2755C9BDL;
        const uint8_t l_341 = 250UL;
        uint32_t *l_366 = (void*)0;
        const union U1 *l_376 = (void*)0;
        const union U1 **l_375 = &l_376;
        uint32_t l_383 = 0x8635BDADL;
        int64_t **l_401 = &l_67[0][0];
        union U1 l_404 = {4294967286UL};
        int32_t l_429 = 3L;
        int32_t l_430[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_430[i][j] = 1L;
        }
        if ((safe_mod_func_int64_t_s_s(((l_90 = ((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(l_79, (safe_mod_func_int64_t_s_s(l_79, (((((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_79, (((l_86 , (safe_lshift_func_int16_t_s_u((5UL & ((*l_71) = 7UL)), ((void*)0 != l_89)))) | l_79) == l_79))), 1UL)) && l_79) || 253UL) && l_69) || l_79) != g_68) | g_68))))) || 1L), l_66)) , l_86)) | 0xC885L), l_79)))
        { 
            int16_t **l_98 = &l_97;
            uint16_t *l_103[7][7][3] = {{{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104}},{{&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{(void*)0,&g_104,&g_104}},{{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,(void*)0}},{{&g_104,&g_104,(void*)0},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104}},{{&g_104,&g_104,&g_104},{&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104}},{{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,(void*)0,&g_104},{&g_104,&g_104,&g_104}},{{&g_104,(void*)0,(void*)0},{&g_104,&g_104,(void*)0},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104},{&g_104,&g_104,&g_104}}};
            union U2 l_107[1][2] = {{{0xD98BCDAFCE287669LL},{0xD98BCDAFCE287669LL}}};
            int64_t **l_108 = &l_67[0][0];
            uint8_t *l_110 = &g_111[0];
            int32_t l_120 = 0x5B69D60FL;
            int32_t l_121[7][5][1] = {{{0x502624D5L},{0xC15673F5L},{3L},{3L},{0xC15673F5L}},{{0x502624D5L},{0x5CDAFBE7L},{0xA86A1919L},{0xCED7563FL},{0xA86A1919L}},{{0x5CDAFBE7L},{0x502624D5L},{0xC15673F5L},{3L},{3L}},{{0xC15673F5L},{0x502624D5L},{0x5CDAFBE7L},{0xA86A1919L},{0xCED7563FL}},{{(-1L)},{0xCED7563FL},{0xC15673F5L},{0xA86A1919L},{6L}},{{6L},{0xA86A1919L},{0xC15673F5L},{0xCED7563FL},{(-1L)}},{{0xFC5DF5A5L},{(-1L)},{0xCED7563FL},{0xC15673F5L},{0xA86A1919L}}};
            uint16_t l_177 = 0x6309L;
            struct S0 l_215 = {9UL,0xD77C293DL,0x1A31060EL,-10L,0x57D04D9EFEC6CEDDLL,-1L,1UL,-1L};
            int8_t *l_261[7][1];
            uint16_t **l_285 = &l_103[0][0][1];
            uint16_t ***l_284[5];
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_261[i][j] = &l_66;
            }
            for (i = 0; i < 5; i++)
                l_284[i] = &l_285;
lbl_274:
            if (((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(0xE7A9L, (((*l_98) = l_97) != ((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((0x84B6L >= (l_69 = g_68)), (((*l_110) = (g_109[0][2][0] |= ((safe_mul_func_uint16_t_u_u(((((l_107[0][0] , &g_68) == ((*l_108) = &g_68)) , &g_18) == (void*)0), l_79)) && g_72[2]))) == g_72[0]))), l_56)) , l_112)))), 1UL)))))) >= l_90))
            { 
                int32_t *l_113 = &l_69;
                int32_t l_122 = 1L;
                uint64_t **l_138[2][3][2] = {{{&l_71,(void*)0},{&l_71,&l_71},{(void*)0,&l_71}},{{&l_71,(void*)0},{&l_71,&l_71},{(void*)0,&l_71}}};
                int32_t l_158[6][6][6] = {{{0x3DE1EFC3L,0L,(-1L),0x7E6B11A4L,0xFB4B72DBL,0x1C4FB29EL},{(-1L),3L,9L,0x6761F402L,1L,0xCEB7EDC9L},{0xFB4B72DBL,(-9L),0xC962BC75L,4L,(-10L),0x16AA09A3L},{0x16AA09A3L,0x910CF37CL,(-1L),1L,0x9CDCE665L,0xAE527918L},{0xD642D507L,9L,(-1L),(-1L),(-1L),(-1L)},{0x0F00B84BL,(-1L),0x3DE1EFC3L,0x358F534BL,(-1L),(-1L)}},{{0x910CF37CL,0x6761F402L,0x6761F402L,0x910CF37CL,(-1L),(-9L)},{0xAE527918L,(-10L),0L,1L,0L,0x3DD90FB3L},{(-9L),0x16AA09A3L,0x47E08CFFL,0x9CDCE665L,0L,0xC962BC75L},{2L,(-10L),3L,(-1L),(-1L),(-1L)},{0x87BC80A4L,0x6761F402L,2L,(-1L),(-1L),(-1L)},{1L,(-1L),1L,3L,(-1L),0x47E08CFFL}},{{0L,9L,0L,0x1C4FB29EL,0x9CDCE665L,(-1L)},{(-7L),0x910CF37CL,0xCEB7EDC9L,0L,(-10L),0L},{4L,(-9L),4L,(-1L),1L,9L},{(-1L),3L,1L,(-1L),0xFB4B72DBL,0x0F00B84BL},{0xC962BC75L,0L,(-9L),(-1L),0xCEB7EDC9L,(-1L)},{(-1L),0x7E6B11A4L,0xD642D507L,(-1L),(-1L),0L}},{{4L,0xAE527918L,(-1L),0L,0x7E6B11A4L,1L},{(-7L),0xFB4B72DBL,0x16AA09A3L,0x1C4FB29EL,(-1L),0x358F534BL},{0L,0x3DD90FB3L,0L,3L,0L,0x9CDCE665L},{1L,(-7L),0L,(-1L),(-1L),0L},{0x87BC80A4L,0x87BC80A4L,(-1L),(-1L),0x3DE1EFC3L,(-1L)},{2L,(-1L),0xFB4B72DBL,0x9CDCE665L,4L,(-1L)}},{{(-9L),2L,0xFB4B72DBL,1L,0x87BC80A4L,(-1L)},{0xAE527918L,1L,(-1L),0x910CF37CL,1L,0L},{0x910CF37CL,1L,0L,0x358F534BL,(-1L),0x9CDCE665L},{0x0F00B84BL,0x47E08CFFL,(-1L),0x10705393L,1L,(-9L)},{1L,(-1L),0x9CDCE665L,0L,0xAE527918L,0x358F534BL},{0x9CDCE665L,(-1L),(-10L),(-1L),(-10L),(-1L)}},{{0L,1L,1L,1L,0x358F534BL,0xD642D507L},{0x16AA09A3L,0x3DD90FB3L,0xFB4B72DBL,0x910CF37CL,1L,(-1L)},{(-1L),0x3DD90FB3L,0xCEB7EDC9L,(-1L),0x358F534BL,1L},{0L,1L,(-1L),1L,(-10L),0x69DD9846L},{1L,(-1L),0x7E6B11A4L,0L,0xAE527918L,0x16AA09A3L},{1L,(-1L),(-1L),(-1L),1L,4L}}};
                uint64_t ** const l_227 = &l_71;
                int32_t **l_230 = &l_113;
                int8_t *l_239[4] = {&l_215.f7,&l_215.f7,&l_215.f7,&l_215.f7};
                int32_t *l_240 = &l_162;
                int i, j, k;
                (*l_113) ^= l_79;
                for (g_68 = 0; (g_68 == (-13)); g_68--)
                { 
                    int32_t *l_116 = &l_69;
                    int32_t *l_117 = &l_69;
                    int32_t *l_118[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_118[i] = &l_69;
                    g_126--;
                    return g_13[0].f0;
                }
                if (((&g_72[4] != &g_72[5]) < (safe_div_func_uint32_t_u_u((+((((*l_113) || l_125) < ((*l_108) == &g_68)) , (safe_mod_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((l_89 = &l_86) != (void*)0) ^ 0xD196261EL), 4)), 65531UL)) || (*l_113)) || 0x7E1E0ADEL), l_121[4][0][0])))), l_86))))
                { 
                    int32_t *l_139 = &l_123;
                    int32_t *l_140 = &l_122;
                    int32_t *l_141 = &l_121[6][4][0];
                    int32_t *l_142 = &l_69;
                    int32_t *l_143 = (void*)0;
                    int32_t *l_144 = &l_122;
                    int32_t *l_145 = &l_69;
                    int32_t *l_146 = &l_120;
                    int32_t *l_147 = (void*)0;
                    int32_t l_148 = 0L;
                    int32_t *l_149[6] = {&l_121[6][4][0],(void*)0,&l_121[6][4][0],&l_121[6][4][0],(void*)0,&l_121[6][4][0]};
                    int8_t l_150 = 0x0CL;
                    int i;
                    --g_154[1];
                }
                else
                { 
                    int32_t *l_157[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_157[i] = &l_153;
                    --g_163;
                    ++l_172;
                }
                for (l_86 = 0; (l_86 <= 0); l_86 += 1)
                { 
                    int32_t *l_175[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_175[i] = &l_69;
                    l_177--;
                    (*l_113) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((g_126 = (l_209 = (safe_mod_func_int32_t_s_s(g_72[(l_86 + 5)], (safe_rshift_func_uint8_t_u_u((((+(safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((!((+(safe_lshift_func_uint16_t_u_u(g_124, (((-7L) && (((*l_110) = g_109[0][0][0]) >= (safe_sub_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((((l_119 = (l_125 = (g_154[0] = (safe_sub_func_uint16_t_u_u(3UL, (safe_add_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((*l_113) && ((((l_153 = l_162) || 0xE56635AC3371AC1DLL) < l_107[0][0].f0) >= l_123)), g_72[5])), 1L)) < g_151) ^ (*l_113)) <= 0x2B5224E5L), 0xF6A8L))))))) || (*l_113)) > g_170[4][0][1]) && 0xA1L), g_104)) <= 1L), l_66)))) && (*l_113))))) <= g_126)), 0x4583L)), g_19.f0))) <= l_120) , 0xACL), 4)))))), (*l_113))), l_90));
                    g_160 &= (safe_add_func_int8_t_s_s((l_79 > (safe_div_func_uint64_t_u_u(((g_214 , (l_215 , (-10L))) & (((safe_sub_func_int32_t_s_s(l_215.f1, l_119)) ^ ((((*l_108) = &g_68) == &g_124) > (*l_113))) != l_123)), l_152))), g_169));
                    if (g_154[0])
                        continue;
                    (*l_113) = ((((0UL >= ((safe_mul_func_int16_t_s_s((l_215.f6 | ((safe_mul_func_int16_t_s_s((l_119 < (l_215.f7 || 0xE631L)), ((l_119 >= g_167) && l_226[0]))) & g_159)), g_168)) != 3UL)) | g_154[0]) , &l_89) != l_227);
                }
                (*l_240) = (((safe_mul_func_uint8_t_u_u((((*l_230) = &l_176) == &l_152), (safe_lshift_func_int16_t_s_u((-7L), ((g_168 &= (l_121[6][4][0] = (((g_124 & ((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((l_153 = (0xFCEAAE32F378EE98LL || (g_214.f5 < ((l_215.f3 < l_119) || l_119)))), l_215.f5)), g_21)) != l_176)) != 1L) || 0L))) , l_209))))) == (-2L)) > l_107[0][0].f0);
            }
            else
            { 
                int32_t **l_241 = (void*)0;
                int32_t *l_243 = &l_176;
                int32_t **l_242 = &l_243;
                (*l_242) = &l_176;
                (**l_242) = (g_154[1] != (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((0x866CF3013D53795DLL ^ (*l_243)), (l_123 >= ((safe_mul_func_uint8_t_u_u(((*l_110) = (g_124 >= ((g_151 , (safe_sub_func_int64_t_s_s((g_109[0][2][0] > l_56), l_209))) != g_21))), l_215.f2)) != g_124)))), l_226[0])));
                for (g_214.f2 = 0; (g_214.f2 > 22); ++g_214.f2)
                { 
                    uint64_t ***l_256 = (void*)0;
                    uint64_t ***l_257 = (void*)0;
                    uint64_t ***l_258 = &g_254[3];
                    int32_t l_259 = 1L;
                    int32_t *l_260[3][6] = {{&l_152,&l_123,&l_152,(void*)0,&l_123,(void*)0},{&l_152,&l_121[0][1][0],(void*)0,(void*)0,&l_121[0][1][0],&l_152},{&l_152,&l_152,(void*)0,(void*)0,&l_152,(void*)0}};
                    int i, j;
                    (*l_258) = g_254[3];
                    if (l_259)
                        break;
                    l_260[0][4] = (void*)0;
                }
            }
            if (((((l_120 = l_226[1]) , (l_107[0][0].f0 & (safe_add_func_uint64_t_u_u(l_215.f3, (safe_div_func_uint16_t_u_u(((g_266 , 0x2A369F491A405F35LL) & 18446744073709551613UL), (g_214.f3 = l_123))))))) , l_153) != g_163))
            { 
                int32_t *l_268 = &l_119;
                int32_t **l_267 = &l_268;
                const uint16_t *l_270 = (void*)0;
                const uint16_t **l_269 = &l_270;
                int32_t l_273 = 0x34F48710L;
                if (((((*l_267) = &g_171[3][5]) == &l_176) , g_111[0]))
                { 
                    const uint16_t ***l_271 = &l_269;
                    int32_t *l_272[5][4] = {{&l_69,&l_69,&l_69,&l_69},{&l_69,&l_69,&l_69,&l_69},{&l_69,&l_69,&l_69,&l_69},{&l_69,&l_69,&l_69,&l_69},{&l_69,&l_69,&l_69,&l_69}};
                    int i, j;
                    (*l_271) = l_269;
                    g_160 &= (l_273 ^= (**l_267));
                }
                else
                { 
                    if (g_214.f6)
                        goto lbl_274;
                }
            }
            else
            { 
                int32_t l_275 = 0xAAE944D6L;
                int32_t l_276 = 0xDEA9584EL;
                int32_t l_277 = (-5L);
                int32_t *l_300 = &g_160;
                int32_t *l_305 = &g_214.f2;
                int32_t *l_306 = &l_176;
                uint32_t *l_314 = &l_215.f6;
                (*l_306) ^= (l_275 & (((++g_126) , (safe_sub_func_int32_t_s_s(((*l_305) = (safe_mul_func_uint8_t_u_u((l_284[1] != (((safe_sub_func_int8_t_s_s((g_169 > (((safe_div_func_int16_t_s_s((l_119 = (l_215.f2 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_69 = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((&g_171[4][0] != (l_300 = (void*)0)), 3)), 2L))), (safe_div_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s((g_159 = (0x1FD3E131L < l_277)), 13)) , g_111[0]), g_72[1])))), l_152)), 7)))), 0x9638L)) == g_72[5]) < 6L)), l_215.f6)) , 4294967292UL) , (void*)0)), l_153))), l_162))) & l_79));
                (*l_305) = (-1L);
                (*l_306) &= ((safe_div_func_uint32_t_u_u(0x3E4FAC3AL, (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_153, 0)), (((*l_314) = (l_56 & (l_313 , (l_215.f7 != 0L)))) != (*l_305)))))) == g_159);
            }
        }
        else
        { 
            int32_t *l_315[1];
            int32_t **l_316 = &l_315[0];
            union U2 l_342 = {0x951B01054E44DDB4LL};
            uint32_t **l_367 = (void*)0;
            uint32_t *l_368[1];
            const union U1 ***l_377 = &l_375;
            uint8_t *l_378 = &g_109[0][2][0];
            int i;
            for (i = 0; i < 1; i++)
                l_315[i] = &l_152;
            for (i = 0; i < 1; i++)
                l_368[i] = &l_90;
            (*l_316) = l_315[0];
            for (l_162 = 0; (l_162 <= 0); l_162 += 1)
            { 
                uint8_t l_318 = 0x04L;
                for (g_214.f7 = 5; (g_214.f7 >= 1); g_214.f7 -= 1)
                { 
                    int i, j;
                    l_318--;
                    l_321[0][1]--;
                }
                for (l_119 = 4; (l_119 >= 0); l_119 -= 1)
                { 
                    uint8_t *l_344 = &g_111[0];
                    int8_t *l_351[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint8_t *l_354[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_354[i] = (void*)0;
                    (**l_316) = ((~g_171[(l_162 + 4)][(l_162 + 2)]) == ((((((!g_171[(l_119 + 1)][(l_119 + 1)]) <= 1UL) < ((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_318, (safe_lshift_func_uint8_t_u_u(((l_334 & (((safe_rshift_func_int16_t_s_u(((((*l_344) = (((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(l_341, (((l_342 , 0x1EA357FD88F71A0FLL) || g_19.f0) , l_318))) >= g_154[1]), l_152)) != l_343[0]) <= l_318)) && g_168) >= g_21), l_66)) == 0x63L) < 1L)) && l_56), 3)))), g_151)) == l_172)) & 0xEDL) || l_318) >= 0x74CE7931L));
                    g_171[2][0] &= (safe_lshift_func_int8_t_s_s((((*l_344) = g_168) != (safe_mod_func_int16_t_s_s((g_72[6] >= (safe_rshift_func_int8_t_s_u(((**l_316) = g_168), 4))), (0x62EA4142L | (8L & ((safe_mul_func_uint8_t_u_u((g_355 |= (g_109[0][2][0] = l_119)), (l_153 = ((l_172 < 0x4A98L) >= l_125)))) && 0xE9L)))))), 0));
                }
                for (g_126 = 0; (g_126 <= 4); g_126 += 1)
                { 
                    return l_334;
                }
            }
            (*l_316) = &l_176;
            if (((**l_316) = (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(((*l_378) = (safe_sub_func_int8_t_s_s((-1L), (((safe_mod_func_uint16_t_u_u(((l_368[0] = l_366) != g_369), 0xAF36L)) < (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((l_374 , &p_51) != ((*l_377) = l_375)), 65532UL)) <= g_163), 1))) | l_69)))), g_214.f4)) == 0x8498L), l_374.f2)), 65526UL))))
            { 
                int32_t l_392[1];
                const int64_t ***l_400 = &l_398;
                uint32_t **l_402 = &l_366;
                int32_t *l_419 = &g_160;
                int i;
                for (i = 0; i < 1; i++)
                    l_392[i] = 0xB5793460L;
                (**l_316) = (safe_div_func_int16_t_s_s(0x0E9FL, ((safe_div_func_int16_t_s_s(l_383, (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_div_func_uint64_t_u_u(((*l_71) = ((*l_89) |= l_392[0])), (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((+(((((((*l_400) = l_398) != l_401) , l_402) != ((g_266 , l_392[0]) , l_402)) , (void*)0) == (void*)0)), g_214.f4)), 0x69L)))) & l_374.f5) , 4L), l_123)), 0xA83CL)), g_169)))) , g_161)));
                l_153 |= (((+(((l_404 , l_374.f7) , (safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(g_109[0][2][0], 2)) || (((safe_rshift_func_int16_t_s_s(g_163, 3)) ^ g_214.f3) == (((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(5UL, ((0x1A7BDD85L != l_392[0]) , l_392[0]))), l_392[0])), l_86)) ^ l_313.f0) && l_392[0]))) == g_68), (**l_316)))) == l_392[0])) < 1UL) <= l_172);
                for (g_163 = 0; (g_163 < 12); g_163++)
                { 
                    l_419 = &g_171[5][3];
                }
                for (l_66 = 0; (l_66 >= 0); l_66 -= 1)
                { 
                    (**l_316) = g_214.f7;
                    if (g_166)
                        break;
                }
                g_420 = &l_69;
            }
            else
            { 
                union U2 l_423 = {0UL};
                int32_t l_425 = 0x587D9670L;
                int32_t l_431 = (-7L);
                int32_t l_432 = 2L;
                int32_t l_433 = 0xBDB1D715L;
                uint8_t *l_440[5][6][3] = {{{&g_109[2][2][0],&g_109[2][2][0],&g_109[0][2][0]},{&g_109[0][2][0],&g_109[0][2][0],&g_109[0][2][0]},{&g_109[0][2][0],&g_111[0],&g_109[3][3][0]},{&g_109[0][2][0],&g_109[0][2][0],(void*)0},{&g_109[2][2][0],&g_109[0][2][0],&g_109[4][1][0]},{&g_109[0][2][0],&g_109[0][2][0],(void*)0}},{{&g_109[3][3][0],&g_111[0],&g_109[3][3][0]},{&g_111[0],(void*)0,&g_109[0][2][0]},{&g_109[2][2][0],&g_111[0],&g_109[0][2][0]},{&g_111[0],&g_109[0][2][0],&g_109[0][2][0]},{&g_109[0][2][0],&g_109[0][2][0],&g_109[3][3][0]},{&g_111[0],&g_109[0][2][0],&g_109[0][2][0]}},{{&g_109[2][2][0],&g_111[0],&g_109[4][1][0]},{&g_111[0],&g_109[0][2][0],&g_109[0][2][0]},{&g_109[3][3][0],&g_109[2][2][0],&g_109[3][3][0]},{&g_109[0][2][0],(void*)0,&g_109[0][2][0]},{&g_109[2][2][0],&g_109[2][2][0],&g_109[0][2][0]},{&g_109[0][2][0],&g_109[0][2][0],&g_109[0][2][0]}},{{&g_109[0][2][0],&g_111[0],&g_109[3][3][0]},{&g_109[0][2][0],&g_109[0][2][0],(void*)0},{&g_109[2][2][0],&g_109[0][2][0],&g_109[4][1][0]},{&g_109[0][2][0],&g_109[0][2][0],(void*)0},{&g_109[3][3][0],&g_111[0],&g_109[3][3][0]},{&g_111[0],(void*)0,&g_109[0][2][0]}},{{&g_109[2][2][0],&g_111[0],&g_109[0][2][0]},{&g_111[0],&g_109[0][2][0],&g_109[0][2][0]},{&g_109[0][2][0],&g_109[0][2][0],&g_109[3][3][0]},{&g_111[0],&g_109[0][2][0],&g_109[0][2][0]},{&g_109[2][2][0],&g_111[0],&g_109[4][1][0]},{&g_111[0],&g_109[0][2][0],&g_109[0][2][0]}}};
                int i, j, k;
                if ((l_425 ^= (((**l_316) = 4L) , ((safe_sub_func_uint32_t_u_u((((*l_378) &= g_154[1]) < ((**p_50) , ((l_423 , g_424[0]) == (void*)0))), (g_266 , 4294967286UL))) | l_334))))
                { 
                    int16_t l_426[1];
                    int32_t l_427 = 5L;
                    int32_t l_428[4][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_426[i] = 0L;
                    ++g_434[3];
                    (**l_316) &= l_172;
                    return l_66;
                }
                else
                { 
                    int32_t l_444 = 0xEF21A1B9L;
                    int32_t l_450 = 1L;
                    (**l_316) &= (l_437 || ((safe_rshift_func_int8_t_s_s(((((g_168 >= (((void*)0 == l_440[3][1][1]) | ((((safe_mul_func_uint8_t_u_u((~((0x815BF7E9L < ((void*)0 != &g_254[2])) || 0UL)), l_383)) , l_56) | g_104) & 8L))) | l_56) || l_444) || 0L), l_162)) && l_444));
                    l_450 |= (((l_374.f4 || (safe_sub_func_int16_t_s_s(0xDC1BL, ((~(((-1L) && (safe_mod_func_uint16_t_u_u((((l_444 || ((0x6BL != (((**l_316) = l_374.f0) && l_152)) ^ 0x68L)) & l_153) , (**l_316)), g_355))) & l_444)) != (-9L))))) == l_444) , g_109[0][2][0]);
                }
            }
        }
    }
    else
    { 
        (*l_70) = ((*p_50) = (*p_50));
    }
    for (g_104 = 0; (g_104 > 46); g_104 = safe_add_func_uint64_t_u_u(g_104, 1))
    { 
        int32_t *l_453[2][4] = {{&l_123,(void*)0,&l_123,(void*)0},{&l_123,(void*)0,&l_123,(void*)0}};
        int32_t l_457 = 1L;
        uint32_t l_458 = 4294967295UL;
        int i, j;
        ++l_454;
        --l_458;
    }
    (*l_461) ^= ((l_317 ^= (l_374.f7 ^ (-1L))) , l_374.f1);
    return (*l_461);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_13[i].f0, "g_13[i].f0", print_hash_value);

    }
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);

    }
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_109[i][j][k], "g_109[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_111[i], "g_111[i]", print_hash_value);

    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_154[i], "g_154[i]", print_hash_value);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_170[i][j][k], "g_170[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_171[i][j], "g_171[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_214.f2, "g_214.f2", print_hash_value);
    transparent_crc(g_214.f3, "g_214.f3", print_hash_value);
    transparent_crc(g_214.f4, "g_214.f4", print_hash_value);
    transparent_crc(g_214.f5, "g_214.f5", print_hash_value);
    transparent_crc(g_214.f6, "g_214.f6", print_hash_value);
    transparent_crc(g_214.f7, "g_214.f7", print_hash_value);
    transparent_crc(g_266.f0, "g_266.f0", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_434[i], "g_434[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_624[i], "g_624[i]", print_hash_value);

    }
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_1315, "g_1315", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
