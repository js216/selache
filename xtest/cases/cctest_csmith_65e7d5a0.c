// SPDX-License-Identifier: MIT
// cctest_csmith_65e7d5a0.c --- cctest case csmith_65e7d5a0 (csmith seed 1709692320)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xedbdc1f0 */
/* @exp_ticks 0x37b9 */

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

// Options:   -s 1709692320 -o /tmp/csmith_gen_b1jc33ep/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint16_t  f0;
   uint8_t  f1;
   uint32_t  f2;
};

union U1 {
   uint32_t  f0;
   int64_t  f1;
   const int64_t  f2;
};


static int16_t g_26 = (-8L);
static uint16_t g_30 = 4UL;
static int32_t g_35 = 0x7649690BL;
static uint32_t g_46 = 0xC5F6B4ABL;
static int64_t g_84[1] = {(-7L)};
static int16_t g_100 = 1L;
static uint8_t g_107 = 0x63L;
static uint32_t g_111 = 0x6DA865B3L;
static uint16_t g_115 = 65535UL;
static int32_t g_118 = 0L;
static union U1 g_119 = {0xBB0F311AL};
static int32_t g_146 = 0L;
static uint32_t g_147 = 0UL;
static int16_t g_165 = 0x2686L;
static int8_t g_181 = 0x10L;
static int32_t g_216 = (-7L);
static uint64_t g_217 = 0x1989BE62DB80F26FLL;
static int32_t g_235[5] = {9L,9L,9L,9L,9L};
static const struct S0 g_322 = {0x89C1L,0xECL,7UL};



static union U1  func_1(void);
static int32_t  func_2(uint64_t  p_3, union U1  p_4, int32_t  p_5, int32_t  p_6, uint16_t  p_7);
static uint16_t  func_14(uint32_t  p_15);
static const int32_t  func_18(uint16_t  p_19, uint8_t  p_20, uint64_t  p_21, uint16_t  p_22, struct S0  p_23);




static union U1  func_1(void)
{ 
    uint64_t l_16[4][3] = {{0x2F80C3414B58E17CLL,0x2F80C3414B58E17CLL,0x2F80C3414B58E17CLL},{18446744073709551615UL,0xA1245C8100C4307ELL,18446744073709551615UL},{0x2F80C3414B58E17CLL,0x2F80C3414B58E17CLL,0x2F80C3414B58E17CLL},{18446744073709551615UL,0xA1245C8100C4307ELL,18446744073709551615UL}};
    struct S0 l_173 = {0x0A7EL,1UL,0x01A1B521L};
    int32_t l_215[4][5][1] = {{{0xB652CE76L},{(-1L)},{0xD2DBEE02L},{(-1L)},{0xB652CE76L}},{{(-1L)},{(-1L)},{0xB652CE76L},{(-1L)},{0xD2DBEE02L}},{{(-1L)},{0xB652CE76L},{(-1L)},{(-1L)},{0xB652CE76L}},{{(-1L)},{0xD2DBEE02L},{(-1L)},{0xB652CE76L},{(-1L)}}};
    int32_t l_226 = 1L;
    struct S0 l_227 = {0x01CBL,0xACL,1UL};
    int8_t l_309 = 0x18L;
    uint8_t l_318 = 251UL;
    uint32_t l_334 = 4294967291UL;
    union U1 l_337 = {1UL};
    int i, j, k;
    if (func_2((safe_mul_func_uint16_t_u_u((((-3L) > ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(func_14(l_16[1][1]), (g_118 = (9UL && g_100)))), g_100)) && g_84[0])) == 1UL), l_16[1][1])), g_119, l_16[1][1], l_16[1][1], g_119.f0))
    { 
        int32_t l_168[1][1][3];
        int32_t l_180 = (-4L);
        int16_t l_182 = 0xE7D8L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_168[i][j][k] = 1L;
            }
        }
        g_118 = (((safe_mul_func_uint8_t_u_u((g_107 = l_16[1][1]), (l_16[1][2] >= (g_165 &= l_16[1][1])))) , ((l_168[0][0][1] = 0x4FE9C12CL) , 0x7743L)) , g_100);
        if ((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((g_181 = (((l_173 , g_111) == (g_46 = (l_180 ^= ((safe_mod_func_uint16_t_u_u((((g_118 |= (safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(g_26, 9)) && 0x2AD0072B36A80461LL), l_173.f1))) < l_168[0][0][1]) | l_168[0][0][1]), g_84[0])) > l_16[1][1])))) || g_84[0])), l_173.f2)), 0xE7L)))
        { 
            g_35 = g_100;
        }
        else
        { 
            uint8_t l_183 = 0x5FL;
            uint8_t l_184 = 0x38L;
            l_183 = l_182;
            l_180 = (((l_184 = 8UL) || 4L) >= (safe_mul_func_uint16_t_u_u(((g_30 & (safe_div_func_uint64_t_u_u(l_16[1][1], 0xE24EADEB179A8617LL))) ^ l_180), (-1L))));
            if (l_180)
                goto lbl_325;
        }
        g_118 = (safe_mod_func_int8_t_s_s((+(((((l_173.f2 <= ((l_173.f0 > ((l_173.f2 | ((safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s((+(safe_mod_func_int16_t_s_s(g_100, 0x440EL))), 7UL)), 0x18L)) , l_173.f2)) && g_165)) != 0xCCE0B296L)) <= l_182) , l_16[1][1]) && g_46) && l_16[1][1])), g_181));
    }
    else
    { 
        int16_t l_201 = 0L;
        int32_t l_214 = 5L;
        uint32_t l_230 = 0x575F5937L;
        int16_t l_245 = 1L;
        union U1 l_252 = {0xADD0621BL};
        uint32_t l_273 = 18446744073709551613UL;
        if ((((safe_add_func_uint64_t_u_u(l_201, ((safe_sub_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((g_181 = (g_119.f0 == g_118)), (!((+(safe_lshift_func_int8_t_s_u(((((((g_107 && g_107) && 0xEAD14177L) , g_84[0]) > l_173.f1) , l_201) >= l_173.f1), g_30))) == l_201)))) || g_111) , g_46), l_201)) >= 1UL) != g_30) , 65529UL), (-5L))) >= 0x98814D17L))) || l_201) & l_201))
        { 
            int32_t l_212 = 0xF1C35A1DL;
            int32_t l_213 = 0x31468258L;
            g_217++;
        }
        else
        { 
            g_146 = 9L;
        }
        g_146 = ((0x165DL || 65527UL) , ((g_165 = (safe_mul_func_uint16_t_u_u((l_173 , (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((l_215[0][3][0] = (l_226 < 4UL)), l_173.f0)) >= 0xAECDL), 9))), g_119.f0))) && g_147));
        if (((((((l_227 , (g_181 = (safe_mul_func_int8_t_s_s(g_119.f0, l_173.f0)))) != ((l_214 |= l_230) > 0x46L)) && g_165) && 0xC8L) > g_35) && l_230))
        { 
            int32_t l_244 = 1L;
            uint16_t l_246[1];
            int i;
            for (i = 0; i < 1; i++)
                l_246[i] = 65529UL;
            l_246[0] ^= (((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u((g_235[1] > (((safe_add_func_int16_t_s_s(g_147, (l_245 = (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(g_115, (g_111 = (safe_lshift_func_uint16_t_u_s(((g_26 != g_26) >= 0xCA24L), 3))))), l_244))))) < g_84[0]) | l_244)), g_107)) ^ l_230) && l_230), g_30)) != l_227.f2) >= l_244);
        }
        else
        { 
            struct S0 l_257 = {0xB9C8L,255UL,18446744073709551615UL};
            for (g_165 = 0; (g_165 >= 25); g_165 = safe_add_func_int32_t_s_s(g_165, 9))
            { 
                uint16_t l_249 = 0x9686L;
                l_249--;
                return l_252;
            }
            for (g_115 = 0; (g_115 == 31); g_115 = safe_add_func_uint64_t_u_u(g_115, 9))
            { 
                uint8_t l_262 = 249UL;
                uint32_t l_284 = 0x311EA467L;
                l_215[2][4][0] = ((g_107 = (safe_mod_func_int8_t_s_s((l_257 , (safe_rshift_func_int16_t_s_s(l_257.f0, (safe_add_func_uint32_t_u_u((g_46 = 0UL), l_262))))), g_84[0]))) || g_181);
                g_146 = (safe_add_func_uint32_t_u_u((g_46 = 0xB8EC8C7DL), (((((safe_sub_func_uint8_t_u_u((g_111 ^ (-5L)), (safe_add_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_273, 0x5970L)), 2)) > g_118), 18446744073709551606UL)))) , l_214) , l_173.f1) < l_273) > l_257.f0)));
                l_226 = ((4UL < (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(0UL, l_201)) > (safe_mul_func_uint16_t_u_u((g_30 = ((((safe_rshift_func_uint16_t_u_u((((g_181 ^ l_230) ^ 0xEAB1L) == g_46), 10)) <= l_201) , l_284) != g_181)), l_227.f0))), l_230)), l_215[3][2][0]))) , g_181);
            }
            l_214 |= ((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(((((g_217 = l_16[1][1]) & (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((((safe_div_func_int16_t_s_s((((safe_div_func_int64_t_s_s((((~0xC0702C48DB37E611LL) != ((l_252.f0 > (safe_unary_minus_func_int8_t_s(((g_181 >= l_16[1][1]) || l_245)))) , 0xA9L)) < l_257.f2), g_119.f0)) == l_252.f0) || g_216), l_201)) , 0x618106815FF81F1CLL) < 0x37358A6C8DEDF795LL), g_118)) & g_165), g_111)), 0x2529L))) ^ 0xBAAAL) && 0x39L), 15)) , 0xC4E5ABEBF25DA6E1LL) > 0L), 15)) > g_84[0]);
        }
    }
    g_146 = ((safe_add_func_int32_t_s_s((l_215[0][4][0] ^= ((safe_mod_func_int32_t_s_s((((((safe_add_func_int64_t_s_s(((-9L) >= g_84[0]), (((safe_add_func_uint16_t_u_u((((g_35 = 1L) >= (l_16[1][1] , 0x201F38D1L)) , 0x0A70L), g_146)) > l_173.f2) == 0xF16BL))) == l_16[1][1]) <= g_26) | l_309) && l_16[1][1]), 0xE52BDFDBL)) > 1L)), g_235[1])) , 0xEB1CB8ADL);
    if (((safe_mul_func_int16_t_s_s((((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(l_16[1][0], (safe_add_func_uint32_t_u_u(((l_215[0][4][0] = (0x1467L ^ (((l_226 = 1L) & g_147) | g_235[1]))) | l_318), g_30)))), 0x6ECB8E05L)) > g_119.f0) == g_46) && 1L) != g_216), g_165)) >= g_165))
    { 
        g_118 = (((-8L) >= l_215[2][2][0]) < (safe_lshift_func_int8_t_s_u((+1L), 5)));
    }
    else
    { 
lbl_325:
        g_35 = (g_322 , (safe_sub_func_uint32_t_u_u(0x29711FA6L, 1UL)));
        l_215[3][0][0] = (safe_div_func_int32_t_s_s((g_146 = (safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((l_334 && (g_35 = l_173.f1)), (safe_sub_func_uint8_t_u_u((l_227 , g_26), g_84[0])))), 0x60709DD38E61717CLL)), 13))), g_100));
    }
    return l_337;
}



static int32_t  func_2(uint64_t  p_3, union U1  p_4, int32_t  p_5, int32_t  p_6, uint16_t  p_7)
{ 
    int32_t l_127 = 4L;
    uint32_t l_140 = 0xDA28E2A2L;
    int32_t l_141 = 0L;
    int32_t l_143 = 0x284883CCL;
    int32_t l_145 = (-1L);
    uint16_t l_161 = 65535UL;
    for (p_6 = 0; (p_6 >= 0); p_6 -= 1)
    { 
        int32_t l_126 = 0x9FEB662FL;
        int i;
        l_126 = (((g_84[p_6] > (p_5 < (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((((1UL >= (g_35 = p_5)) & 0L) ^ 0x2EE2L), p_3)), 6)))) && 18446744073709551607UL) > 9L);
        g_35 |= (((p_4.f0 = l_127) , (safe_sub_func_uint32_t_u_u((((l_141 |= (p_7 || ((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((l_127 ^ (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(0xD0B6L, g_84[p_6])) , p_3), 0xE2L)), 7))), l_126)), p_5)) > l_140))) || p_5) != l_140), l_140))) >= 0L);
        if (g_84[0])
            continue;
    }
    if ((l_141 = (p_5 == l_127)))
    { 
        return l_140;
    }
    else
    { 
        int32_t l_142 = 0xF0255556L;
        int32_t l_144[2];
        int32_t l_162 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_144[i] = 1L;
        --g_147;
        l_162 &= (((safe_rshift_func_uint16_t_u_u((p_6 ^ g_118), (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((l_144[1] == ((+((safe_lshift_func_uint8_t_u_s((0xE6CD9D43CF306C01LL >= 2UL), 7)) ^ 0UL)) >= 0x8A83L)), 1L)) , 1L), p_3)), l_161)))) >= p_6) == l_144[0]);
    }
    g_118 = ((((((0x22342146L < (g_30 <= ((g_165 = (safe_div_func_int32_t_s_s(l_145, l_140))) != g_146))) == 18446744073709551611UL) < g_119.f0) | g_46) != (-9L)) ^ l_127);
    return g_111;
}



static uint16_t  func_14(uint32_t  p_15)
{ 
    int64_t l_17[1][3];
    int32_t l_29 = 0xD9964974L;
    int32_t l_50 = 0x30B54543L;
    uint8_t l_101 = 0x2BL;
    int16_t l_110 = 0x5BF1L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_17[i][j] = 9L;
    }
    for (p_15 = 0; (p_15 <= 0); p_15 += 1)
    { 
        const uint32_t l_31 = 0x627E80A7L;
        struct S0 l_32 = {1UL,1UL,0x8CBDB62BL};
        int32_t l_48 = 0x1D55E0ECL;
        l_48 = func_18(((((safe_div_func_int32_t_s_s(((g_26 == 0x4B11L) , (0xAAE07EA4C5706B37LL ^ (g_30 = (safe_lshift_func_uint8_t_u_u(((l_29 = g_26) < g_26), l_17[0][2]))))), l_31)) == 65535UL) || l_31) , l_29), l_31, g_26, l_31, l_32);
        for (l_29 = 0; (l_29 <= 0); l_29 += 1)
        { 
            int32_t l_49 = (-1L);
            uint16_t l_73[4][2] = {{0x1824L,0x1824L},{0x1824L,0x1824L},{0x1824L,0x1824L},{0x1824L,0x1824L}};
            int32_t l_82 = 0x97794FBAL;
            int i, j;
            if ((l_50 |= (l_49 = l_17[l_29][(p_15 + 2)])))
            { 
                int16_t l_53 = 0x8E7EL;
                g_35 = (safe_mul_func_uint8_t_u_u(((g_30 || (((l_49 | (l_53 == ((((safe_mul_func_uint16_t_u_u(((p_15 , l_49) > l_32.f0), 8UL)) , p_15) & p_15) == g_26))) , l_29) <= p_15)) != l_53), l_32.f2));
                g_35 = (safe_div_func_uint64_t_u_u(g_46, ((l_50 = (l_49 &= (g_26 | (safe_rshift_func_uint8_t_u_u((l_17[l_29][(p_15 + 2)] != ((safe_div_func_uint32_t_u_u(p_15, g_30)) != g_30)), 4))))) ^ p_15)));
                if (g_30)
                    continue;
            }
            else
            { 
                uint64_t l_66[3][4] = {{18446744073709551615UL,18446744073709551615UL,0x1E0EF155D2618108LL,18446744073709551615UL},{18446744073709551615UL,0xB93F16A1EA5693CDLL,0xB93F16A1EA5693CDLL,18446744073709551615UL},{0xB93F16A1EA5693CDLL,18446744073709551615UL,0xB93F16A1EA5693CDLL,0xB93F16A1EA5693CDLL}};
                int16_t l_81[4][5][2] = {{{(-3L),(-1L)},{0x9FB7L,(-3L)},{(-1L),(-1L)},{4L,4L},{0x9FB7L,4L}},{{4L,(-1L)},{(-1L),(-3L)},{0x9FB7L,(-1L)},{(-3L),(-1L)},{(-3L),(-1L)}},{{0x9FB7L,(-3L)},{(-1L),(-1L)},{4L,4L},{0x9FB7L,4L},{4L,(-1L)}},{{(-1L),(-3L)},{0x9FB7L,(-1L)},{(-3L),(-1L)},{(-3L),(-1L)},{0x9FB7L,(-3L)}}};
                int32_t l_83 = 0x7469BA6CL;
                int i, j, k;
                g_35 |= ((((g_30 > (safe_add_func_int16_t_s_s(p_15, (((7UL ^ (((safe_rshift_func_int8_t_s_s(0x34L, 7)) <= p_15) < (-7L))) >= l_66[1][3]) < l_49)))) < l_66[1][3]) > g_26) , p_15);
                l_49 = (l_17[l_29][(p_15 + 2)] >= (((safe_add_func_uint8_t_u_u(p_15, (safe_mul_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(l_49, l_17[0][0])) != l_73[0][0]), g_30)))) > 0xE3B8AEA2L) == (-4L)));
                g_84[0] = ((safe_mul_func_int16_t_s_s(0xAD8FL, (l_83 = (l_82 |= ((((l_49 |= p_15) & (((safe_add_func_uint64_t_u_u((((l_81[0][1][0] = (safe_rshift_func_int8_t_s_s(((((l_73[0][1] < (~p_15)) && l_17[0][2]) || 4294967291UL) < g_46), p_15))) > g_30) && g_35), g_46)) > 0xC4802A3EDB7DE593LL) ^ g_30)) , g_26) == 7L))))) & 0xC6914174L);
            }
            g_35 |= p_15;
        }
        if (((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((((g_26 = (safe_mod_func_uint64_t_u_u(((l_48 != (safe_mul_func_int8_t_s_s(8L, (g_30 >= (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((~l_48) < p_15), g_30)), g_30)), 7)))))) || 0x8947L), g_84[0]))) | g_100) , g_46) & g_84[0]) <= (-1L)), g_30)), 0x8E95L)) , (-1L)))
        { 
            g_35 = l_101;
        }
        else
        { 
            uint32_t l_102 = 1UL;
            int32_t l_106[1][2][4] = {{{1L,1L,1L,1L},{1L,1L,1L,1L}}};
            int i, j, k;
            g_35 = g_46;
            for (g_30 = 0; (g_30 <= 0); g_30 += 1)
            { 
                int32_t l_105 = 0xCA122FC4L;
                --l_102;
                if (l_105)
                    break;
            }
            --g_107;
        }
        for (g_107 = 0; (g_107 <= 0); g_107 += 1)
        { 
            --g_111;
            for (l_32.f1 = 0; (l_32.f1 <= 0); l_32.f1 += 1)
            { 
                uint16_t l_114[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_114[i] = 0UL;
                l_114[0] = g_84[0];
                --g_115;
            }
        }
    }
    g_35 = 0x19422B6AL;
    return g_26;
}



static const int32_t  func_18(uint16_t  p_19, uint8_t  p_20, uint64_t  p_21, uint16_t  p_22, struct S0  p_23)
{ 
    int32_t l_45 = 0x060A3B7DL;
    const uint8_t l_47 = 0x63L;
    for (g_30 = 0; (g_30 > 9); g_30 = safe_add_func_uint64_t_u_u(g_30, 3))
    { 
        int32_t l_44 = 1L;
        g_35 = 0xBF81606DL;
        g_46 |= (((g_35 == (((1UL >= (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_23.f2, 10)), 14)), (safe_mul_func_int8_t_s_s(0x18L, l_44))))) <= p_22) || g_30)) ^ 0UL) && l_45);
        g_35 |= l_45;
    }
    return l_47;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_235[i], "g_235[i]", print_hash_value);

    }
    transparent_crc(g_322.f0, "g_322.f0", print_hash_value);
    transparent_crc(g_322.f1, "g_322.f1", print_hash_value);
    transparent_crc(g_322.f2, "g_322.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
