// SPDX-License-Identifier: MIT
// cctest_csmith_75f4f8f8.c --- cctest case csmith_75f4f8f8 (csmith seed 1978988792)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd77d3b35 */
/* @exp_ticks 0x3dd9 */

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

// Options:   -s 1978988792 -o /tmp/csmith_gen_9e4_y8g0/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   uint16_t  f1;
   uint64_t  f2;
};

union U1 {
   int8_t  f0;
   const int8_t  f1;
   int16_t  f2;
};

union U2 {
   const uint32_t  f0;
   struct S0  f1;
   int32_t  f2;
   int8_t  f3;
};


static uint32_t g_5 = 0x14EB4C8FL;
static int16_t g_36[5] = {0x39EFL,0x39EFL,0x39EFL,0x39EFL,0x39EFL};
static union U1 g_45[3][2] = {{{0L},{0L}},{{0L},{0L}},{{0L},{0L}}};
static uint16_t g_49 = 0x3922L;
static int64_t g_73 = 0x115B503A71B0FACDLL;
static int8_t g_74 = 0L;
static int8_t g_79 = 0xEBL;
static uint64_t g_81 = 0xEE11437717E41AB8LL;
static struct S0 g_109 = {0x85L,0xB1B1L,18446744073709551606UL};
static uint32_t g_120 = 1UL;
static union U2 g_140 = {0x8AE1307CL};
static uint8_t g_147 = 255UL;
static uint32_t g_172 = 1UL;
static int32_t g_187 = 0x6EEA41B1L;
static int64_t g_199[2] = {0x1C8D462313750715LL,0x1C8D462313750715LL};
static int8_t g_202 = 1L;
static int32_t g_203 = 0L;
static uint32_t g_205 = 0UL;



static uint16_t  func_1(void);
static int32_t  func_17(uint64_t  p_18, const uint64_t  p_19);
static uint64_t  func_20(uint8_t  p_21, int32_t  p_22, uint32_t  p_23, union U1  p_24);
static uint64_t  func_28(int64_t  p_29, int8_t  p_30, const union U1  p_31);




static uint16_t  func_1(void)
{ 
    int16_t l_4 = 0xA095L;
    int32_t l_12[3][4][5] = {{{(-1L),(-1L),0x3D97867AL,1L,1L},{0xF3B06D9EL,(-1L),0xF3B06D9EL,0xA6C2E3A4L,1L},{(-1L),0x169C1477L,0xF3B06D9EL,1L,0xA6C2E3A4L},{(-1L),(-1L),0x3D97867AL,1L,1L}},{{0xF3B06D9EL,(-1L),0xF3B06D9EL,0xA6C2E3A4L,1L},{(-1L),0x169C1477L,0xF3B06D9EL,1L,0xA6C2E3A4L},{(-1L),(-1L),0x3D97867AL,0xF3B06D9EL,0xF3B06D9EL},{0x299FA9EFL,(-3L),0x299FA9EFL,0x3D97867AL,0xF3B06D9EL}},{{0L,0xBE26B5CFL,0x299FA9EFL,0xF3B06D9EL,0x3D97867AL},{0L,(-3L),(-7L),0xF3B06D9EL,0xF3B06D9EL},{0x299FA9EFL,(-3L),0x299FA9EFL,0x3D97867AL,0xF3B06D9EL},{0L,0xBE26B5CFL,0x299FA9EFL,0xF3B06D9EL,0x3D97867AL}}};
    int32_t l_13 = (-1L);
    struct S0 l_14 = {0xFFL,65529UL,0x4F57B17B4D2C298CLL};
    int i, j, k;
    l_13 = ((safe_sub_func_uint32_t_u_u((((l_4 != (((g_5 | 0x07L) ^ (((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((safe_div_func_int16_t_s_s((g_5 && l_4), 0xDF11L)) && 0x5AL) , 0x1DFE936BE856DFC9LL), (-1L))), g_5)) & 7UL) & g_5) == l_4) >= g_5)) & g_5)) > l_4) < 0xF355C0C8L), 0UL)) , l_12[1][3][2]);
    l_14 = l_14;
    for (l_14.f0 = 0; (l_14.f0 != 24); ++l_14.f0)
    { 
        int16_t l_25 = 0x151DL;
        uint32_t l_34 = 9UL;
        const union U1 l_35 = {0xCAL};
        uint8_t l_200 = 1UL;
        if (func_17(func_20(l_25, ((g_5 || (((safe_add_func_int8_t_s_s(g_5, (func_28((safe_mul_func_int16_t_s_s((l_34 >= 255UL), 0xE2CCL)), g_5, l_35) > l_34))) && l_35.f1) , l_34)) < g_5), l_14.f2, g_45[1][1]), g_5))
        { 
            return l_34;
        }
        else
        { 
            const uint8_t l_186 = 3UL;
            for (l_34 = 1; (l_34 <= 4); l_34 += 1)
            { 
                int i;
                g_187 ^= (safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((0xDBCA6F5D40A597C7LL ^ (!0xC0AAL)), ((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(g_36[l_34], g_36[l_34])), l_186)) & (-2L)))), 10));
            }
        }
        if ((g_199[1] = (~(safe_rshift_func_uint16_t_u_u(l_12[1][3][2], (g_109.f1 |= ((g_36[4] >= (safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_187, (safe_div_func_int16_t_s_s(l_35.f0, l_34)))), 5UL)), 0xCEL))) & 0xB6BBBDF83237CEF4LL)))))))
        { 
            if (l_200)
                break;
            return g_109.f0;
        }
        else
        { 
            int64_t l_201 = 9L;
            int32_t l_204 = 0x440FC8F3L;
            ++g_205;
            if (g_172)
                break;
        }
        g_109 = l_14;
    }
    return l_13;
}



static int32_t  func_17(uint64_t  p_18, const uint64_t  p_19)
{ 
    uint32_t l_176 = 0x69CC3E7FL;
    l_176 = p_19;
    return p_18;
}



static uint64_t  func_20(uint8_t  p_21, int32_t  p_22, uint32_t  p_23, union U1  p_24)
{ 
    uint64_t l_46 = 0xF1929B4DB59FB14BLL;
    int32_t l_47 = (-5L);
    int32_t l_48 = 0L;
    struct S0 l_132 = {0x3DL,0x6CE6L,0x11D5598A95DAA2CALL};
    int32_t l_169 = 3L;
    l_47 ^= l_46;
    --g_49;
    if ((safe_add_func_int16_t_s_s((-1L), g_5)))
    { 
        int64_t l_57 = 0x26DA6125F89738BBLL;
        struct S0 l_60 = {0x5FL,0xFC42L,1UL};
        int32_t l_72[1][3];
        union U1 l_133 = {9L};
        uint32_t l_138 = 1UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_72[i][j] = 0L;
        }
        for (p_24.f2 = 21; (p_24.f2 == (-14)); p_24.f2 = safe_sub_func_uint16_t_u_u(p_24.f2, 7))
        { 
            struct S0 l_56 = {254UL,65528UL,18446744073709551611UL};
            l_57 |= (l_56 , 0xD4DC4505L);
            for (p_23 = (-25); (p_23 > 37); p_23 = safe_add_func_int8_t_s_s(p_23, 6))
            { 
                l_60 = l_56;
            }
            if (g_36[0])
                break;
        }
        if ((safe_add_func_int8_t_s_s((p_24.f0 &= (g_45[1][1].f0 = p_23)), ((safe_div_func_int64_t_s_s((l_72[0][1] = ((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_5 == g_36[1]), 5)), (~(((safe_div_func_uint32_t_u_u(p_23, p_23)) != g_5) != 1UL)))) || l_60.f1)), p_21)) == p_21))))
        { 
            uint32_t l_75[2][1];
            int32_t l_78 = 0x4E4C4DC4L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_75[i][j] = 4294967293UL;
            }
            --l_75[1][0];
            g_79 = (((p_24.f1 <= g_73) >= (l_78 = 0x10L)) != (0UL <= 0x65L));
            for (p_22 = 0; (p_22 >= 0); p_22 -= 1)
            { 
                int32_t l_80 = 0x7609E5B7L;
                union U2 l_94 = {0x6A7FFA30L};
                --g_81;
                l_78 = (((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(l_75[0][0], (l_94 , (safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((((((((safe_lshift_func_uint16_t_u_s(((--g_81) != (safe_div_func_uint32_t_u_u(l_80, ((safe_mul_func_int16_t_s_s(l_80, 65535UL)) | 0x86B6EF1402E7910ALL)))), 10)) <= p_24.f0) , 0xCB97C0B8L) & g_5) | 0L) , l_72[0][2]) >= 0xA705L) | g_74), 0x27L)) , g_81), (-5L)))))) && 0x78982BF9L), 0x90BAL)), 14)), p_22)), 0xBEL)) , g_36[0]) , 0x85E37C3EL);
            }
        }
        else
        { 
lbl_149:
            for (p_24.f0 = 0; (p_24.f0 >= (-2)); p_24.f0 = safe_sub_func_uint32_t_u_u(p_24.f0, 7))
            { 
                uint32_t l_112[1][3][5];
                int32_t l_121 = 0xC0FF22B7L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_112[i][j][k] = 0x7BD2F3BEL;
                    }
                }
                l_60 = g_109;
                l_48 = ((((safe_lshift_func_int16_t_s_s(g_109.f2, 13)) <= 8UL) , (g_120 ^= ((l_112[0][2][3] = g_73) <= (l_47 = (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(p_21)) | g_5), 255UL)) && g_73) == p_21), 9)) == 0x09L), 6)))))) ^ l_121);
                if (p_24.f0)
                    break;
            }
        }
        if ((((g_81 &= (((((safe_mod_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(g_36[2], (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((l_48 = (safe_add_func_uint32_t_u_u(l_47, ((l_60.f1 , l_132) , g_49)))) >= p_24.f0) || g_36[1]), l_46)), l_132.f0)))), l_47)) , g_109.f0) < 1UL) , l_133) , 1UL)) < l_47) >= p_21))
        { 
            uint8_t l_139 = 0x71L;
            for (g_74 = 0; (g_74 > (-3)); g_74 = safe_sub_func_uint32_t_u_u(g_74, 5))
            { 
                if (l_132.f1)
                    break;
            }
            if ((safe_sub_func_uint64_t_u_u((g_45[1][1].f1 != (((l_139 = l_138) , (g_140 , (safe_sub_func_uint16_t_u_u(p_21, 8UL)))) | 0x96E4AE6EC67F3A6BLL)), 4UL)))
            { 
                l_47 = (((l_132 , ((safe_mod_func_int16_t_s_s(l_46, p_24.f0)) | g_36[2])) & p_23) , l_60.f1);
                if (p_22)
                    goto lbl_148;
lbl_148:
                g_147 ^= (p_24 , ((((safe_add_func_uint32_t_u_u(l_133.f1, p_23)) <= l_46) != l_72[0][1]) & g_74));
                if (p_21)
                    goto lbl_149;
            }
            else
            { 
                g_109 = g_109;
            }
        }
        else
        { 
            int32_t l_158 = (-3L);
            int32_t l_170 = 0x4F3720B2L;
            for (l_46 = 0; (l_46 <= 0); l_46 += 1)
            { 
                uint8_t l_150 = 0UL;
                uint8_t l_155 = 0xEBL;
                l_150 = g_45[1][1].f0;
                l_72[0][1] &= (((safe_lshift_func_uint16_t_u_s(((250UL >= g_74) , (safe_div_func_uint64_t_u_u(((++l_155) <= (g_73 &= (l_158 = p_22))), ((((safe_div_func_uint8_t_u_u(g_140.f2, g_36[2])) > p_23) | g_36[2]) , p_22)))), p_22)) || (-6L)) != 9L);
            }
            for (g_140.f2 = 0; (g_140.f2 <= 4); g_140.f2 += 1)
            { 
                int32_t l_171[3][3];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_171[i][j] = 1L;
                }
                l_169 |= ((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u(((safe_div_func_int64_t_s_s((l_48 ^= (safe_mod_func_uint16_t_u_u((((((p_24.f0 |= ((l_47 = 0x6D180367A8BF02E3LL) && ((l_47 = 0L) >= (-1L)))) < ((g_36[g_140.f2] <= 0x6198L) > 65535UL)) >= g_140.f2) , 0xAE63L) & g_81), g_81))), p_23)) < l_72[0][1]), g_73)) || 255UL), 4)) && g_120) , g_73) || g_73);
                g_172++;
            }
        }
    }
    else
    { 
        int16_t l_175 = 1L;
        l_175 = l_48;
        for (l_132.f1 = 0; l_132.f1 < 5; l_132.f1 += 1)
        {
            g_36[l_132.f1] = 0x3187L;
        }
    }
    return g_140.f0;
}



static uint64_t  func_28(int64_t  p_29, int8_t  p_30, const union U1  p_31)
{ 
    struct S0 l_37 = {0xDCL,0UL,0xC9199ED189098934LL};
    int32_t l_44 = (-1L);
    l_37 = ((g_36[2] = ((0xA7E8B7DD1456014ELL < g_5) > p_29)) , l_37);
    l_44 = ((((g_5 > (safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s((-1L), ((((safe_lshift_func_int8_t_s_u(((-2L) || l_37.f0), 6)) <= l_37.f2) && p_31.f1) < l_37.f2))), 1UL))) , p_31.f0) , 18446744073709551615UL) != 0x7A847E08A84A0002LL);
    return g_36[4];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_36[i], "g_36[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_45[i][j].f0, "g_45[i][j].f0", print_hash_value);
            transparent_crc(g_45[i][j].f1, "g_45[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_199[i], "g_199[i]", print_hash_value);

    }
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
