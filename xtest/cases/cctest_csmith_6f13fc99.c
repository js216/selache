// SPDX-License-Identifier: MIT
// cctest_csmith_6f13fc99.c --- cctest case csmith_6f13fc99 (csmith seed 1863580825)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x40e92fd9 */
/* @exp_ticks 0x5b2d */

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

// Options:   -s 1863580825 -o /tmp/csmith_gen_ql5j80j8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   int32_t  f1;
   uint64_t  f2;
   const uint32_t  f3;
};

union U1 {
   const struct S0  f0;
   uint32_t  f1;
};


static uint32_t g_23[5][4][5] = {{{0xCA27289FL,0x5CCB9725L,0xCA27289FL,0xCA27289FL,0x5CCB9725L},{0xF12F3CCDL,1UL,1UL,0xF12F3CCDL,1UL},{0x5CCB9725L,0x5CCB9725L,18446744073709551612UL,0x5CCB9725L,0x5CCB9725L},{1UL,0xF12F3CCDL,1UL,1UL,0xF12F3CCDL}},{{0x5CCB9725L,0xCA27289FL,0xCA27289FL,0x5CCB9725L,0xCA27289FL},{0xF12F3CCDL,0xF12F3CCDL,0x1B6FD43DL,0xF12F3CCDL,0xF12F3CCDL},{0xCA27289FL,0x5CCB9725L,0xCA27289FL,0xCA27289FL,0x5CCB9725L},{0xF12F3CCDL,1UL,1UL,0xF12F3CCDL,1UL}},{{0x5CCB9725L,0x5CCB9725L,18446744073709551612UL,0x5CCB9725L,0x5CCB9725L},{1UL,1UL,0x1B6FD43DL,0x1B6FD43DL,1UL},{0xCA27289FL,18446744073709551612UL,18446744073709551612UL,0xCA27289FL,18446744073709551612UL},{1UL,1UL,0xF12F3CCDL,1UL,1UL}},{{18446744073709551612UL,0xCA27289FL,18446744073709551612UL,18446744073709551612UL,0xCA27289FL},{1UL,0x1B6FD43DL,0x1B6FD43DL,1UL,0x1B6FD43DL},{0xCA27289FL,0xCA27289FL,0x5CCB9725L,0xCA27289FL,0xCA27289FL},{0x1B6FD43DL,1UL,0x1B6FD43DL,0x1B6FD43DL,1UL}},{{0xCA27289FL,18446744073709551612UL,18446744073709551612UL,0xCA27289FL,18446744073709551612UL},{1UL,1UL,0xF12F3CCDL,1UL,1UL},{18446744073709551612UL,0xCA27289FL,18446744073709551612UL,18446744073709551612UL,0xCA27289FL},{1UL,0x1B6FD43DL,0x1B6FD43DL,1UL,0x1B6FD43DL}}};
static uint64_t g_49[4][4] = {{0x889B05F67326DC75LL,0x889B05F67326DC75LL,8UL,0x889B05F67326DC75LL},{0x889B05F67326DC75LL,1UL,1UL,0x889B05F67326DC75LL},{1UL,0x889B05F67326DC75LL,1UL,1UL},{0x889B05F67326DC75LL,0x889B05F67326DC75LL,8UL,0x889B05F67326DC75LL}};
static int32_t g_68[1] = {8L};
static uint8_t g_69 = 0xF5L;
static uint32_t g_99 = 0xC455447BL;
static uint32_t g_112 = 0xD0BAEE16L;
static const union U1 g_128 = {{0L,-1L,4UL,1UL}};
static uint8_t g_152 = 0xE5L;
static uint64_t g_155 = 0x019E490029EFAAE2LL;
static int8_t g_175[5][1] = {{0xFAL},{(-1L)},{0xFAL},{(-1L)},{0xFAL}};
static int8_t g_176 = 0xD7L;
static uint32_t g_181 = 1UL;
static uint64_t g_192 = 1UL;
static int16_t g_202 = 0x671FL;
static uint32_t g_207 = 0UL;



static const struct S0  func_1(void);
static uint64_t  func_4(int32_t  p_5, uint32_t  p_6, int32_t  p_7, union U1  p_8, int32_t  p_9);
static uint8_t  func_17(int32_t  p_18, uint32_t  p_19, int16_t  p_20, int32_t  p_21, int64_t  p_22);
static uint32_t  func_24(union U1  p_25, uint16_t  p_26, int32_t  p_27, uint64_t  p_28, uint16_t  p_29);




static const struct S0  func_1(void)
{ 
    int32_t l_16 = (-5L);
    union U1 l_30[4] = {{{1L,-1L,0xCB6A7F4EA14C5530LL,8UL}},{{1L,-1L,0xCB6A7F4EA14C5530LL,8UL}},{{1L,-1L,0xCB6A7F4EA14C5530LL,8UL}},{{1L,-1L,0xCB6A7F4EA14C5530LL,8UL}}};
    uint32_t l_182 = 0x1C820DCBL;
    int32_t l_208 = 0x174AD0ABL;
    int32_t l_209[3][2][1] = {{{(-7L)},{0xDDE49BDAL}},{{0xDDE49BDAL},{(-7L)}},{{0xDDE49BDAL},{0xDDE49BDAL}}};
    int32_t l_210 = (-1L);
    int16_t l_211 = 1L;
    uint16_t l_212[1][4][5] = {{{0xB652L,0UL,0UL,0xB652L,0xB652L},{0x539EL,0x95DAL,0x539EL,0x95DAL,0x539EL},{0xB652L,0xB652L,0UL,0UL,0xB652L},{0x59E7L,0x95DAL,0x59E7L,0x95DAL,0x59E7L}}};
    int i, j, k;
    l_16 = ((safe_div_func_uint64_t_u_u(func_4((safe_lshift_func_int16_t_s_s((g_181 = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(l_16, (func_17(g_23[1][0][4], func_24(l_30[2], g_23[4][3][3], l_30[2].f0.f2, l_30[2].f0.f3, g_23[1][0][4]), g_23[1][0][4], g_128.f0.f1, g_128.f0.f2) , g_23[1][0][4]))), 5))), g_23[1][2][0])), l_30[2].f0.f3, l_182, l_30[2], l_30[2].f0.f2), g_128.f0.f3)) < 0x4502L);
    --l_212[0][2][4];
    return g_128.f0;
}



static uint64_t  func_4(int32_t  p_5, uint32_t  p_6, int32_t  p_7, union U1  p_8, int32_t  p_9)
{ 
    int32_t l_189 = (-1L);
    int32_t l_190 = 0x48530E6BL;
    int32_t l_194 = 1L;
    int32_t l_196 = (-1L);
    int32_t l_197 = 7L;
    int32_t l_198[5][3][4] = {{{0xB0677B63L,(-10L),(-10L),0xB0677B63L},{1L,6L,(-10L),0L},{0xB0677B63L,(-1L),1L,(-1L)}},{{(-1L),(-10L),1L,(-1L)},{1L,(-1L),0L,0L},{6L,6L,1L,0xB0677B63L}},{{6L,(-10L),0L,6L},{1L,0xB0677B63L,1L,0L},{(-1L),0xB0677B63L,1L,6L}},{{0xB0677B63L,(-10L),(-10L),0xB0677B63L},{1L,6L,(-10L),0L},{0xB0677B63L,(-1L),1L,(-1L)}},{{(-1L),(-10L),1L,(-1L)},{1L,(-1L),0L,0L},{6L,6L,1L,0xB0677B63L}}};
    int32_t l_203 = 0x47C9F8D5L;
    uint8_t l_204 = 0xF9L;
    int i, j, k;
    for (g_99 = 0; (g_99 == 54); ++g_99)
    { 
        int8_t l_191 = 0x5CL;
        int32_t l_193 = (-1L);
        int32_t l_195[1][5] = {{0xC8EA54E8L,0xC8EA54E8L,0xC8EA54E8L,0xC8EA54E8L,0xC8EA54E8L}};
        uint8_t l_199 = 0x88L;
        int i, j;
        l_193 ^= (safe_mul_func_uint8_t_u_u(p_8.f0.f2, (p_6 | (safe_sub_func_uint64_t_u_u(l_189, (g_192 = (l_191 = (l_190 = 0x7DCF5926FDC01D43LL))))))));
        l_199--;
    }
    --l_204;
    return g_207;
}



static uint8_t  func_17(int32_t  p_18, uint32_t  p_19, int16_t  p_20, int32_t  p_21, int64_t  p_22)
{ 
    int64_t l_160 = 2L;
    int32_t l_168 = 0xAA4C988BL;
    int32_t l_169 = 3L;
    uint64_t l_174 = 0x4F96F3BD686DD1E6LL;
    int32_t l_180 = 0xB8FE26F8L;
    if (((((safe_mod_func_uint16_t_u_u((g_128.f0.f2 == ((l_169 = ((safe_rshift_func_int8_t_s_s((0L == (l_160 > (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((~(l_168 = ((g_49[0][0] || 0x02L) != p_22))), 0xDCL)), 5)), p_22)))), g_155)) & g_128.f0.f2)) == 0xDEL)), l_160)) && g_49[0][0]) , (-1L)) || p_20))
    { 
        int8_t l_179[2];
        int i;
        for (i = 0; i < 2; i++)
            l_179[i] = 0xBDL;
        for (g_112 = 29; (g_112 <= 58); ++g_112)
        { 
            p_21 = (g_68[0] = (safe_sub_func_uint8_t_u_u((g_176 = ((g_175[4][0] &= l_174) >= (l_168 = g_69))), ((safe_lshift_func_uint16_t_u_s(l_179[0], (p_20 &= (((l_169 <= g_128.f0.f2) < g_152) >= 1UL)))) <= 4294967291UL))));
            if (l_179[0])
                continue;
        }
        return l_180;
    }
    else
    { 
        g_68[0] = (l_169 && 0x4FL);
    }
    return p_22;
}



static uint32_t  func_24(union U1  p_25, uint16_t  p_26, int32_t  p_27, uint64_t  p_28, uint16_t  p_29)
{ 
    int16_t l_35 = 0x2095L;
    int32_t l_43 = 1L;
    int32_t l_50[4];
    int32_t l_51 = 0x8AFC007DL;
    int32_t l_52 = 0L;
    int32_t l_53 = (-1L);
    int32_t l_54 = 0xFAAB93B5L;
    int16_t l_72 = (-1L);
    uint32_t l_89 = 9UL;
    uint32_t l_90 = 2UL;
    uint64_t l_148 = 3UL;
    int i;
    for (i = 0; i < 4; i++)
        l_50[i] = 0x8DB2EDFDL;
    p_27 = (safe_mod_func_uint64_t_u_u(g_23[1][0][4], (safe_sub_func_int16_t_s_s((0x78L && (((0xC72B752BF390F3BDLL == g_23[1][0][4]) != p_27) , l_35)), 65535UL))));
    if ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((((((((safe_div_func_int8_t_s_s((+((l_43 = (g_23[1][0][4] , 255UL)) ^ ((l_54 &= (l_53 ^= (l_52 = (l_35 && ((l_51 = (((l_50[1] |= (((((((safe_div_func_int16_t_s_s(((g_49[0][0] = (((safe_rshift_func_uint8_t_u_s(((!(g_23[1][0][4] | g_23[4][2][3])) || p_28), 6)) , 0x34826AAF09D89C1CLL) < p_25.f0.f1)) > p_29), l_35)) , 1UL) >= 9UL) , 0L) != g_23[3][1][2]) & l_35) , 0x497140DA8F9E1C21LL)) != g_23[1][0][4]) == g_23[3][3][2])) && 0x3A39D8E7DFBF73ECLL))))) < l_35))), 0x93L)) > g_23[4][3][0]) >= 0x202EAB38L) || g_23[3][1][0]) & l_35) , l_50[1]) & g_23[0][1][1]), 4)) || g_23[1][0][4]), l_35)))
    { 
        int64_t l_57[3];
        int32_t l_114[4];
        int i;
        for (i = 0; i < 3; i++)
            l_57[i] = 0x39D90DC6CE91E412LL;
        for (i = 0; i < 4; i++)
            l_114[i] = 9L;
        for (l_52 = 15; (l_52 < (-29)); l_52 = safe_sub_func_uint32_t_u_u(l_52, 2))
        { 
            return l_57[1];
        }
        if (((safe_mul_func_int16_t_s_s((l_50[1] = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_72 = (((safe_sub_func_int16_t_s_s(p_25.f0.f2, (l_50[2] != (((g_69++) , (p_29 < 18446744073709551609UL)) <= l_35)))) , 9L) || 0xFEL)), 4)), 8)), p_29)) , 0xD031L)), p_25.f0.f0)) , l_57[1]))
        { 
            const int16_t l_91 = (-1L);
            int32_t l_100 = 0xC20F127DL;
            if ((safe_div_func_uint16_t_u_u((~((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((+(((((((safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_89 ^= p_25.f0.f2), p_25.f0.f3)), p_29)) ^ (((p_29 ^ p_26) , g_68[0]) || g_68[0])), 0x0EL)) , g_69), l_90)) == g_68[0]) <= p_25.f0.f0) & p_25.f0.f3) == p_28) > l_91) <= 0xC57991EE5052BDF3LL)), l_91)), 14)) , 1L)), p_26)))
            { 
                p_27 = ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((p_29 || ((safe_unary_minus_func_int8_t_s((g_99 = (safe_mod_func_int64_t_s_s(0xA99849AA352C7534LL, 1UL))))) , p_28)), 0)), p_27)) == g_68[0]);
            }
            else
            { 
                int16_t l_111 = 0L;
                int32_t l_113[1][4] = {{0L,0L,0L,0L}};
                int i, j;
                l_100 |= (p_25 , l_35);
                l_114[2] = (((l_100 &= g_69) , (p_25 , (l_113[0][3] = (((g_112 = ((!(((safe_div_func_uint64_t_u_u(((p_29 != (+((safe_mod_func_uint32_t_u_u(((((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(0x3BF42E135D251299LL, p_26)), g_68[0])) < g_68[0]) , 0xA234L) >= (-8L)), l_111)) , p_25.f0.f3))) & p_29), g_49[0][0])) & 249UL) && 0x366E2C43L)) != l_111)) != l_35) ^ 0x15L)))) > 0x906CL);
                l_53 = 1L;
            }
            g_68[0] = (safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((l_114[2] = ((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(p_27, (p_25.f1 = (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(p_25.f0.f1)), ((g_128 , (l_100 = (safe_mul_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((p_25.f0.f0 & g_128.f0.f0), g_68[0])) >= l_90), g_128.f0.f2)), 0x7F186A86B27BD0F6LL)) > p_25.f0.f1) , 0UL), p_25.f0.f0)))) == g_128.f0.f2)))))) ^ p_27), l_57[2])), 0x1C8C0566L)) ^ p_27)), p_29)), p_27));
        }
        else
        { 
            for (l_89 = 0; (l_89 < 57); ++l_89)
            { 
                g_68[0] = (g_128.f0.f0 <= 0x0AD3F44FL);
            }
        }
    }
    else
    { 
        uint32_t l_147 = 18446744073709551614UL;
        int32_t l_149 = 0x214CF6C4L;
        int32_t l_150 = (-1L);
        int32_t l_151[4] = {(-3L),(-3L),(-3L),(-3L)};
        int i;
        p_27 &= (((((l_53 < (safe_div_func_int64_t_s_s((-5L), (l_54 = (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(l_51, (((p_25.f0.f0 >= (-1L)) == 0x222DL) && g_128.f0.f3))) != l_147), p_26)), l_148)))))) & g_23[0][1][1]) > p_26) ^ 0x110E0C72L) ^ l_147);
        ++g_152;
    }
    return g_155;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_23[i][j][k], "g_23[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_49[i][j], "g_49[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);

    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_128.f0.f0, "g_128.f0.f0", print_hash_value);
    transparent_crc(g_128.f0.f1, "g_128.f0.f1", print_hash_value);
    transparent_crc(g_128.f0.f2, "g_128.f0.f2", print_hash_value);
    transparent_crc(g_128.f0.f3, "g_128.f0.f3", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_175[i][j], "g_175[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
