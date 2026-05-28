// SPDX-License-Identifier: MIT
// cctest_csmith_93a23985.c --- cctest case csmith_93a23985 (csmith seed 2476882309)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc06a3142 */
/* @exp_ticks 0x38e5 */

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

// Options:   -s 2476882309 -o /tmp/csmith_gen_tl_y0buu/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint8_t  f0;
   int8_t  f1;
   int8_t  f2;
   int32_t  f3;
   int16_t  f4;
   uint32_t  f5;
};

union U1 {
   const uint8_t  f0;
};


static int64_t g_17 = 9L;
static uint32_t g_18 = 5UL;
static uint64_t g_31[4] = {0x440E708BEE6DABACLL,0x440E708BEE6DABACLL,0x440E708BEE6DABACLL,0x440E708BEE6DABACLL};
static uint64_t g_49 = 18446744073709551615UL;
static int8_t g_52[5][3] = {{0x08L,0x08L,0xE0L},{0xF4L,0xE0L,0xE0L},{0xE0L,2L,0L},{0xF4L,2L,0xF4L},{0x08L,0xE0L,0L}};
static int32_t g_55 = 0xA2765550L;
static int64_t g_56 = 0xF1C8D2125954A437LL;
static int32_t g_57 = 0xF1A7DFAEL;
static struct S0 g_80 = {255UL,0x19L,0x73L,0x6B242CFFL,0x2703L,0xCD4B48EDL};
static uint32_t g_102[2] = {0xF5FC6D38L,0xF5FC6D38L};
static uint64_t g_117 = 0xD361F497392D2A8CLL;
static uint16_t g_146 = 0xCDA3L;
static uint32_t g_170 = 0x80E55F7EL;
static union U1 g_214 = {0x8FL};
static uint8_t g_220 = 1UL;
static uint32_t g_228 = 0x08ECFB4AL;
static uint16_t g_229 = 0UL;



static struct S0  func_1(void);
static union U1  func_4(int32_t  p_5, uint16_t  p_6, uint16_t  p_7);
static int8_t  func_13(int64_t  p_14, const uint32_t  p_15, const int16_t  p_16);
static const uint32_t  func_20(const uint64_t  p_21);




static struct S0  func_1(void)
{ 
    const int16_t l_8 = 1L;
    int32_t l_19 = (-7L);
    uint16_t l_227 = 0x6AA3L;
    struct S0 l_230 = {0x69L,0L,0x04L,0x6DA4907FL,-7L,0x15645DE0L};
    g_229 &= (g_228 = (safe_mul_func_int8_t_s_s(((((func_4((l_8 && (((l_8 || (safe_rshift_func_int8_t_s_u(func_13((l_19 = (g_18 &= g_17)), func_20((((+(((safe_rshift_func_uint16_t_u_u(65535UL, 0)) & 4294967287UL) <= 0xF29C8DDAC0FAAB39LL)) , l_8) | g_17)), g_17), l_8))) <= l_8) > 0L)), g_80.f2, g_80.f2) , (-10L)) , l_8) || 0xF7EC8282L) , 1L), l_227)));
    return l_230;
}



static union U1  func_4(int32_t  p_5, uint16_t  p_6, uint16_t  p_7)
{ 
    uint32_t l_223[5];
    union U1 l_226 = {0xE0L};
    int i;
    for (i = 0; i < 5; i++)
        l_223[i] = 0xCB98C823L;
    for (g_170 = 27; (g_170 != 42); ++g_170)
    { 
        l_223[4]--;
    }
    return l_226;
}



static int8_t  func_13(int64_t  p_14, const uint32_t  p_15, const int16_t  p_16)
{ 
    int64_t l_87 = (-1L);
    uint16_t l_110[4][5] = {{65535UL,3UL,0x5353L,3UL,65535UL},{65526UL,0x3A2CL,0x3588L,0x3A2CL,65526UL},{65535UL,3UL,0x5353L,3UL,65535UL},{65526UL,0x3A2CL,0x3588L,0x3A2CL,65526UL}};
    int32_t l_113 = 0xBD19AA3BL;
    int32_t l_115[1][4];
    int32_t l_135 = 0L;
    uint16_t l_169[1];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_115[i][j] = (-3L);
    }
    for (i = 0; i < 1; i++)
        l_169[i] = 0UL;
    if (((safe_rshift_func_int8_t_s_s((g_17 | (g_31[1] = ((g_18 < (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_16, p_15)), 0UL))) & 1UL))), 4)) < p_16))
    { 
        int8_t l_54 = 1L;
        int32_t l_95 = 1L;
        struct S0 l_103[1][2][1] = {{{{7UL,0x6FL,1L,3L,0x2D0FL,0x67D2F727L}},{{7UL,0x6FL,1L,3L,0x2D0FL,0x67D2F727L}}}};
        int32_t l_127 = 2L;
        union U1 l_163 = {1UL};
        int i, j, k;
lbl_179:
        for (g_18 = 0; (g_18 < 54); g_18++)
        { 
            uint32_t l_53[4][1];
            int32_t l_111 = (-1L);
            int32_t l_114 = 1L;
            int32_t l_116 = 0xC20A8E5FL;
            uint64_t l_128 = 0x181933AC353B0092LL;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_53[i][j] = 0xAA7FCF62L;
            }
            g_57 |= (g_56 |= (safe_div_func_uint8_t_u_u((g_55 ^= (((p_16 && ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(p_14, 4)), (safe_div_func_int16_t_s_s(((0xAD31FC531364F2CALL ^ (++g_31[1])) > (!(((safe_mul_func_int16_t_s_s((((g_49--) ^ 18446744073709551607UL) ^ p_16), p_15)) || g_18) <= g_52[1][0]))), 0xF236L)))) != p_15)) <= l_53[1][0]) ^ l_54)), g_17)));
            g_57 = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u(p_15, 0xDB5B2921L)) != (safe_mod_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s(g_57, (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_53[1][0] && g_52[1][0]), p_14)), p_14)))) , g_56), l_53[3][0]))) > p_15), 0x66L)), p_16)), p_14));
            if ((((safe_mod_func_int64_t_s_s(((safe_add_func_int64_t_s_s(l_54, (safe_sub_func_uint64_t_u_u((g_80 , ((safe_sub_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(p_15, (safe_mod_func_int16_t_s_s(p_15, g_80.f0)))) && 0x04L), g_80.f5)) != l_54)), l_53[2][0])))) && p_14), l_54)) , p_15) || l_87))
            { 
                int32_t l_88[4] = {0xD145C15DL,0xD145C15DL,0xD145C15DL,0xD145C15DL};
                int i;
                g_55 |= (l_88[0] , ((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((((l_95 = l_54) || 2UL) , (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((0x889DD98AE1F63711LL | g_80.f2) >= l_54), g_80.f1)), g_80.f4)), 0x10L))), 1)), l_54)), g_102[1])) && g_80.f2));
                l_110[3][0] = (l_103[0][0][0] , (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(g_80.f0, (l_103[0][0][0].f3 = 0x19L))), 7)), 7)));
                if (p_16)
                    continue;
            }
            else
            { 
                int32_t l_112 = 0x8938AD39L;
                l_111 |= g_102[1];
                ++g_117;
                l_103[0][0][0].f3 = (((g_80.f3 = 0x03B86337L) > ((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(p_16, 4)), 6)) != g_17) && (l_112 |= ((safe_lshift_func_uint16_t_u_u((((+(7UL > l_127)) || p_14) , l_128), p_15)) >= g_57))) <= p_15)) , g_49);
            }
        }
        g_55 = (((l_95 |= (l_115[0][1] = (safe_sub_func_uint8_t_u_u((l_113 = (safe_mul_func_uint8_t_u_u((((-10L) != (safe_rshift_func_int8_t_s_s(0L, (g_80.f1 = l_113)))) != 0x7173955FA40266A5LL), 0x99L))), l_110[3][2])))) <= l_135) && l_135);
        if ((g_80.f3 = (0x1C087C3AL & (g_57 = (p_14 > (l_113 = (safe_add_func_uint16_t_u_u(1UL, p_15))))))))
        { 
            uint32_t l_166[3];
            int32_t l_167 = 0L;
            int32_t l_168 = 0x8FAA5422L;
            int i;
            for (i = 0; i < 3; i++)
                l_166[i] = 0xD9A39686L;
            l_115[0][1] = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(p_16, 4)), 0x182F57C3L)), (safe_rshift_func_uint8_t_u_s((g_146 = (g_31[1] != (((p_16 | p_16) >= g_49) | 0x06A4836AL))), 6)))) | 0x7FA16697L);
            l_103[0][0][0].f3 ^= (safe_add_func_uint32_t_u_u(((((((l_169[0] = ((safe_add_func_uint64_t_u_u((l_168 ^= (l_167 = (safe_div_func_uint32_t_u_u((((65531UL != ((((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(0xFDL, ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_163 , (safe_mul_func_uint16_t_u_u(p_15, g_102[1]))), p_16)), g_80.f2)), 0xDEL)) < 0x80L))), 255UL)) , l_110[3][0]) && l_166[0]) ^ g_52[4][1])) >= 0xD0L) && g_17), 0x936D62ACL)))), 5UL)) != p_14)) , l_163.f0) ^ g_52[1][0]) , 0xF1DF6FF7L) != l_135) || l_54), g_80.f1));
            ++g_170;
        }
        else
        { 
            int8_t l_190 = 0x43L;
            int32_t l_194 = (-1L);
            int32_t l_202[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_202[i][j] = 1L;
            }
            if (((++g_146) > (((4L == (p_14 |= 0xC5922DC5F9BFDDA3LL)) , (safe_lshift_func_int16_t_s_s(6L, (0x80L <= p_16)))) == 1UL)))
            { 
                if (g_55)
                    goto lbl_179;
            }
            else
            { 
                int8_t l_191[4][2][3] = {{{1L,1L,0x66L},{3L,1L,0xFBL}},{{0L,1L,1L},{1L,1L,0x66L}},{{3L,1L,0xFBL},{0L,1L,1L}},{{1L,1L,0x66L},{3L,1L,0xFBL}}};
                int i, j, k;
                g_57 = (((g_18 = (p_16 , ((((-1L) ^ ((+l_127) , 65527UL)) < 1UL) , l_110[1][0]))) , p_15) != l_87);
                l_95 &= (((0x20A8L || (l_163.f0 ^ (safe_mod_func_int64_t_s_s((+(((safe_div_func_int64_t_s_s((g_17 = ((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u(l_190, p_14)), 4294967289UL)) & g_146)), 0x0095EF769B8DE4F0LL)) , 0x80768EFDD03B609CLL) || g_31[1])), p_14)))) < l_191[0][1][2]) && p_16);
            }
            l_113 = (l_202[0][0] = (g_57 |= (g_55 = ((p_16 ^ (safe_add_func_uint8_t_u_u((l_194 = 0x6BL), (safe_mod_func_uint32_t_u_u((~((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(g_170, (l_103[0][0][0] , 65535UL))) < 0x2DB7845B2E7BA114LL), l_190)) & g_146)), 0x23D9690AL))))) <= g_80.f5))));
        }
    }
    else
    { 
        int32_t l_209[5];
        int16_t l_219 = (-6L);
        int i;
        for (i = 0; i < 5; i++)
            l_209[i] = 0xC60E83F7L;
        for (l_87 = (-16); (l_87 > 17); l_87 = safe_add_func_uint8_t_u_u(l_87, 7))
        { 
            union U1 l_215[1][4] = {{{0x80L},{0x80L},{0x80L},{0x80L}}};
            int i, j;
            for (g_170 = (-13); (g_170 == 48); g_170 = safe_add_func_uint16_t_u_u(g_170, 4))
            { 
                int64_t l_213 = 1L;
                l_213 = (((safe_mul_func_uint8_t_u_u(l_209[3], (safe_add_func_uint32_t_u_u(l_169[0], (((((+0x308BAC5693882032LL) , g_80.f1) >= p_15) | g_80.f0) ^ 1UL))))) && 5UL) & 0x964D51499A76E999LL);
                if (p_16)
                    break;
            }
            g_57 |= ((g_214 , l_215[0][1]) , (safe_div_func_int32_t_s_s(p_16, 0xA2C960B1L)));
        }
        l_209[0] = (l_209[2] , ((safe_unary_minus_func_int8_t_s(((g_220 &= (l_219 == ((0x52E6D4CF9D2C0AA6LL != 2L) || g_18))) == (-10L)))) | 0x74460A3BB4AA2B9ELL));
    }
    return p_15;
}



static const uint32_t  func_20(const uint64_t  p_21)
{ 
    return g_17;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_31[i], "g_31[i]", print_hash_value);

    }
    transparent_crc(g_49, "g_49", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_52[i][j], "g_52[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_80.f1, "g_80.f1", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    transparent_crc(g_80.f3, "g_80.f3", print_hash_value);
    transparent_crc(g_80.f4, "g_80.f4", print_hash_value);
    transparent_crc(g_80.f5, "g_80.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_102[i], "g_102[i]", print_hash_value);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
