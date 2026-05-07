// SPDX-License-Identifier: MIT
// cctest_csmith_02bb97fa.c --- cctest case csmith_02bb97fa (csmith seed 45848570)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x38e5630d */

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

// Options:   -s 45848570 -o /tmp/csmith_gen_nh77et74/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 11;
   signed f1 : 20;
   unsigned f2 : 6;
   const signed f3 : 26;
   unsigned f4 : 1;
   signed f5 : 20;
};

union U1 {
   uint32_t  f0;
   uint64_t  f1;
   int8_t * const  f2;
};

union U2 {
   int64_t  f0;
   uint64_t  f1;
   int8_t * f2;
   int64_t  f3;
   uint64_t  f4;
};

union U3 {
   int32_t  f0;
   uint32_t  f1;
   uint32_t  f2;
};

union U4 {
   uint32_t  f0;
   uint16_t  f1;
   const uint64_t  f2;
   uint8_t  f3;
};


static struct S0 g_8 = {21,535,4,-4646,0,560};
static const int8_t *g_14 = (void*)0;
static const union U2 g_35 = {7L};
static int32_t g_37 = 0L;
static uint64_t g_38[7] = {1UL,0UL,1UL,1UL,0UL,1UL,1UL};
static uint32_t g_40 = 0xD98A9A26L;
static int32_t g_47 = 1L;
static union U1 g_51 = {18446744073709551608UL};
static uint32_t g_69 = 0UL;
static int64_t g_73 = 6L;
static int16_t g_77 = 5L;
static int32_t g_80 = 2L;
static uint8_t g_98 = 0xA6L;
static int32_t g_102 = 0L;
static int8_t g_111 = 0x2EL;
static uint8_t g_113 = 7UL;
static int32_t g_133[4] = {0x1A38A02CL,0x1A38A02CL,0x1A38A02CL,0x1A38A02CL};
static int32_t g_179[2][4] = {{0xF9F8B71BL,0xF9F8B71BL,0xF9F8B71BL,0xF9F8B71BL},{0xF9F8B71BL,0xF9F8B71BL,0xF9F8B71BL,0xF9F8B71BL}};
static int8_t g_195[5] = {0xF7L,0xF7L,0xF7L,0xF7L,0xF7L};
static int8_t g_211 = (-5L);
static uint32_t g_244[6] = {0xB5C9429CL,0xB44A2E45L,0xB5C9429CL,0xB5C9429CL,0xB44A2E45L,0xB5C9429CL};
static uint16_t g_253 = 0x3B67L;
static union U4 g_258 = {4294967295UL};
static uint8_t g_282 = 1UL;
static const int64_t g_326 = 0x19C4D017344DE312LL;
static const int64_t *g_325 = &g_326;
static int32_t *g_339 = &g_102;
static int32_t **g_338 = &g_339;
static struct S0 g_343 = {31,-972,0,-3968,0,648};
static union U3 g_348 = {0L};
static union U3 *g_350 = &g_348;
static union U4 g_381 = {0UL};
static int8_t g_465 = 3L;
static int8_t *g_476 = (void*)0;
static struct S0 *g_566 = &g_343;
static struct S0 **g_565[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U3 g_592 = {7L};
static int16_t g_612 = 0x9F0AL;
static int32_t *g_632 = &g_348.f0;
static int32_t **g_631 = &g_632;
static uint16_t *g_653 = (void*)0;
static uint16_t **g_652[7][6][1] = {{{&g_653},{&g_653},{&g_653},{&g_653},{(void*)0},{&g_653}},{{&g_653},{&g_653},{&g_653},{(void*)0},{&g_653},{(void*)0}},{{&g_653},{(void*)0},{&g_653},{&g_653},{(void*)0},{&g_653}},{{(void*)0},{&g_653},{(void*)0},{&g_653},{&g_653},{(void*)0}},{{&g_653},{(void*)0},{&g_653},{(void*)0},{&g_653},{&g_653}},{{(void*)0},{&g_653},{(void*)0},{&g_653},{(void*)0},{&g_653}},{{&g_653},{(void*)0},{&g_653},{(void*)0},{&g_653},{(void*)0}}};
static const uint32_t g_678 = 0xC4745260L;
static const uint32_t g_680 = 4294967295UL;
static const uint32_t *g_679 = &g_680;
static uint32_t g_717 = 0UL;
static uint8_t **g_720 = (void*)0;
static uint64_t g_745 = 18446744073709551608UL;
static const int16_t *g_824[7] = {&g_77,&g_77,(void*)0,&g_77,&g_77,(void*)0,&g_77};
static const int16_t **g_823 = &g_824[4];
static int64_t g_884 = 1L;
static union U2 g_965 = {0x20AAE486BBF30B0CLL};
static struct S0 g_1022 = {22,-232,2,-6120,0,-682};
static union U4 g_1165 = {0x3E3D21FBL};
static uint8_t g_1219 = 255UL;
static union U2 *g_1228 = (void*)0;
static uint32_t g_1233[4] = {1UL,1UL,1UL,1UL};
static const int16_t ***g_1237 = (void*)0;
static const int16_t *** const *g_1236 = &g_1237;
static struct S0 *g_1277 = &g_343;
static struct S0 g_1280[3] = {{-27,825,5,-3925,0,-653},{-27,825,5,-3925,0,-653},{-27,825,5,-3925,0,-653}};
static union U4 * const g_1287 = &g_381;
static union U4 * const *g_1286 = &g_1287;
static int32_t g_1315 = 0L;
static uint8_t g_1356 = 0x65L;
static int32_t * const *g_1386 = &g_339;
static int32_t * const ** const g_1385 = &g_1386;
static int32_t * const ** const *g_1384[2] = {&g_1385,&g_1385};
static int32_t *g_1400[4] = {&g_1315,&g_1315,&g_1315,&g_1315};
static int8_t g_1419 = 0L;
static uint16_t g_1429 = 7UL;
static int16_t *g_1466 = &g_612;
static int16_t **g_1465[6] = {&g_1466,&g_1466,&g_1466,&g_1466,&g_1466,&g_1466};
static int16_t ***g_1464[1] = {&g_1465[2]};
static union U4 g_1528 = {0xC509685EL};
static union U4 *g_1527 = &g_1528;
static uint16_t *g_1609 = (void*)0;
static union U4 ** const g_1632 = &g_1527;
static union U4 ** const *g_1631 = &g_1632;
static union U4 ** const **g_1630[3][4][2] = {{{&g_1631,&g_1631},{&g_1631,&g_1631},{&g_1631,&g_1631},{&g_1631,&g_1631}},{{&g_1631,&g_1631},{&g_1631,&g_1631},{&g_1631,&g_1631},{&g_1631,&g_1631}},{{&g_1631,&g_1631},{&g_1631,&g_1631},{&g_1631,&g_1631},{&g_1631,&g_1631}}};
static int16_t *** const **g_1678 = (void*)0;
static int16_t **** const *g_1681[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t g_1705 = 0x07CF5FEDL;
static uint8_t g_1857 = 0x48L;
static union U3 **g_1898 = &g_350;
static union U3 ***g_1897 = &g_1898;
static int32_t g_1899 = (-1L);
static int32_t g_1900 = 0x8C526C80L;
static uint8_t ***g_1906 = &g_720;
static uint8_t ****g_1905 = &g_1906;
static int32_t ** const *g_1956 = &g_338;
static int32_t ** const **g_1955 = &g_1956;
static union U1 *g_1967 = &g_51;
static union U1 **g_1966[7] = {&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967};
static uint64_t g_2047 = 18446744073709551613UL;
static uint32_t *g_2093 = &g_51.f0;
static uint32_t **g_2092 = &g_2093;
static const uint32_t *g_2098 = (void*)0;
static const uint32_t **g_2097 = &g_2098;
static uint64_t *g_2113 = &g_965.f1;
static union U3 *g_2150 = &g_348;
static union U3 ** const g_2149 = &g_2150;
static union U3 ** const *g_2148 = &g_2149;
static int16_t ****g_2155 = (void*)0;



static uint8_t  func_1(void);
static int32_t  func_2(struct S0  p_3, uint64_t  p_4, union U2  p_5, int8_t * p_6, int8_t * p_7);
static int8_t * func_10(const int8_t * p_11, union U3  p_12, uint8_t  p_13);
static const union U3  func_20(int8_t * p_21, union U1  p_22);
static int8_t * func_23(uint32_t  p_24, int16_t  p_25, struct S0  p_26);
static int64_t  func_31(uint8_t  p_32, const union U2  p_33, const uint64_t  p_34);
static int32_t * func_49(int32_t * p_50);
static int32_t * func_52(int32_t  p_53, uint64_t  p_54);




static uint8_t  func_1(void)
{ 
    union U2 l_9[2][7] = {{{0xD5D0881826FBD10CLL},{0xF8F9ED02E889EC00LL},{6L},{0x6EC7E434392F2092LL},{0x6EC7E434392F2092LL},{6L},{0xF8F9ED02E889EC00LL}},{{0xD5D0881826FBD10CLL},{0xF8F9ED02E889EC00LL},{6L},{0x6EC7E434392F2092LL},{0x6EC7E434392F2092LL},{6L},{0xF8F9ED02E889EC00LL}}};
    union U3 l_15[1][5] = {{{1L},{1L},{1L},{1L},{1L}}};
    int64_t *l_1075 = &g_965.f0;
    int64_t l_1076 = 0x5B8025C2CEA80E4ELL;
    struct S0 l_1077 = {36,872,1,5196,0,-764};
    union U1 l_1132[7] = {{0xA300D233L},{0xA300D233L},{0xA300D233L},{0xA300D233L},{0xA300D233L},{0xA300D233L},{0xA300D233L}};
    int8_t *l_1588 = &g_1419;
    int32_t l_2205[4][5][3] = {{{0x0B5B0BD3L,0x09BD9F00L,(-5L)},{0x43DD5368L,0x0B5B0BD3L,0x0B5B0BD3L},{0x0B5B0BD3L,0x7D0D2591L,0xD90BCD08L},{0xE3E9C8CCL,0xADBCDA22L,0xD90BCD08L},{0x5B74CA83L,0xD90BCD08L,0x0B5B0BD3L}},{{(-8L),8L,(-5L)},{0xD90BCD08L,0xD90BCD08L,8L},{0x09BD9F00L,0xADBCDA22L,0x5C1F45AEL},{0x09BD9F00L,0x7D0D2591L,(-8L)},{0xD90BCD08L,0x0B5B0BD3L,0xADBCDA22L}},{{(-8L),0x09BD9F00L,(-8L)},{0x5B74CA83L,0x233F0388L,0x5C1F45AEL},{0xE3E9C8CCL,0x233F0388L,8L},{0x0B5B0BD3L,0x09BD9F00L,(-5L)},{0x43DD5368L,0x0B5B0BD3L,0x0B5B0BD3L}},{{0x0B5B0BD3L,0x7D0D2591L,0xD90BCD08L},{0xE3E9C8CCL,0xADBCDA22L,0xD90BCD08L},{0x5B74CA83L,0xD90BCD08L,0x0B5B0BD3L},{(-8L),8L,(-5L)},{0xD90BCD08L,0xD90BCD08L,8L}}};
    int32_t *l_2206[2];
    int32_t l_2207 = 0xB2065663L;
    uint64_t l_2208 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2206[i] = (void*)0;
    l_2205[0][3][2] |= func_2(g_8, g_8.f3, l_9[0][3], func_10(g_14, l_15[0][4], (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((func_20(func_23((l_1076 = (safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((*l_1075) = ((func_31((g_14 != (void*)0), g_35, g_8.f0) == 0xCB908EB766810CFCLL) & l_9[0][3].f4)), l_9[0][3].f0)), 0xCE06L))), l_15[0][4].f1, l_1077), l_1132[4]) , 0x1D67136A6D655E1CLL) & 0x0272E95F95AEA4B4LL), 3)), l_9[0][3].f4))), l_1588);
    l_2208--;
    return g_1219;
}



static int32_t  func_2(struct S0  p_3, uint64_t  p_4, union U2  p_5, int8_t * p_6, int8_t * p_7)
{ 
    int32_t ** const *l_1594 = &g_631;
    int32_t ** const **l_1593 = &l_1594;
    uint16_t *l_1606 = &g_1165.f1;
    uint32_t l_1614 = 0x9F9AE8B5L;
    uint32_t l_1616 = 0xEA1589A3L;
    int32_t *l_1657 = (void*)0;
    uint8_t l_1659 = 0UL;
    uint16_t l_1667 = 0xC92CL;
    int8_t l_1673 = 0xBAL;
    int16_t ***l_1684 = &g_1465[2];
    int16_t **** const l_1683 = &l_1684;
    int16_t **** const *l_1682[1][5] = {{&l_1683,&l_1683,&l_1683,&l_1683,&l_1683}};
    union U1 *l_1691 = &g_51;
    union U1 **l_1690 = &l_1691;
    union U4 l_1698 = {0xFBB85ADBL};
    const int32_t *l_1703[4][1][6];
    const int32_t **l_1702 = &l_1703[1][0][3];
    const int32_t ***l_1701[6] = {&l_1702,&l_1702,&l_1702,&l_1702,&l_1702,&l_1702};
    uint16_t l_1704 = 0x7A37L;
    const union U3 l_1713 = {-4L};
    int32_t l_1734 = 0xC6D822CEL;
    int32_t l_1735 = (-6L);
    int32_t l_1736 = (-1L);
    int32_t l_1737 = (-1L);
    uint16_t l_1738 = 1UL;
    uint32_t l_1765[4][3][3] = {{{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL},{1UL,4UL,1UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL}},{{1UL,4UL,1UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL},{1UL,4UL,1UL}},{{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL},{1UL,4UL,1UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL}},{{1UL,4UL,1UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551608UL},{1UL,4UL,1UL}}};
    int64_t l_1806 = 0xB48AD25369E03322LL;
    struct S0 * const l_1824 = &g_8;
    uint8_t l_1831[4];
    uint8_t ***l_1867 = &g_720;
    uint32_t l_1874 = 0x1C75058DL;
    uint32_t l_1975[3][4][2];
    uint64_t l_1979[4][4][6] = {{{0x31B0C7A67B5DFBA8LL,18446744073709551610UL,0x69EF885B6DB75B02LL,0x55DB631702E67533LL,1UL,0x90A5FFE8E82F2564LL},{1UL,0xC94B2D9D3791F3E1LL,0x55DB631702E67533LL,18446744073709551611UL,5UL,18446744073709551611UL},{7UL,0x4C00F38C7AD45A63LL,7UL,1UL,0x55DB631702E67533LL,18446744073709551608UL},{18446744073709551612UL,0x1E8697F7D18ADBB9LL,18446744073709551610UL,0xE81D86266B7B4E61LL,0xC94B2D9D3791F3E1LL,1UL}},{{0x142C36B74E5525FCLL,0x2D9D72AFBE14C155LL,0x05B6DD43CD62A45BLL,0xE81D86266B7B4E61LL,0xA95574BA5DD74A97LL,1UL},{18446744073709551612UL,0x142C36B74E5525FCLL,0x69EF885B6DB75B02LL,1UL,1UL,18446744073709551612UL},{7UL,0UL,0xC94B2D9D3791F3E1LL,18446744073709551611UL,0x4C00F38C7AD45A63LL,0x28F4BED69A4F4034LL},{1UL,18446744073709551615UL,0x49B8FD453E7A5583LL,0x55DB631702E67533LL,0x55DB631702E67533LL,0x49B8FD453E7A5583LL}},{{0x31B0C7A67B5DFBA8LL,0x31B0C7A67B5DFBA8LL,0x55DB631702E67533LL,0xC6ABDEFC8A0807B2LL,18446744073709551615UL,1UL},{18446744073709551610UL,0x4C00F38C7AD45A63LL,0x7567321D723ADAF8LL,0x69EF885B6DB75B02LL,0UL,0x55DB631702E67533LL},{18446744073709551612UL,18446744073709551610UL,0x7567321D723ADAF8LL,0UL,0x31B0C7A67B5DFBA8LL,1UL},{18446744073709551611UL,0UL,0x55DB631702E67533LL,0x28F4BED69A4F4034LL,0xA95574BA5DD74A97LL,0x49B8FD453E7A5583LL}},{{0x28F4BED69A4F4034LL,0xA95574BA5DD74A97LL,0x49B8FD453E7A5583LL,1UL,0x142C36B74E5525FCLL,0x28F4BED69A4F4034LL},{0x1E8697F7D18ADBB9LL,18446744073709551612UL,0xC94B2D9D3791F3E1LL,0xC6ABDEFC8A0807B2LL,0xC94B2D9D3791F3E1LL,18446744073709551612UL},{0xC94B2D9D3791F3E1LL,18446744073709551615UL,0x69EF885B6DB75B02LL,0x05B6DD43CD62A45BLL,0UL,1UL},{0x31B0C7A67B5DFBA8LL,0xC94B2D9D3791F3E1LL,0x05B6DD43CD62A45BLL,0x142C36B74E5525FCLL,0xAC92EFD02A1150FELL,1UL}}};
    uint8_t l_1980 = 0xAEL;
    int32_t l_2012[6][3][6] = {{{0xF5CB1EEDL,0x7759B6F1L,1L,0x8C4B5AFFL,0x40A5E988L,0x8C4B5AFFL},{(-10L),1L,(-10L),4L,0x40A5E988L,(-9L)},{1L,0x7759B6F1L,0xF5CB1EEDL,(-10L),4L,0xF5CB1EEDL}},{{0xB3CDDF4DL,(-7L),0x200E7C60L,(-10L),0x7759B6F1L,4L},{1L,0x6D9DA8C8L,(-9L),4L,0xB149EF53L,0x200E7C60L},{(-10L),(-7L),(-9L),0x8C4B5AFFL,(-7L),4L}},{{0xF5CB1EEDL,0x7B68F692L,0x200E7C60L,0x200E7C60L,0x7B68F692L,0xF5CB1EEDL},{0x200E7C60L,0x7B68F692L,0xF5CB1EEDL,0x35B54A53L,(-7L),(-9L)},{(-9L),(-7L),(-10L),1L,0xB149EF53L,0x8C4B5AFFL}},{{(-9L),0xB3CDDF4DL,0x8B2BCCA4L,0x5AB1876AL,(-9L),(-3L)},{(-5L),4L,0xA5B68400L,(-5L),0x8C4B5AFFL,(-3L)},{0xF477F237L,(-9L),0x8B2BCCA4L,(-1L),0x6B99D703L,(-1L)}},{{0xE8DD341AL,0x35B54A53L,0xE8DD341AL,0x57CB0420L,0x6B99D703L,0x448F4E59L},{0x8B2BCCA4L,(-9L),0xF477F237L,0xE8DD341AL,0x8C4B5AFFL,0xF477F237L},{0xA5B68400L,4L,(-5L),0xE8DD341AL,(-9L),0x57CB0420L}},{{0x8B2BCCA4L,0xB3CDDF4DL,0x448F4E59L,0x57CB0420L,0xF5CB1EEDL,(-5L)},{0xE8DD341AL,0xB467E008L,0x448F4E59L,(-1L),4L,0x57CB0420L},{0xF477F237L,0x200E7C60L,(-5L),(-5L),0x200E7C60L,0xF477F237L}}};
    union U1 l_2015 = {0xF075D214L};
    int8_t l_2053 = 0L;
    uint32_t ***l_2125 = &g_2092;
    union U3 ** const *l_2145[2][7][4] = {{{&g_1898,(void*)0,&g_1898,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1898,(void*)0,&g_1898,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1898,(void*)0,&g_1898,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1898,(void*)0,&g_1898,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1898,(void*)0,&g_1898,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1898,(void*)0,&g_1898,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1898,(void*)0,&g_1898,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_2194 = 0x8ECC3546L;
    int32_t l_2195 = 5L;
    int32_t l_2197 = (-5L);
    int32_t l_2198 = 0x2A3F6D88L;
    int32_t l_2199[2][3][3] = {{{0xB97EFA90L,0x0B6A33D5L,0x0B6A33D5L},{(-4L),0xC326942CL,(-4L)},{0xB97EFA90L,0xB97EFA90L,0x0B6A33D5L}},{{(-7L),0xC326942CL,(-7L)},{0xB97EFA90L,0x0B6A33D5L,0x0B6A33D5L},{(-4L),0xC326942CL,(-4L)}}};
    uint32_t l_2202[4][3][4] = {{{18446744073709551611UL,0UL,0xBB00B80BL,0xC23A98DBL},{0x5D04B1B2L,0x6AC153FCL,0xF420FE94L,0x9D974DE7L},{1UL,0xC45BCF21L,1UL,0x7FFBC6A4L}},{{18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551607UL},{0x6AC153FCL,3UL,18446744073709551607UL,18446744073709551615UL},{0xBB00B80BL,18446744073709551615UL,18446744073709551607UL,18446744073709551611UL}},{{0x6AC153FCL,0xBB00B80BL,1UL,0x5D04B1B2L},{18446744073709551615UL,0xF420FE94L,1UL,1UL},{1UL,1UL,0xF420FE94L,18446744073709551615UL}},{{0x5D04B1B2L,1UL,0xBB00B80BL,0x6AC153FCL},{18446744073709551611UL,18446744073709551607UL,18446744073709551615UL,0xBB00B80BL},{18446744073709551615UL,18446744073709551607UL,3UL,0x6AC153FCL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_1703[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 4; i++)
        l_1831[i] = 0UL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
                l_1975[i][j][k] = 0UL;
        }
    }
    for (g_1528.f1 = 5; (g_1528.f1 < 51); ++g_1528.f1)
    { 
        uint16_t *l_1607 = &g_1429;
        int32_t l_1612 = 0L;
        union U2 l_1644 = {4L};
        for (p_4 = 2; (p_4 <= 6); p_4 += 1)
        { 
            uint32_t l_1600[5][6] = {{0xC942352EL,4294967286UL,0xC942352EL,0UL,0x31B108B5L,0x0757BFB3L},{0xA63C4749L,0UL,0xC751775AL,3UL,0xDCA6A652L,0xDCA6A652L},{3UL,0xDCA6A652L,0xDCA6A652L,3UL,4294967286UL,1UL},{0xC942352EL,0xDCA6A652L,0xC751775AL,1UL,0x0757BFB3L,0x489F7581L},{0x0757BFB3L,4294967286UL,0xA63C4749L,4294967286UL,0x0757BFB3L,1UL}};
            int32_t l_1601 = 0xAD0CD7D2L;
            int32_t *l_1602 = &g_80;
            int32_t *l_1608 = &g_37;
            int8_t *l_1613 = &g_195[3];
            uint64_t *l_1615 = &g_38[6];
            union U1 l_1622 = {0xBE389BFFL};
            int16_t *** const l_1627 = &g_1465[2];
            int i, j;
            (*l_1602) = (p_5.f3 || (g_1233[0] , (((*p_7) = (safe_mul_func_uint16_t_u_u(p_3.f4, ((((void*)0 != l_1593) & ((!p_3.f1) < ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((255UL ^ l_1600[3][3]), 0x819D99EDL)) == l_1600[1][1]), 6)) > (*g_325)))) != 0x3DL)))) < l_1601)));
            if ((((((*l_1615) = ((safe_sub_func_uint32_t_u_u((((*l_1602) = p_5.f4) == (p_3.f0 ^= (p_3.f1 |= ((g_35 , (safe_unary_minus_func_int32_t_s(((*l_1608) = ((l_1606 = l_1606) != l_1607))))) >= ((void*)0 == g_1609))))), (safe_sub_func_uint8_t_u_u((((*l_1613) |= ((*p_7) ^= ((l_1612 != p_3.f4) > p_5.f3))) ^ l_1614), 0UL)))) < (*g_679))) == g_612) | l_1612) != g_965.f4))
            { 
                return l_1616;
            }
            else
            { 
                const union U4 l_1621 = {0x487C65FAL};
                uint32_t *l_1628 = &g_1233[3];
                const int64_t l_1629 = 0xA90FAF96A7692E2DLL;
                union U4 **l_1645 = (void*)0;
                uint8_t ***l_1655[4][7][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&g_720},{(void*)0,&g_720,&g_720,&g_720,&g_720},{(void*)0,&g_720,(void*)0,&g_720,(void*)0},{&g_720,&g_720,(void*)0,&g_720,&g_720},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_720,&g_720,(void*)0,&g_720,&g_720},{&g_720,&g_720,(void*)0,&g_720,&g_720}},{{&g_720,&g_720,&g_720,&g_720,&g_720},{&g_720,(void*)0,(void*)0,(void*)0,(void*)0},{&g_720,&g_720,&g_720,&g_720,&g_720},{&g_720,(void*)0,&g_720,&g_720,&g_720},{&g_720,&g_720,&g_720,&g_720,&g_720},{&g_720,&g_720,&g_720,(void*)0,(void*)0},{&g_720,&g_720,&g_720,&g_720,&g_720}},{{&g_720,&g_720,&g_720,(void*)0,(void*)0},{&g_720,&g_720,&g_720,&g_720,&g_720},{&g_720,(void*)0,&g_720,(void*)0,&g_720},{&g_720,&g_720,&g_720,&g_720,&g_720},{(void*)0,(void*)0,&g_720,(void*)0,(void*)0},{&g_720,&g_720,&g_720,&g_720,&g_720},{(void*)0,&g_720,&g_720,(void*)0,(void*)0}},{{(void*)0,&g_720,&g_720,&g_720,&g_720},{(void*)0,(void*)0,(void*)0,(void*)0,&g_720},{(void*)0,&g_720,&g_720,&g_720,&g_720},{(void*)0,&g_720,(void*)0,&g_720,(void*)0},{&g_720,&g_720,(void*)0,&g_720,&g_720},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_720,&g_720,(void*)0,&g_720,&g_720}}};
                int32_t l_1656[1][4][1];
                int16_t *l_1675 = &g_612;
                int16_t *** const *l_1680[7];
                int16_t *** const **l_1679 = &l_1680[3];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1656[i][j][k] = 0x17C7149CL;
                    }
                }
                for (i = 0; i < 7; i++)
                    l_1680[i] = &l_1627;
                (*l_1608) ^= (safe_add_func_int8_t_s_s(((*p_7) = ((safe_lshift_func_uint8_t_u_s((((l_1621 , l_1622) , (g_1280[0].f2 , ((*l_1606) ^= (p_5 , ((((safe_mod_func_uint32_t_u_u((((*l_1628) &= ((safe_sub_func_int8_t_s_s(((4294967295UL == ((((((((void*)0 != l_1627) && l_1616) | 18446744073709551610UL) & p_5.f1) < (-2L)) < l_1616) | (*g_679))) , l_1614), 0x29L)) >= (*g_679))) && (-9L)), l_1629)) , (void*)0) != g_1630[0][2][1]) , p_5.f0))))) ^ p_3.f0), l_1612)) >= p_3.f2)), l_1616));
                for (g_1219 = 0; (g_1219 <= 3); g_1219 += 1)
                { 
                    int32_t l_1633 = (-1L);
                    int i;
                    if (l_1633)
                        break;
                    p_3.f0 |= (safe_sub_func_uint16_t_u_u(((~l_1614) == (((safe_mod_func_int32_t_s_s((p_3.f3 | (safe_mul_func_int16_t_s_s(((((!l_1612) || (l_1644 , ((*l_1628) ^= (*l_1602)))) != ((*g_1631) != l_1645)) == (-1L)), p_3.f2))), (*g_679))) , (*g_1277)) , 0x3E4EL)), l_1621.f1));
                    (*l_1608) = 0xD31107F7L;
                    p_3.f1 = ((**g_631) , (safe_rshift_func_int16_t_s_u((((safe_sub_func_uint32_t_u_u(p_3.f3, ((*l_1628) = (safe_lshift_func_int8_t_s_u(1L, ((l_1621.f0 < l_1644.f4) && (safe_rshift_func_int16_t_s_u((p_3.f3 ^ l_1621.f0), 15)))))))) , p_3.f1) <= p_5.f0), l_1616)));
                    return (*l_1602);
                }
                if (p_3.f2)
                { 
                    uint8_t ****l_1654 = (void*)0;
                    (*l_1602) = (l_1656[0][0][0] = ((((void*)0 != &g_348) , (void*)0) == (l_1655[2][5][1] = &g_720)));
                }
                else
                { 
                    int64_t *l_1672[7] = {&g_965.f3,&g_965.f3,&l_1644.f3,&g_965.f3,&g_965.f3,&l_1644.f3,&g_965.f3};
                    int32_t *l_1674 = &g_102;
                    int i;
                    (*g_338) = l_1657;
                    (*l_1674) ^= (safe_unary_minus_func_uint64_t_u(((((*l_1608) ^= l_1659) == p_3.f0) | (+(((l_1673 = (safe_rshift_func_int16_t_s_s((((((l_1667 & (((((void*)0 == &g_1464[0]) <= p_3.f5) & (safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((-7L), 0x1800FCF246997D26LL)), 0x84B22D9BL))) >= 2L)) , (void*)0) == (void*)0) > 2L) && 0UL), p_3.f5))) < (*l_1602)) | g_51.f0)))));
                }
                l_1608 = (((l_1675 != ((**l_1627) = l_1607)) < (safe_lshift_func_int16_t_s_s(((l_1679 = g_1678) != (l_1682[0][1] = g_1681[5])), 14))) , &l_1601);
            }
            (*l_1608) &= p_5.f3;
            (*l_1602) &= ((safe_add_func_uint64_t_u_u(0xDB3AE4B09145E714LL, (((0xC4EED0EBL | ((&g_679 == &g_679) <= (((+((0UL == p_3.f2) , ((((l_1690 != (void*)0) <= (*g_325)) <= (*l_1608)) , 0x67L))) , p_5.f3) > p_5.f0))) || 4294967295UL) , l_1644.f3))) & 0x3DL);
        }
        for (g_253 = 0; (g_253 <= 31); g_253++)
        { 
            uint64_t l_1694 = 2UL;
            if (l_1694)
                break;
        }
    }
lbl_1994:
    p_3.f0 = ((1L >= ((+(safe_add_func_uint8_t_u_u(g_179[1][1], (l_1698 , (safe_rshift_func_int16_t_s_u((l_1701[0] != &l_1702), p_5.f1)))))) , ((l_1704 <= g_1705) != 0x5F48C85FL))) , p_3.f3);
    for (g_1528.f1 = 0; (g_1528.f1 > 52); ++g_1528.f1)
    { 
        struct S0 l_1714[4][3][4] = {{{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}},{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}},{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}}},{{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}},{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}},{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}}},{{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}},{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}},{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}}},{{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}},{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}},{{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365},{39,-949,3,4810,0,365}}}};
        int8_t l_1717 = (-3L);
        uint64_t *l_1718 = &g_965.f4;
        int64_t *l_1719 = &g_884;
        int32_t l_1726[6][1] = {{(-4L)},{0xCB7FADFEL},{(-4L)},{(-4L)},{0xCB7FADFEL},{(-4L)}};
        union U2 **l_1746 = &g_1228;
        union U3 *l_1777 = &g_592;
        const union U4 *l_1803 = &l_1698;
        const union U4 **l_1802 = &l_1803;
        int16_t l_1879[1][6][6] = {{{1L,0xDFC0L,1L,0xF18EL,0xF18EL,1L},{0x726AL,0x726AL,0xF18EL,1L,0xF18EL,0x726AL},{0xF18EL,0xDFC0L,1L,1L,0xDFC0L,0xF18EL},{0x726AL,0xF18EL,1L,0xF18EL,0x726AL,0x726AL},{1L,0xF18EL,0xF18EL,1L,0xDFC0L,1L},{1L,0xDFC0L,1L,0xF18EL,0xF18EL,1L}}};
        int16_t ***l_1914[5][5][2] = {{{&g_1465[1],(void*)0},{&g_1465[1],&g_1465[2]},{&g_1465[2],&g_1465[1]},{(void*)0,&g_1465[1]},{&g_1465[2],&g_1465[2]}},{{&g_1465[1],(void*)0},{&g_1465[1],&g_1465[2]},{&g_1465[2],&g_1465[1]},{(void*)0,&g_1465[1]},{&g_1465[2],&g_1465[2]}},{{&g_1465[1],(void*)0},{&g_1465[1],&g_1465[2]},{&g_1465[2],&g_1465[1]},{(void*)0,&g_1465[1]},{&g_1465[2],&g_1465[2]}},{{&g_1465[1],(void*)0},{&g_1465[1],&g_1465[2]},{&g_1465[2],&g_1465[1]},{(void*)0,&g_1465[1]},{&g_1465[2],&g_1465[2]}},{{&g_1465[1],(void*)0},{&g_1465[1],&g_1465[2]},{&g_1465[2],&g_1465[1]},{(void*)0,&g_1465[1]},{&g_1465[2],&g_1465[2]}}};
        uint32_t l_1920 = 0xE772DC82L;
        uint8_t l_1926 = 0x6EL;
        const union U1 *l_1962[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        const union U1 **l_1961 = &l_1962[3];
        int64_t l_1992[1];
        uint8_t *l_2001[6][1] = {{(void*)0},{&l_1980},{&l_1980},{(void*)0},{&l_1980},{&l_1980}};
        int8_t l_2011 = 0x5AL;
        uint32_t l_2026 = 0x63A2E693L;
        union U4 **l_2075 = &g_1527;
        union U4 ***l_2074 = &l_2075;
        uint32_t l_2132 = 0x3259F699L;
        int16_t ****l_2156 = &l_1684;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1992[i] = 0L;
        if (((((*l_1719) = (((*l_1606) = (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((safe_sub_func_uint64_t_u_u(((*l_1718) = (((&l_1606 != (void*)0) | 0xAEL) , (p_3.f4 & (l_1713 , (l_1714[3][2][3] , ((safe_rshift_func_uint16_t_u_u((0xF757L & 0L), l_1717)) || p_4)))))), p_3.f1)) < p_4))), (*p_7)))) < p_3.f0)) >= p_5.f1) || p_4))
        { 
            int16_t l_1720 = 0x936CL;
            union U4 l_1743 = {0x7CDCD592L};
            union U2 **l_1745[2];
            uint64_t l_1770 = 0x776E225BA044B158LL;
            int32_t l_1798[6][3][4] = {{{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L},{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L},{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L}},{{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L},{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L},{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L}},{{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L},{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L},{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L}},{{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L},{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L},{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L}},{{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L},{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L},{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L}},{{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L},{(-3L),0x7B68424CL,0xA591AA27L,0xA591AA27L},{0x7B68424CL,0x7B68424CL,0x6AEA4A52L,0xA591AA27L}}};
            uint16_t l_1813 = 0x9B5FL;
            int64_t l_1856[2];
            uint16_t ***l_1896 = &g_652[4][1][0];
            uint32_t *l_1912 = &l_1698.f0;
            int16_t ***l_1913 = &g_1465[3];
            uint32_t *l_1915 = &g_1705;
            int8_t l_1925[1];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1745[i] = &g_1228;
            for (i = 0; i < 2; i++)
                l_1856[i] = 0L;
            for (i = 0; i < 1; i++)
                l_1925[i] = 0x6DL;
            if ((((p_5.f3 < l_1720) <= (safe_add_func_int64_t_s_s((*g_325), 0xFEB5ADFFCDED1085LL))) , 0xEFD2DF1DL))
            { 
                uint32_t l_1723 = 0x49F28924L;
                int32_t *l_1727 = &g_1315;
                int32_t *l_1728 = &g_102;
                int32_t *l_1729 = &l_1726[2][0];
                int32_t *l_1730 = &g_47;
                int32_t *l_1731 = &g_179[1][1];
                int32_t *l_1732 = &l_1726[1][0];
                int32_t *l_1733[1];
                union U2 ** const l_1744 = &g_1228;
                uint64_t l_1799[3][1][6] = {{{0xBB96F1D71CA4419ALL,0xBB96F1D71CA4419ALL,0xB3AC98C96910B70ALL,0xB3AC98C96910B70ALL,0xBB96F1D71CA4419ALL,0xBB96F1D71CA4419ALL}},{{0xBB96F1D71CA4419ALL,0xB3AC98C96910B70ALL,0xB3AC98C96910B70ALL,0xBB96F1D71CA4419ALL,0xBB96F1D71CA4419ALL,0xB3AC98C96910B70ALL}},{{0xBB96F1D71CA4419ALL,0xBB96F1D71CA4419ALL,0xB3AC98C96910B70ALL,0xB3AC98C96910B70ALL,0xBB96F1D71CA4419ALL,0xBB96F1D71CA4419ALL}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1733[i] = &g_102;
                l_1723--;
                if (l_1726[2][0])
                    continue;
                l_1738--;
                for (g_258.f0 = 0; (g_258.f0 > 15); g_258.f0 = safe_add_func_uint16_t_u_u(g_258.f0, 6))
                { 
                    uint8_t *l_1758 = (void*)0;
                    uint8_t *l_1759[5][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,&g_1528.f3,&g_1165.f3,&g_1165.f3},{(void*)0,(void*)0,&g_381.f3,(void*)0,(void*)0,(void*)0,&g_381.f3},{&g_1528.f3,(void*)0,(void*)0,(void*)0,(void*)0,&g_1528.f3,&g_1165.f3},{&g_1219,&g_282,&g_1219,(void*)0,&g_1219,&g_282,&g_1219},{&g_1528.f3,(void*)0,&g_1165.f3,(void*)0,(void*)0,&g_1165.f3,(void*)0}};
                    int32_t l_1775 = 0x6DE421A0L;
                    union U4 *** const *l_1776 = (void*)0;
                    union U3 **l_1778 = &l_1777;
                    int16_t l_1804 = 0xBE0AL;
                    uint8_t l_1805 = 2UL;
                    int i, j;
                    (*l_1727) = p_3.f0;
                    (*l_1731) &= (((l_1743 , l_1744) != (p_3.f1 , (l_1746 = l_1745[0]))) >= ((*l_1732) = p_5.f3));
                    (*l_1731) ^= (((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_u(((((((1L | (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((l_1726[2][0] = (p_4 <= (*p_7))), (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_1714[3][2][3].f3 < (~((((l_1765[3][2][0] >= (safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(l_1770, (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u(2UL, l_1775)) ^ 6L) != l_1720), 14)))) , 1L) > p_3.f4) > p_3.f3), p_3.f3))) < p_5.f3) , 1L) || p_3.f3))), 4)), p_3.f1)))) ^ 0x23477031L), 7)), 0xF1974863L))) <= p_5.f1) , &g_1631) != l_1776) | p_3.f3) == 0x3496L), p_3.f1)))), 6)) ^ p_5.f3) <= p_3.f4);
                    (*l_1778) = l_1777;
                    (*g_338) = &l_1798[1][0][0];
                }
            }
            else
            { 
                const union U2 *l_1807 = &g_965;
                l_1807 = &g_35;
                for (g_381.f1 = 0; (g_381.f1 == 21); g_381.f1++)
                { 
                    int32_t *l_1810 = (void*)0;
                    int32_t *l_1811 = &g_80;
                    int32_t *l_1812 = &l_1798[3][2][2];
                    l_1813++;
                }
            }
            if (p_3.f3)
                continue;
            for (g_1165.f3 = 0; (g_1165.f3 <= 5); g_1165.f3 += 1)
            { 
                int64_t l_1816 = 1L;
                int32_t *l_1817 = (void*)0;
                p_3.f1 = (g_51 , (l_1816 == (l_1798[2][1][3] |= p_3.f1)));
            }
            if (p_5.f1)
            { 
                uint64_t l_1822[2];
                int32_t * const *l_1828 = &g_632;
                int32_t *l_1832 = (void*)0;
                union U4 l_1839 = {4294967291UL};
                uint8_t l_1845 = 247UL;
                uint8_t ** const *l_1866 = &g_720;
                uint16_t *l_1880 = &l_1704;
                union U3 ***l_1881 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_1822[i] = 1UL;
                for (g_592.f0 = (-2); (g_592.f0 < 1); g_592.f0 = safe_add_func_int8_t_s_s(g_592.f0, 1))
                { 
                    const int32_t l_1823 = 0xABCB9104L;
                    struct S0 **l_1825 = &g_1277;
                    l_1735 ^= (l_1714[3][2][3] , ((safe_rshift_func_uint16_t_u_s(((*l_1606) = (l_1822[0] , (p_3.f2 <= ((((((((&g_14 == &p_6) > l_1823) | (0x328FL | 0UL)) > l_1813) , p_5.f4) >= 0xC0922AC8C5E73F5DLL) < l_1714[3][2][3].f3) ^ p_5.f4)))), p_4)) , 0L));
                    (*l_1825) = l_1824;
                }
                if ((((*g_1527) , (safe_div_func_uint32_t_u_u((l_1822[1] ^ (&g_632 != l_1828)), (safe_add_func_uint16_t_u_u((((l_1822[1] == ((*l_1719) = l_1831[0])) < (*g_325)) , p_3.f5), (-1L)))))) != (*g_325)))
                { 
                    int32_t l_1833 = 0L;
                    (*g_338) = l_1832;
                    l_1726[3][0] = l_1770;
                    if (l_1833)
                        break;
                }
                else
                { 
                    int32_t *l_1834 = (void*)0;
                    int32_t *l_1840 = &g_179[1][2];
                    uint32_t *l_1858 = &g_381.f0;
                    l_1834 = l_1834;
                    l_1737 |= (safe_lshift_func_int16_t_s_u(((****l_1683) = ((((safe_sub_func_int16_t_s_s(((l_1839 , ((*l_1840) = (-1L))) || ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u(p_5.f3)), (p_5.f1 , ((~(5UL | (((*g_679) && 4294967294UL) & l_1726[2][0]))) ^ p_3.f4)))) & p_3.f5)), l_1845)) > l_1714[3][2][3].f3) < 0L) || g_1528.f1)), l_1798[2][1][3]));
                    (*l_1840) |= (((l_1714[3][2][3].f0 && p_3.f5) == (g_111 <= (((l_1736 |= (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((5UL ^ ((((-6L) <= ((p_3.f2 >= (safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(l_1714[3][2][3].f4, 0x0386L)) && l_1856[1]), l_1714[3][2][3].f0))) || p_3.f0)) && p_5.f0) == l_1743.f1)), p_5.f1)), g_1857)), (*p_7)))) >= 0xE65DB767L) , g_35.f0))) , (-1L));
                    (*l_1840) = (+((*g_1466) < (((*g_1287) , ((l_1714[3][2][3].f0 = ((*l_1606) = ((safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((((l_1866 == l_1867) < (((p_3.f0 , ((safe_sub_func_int8_t_s_s(0x99L, (*p_7))) != g_348.f0)) != (*g_679)) != p_5.f0)) | (*g_325)) & (-5L)) == p_4), 3)), (-5L))) & (*l_1840)) == (*l_1840)), l_1717)) || 0xAA874439L))) , (-7L))) , l_1813)));
                }
                if ((l_1879[0][3][2] = (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((((((func_20(&g_111, g_51) , 0x9EA75B14L) > l_1874) >= ((safe_div_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(0x52D93B8BL, ((*l_1803) , (*g_679)))) || (*g_679)) < p_3.f4), p_5.f1)) > l_1714[3][2][3].f4)) > l_1714[3][2][3].f1) >= p_3.f3) > 4294967290UL), l_1770)), 9))))
                { 
                    union U3 ****l_1882 = &l_1881;
                    int32_t l_1883 = 0x7D2A98F2L;
                    if (p_5.f4)
                        break;
                    l_1736 = ((void*)0 == l_1880);
                    (*l_1882) = l_1881;
                    if (l_1883)
                        continue;
                    (*g_338) = &l_1726[2][0];
                }
                else
                { 
                    p_3.f5 = p_3.f4;
                    return p_3.f5;
                }
                for (l_1770 = (-28); (l_1770 != 2); l_1770 = safe_add_func_int8_t_s_s(l_1770, 3))
                { 
                    int32_t l_1903 = 0x7A830DD4L;
                    return l_1903;
                }
            }
            else
            { 
                uint16_t l_1904 = 0xE1FEL;
                uint8_t *****l_1907 = &g_1905;
                l_1798[2][1][3] = (l_1904 ^ (((((*l_1907) = g_1905) == &g_1906) >= l_1714[3][2][3].f5) > l_1856[1]));
                for (p_4 = 0; (p_4 <= 6); p_4 += 1)
                { 
                    return p_3.f5;
                }
                return l_1714[3][2][3].f2;
            }
            (*g_339) = (((*l_1915) = (safe_mod_func_uint8_t_u_u(252UL, (safe_rshift_func_int16_t_s_s((0xC81D6A85L | (g_1165.f0 = ((*l_1912) = p_5.f1))), (((*l_1683) = l_1913) == l_1914[2][3][0])))))) , (safe_mod_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s((l_1920 &= ((*p_7) = 0xB3L)), (safe_sub_func_int8_t_s_s((((((safe_sub_func_uint64_t_u_u(((l_1879[0][3][2] ^ l_1879[0][5][4]) ^ l_1714[3][2][3].f2), p_5.f4)) != 0xA3D7A14C02145F94LL) ^ l_1925[0]) ^ l_1813) == l_1926), p_5.f4)))) < l_1726[2][0]) , 0x13B30B30E71B4DF3LL) && (-6L)), (-1L))));
        }
        else
        { 
            uint64_t l_1931[6][7];
            int32_t ** const **l_1958 = &g_1956;
            union U4 l_1970[7] = {{0x7AD138E8L},{0x7AD138E8L},{0x7AD138E8L},{0x7AD138E8L},{0x7AD138E8L},{0x7AD138E8L},{0x7AD138E8L}};
            uint8_t *l_1993 = &g_1165.f3;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1931[i][j] = 18446744073709551615UL;
            }
            for (g_1899 = 0; (g_1899 != (-23)); g_1899--)
            { 
                int64_t l_1946 = 0x30D6381906023E03LL;
                uint16_t l_1947 = 0x9B5CL;
                if ((~l_1714[3][2][3].f1))
                { 
                    int32_t * const ** const **l_1930 = &g_1384[0];
                    uint32_t *l_1948 = &l_1765[0][2][0];
                    l_1930 = &g_1384[0];
                    ++l_1931[2][6];
                    p_3.f5 &= (safe_mul_func_uint16_t_u_u((p_4 < ((safe_lshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((*l_1948) = (p_5 , ((l_1698 , (safe_sub_func_uint8_t_u_u((4294967290UL ^ (((safe_mul_func_uint16_t_u_u(p_3.f0, (l_1931[1][0] ^ (l_1714[3][2][3].f1 = (p_5.f3 == l_1946))))) ^ p_5.f4) | (*p_7))), l_1947))) == l_1714[3][2][3].f3))) , 1UL), 0xD77FF2DDF326381ALL)), 0UL)) | p_5.f1) || p_3.f1), (*p_7))) >= (*p_7))), 0x5887L));
                }
                else
                { 
                    (*l_1702) = &l_1726[4][0];
                    return p_3.f1;
                }
            }
            for (l_1736 = 0; (l_1736 >= 0); l_1736 -= 1)
            { 
                int32_t ** const ***l_1957 = &g_1955;
                const union U1 ***l_1963 = &l_1961;
                union U1 **l_1964 = (void*)0;
                union U1 ***l_1965[6] = {&l_1690,&l_1690,&l_1690,&l_1690,&l_1690,&l_1690};
                int32_t *l_1971 = &l_1734;
                int i;
                for (g_592.f2 = 0; (g_592.f2 <= 0); g_592.f2 += 1)
                { 
                    int32_t l_1954 = 0L;
                    int i, j, k;
                    l_1954 = (((**g_631) , 0x2A3AL) && ((p_3.f4 = l_1931[3][1]) || ((((~(safe_add_func_uint64_t_u_u(g_35.f0, ((l_1954 , (*p_7)) == 0x5DL)))) != 1UL) ^ (-1L)) > p_3.f5)));
                }
                l_1958 = ((*l_1957) = g_1955);
                if (p_3.f5)
                    break;
                (*l_1971) = ((safe_mod_func_int16_t_s_s(1L, p_3.f5)) >= (((((((*l_1963) = l_1961) != (g_1966[3] = l_1964)) && ((*g_679) <= (safe_add_func_uint32_t_u_u(p_3.f2, (((l_1970[2] , 4294967293UL) ^ p_3.f1) | 1UL))))) || p_3.f1) , p_3.f1) != 0x5DD9D994L));
                if (p_5.f1)
                    break;
                for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                { 
                    int32_t *l_1972 = &g_47;
                    (*l_1702) = l_1972;
                    if (p_5.f0)
                        break;
                    (*l_1972) = p_3.f2;
                    (*l_1971) = 1L;
                    if (p_3.f5)
                        break;
                }
            }
            p_3.f0 = (safe_add_func_uint32_t_u_u(7UL, ((((((l_1975[1][1][0] == ((****l_1683) = l_1879[0][3][2])) ^ (((*l_1719) = (*g_325)) && (safe_add_func_uint8_t_u_u(l_1726[4][0], (!(((((0xAC51L ^ l_1979[0][1][0]) ^ l_1726[3][0]) && l_1980) < 6L) , p_3.f4)))))) | p_3.f2) , p_5.f3) ^ 5L) ^ p_3.f0)));
            p_3.f0 &= (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((+((*l_1993) = ((((&g_1277 == (void*)0) || ((safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s(0x547DL, ((((safe_add_func_int64_t_s_s(p_3.f2, p_5.f4)) ^ l_1714[3][2][3].f2) >= 0x6331L) || g_1528.f1))), l_1992[0])) != 0xF5E5AA09L)) >= 0L) & l_1926))), 0xA68CL)), 0x630AL));
        }
        if (p_3.f2)
            break;
        if (p_5.f4)
            goto lbl_1994;
    }
    return p_3.f0;
}



static int8_t * func_10(const int8_t * p_11, union U3  p_12, uint8_t  p_13)
{ 
    uint64_t l_1135 = 0xE8B89AFDA2D4F670LL;
    union U2 l_1142[3] = {{0x8F7886BDCA57D51ALL},{0x8F7886BDCA57D51ALL},{0x8F7886BDCA57D51ALL}};
    int32_t l_1151 = (-1L);
    int32_t l_1152 = 0L;
    int32_t l_1153 = (-1L);
    int32_t l_1154 = 0x5080A062L;
    int32_t l_1155 = (-9L);
    int32_t l_1156 = 0x4B3BBED8L;
    int32_t l_1157 = 0x398AF257L;
    int32_t l_1158 = 1L;
    int32_t l_1159[3];
    uint64_t l_1160 = 0x372D5494B9CF925DLL;
    union U4 *l_1164 = &g_1165;
    int16_t l_1264 = 0L;
    uint64_t *l_1301 = &l_1160;
    union U1 l_1327 = {0x49A3B7D0L};
    int32_t **l_1340 = &g_632;
    uint32_t l_1433 = 0xAB84FE21L;
    int8_t l_1444 = 0x40L;
    uint8_t l_1445 = 0UL;
    int16_t ****l_1471 = &g_1464[0];
    union U4 l_1504 = {0x4E610A39L};
    int32_t **l_1505 = &g_632;
    union U3 l_1541 = {1L};
    uint16_t l_1543 = 1UL;
    int32_t *l_1570 = (void*)0;
    int32_t *l_1571 = (void*)0;
    int32_t *l_1572 = &g_47;
    int32_t *l_1573 = &g_37;
    int32_t *l_1574 = &g_80;
    int32_t *l_1575 = &l_1155;
    int32_t *l_1576 = (void*)0;
    int32_t *l_1577 = &l_1156;
    int32_t *l_1578 = &l_1159[0];
    int32_t *l_1579[1][2][5];
    int8_t l_1580[6][2] = {{0L,0x65L},{0x65L,0L},{0x65L,0x65L},{0L,0x65L},{0x65L,0L},{0x65L,0x65L}};
    int32_t l_1581 = (-8L);
    int64_t l_1582 = (-1L);
    int32_t l_1583 = 4L;
    int16_t l_1584[6];
    uint32_t l_1585[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1159[i] = 0xBE7DB3EAL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
                l_1579[i][j][k] = &l_1152;
        }
    }
    for (i = 0; i < 6; i++)
        l_1584[i] = 3L;
    for (i = 0; i < 3; i++)
        l_1585[i] = 4294967293UL;
    (*g_339) &= l_1135;
    if ((p_13 && p_12.f2))
    { 
        int32_t *l_1143 = &g_179[1][1];
        for (g_258.f0 = (-11); (g_258.f0 == 51); g_258.f0 = safe_add_func_int16_t_s_s(g_258.f0, 9))
        { 
            for (g_80 = 0; (g_80 <= 24); g_80 = safe_add_func_int32_t_s_s(g_80, 9))
            { 
                (*g_339) ^= (((safe_div_func_int64_t_s_s((p_13 == (g_612 |= 0L)), 0xD89AF088BF27D286LL)) , l_1142[0]) , (-1L));
            }
        }
        l_1143 = (*g_338);
    }
    else
    { 
        int32_t *l_1144 = &g_80;
        int32_t *l_1145 = &g_80;
        int32_t *l_1146 = &g_102;
        int32_t *l_1147 = &g_179[0][1];
        int32_t *l_1148 = &g_179[1][1];
        int32_t *l_1149 = &g_80;
        int32_t *l_1150[3];
        int32_t l_1210 = 1L;
        int32_t l_1216[3];
        uint8_t ***l_1227 = (void*)0;
        union U2 *l_1229 = &l_1142[1];
        uint32_t l_1230[3][5] = {{0UL,0UL,4294967295UL,4294967295UL,0UL},{0xB6FDDE30L,0xA15B553AL,4294967295UL,1UL,1UL},{0xA15B553AL,0xB6FDDE30L,0xA15B553AL,4294967295UL,1UL}};
        union U1 *l_1243 = &g_51;
        union U1 **l_1242 = &l_1243;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1150[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_1216[i] = 9L;
        l_1160--;
        if ((0x8A638B57FD3330D0LL && p_12.f2))
        { 
            union U4 *l_1163 = &g_258;
            int8_t *l_1170 = (void*)0;
            union U1 l_1174 = {0x997CB2EBL};
            int32_t l_1198 = 0xDA04675EL;
            int32_t l_1213 = 0x6FD740C3L;
            int32_t l_1215 = 2L;
            int8_t l_1217 = (-1L);
            int32_t l_1218[4] = {0xC4206EB2L,0xC4206EB2L,0xC4206EB2L,0xC4206EB2L};
            int i;
            l_1164 = l_1163;
            for (l_1155 = 4; (l_1155 == (-21)); l_1155 = safe_sub_func_uint32_t_u_u(l_1155, 1))
            { 
                uint32_t l_1171 = 18446744073709551606UL;
                union U1 l_1192 = {0x2B0B0BFBL};
                int32_t l_1212[6][1][2] = {{{0L,0L}},{{0L,0L}},{{0L,0L}},{{0L,0L}},{{0L,0L}},{{0L,0L}}};
                int8_t *l_1232 = &g_195[3];
                int i, j, k;
                for (p_12.f2 = 23; (p_12.f2 == 10); --p_12.f2)
                { 
                    return l_1170;
                }
                (*l_1144) |= (*l_1146);
                --l_1171;
                if (((**g_338) = ((l_1174 , &g_350) == &g_350)))
                { 
                    const int32_t l_1195[5] = {0x45D67E47L,0x45D67E47L,0x45D67E47L,0x45D67E47L,0x45D67E47L};
                    uint64_t *l_1196 = &l_1142[0].f1;
                    uint8_t *l_1197 = &g_113;
                    int64_t *l_1199 = &g_965.f3;
                    int8_t *l_1200[5] = {&g_211,&g_211,&g_211,&g_211,&g_211};
                    uint16_t *l_1203 = &g_258.f1;
                    int32_t l_1211[6][2][4] = {{{0L,0L,2L,0xE8B88DC4L},{(-8L),7L,(-8L),2L}},{{(-8L),2L,2L,(-8L)},{0L,2L,0xE8B88DC4L,2L}},{{2L,7L,0xE8B88DC4L,0xE8B88DC4L},{0L,0L,2L,0xE8B88DC4L}},{{(-8L),7L,(-8L),2L},{(-8L),2L,2L,(-8L)}},{{0L,2L,0xE8B88DC4L,2L},{2L,7L,0xE8B88DC4L,0xE8B88DC4L}},{{0L,0L,2L,0xE8B88DC4L},{(-8L),7L,(-8L),2L}}};
                    int32_t l_1214[4][6][5] = {{{0x7B1CF731L,(-6L),(-1L),0L,6L},{0x806DDCBDL,0L,0x93AB061BL,0xDEAC2083L,0xA0A24FC6L},{0x3869C075L,0x6186A9ECL,0x87C10F14L,0L,0xB8C5FACFL},{0x4F0C5D06L,0xA5FDD497L,0x806DDCBDL,0x57FA4FC1L,0xA5FDD497L},{(-6L),(-1L),0L,0x3C32F5C6L,0x3C32F5C6L},{0x7337BA8DL,0xA0A24FC6L,0x7337BA8DL,(-9L),0xEC442902L}},{{0x3869C075L,(-6L),1L,0x514DE496L,0x87C10F14L},{0xF6A5267AL,0xCB2BAAF3L,0xEC442902L,0L,8L},{(-1L),0L,1L,0x87C10F14L,0x911D51F4L},{(-1L),0xEC442902L,0x7337BA8DL,0xC922CBCEL,0x2B1D1099L},{(-1L),0xE89C35CEL,0L,0xCAD40E70L,0L},{(-9L),(-9L),2L,(-4L),0x52CDC923L}},{{0xAC4713F8L,0x6186A9ECL,0x7FBA29CCL,0x3869C075L,(-9L)},{0x9C141F39L,0x5BC03AD6L,0xC922CBCEL,0xEC442902L,1L},{(-1L),0x6186A9ECL,0x7B1CF731L,0x7FBA29CCL,0xA393FA74L},{1L,(-9L),1L,0xCB504F56L,0xF6A5267AL},{0x7B1CF731L,0xE89C35CEL,(-1L),(-1L),0xE89C35CEL},{8L,0xEC442902L,0x5BC03AD6L,1L,0xC922CBCEL}},{{0xF6E8B1BCL,0L,(-1L),0xA393FA74L,(-1L)},{0x52CDC923L,0xCB2BAAF3L,0L,1L,0x806DDCBDL},{0xF6E8B1BCL,(-6L),0xCAD40E70L,0x6186A9ECL,0xB8C5FACFL},{8L,0xA0A24FC6L,0xA5FDD497L,(-1L),1L},{0x7B1CF731L,(-1L),0xE89C35CEL,(-1L),0x7B1CF731L},{1L,0xDEAC2083L,(-1L),1L,(-9L)}}};
                    union U4 **l_1222 = (void*)0;
                    union U4 **l_1223 = &l_1163;
                    int i, j, k;
                    (*l_1145) ^= (safe_rshift_func_uint16_t_u_u((((p_13 = 255UL) & (safe_mod_func_int8_t_s_s((0L ^ (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((~0x9FL) ^ (((*l_1199) = ((p_12.f2 & ((safe_mul_func_uint32_t_u_u(0xF641C485L, ((l_1198 &= (((*l_1197) = ((((l_1192 , ((*l_1196) &= ((l_1159[2] |= (((((safe_sub_func_uint16_t_u_u((l_1174.f0 || 0L), p_12.f0)) & 0xAF02186AL) <= l_1195[2]) , p_12.f0) || l_1195[2])) , 18446744073709551614UL))) , 1L) | 0x49L) , 0xBFL)) == (*l_1148))) > (**g_338)))) != l_1195[2])) <= 1UL)) > 0UL)), 9L)), p_12.f1)) , 18446744073709551615UL), 1L)), p_12.f0)), 4))), p_12.f1))) && 3UL), 8));
                    l_1211[1][0][0] |= (((l_1159[0] = l_1135) != (safe_add_func_int16_t_s_s((((*l_1203) = 65534UL) & l_1142[0].f0), (((*g_325) != (-7L)) < (safe_sub_func_uint16_t_u_u(0UL, (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((0xD0L == l_1210), 4)), 0L)))))))) >= p_12.f0);
                    g_1219--;
                    (*l_1223) = l_1164;
                }
                else
                { 
                    int32_t l_1224 = 0L;
                    int16_t *l_1231 = &g_77;
                    (*l_1144) = (0x3C5BL >= ((*l_1231) = (l_1224 == ((safe_add_func_int16_t_s_s(((0x29CDL | (&g_720 == l_1227)) > ((g_1228 == l_1229) >= 4294967295UL)), l_1230[2][0])) | p_12.f0))));
                    (*g_338) = &l_1210;
                    return l_1232;
                }
                for (l_1151 = 6; (l_1151 >= 0); l_1151 -= 1)
                { 
                    return l_1232;
                }
            }
            g_1233[2]--;
        }
        else
        { 
            const int16_t *** const **l_1238 = &g_1236;
            int32_t l_1241[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1241[i] = 1L;
            (*l_1238) = g_1236;
            (**g_338) = ((((p_12.f0 >= ((((&g_1233[2] == &l_1230[2][0]) >= (3L >= (*l_1144))) != (safe_mul_func_int8_t_s_s((((((((*g_325) == (p_13 && p_13)) , (*g_339)) < p_12.f1) <= l_1241[0]) , l_1242) != (void*)0), 2L))) >= 255UL)) == 0x1EE2L) , 3UL) , 0xED08A7B2L);
        }
    }
    for (g_381.f3 = 0; (g_381.f3 <= 0); g_381.f3 += 1)
    { 
        int32_t *l_1244 = &g_179[1][3];
        union U1 *l_1269 = &g_51;
        int64_t l_1272 = 0x07F606F29D9586E1LL;
        uint16_t **l_1274 = &g_653;
        int32_t l_1307 = 0L;
        int32_t l_1352 = 0xB80AB984L;
        int32_t l_1354 = 3L;
        int64_t l_1364 = 0x91F266F5AA7CDE16LL;
        uint64_t l_1365 = 0x64D8B0DC87DC929CLL;
        int32_t ****l_1383 = (void*)0;
        uint8_t *l_1394 = &g_282;
        int64_t *l_1395 = &l_1364;
        int8_t *l_1396 = &g_195[3];
        int8_t *l_1397 = &g_211;
        uint32_t *l_1402[1];
        const int8_t l_1410[5][1][7] = {{{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}},{{0x1FL,0xC7L,0x1FL,0xC2L,0xC0L,0xC2L,0x1FL}},{{(-6L),(-6L),0xAEL,(-6L),(-6L),0xAEL,(-6L)}},{{0xC0L,0xC2L,0x1FL,0xC7L,0x1FL,0xC2L,0xC0L}},{{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}}};
        uint32_t l_1411 = 0x8B77B390L;
        int64_t **l_1562 = &l_1395;
        int64_t ***l_1561[2];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1402[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1561[i] = &l_1562;
        (*l_1244) = ((**g_338) = 0x4EA54CEDL);
        for (g_37 = 6; (g_37 >= 0); g_37 -= 1)
        { 
            uint64_t l_1247[3];
            int32_t * const **l_1265 = (void*)0;
            uint16_t **l_1275[1][5][1];
            uint16_t l_1300[3];
            int16_t *l_1306 = &l_1264;
            int16_t **l_1305[5][2] = {{(void*)0,(void*)0},{&l_1306,(void*)0},{(void*)0,&l_1306},{(void*)0,(void*)0},{&l_1306,(void*)0}};
            int16_t *** const l_1304 = &l_1305[2][0];
            int16_t *** const *l_1303 = &l_1304;
            int16_t *** const **l_1302 = &l_1303;
            int8_t *l_1308 = &g_195[(g_381.f3 + 3)];
            int32_t *l_1331 = &g_179[0][1];
            int32_t **l_1341 = &g_632;
            uint64_t l_1342 = 0xDDEB67CF1CDCA2BCLL;
            int32_t l_1351 = (-1L);
            int32_t l_1353 = (-5L);
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1247[i] = 0x0C840A4CE2C2AB21LL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1275[i][j][k] = &g_653;
                }
            }
            for (i = 0; i < 3; i++)
                l_1300[i] = 0x3823L;
        }
        l_1157 = ((*g_339) |= (safe_mod_func_uint8_t_u_u(((((((safe_add_func_int64_t_s_s(((void*)0 == &g_325), p_13)) <= (l_1155 > (safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s(0L, 6L)), ((safe_mul_func_uint16_t_u_u(((-1L) < p_12.f1), p_12.f0)) <= (*l_1244)))))) & 0x40L) , 0x6BL) < 0x22L) && 18446744073709551614UL), p_13)));
        (*l_1244) &= ((*g_325) | (*g_325));
        if (((safe_sub_func_int8_t_s_s(((l_1383 != g_1384[0]) , ((*l_1397) = ((*l_1396) = ((safe_mod_func_uint8_t_u_u(((((g_73 = ((*l_1244) = (((p_12.f1 , (((~((-3L) > 0x93219C46L)) == (((((((*l_1395) ^= ((*g_679) <= (((((*l_1394) = (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(4294967288UL, (***g_1385))), p_12.f0))) ^ p_13) == 0UL) != 9UL))) , l_1327.f0) & 1UL) , 0xBA3F92B8L) == 4294967295UL) | l_1159[0])) , l_1155)) == 0x6F7CL) >= l_1142[0].f4))) & 0xBA58ACF9E6E29244LL) || p_12.f1) == l_1157), 0xF3L)) || p_12.f2)))), 0x68L)) <= 6UL))
        { 
            int32_t **l_1398 = (void*)0;
            int32_t **l_1399[7] = {&l_1244,&l_1244,&l_1244,&l_1244,&l_1244,&l_1244,&l_1244};
            uint32_t *l_1401 = &g_51.f0;
            int i;
            g_1400[3] = ((*g_338) = &l_1159[0]);
            (**g_338) &= ((&g_717 == (l_1402[0] = l_1401)) > (safe_sub_func_int64_t_s_s((*g_325), (!(safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*l_1394) = g_253), l_1156)), l_1410[3][0][5]))))));
            --l_1411;
        }
        else
        { 
            union U4 l_1421 = {0x139AC32FL};
            struct S0 l_1425[1] = {{3,413,2,73,0,-88}};
            union U1 l_1426 = {0xE706844DL};
            int16_t ***l_1468 = &g_1465[2];
            int32_t *l_1469[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1469[i] = &l_1151;
            if (((-7L) > p_12.f0))
            { 
                union U4 l_1420 = {0xC390A5E7L};
                int8_t *l_1424 = (void*)0;
                int32_t ****l_1434 = (void*)0;
                int32_t l_1440 = 1L;
                int32_t l_1441 = 0L;
                int32_t l_1442 = 0xACC2B1B2L;
                int32_t l_1443 = (-1L);
                int16_t ****l_1467[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1467[i] = &g_1464[0];
                if ((((0x3630L <= ((safe_mul_func_uint16_t_u_u((+(safe_rshift_func_int16_t_s_u(g_1419, 8))), ((0UL <= ((((((l_1420 , l_1421) , ((p_12.f1 >= ((*l_1301) = ((func_20(func_23((safe_rshift_func_int16_t_s_u((((*g_350) = func_20(l_1424, l_1327)) , (-9L)), 4)), p_13, l_1425[0]), l_1426) , l_1153) , p_12.f1))) < 0xC8A108C7L)) | (*g_325)) != 0xD6670719L) & p_12.f0) <= p_12.f0)) , p_12.f2))) == p_12.f0)) || p_12.f2) , (*l_1244)))
                { 
                    uint64_t l_1430[5][7][6] = {{{0UL,0UL,0xD517E9904135DEADLL,0x6327983D5DDE830ALL,18446744073709551615UL,1UL},{0xB9A1F1AEAFBB9B76LL,18446744073709551615UL,18446744073709551615UL,0x3A13609BCC758409LL,0UL,0xD517E9904135DEADLL},{0xEA8BF035EB9D5231LL,0xB9A1F1AEAFBB9B76LL,18446744073709551615UL,18446744073709551608UL,0UL,1UL},{0xC12D9F9DFBABB3AALL,18446744073709551608UL,0xD517E9904135DEADLL,18446744073709551615UL,0xD517E9904135DEADLL,18446744073709551608UL},{18446744073709551615UL,0xD517E9904135DEADLL,18446744073709551608UL,0xC12D9F9DFBABB3AALL,18446744073709551615UL,0x047A9D7A2C46F8B2LL},{18446744073709551608UL,18446744073709551615UL,0xB9A1F1AEAFBB9B76LL,0xEA8BF035EB9D5231LL,0x3A13609BCC758409LL,0x80D93FD66B50398DLL},{18446744073709551615UL,0x6327983D5DDE830ALL,0xB9A1F1AEAFBB9B76LL,1UL,0UL,0xEA8BF035EB9D5231LL}},{{0UL,0UL,18446744073709551615UL,18446744073709551615UL,0UL,0UL},{1UL,0x3A13609BCC758409LL,0x047A9D7A2C46F8B2LL,0xEA8BF035EB9D5231LL,18446744073709551615UL,18446744073709551615UL},{0xBFD492277C5A6CE7LL,1UL,0xD517E9904135DEADLL,0x80D93FD66B50398DLL,18446744073709551608UL,0xB9A1F1AEAFBB9B76LL},{0xBFD492277C5A6CE7LL,0xB9A1F1AEAFBB9B76LL,0x80D93FD66B50398DLL,0xEA8BF035EB9D5231LL,0x6327983D5DDE830ALL,18446744073709551608UL},{1UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,1UL,0xD517E9904135DEADLL},{0UL,0x047A9D7A2C46F8B2LL,0xE79BFD39D644265BLL,1UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xD517E9904135DEADLL,0x5A670FFFA23CB476LL,0x047A9D7A2C46F8B2LL,1UL,18446744073709551615UL}},{{0x3A13609BCC758409LL,0x80D93FD66B50398DLL,0xE79BFD39D644265BLL,18446744073709551615UL,0xD517E9904135DEADLL,0xD517E9904135DEADLL},{1UL,18446744073709551615UL,18446744073709551615UL,1UL,0x3A13609BCC758409LL,18446744073709551608UL},{18446744073709551615UL,0xE79BFD39D644265BLL,0x80D93FD66B50398DLL,0x3A13609BCC758409LL,0xEA8BF035EB9D5231LL,0xB9A1F1AEAFBB9B76LL},{0x047A9D7A2C46F8B2LL,0x5A670FFFA23CB476LL,0xD517E9904135DEADLL,18446744073709551615UL,0xEA8BF035EB9D5231LL,18446744073709551615UL},{1UL,0xE79BFD39D644265BLL,0x047A9D7A2C46F8B2LL,0UL,0x3A13609BCC758409LL,0UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,1UL,0xD517E9904135DEADLL,0xEA8BF035EB9D5231LL},{0xEA8BF035EB9D5231LL,0x80D93FD66B50398DLL,0xB9A1F1AEAFBB9B76LL,0xBFD492277C5A6CE7LL,1UL,0xE79BFD39D644265BLL}},{{0x80D93FD66B50398DLL,0xD517E9904135DEADLL,1UL,0xBFD492277C5A6CE7LL,18446744073709551615UL,1UL},{0xEA8BF035EB9D5231LL,0x047A9D7A2C46F8B2LL,0x3A13609BCC758409LL,1UL,1UL,0x3A13609BCC758409LL},{18446744073709551615UL,18446744073709551615UL,0UL,0UL,0x6327983D5DDE830ALL,0x80D93FD66B50398DLL},{1UL,0xB9A1F1AEAFBB9B76LL,0x6327983D5DDE830ALL,18446744073709551615UL,18446744073709551608UL,0UL},{0x047A9D7A2C46F8B2LL,1UL,0x6327983D5DDE830ALL,0x3A13609BCC758409LL,18446744073709551615UL,0x80D93FD66B50398DLL},{18446744073709551615UL,0x3A13609BCC758409LL,0UL,1UL,0UL,0x3A13609BCC758409LL},{1UL,0UL,0x3A13609BCC758409LL,18446744073709551615UL,0UL,1UL}},{{0x3A13609BCC758409LL,0x6327983D5DDE830ALL,1UL,0x047A9D7A2C46F8B2LL,18446744073709551615UL,0xE79BFD39D644265BLL},{18446744073709551615UL,0x6327983D5DDE830ALL,0xB9A1F1AEAFBB9B76LL,1UL,0UL,0xEA8BF035EB9D5231LL},{0UL,0UL,18446744073709551615UL,18446744073709551615UL,0UL,0UL},{1UL,0x3A13609BCC758409LL,0x047A9D7A2C46F8B2LL,0xEA8BF035EB9D5231LL,18446744073709551615UL,18446744073709551615UL},{0xBFD492277C5A6CE7LL,1UL,0xD517E9904135DEADLL,0x80D93FD66B50398DLL,18446744073709551608UL,0xB9A1F1AEAFBB9B76LL},{0xBFD492277C5A6CE7LL,0xB9A1F1AEAFBB9B76LL,0x80D93FD66B50398DLL,0xEA8BF035EB9D5231LL,0x6327983D5DDE830ALL,18446744073709551608UL},{1UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,1UL,0xD517E9904135DEADLL}}};
                    int32_t **l_1435 = &g_1400[2];
                    int i, j, k;
                    (*g_339) ^= (safe_add_func_uint8_t_u_u(1UL, (*l_1244)));
                    (*l_1435) = (*g_1386);
                }
                else
                { 
                    int32_t *l_1436 = (void*)0;
                    int32_t *l_1437 = &l_1159[0];
                    int32_t *l_1438 = &l_1157;
                    int32_t *l_1439[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1439[i] = &g_179[1][1];
                    l_1445--;
                }
                (*l_1244) |= (safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((*l_1395) = (safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(p_13, 5)), (safe_lshift_func_int8_t_s_u(p_12.f2, 4)))) & ((l_1152 | 0xAEF331D649C7A361LL) , ((l_1468 = g_1464[0]) == (*g_1236)))), l_1445)) , 0x4A6A7178L), p_13))) || 2UL), (*g_679))), 1UL));
                for (l_1264 = 0; (l_1264 <= 2); l_1264 += 1)
                { 
                    int32_t **l_1470 = &l_1469[0];
                    (*l_1470) = (*g_1386);
                    (*g_339) ^= (&l_1468 != l_1471);
                    if ((*l_1244))
                        continue;
                }
            }
            else
            { 
                (*g_339) = (+(safe_lshift_func_int16_t_s_s(p_12.f1, 11)));
                if (p_13)
                    break;
            }
        }
        for (g_37 = 2; (g_37 >= 0); g_37 -= 1)
        { 
            union U1 l_1476 = {0xAE955A8DL};
            struct S0 l_1490 = {-11,950,4,7276,0,-460};
            union U4 *l_1526 = &g_258;
        }
    }
    --l_1585[0];
    return &g_111;
}



static const union U3  func_20(int8_t * p_21, union U1  p_22)
{ 
    union U4 *l_1133 = (void*)0;
    union U4 **l_1134 = &l_1133;
    (*l_1134) = l_1133;
    return (*g_350);
}



static int8_t * func_23(uint32_t  p_24, int16_t  p_25, struct S0  p_26)
{ 
    uint32_t l_1128 = 0x89C54AEFL;
    for (g_40 = 0; (g_40 == 4); g_40++)
    { 
        union U4 *l_1082 = &g_258;
        union U4 **l_1081 = &l_1082;
        union U4 ***l_1080 = &l_1081;
        union U4 ****l_1083 = (void*)0;
        union U4 ****l_1084 = &l_1080;
        int32_t l_1100[2];
        uint8_t l_1103[4] = {0xD9L,0xD9L,0xD9L,0xD9L};
        union U2 *l_1119 = &g_965;
        union U2 **l_1118 = &l_1119;
        int8_t l_1129[6] = {4L,3L,3L,4L,3L,3L};
        union U1 *l_1130 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_1100[i] = 0x468DFAD9L;
        (*l_1084) = l_1080;
        for (g_465 = 0; (g_465 != 25); g_465 = safe_add_func_int8_t_s_s(g_465, 5))
        { 
            uint8_t *l_1097 = &g_282;
            int64_t *l_1098 = &g_965.f0;
            int32_t l_1099 = 0x69D855E8L;
            (*g_339) = (safe_lshift_func_int8_t_s_s(p_24, (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((*g_325) < 18446744073709551611UL) , (safe_sub_func_uint32_t_u_u((((*l_1098) = (p_26.f0 > ((*l_1097) = (safe_mul_func_uint16_t_u_u((0x0FE2L != p_26.f3), ((g_965 , p_24) < (*g_679))))))) , l_1099), (*g_679)))) ^ l_1099), l_1100[1])), (-6L)))));
        }
        if ((**g_338))
            break;
        for (g_465 = 6; (g_465 >= 0); g_465 -= 1)
        { 
            int32_t *l_1101 = &g_47;
            int32_t *l_1102[2];
            union U1 **l_1131 = &l_1130;
            int i;
            for (i = 0; i < 2; i++)
                l_1102[i] = &g_80;
            l_1103[3]--;
        }
    }
    return &g_111;
}



static int64_t  func_31(uint8_t  p_32, const union U2  p_33, const uint64_t  p_34)
{ 
    int32_t *l_36 = &g_37;
    struct S0 l_966 = {-26,-903,2,3125,0,193};
    const uint16_t l_967 = 7UL;
    const struct S0 *l_1025 = &l_966;
    uint8_t *l_1031 = &g_381.f3;
    union U1 *l_1045 = &g_51;
    int32_t *l_1065[1];
    int32_t l_1066 = 0xFF484560L;
    int64_t l_1067 = 0x8BD0A47D552CF422LL;
    int8_t l_1068 = 1L;
    int32_t l_1069[6][6] = {{0x9C6BDEABL,0xA0C877E8L,0x524D5FB9L,(-1L),0x524D5FB9L,0xA0C877E8L},{0x524D5FB9L,(-1L),0xD80FD86EL,0x524D5FB9L,0x524D5FB9L,0xD80FD86EL},{0x7E94A752L,0x7E94A752L,0x524D5FB9L,0x58FE8178L,0xA0C877E8L,0x58FE8178L},{(-1L),0x7E94A752L,(-1L),0xD80FD86EL,0x524D5FB9L,0x524D5FB9L},{0x9C6BDEABL,(-1L),(-1L),0x9C6BDEABL,0x7E94A752L,0x58FE8178L},{0x58FE8178L,0x9C6BDEABL,0x524D5FB9L,0x9C6BDEABL,0x58FE8178L,0xD80FD86EL}};
    int64_t l_1070 = (-8L);
    int64_t l_1071[5];
    uint16_t l_1072[2][5][7] = {{{0xDAB5L,0UL,0UL,0xDAB5L,0UL,0UL,0xDAB5L},{0xF0AFL,1UL,0xF0AFL,0xF0AFL,1UL,0xF0AFL,0xF0AFL},{0xDAB5L,0xDAB5L,65526UL,0xDAB5L,0xDAB5L,65526UL,0xDAB5L},{1UL,0xF0AFL,0xF0AFL,1UL,0xF0AFL,0xF0AFL,1UL},{0UL,0xDAB5L,0UL,0UL,0xDAB5L,0UL,0UL}},{{1UL,1UL,2UL,1UL,1UL,2UL,1UL},{0xDAB5L,0UL,0UL,0xDAB5L,0UL,0UL,0xDAB5L},{0xF0AFL,1UL,0xF0AFL,0xF0AFL,1UL,0xF0AFL,0xF0AFL},{0xDAB5L,0xDAB5L,65526UL,0xDAB5L,0xDAB5L,65526UL,0xDAB5L},{1UL,0xF0AFL,0xF0AFL,1UL,0xF0AFL,0xF0AFL,1UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1065[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_1071[i] = 1L;
    (*l_36) |= (-4L);
    (*l_36) ^= 0L;
    for (p_32 = 0; (p_32 <= 6); p_32 += 1)
    { 
        int32_t *l_39[7];
        int i;
        for (i = 0; i < 7; i++)
            l_39[i] = &g_37;
        --g_40;
    }
    for (g_40 = 0; (g_40 >= 34); g_40++)
    { 
        uint32_t l_941 = 0xE8EE55F8L;
        union U1 l_957 = {0x7E7ADED9L};
        int32_t ***l_997 = &g_338;
        struct S0 *l_1020 = &g_8;
        int32_t l_1037 = 0xA205523BL;
        int32_t l_1039 = 0xFF90E596L;
        int32_t l_1041 = 0xC4D7C804L;
        if (p_32)
            break;
        for (g_37 = (-27); (g_37 >= (-18)); g_37++)
        { 
            int16_t l_940 = 0x8CE2L;
            uint8_t *l_980 = &g_282;
            const struct S0 l_983[4][2] = {{{-4,-112,1,6502,0,297},{-37,377,5,-7453,0,741}},{{-37,377,5,-7453,0,741},{-4,-112,1,6502,0,297}},{{-37,377,5,-7453,0,741},{-37,377,5,-7453,0,741}},{{-4,-112,1,6502,0,297},{-37,377,5,-7453,0,741}}};
            const uint32_t l_984 = 18446744073709551614UL;
            int64_t *l_1016 = (void*)0;
            int64_t **l_1015 = &l_1016;
            struct S0 *l_1021[3];
            uint16_t ***l_1028 = (void*)0;
            int32_t l_1038 = 0xABF218D8L;
            int32_t l_1040 = 0xBAF16DC5L;
            uint8_t l_1042 = 255UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1021[i] = &g_1022;
            for (p_32 = 1; (p_32 <= 6); p_32 += 1)
            { 
                const int32_t **l_958 = (void*)0;
                for (g_47 = 6; (g_47 >= 0); g_47 -= 1)
                { 
                    struct S0 l_48 = {9,-790,1,6854,0,-249};
                    int32_t *l_929 = &g_80;
                    int32_t *l_930 = (void*)0;
                    int32_t *l_931 = &g_80;
                    int32_t *l_932 = &g_80;
                    int32_t *l_933 = &g_102;
                    int32_t *l_934 = (void*)0;
                    int32_t *l_935 = &g_102;
                    int32_t *l_936 = (void*)0;
                    int32_t *l_937 = (void*)0;
                    int32_t *l_938 = &g_102;
                    int32_t *l_939[5] = {&g_37,&g_37,&g_37,&g_37,&g_37};
                    uint8_t *l_954 = &g_258.f3;
                    int32_t ***l_959 = (void*)0;
                    int32_t ***l_960 = &g_631;
                    union U2 *l_964 = &g_965;
                    union U2 **l_963 = &l_964;
                    int i;
                }
                for (g_717 = 0; (g_717 <= 6); g_717 += 1)
                { 
                    int i;
                    return g_38[g_717];
                }
                if (p_33.f1)
                    break;
                if ((**g_338))
                    continue;
                if (p_33.f3)
                    break;
            }
            if (l_941)
                continue;
            l_966.f5 |= (safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((((*l_36) | ((((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_940, (0xC5L ^ (safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((p_33.f0 != (((*l_980)--) != (l_983[1][1] , 0x98L))), l_983[1][1].f3)), l_984))))), p_33.f1)) == (**g_338)) && 246UL) > (-1L))) <= (-9L)) < 0xE7L), l_957.f0)), p_32));
            if ((*g_339))
            { 
                int32_t *l_998 = (void*)0;
                int32_t *l_999 = &g_179[1][1];
                uint16_t *l_1014 = (void*)0;
                (*l_999) = (((safe_unary_minus_func_uint32_t_u((((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((*g_350) = (*g_350)) , (safe_sub_func_int32_t_s_s(0xF896CD82L, (!(l_957.f0 > (safe_rshift_func_uint8_t_u_u(p_33.f1, 5))))))), p_33.f4)) , p_33.f4), (safe_sub_func_int64_t_s_s((((***l_997) = (l_997 == &g_338)) || p_34), (*g_325))))) | (-6L)) > l_984))) , g_258) , 0xF89A1C2AL);
                for (g_111 = 0; (g_111 > (-12)); g_111 = safe_sub_func_int16_t_s_s(g_111, 2))
                { 
                    int64_t ***l_1017 = &l_1015;
                    uint64_t *l_1018 = (void*)0;
                    uint64_t *l_1019 = &g_965.f1;
                    (*g_339) = (((*l_1019) |= (safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((*l_36), (safe_rshift_func_uint16_t_u_u(0x04E8L, 15)))), (safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((void*)0 != l_1014), 0xA3A92D4FL)) < (g_47 > ((((*l_1017) = l_1015) == (void*)0) < 0x6B6AL))), 0xE1L)), 8UL))))) , (*l_36));
                }
                l_1021[1] = l_1020;
                for (g_465 = (-5); (g_465 >= 10); ++g_465)
                { 
                    const struct S0 **l_1026 = &l_1025;
                    uint8_t ***l_1027 = &g_720;
                    (*l_1026) = l_1025;
                    (***l_997) |= ((void*)0 == l_1027);
                }
            }
            else
            { 
                int32_t l_1036 = (-2L);
                int64_t * const *l_1047 = (void*)0;
                uint16_t *l_1059 = (void*)0;
                uint16_t *l_1060 = &g_253;
                int32_t *l_1061[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t l_1062 = 247UL;
                int i;
                if ((&g_652[3][5][0] != ((***l_997) , l_1028)))
                { 
                    uint8_t **l_1032 = &l_1031;
                    int32_t *l_1033 = &g_179[1][1];
                    int32_t *l_1034 = (void*)0;
                    int32_t *l_1035[1][5];
                    union U1 **l_1046 = &l_1045;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1035[i][j] = &g_80;
                    }
                    g_179[0][2] = ((***l_997) &= (safe_lshift_func_int8_t_s_s((((*l_1032) = l_1031) != &p_32), 3)));
                    l_1042++;
                    (*l_1046) = l_1045;
                }
                else
                { 
                    (*g_339) &= ((void*)0 != l_1047);
                }
                (***l_997) &= (safe_rshift_func_uint8_t_u_s(3UL, 1));
                g_1022.f0 ^= (((*l_36) & (safe_rshift_func_int16_t_s_u(0L, ((*l_1060) = (~(safe_div_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((-1L), (0L && 0x7EL))) <= p_33.f0), (safe_mod_func_uint8_t_u_u((&g_465 == &g_195[3]), l_1036))))))))) | (***l_997));
                l_1062--;
                if ((***l_997))
                    break;
            }
            if ((*g_339))
                continue;
        }
    }
    l_1072[1][0][0]++;
    return p_33.f3;
}



static int32_t * func_49(int32_t * p_50)
{ 
    int64_t *l_571 = &g_73;
    int64_t **l_570 = &l_571;
    int32_t l_575 = (-2L);
    int32_t *l_578 = &g_179[1][0];
    int32_t *l_579 = &g_179[1][1];
    int32_t *l_580 = (void*)0;
    int32_t *l_581 = &g_80;
    int32_t *l_582 = &g_179[1][1];
    int32_t *l_583[3];
    int32_t l_584 = 0L;
    int16_t l_585[5][1] = {{3L},{0xF4BEL},{3L},{0xF4BEL},{3L}};
    uint32_t l_586[3];
    union U3 l_589 = {1L};
    union U3 *l_590 = (void*)0;
    union U3 *l_591[2][6][5] = {{{&l_589,(void*)0,(void*)0,&l_589,&l_589},{&l_589,&l_589,&l_589,&l_589,(void*)0},{(void*)0,&l_589,&l_589,&l_589,&l_589},{&l_589,&l_589,(void*)0,&l_589,&l_589},{&l_589,&l_589,&l_589,&l_589,(void*)0},{&l_589,(void*)0,&l_589,(void*)0,&l_589}},{{&l_589,&l_589,&l_589,&l_589,&l_589},{&l_589,&l_589,&l_589,&l_589,&l_589},{&l_589,&l_589,&l_589,&l_589,&l_589},{&l_589,&l_589,&l_589,(void*)0,&l_589},{&l_589,(void*)0,&l_589,&l_589,(void*)0},{&l_589,&l_589,&l_589,&l_589,&l_589}}};
    uint8_t *l_595 = &g_282;
    uint8_t **l_596 = (void*)0;
    uint8_t l_597 = 0x78L;
    union U4 l_600 = {0xC0681D23L};
    uint8_t *l_609 = (void*)0;
    uint8_t *l_610 = &g_258.f3;
    uint8_t *l_611 = &g_98;
    int8_t *l_613 = &g_111;
    union U4 *l_694[3];
    union U4 **l_693 = &l_694[2];
    struct S0 l_736[5] = {{-20,-714,5,2179,0,924},{-20,-714,5,2179,0,924},{-20,-714,5,2179,0,924},{-20,-714,5,2179,0,924},{-20,-714,5,2179,0,924}};
    uint32_t l_853 = 0x8EC56BB1L;
    union U2 l_902 = {1L};
    int32_t ***l_909[5];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_583[i] = &g_102;
    for (i = 0; i < 3; i++)
        l_586[i] = 0x65A80851L;
    for (i = 0; i < 3; i++)
        l_694[i] = &g_258;
    for (i = 0; i < 5; i++)
        l_909[i] = &g_631;
    for (g_111 = 0; (g_111 <= 10); g_111 = safe_add_func_int32_t_s_s(g_111, 7))
    { 
        int32_t l_567[7][2][3] = {{{0x058FE321L,0x37980E84L,0x058FE321L},{0x1D0D9BFFL,0x1D0D9BFFL,0x376F7525L}},{{0L,0x058FE321L,0L},{0x376F7525L,0x1D0D9BFFL,0x376F7525L}},{{0L,0x058FE321L,0L},{0x376F7525L,0x1D0D9BFFL,0x376F7525L}},{{0L,0x058FE321L,0L},{0x376F7525L,0x1D0D9BFFL,0x376F7525L}},{{0L,0x058FE321L,0L},{0x376F7525L,0x1D0D9BFFL,0x376F7525L}},{{0L,0x058FE321L,0L},{0x376F7525L,0x1D0D9BFFL,0x376F7525L}},{{0L,0x058FE321L,0L},{0x376F7525L,0x1D0D9BFFL,0x376F7525L}}};
        int64_t *l_569 = &g_73;
        int64_t * const *l_568[5][5] = {{&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569}};
        uint32_t *l_572 = (void*)0;
        uint32_t *l_573 = &g_69;
        uint8_t *l_574 = &g_98;
        int16_t *l_576[7][3][3] = {{{(void*)0,&g_77,&g_77},{&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77}},{{(void*)0,&g_77,&g_77},{&g_77,&g_77,&g_77},{&g_77,(void*)0,&g_77}},{{(void*)0,&g_77,&g_77},{&g_77,(void*)0,&g_77},{(void*)0,&g_77,&g_77}},{{(void*)0,&g_77,(void*)0},{&g_77,&g_77,&g_77},{(void*)0,&g_77,(void*)0}},{{&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77},{(void*)0,&g_77,&g_77}},{{&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77},{(void*)0,(void*)0,&g_77}},{{&g_77,&g_77,&g_77},{(void*)0,(void*)0,&g_77},{&g_77,&g_77,(void*)0}}};
        int32_t l_577 = 0x14A1844CL;
        int i, j, k;
        (**g_338) = (((((g_348.f2 > (l_577 ^= ((*g_325) > ((((*l_574) &= (((g_565[5] != (void*)0) < l_567[0][0][0]) != (((*l_573) = ((l_568[1][3] = l_568[1][3]) == l_570)) , g_381.f1))) , l_575) != l_575)))) || 9UL) | g_348.f1) & 0xD4ADL) || 0xCE3B9F6EL);
    }
    ++l_586[0];
    (*l_581) = ((g_592 = ((*g_350) = l_589)) , ((((*l_579) , (safe_add_func_int64_t_s_s((((((**g_338) = (*l_582)) , (((*l_581) | (((l_595 = l_595) != (void*)0) < ((g_381.f1 != g_465) < g_244[3]))) , g_343.f3)) >= 0x6310L) ^ l_597), 0x7EDAB82A9BBF0539LL))) ^ (*l_581)) , 0L));
    (**g_338) &= (safe_lshift_func_int8_t_s_u(((*l_578) == ((*l_613) = (l_600 , ((((((safe_mod_func_int32_t_s_s((((*l_582) , (safe_rshift_func_int8_t_s_s((*l_578), ((!(~(0xF35CL <= ((safe_sub_func_uint8_t_u_u(((*l_611) = ((*l_610) = ((*l_595) = (*l_578)))), (*l_581))) || 0xE0121964A50F9BE2LL)))) & 0xA3L)))) && g_612), (*l_581))) || (*l_581)) <= (*l_582)) | 0x349E2B0070D3A5F4LL) ^ 6UL) != (-8L))))), (*l_578)));
    for (g_348.f1 = 14; (g_348.f1 == 26); g_348.f1 = safe_add_func_uint64_t_u_u(g_348.f1, 3))
    { 
        uint64_t l_622 = 18446744073709551615UL;
        int32_t l_625[2][6];
        union U3 **l_663[2][7][1];
        uint8_t **l_669 = &l_611;
        uint8_t *l_670 = &g_113;
        uint8_t **l_671 = (void*)0;
        uint16_t * const *l_675[4] = {&g_653,&g_653,&g_653,&g_653};
        uint16_t * const **l_674 = &l_675[3];
        int32_t l_708 = 0x94230285L;
        int32_t l_727 = 0L;
        uint8_t l_792 = 0x8AL;
        uint32_t **l_804 = (void*)0;
        struct S0 * const l_825 = &g_343;
        uint16_t l_872[4] = {0x6C12L,0x6C12L,0x6C12L,0x6C12L};
        struct S0 **l_881 = &g_566;
        uint64_t l_885 = 18446744073709551610UL;
        int32_t ***l_907 = &g_631;
        int32_t ****l_908[2];
        int16_t l_910 = 0x84C8L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_625[i][j] = 0x9D62F20AL;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 1; k++)
                    l_663[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 2; i++)
            l_908[i] = &l_907;
    }
    return p_50;
}



static int32_t * func_52(int32_t  p_53, uint64_t  p_54)
{ 
    int32_t *l_57 = &g_37;
    int32_t l_109[6][3] = {{0xC4FF8C8FL,0L,(-1L)},{8L,8L,(-1L)},{0L,0xC4FF8C8FL,0xD8A88EB8L},{(-3L),8L,(-3L)},{(-3L),0L,8L},{0L,(-3L),(-3L)}};
    int32_t *l_116[1];
    uint32_t l_181[5][5] = {{0x71553A1BL,9UL,4UL,1UL,1UL},{9UL,0x71553A1BL,9UL,4UL,1UL},{0x4FE049F0L,0UL,1UL,0UL,0x4FE049F0L},{9UL,0UL,0x71553A1BL,0x4FE049F0L,0x71553A1BL},{0x71553A1BL,0x71553A1BL,1UL,0x4FE049F0L,0xBA958F48L}};
    int32_t l_213 = 0xD1A432A4L;
    uint16_t l_219 = 2UL;
    int32_t l_223 = 0xD8A3B9CDL;
    int64_t * const l_233 = &g_73;
    int32_t *l_260 = &g_179[1][3];
    int32_t l_275 = 0xF28C3C1AL;
    int64_t l_290[1];
    uint8_t l_302 = 0x0AL;
    int8_t l_312[2];
    struct S0 l_337 = {-23,249,4,-5513,0,510};
    union U3 *l_347 = &g_348;
    uint16_t *l_352 = (void*)0;
    uint16_t **l_351[1];
    uint64_t l_362 = 1UL;
    union U4 *l_378 = &g_258;
    int8_t l_433 = 0L;
    uint32_t l_436 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_116[i] = &l_109[1][2];
    for (i = 0; i < 1; i++)
        l_290[i] = 0x24D338BC81BA0723LL;
    for (i = 0; i < 2; i++)
        l_312[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_351[i] = &l_352;
    for (p_54 = (-12); (p_54 == 58); p_54 = safe_add_func_int8_t_s_s(p_54, 5))
    { 
        uint32_t l_63 = 6UL;
        int32_t l_112 = 9L;
        if (g_47)
        { 
            int32_t **l_58 = &l_57;
            union U4 l_67[4] = {{0x85266ADDL},{0x85266ADDL},{0x85266ADDL},{0x85266ADDL}};
            int32_t l_83 = 0L;
            uint32_t l_103 = 0xD3C8015BL;
            int i;
            (*l_58) = l_57;
            for (p_53 = 0; (p_53 > 24); p_53 = safe_add_func_uint32_t_u_u(p_53, 3))
            { 
                uint16_t *l_68[1];
                int16_t *l_76 = &g_77;
                const int32_t l_78 = 1L;
                int32_t *l_79 = &g_80;
                int32_t l_110 = 0x135CAF2BL;
                int i;
                for (i = 0; i < 1; i++)
                    l_68[i] = (void*)0;
                (*l_79) &= (safe_rshift_func_int16_t_s_u(((g_8 , (l_63 || ((safe_mul_func_uint16_t_u_u((g_69 ^= (+(l_67[2] , g_51.f0))), (&g_47 == ((+(safe_rshift_func_int16_t_s_u(((*l_76) |= ((g_73 &= 1UL) | (safe_sub_func_int16_t_s_s((&g_37 != &g_37), 0x42B9L)))), p_54))) , l_57)))) && (*l_57)))) > g_8.f4), l_78));
                if (p_54)
                    continue;
                for (g_80 = 25; (g_80 <= (-27)); g_80 = safe_sub_func_uint16_t_u_u(g_80, 4))
                { 
                    uint8_t *l_96 = &l_67[2].f3;
                    uint8_t *l_97[3][6][4] = {{{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98}},{{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98}},{{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98}}};
                    int32_t l_99 = 0x42A635BDL;
                    uint32_t l_100[1][1];
                    int32_t *l_101 = &g_102;
                    int32_t *l_106 = (void*)0;
                    int32_t *l_107 = &l_83;
                    int32_t *l_108[3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_100[i][j] = 0UL;
                    }
                    for (i = 0; i < 3; i++)
                        l_108[i] = &l_99;
                    (*l_101) |= ((l_83 = p_54) < (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((p_53 | ((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((1L >= (0xABL < (l_68[0] != (void*)0))) , (safe_add_func_uint8_t_u_u((l_99 |= ((*l_96) = ((p_53 | l_63) || p_53))), l_100[0][0]))) != g_51.f0), 1)), (**l_58))), (**l_58))) || p_54) < l_100[0][0]) ^ 0xBBL)) < p_53), (*l_79))), p_54)));
                    if (p_54)
                        continue;
                    --l_103;
                    --g_113;
                }
                for (g_69 = 0; g_69 < 1; g_69 += 1)
                {
                    l_68[g_69] = (void*)0;
                }
                return &g_37;
            }
        }
        else
        { 
            uint8_t l_117 = 253UL;
            l_117--;
        }
    }
    for (g_111 = 0; (g_111 <= 13); g_111 = safe_add_func_uint8_t_u_u(g_111, 1))
    { 
        int32_t **l_129[6][5][3] = {{{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57}},{{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57}},{{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57}},{{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57}},{{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57}},{{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57},{&l_116[0],&l_57,&l_57}}};
        int32_t ***l_128 = &l_129[2][3][1];
        int32_t *l_132 = &g_133[3];
        uint32_t *l_135 = &g_69;
        int i, j, k;
        g_80 = (0x690CL | (safe_mod_func_uint32_t_u_u(((*l_135) &= ((safe_mul_func_uint16_t_u_u((p_53 < (p_54 || (((*l_128) = &l_57) == &l_116[0]))), (safe_lshift_func_uint8_t_u_u(((((*l_132) ^= g_73) , (((!0x0D1CDFBE848233F3LL) | 1L) >= 0x83E4BC46L)) > 0xF9BEL), p_54)))) | p_54)), p_54)));
    }
    return (*g_338);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    transparent_crc(g_8.f5, "g_8.f5", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f3, "g_35.f3", print_hash_value);
    transparent_crc(g_35.f4, "g_35.f4", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);

    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_51.f0, "g_51.f0", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_179[i][j], "g_179[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_195[i], "g_195[i]", print_hash_value);

    }
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_244[i], "g_244[i]", print_hash_value);

    }
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_343.f0, "g_343.f0", print_hash_value);
    transparent_crc(g_343.f1, "g_343.f1", print_hash_value);
    transparent_crc(g_343.f2, "g_343.f2", print_hash_value);
    transparent_crc(g_343.f3, "g_343.f3", print_hash_value);
    transparent_crc(g_343.f4, "g_343.f4", print_hash_value);
    transparent_crc(g_343.f5, "g_343.f5", print_hash_value);
    transparent_crc(g_348.f0, "g_348.f0", print_hash_value);
    transparent_crc(g_348.f1, "g_348.f1", print_hash_value);
    transparent_crc(g_348.f2, "g_348.f2", print_hash_value);
    transparent_crc(g_381.f3, "g_381.f3", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_592.f0, "g_592.f0", print_hash_value);
    transparent_crc(g_592.f1, "g_592.f1", print_hash_value);
    transparent_crc(g_592.f2, "g_592.f2", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_717, "g_717", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_965.f0, "g_965.f0", print_hash_value);
    transparent_crc(g_965.f1, "g_965.f1", print_hash_value);
    transparent_crc(g_965.f3, "g_965.f3", print_hash_value);
    transparent_crc(g_965.f4, "g_965.f4", print_hash_value);
    transparent_crc(g_1022.f0, "g_1022.f0", print_hash_value);
    transparent_crc(g_1022.f1, "g_1022.f1", print_hash_value);
    transparent_crc(g_1022.f2, "g_1022.f2", print_hash_value);
    transparent_crc(g_1022.f3, "g_1022.f3", print_hash_value);
    transparent_crc(g_1022.f4, "g_1022.f4", print_hash_value);
    transparent_crc(g_1022.f5, "g_1022.f5", print_hash_value);
    transparent_crc(g_1165.f3, "g_1165.f3", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1233[i], "g_1233[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1280[i].f0, "g_1280[i].f0", print_hash_value);
        transparent_crc(g_1280[i].f1, "g_1280[i].f1", print_hash_value);
        transparent_crc(g_1280[i].f2, "g_1280[i].f2", print_hash_value);
        transparent_crc(g_1280[i].f3, "g_1280[i].f3", print_hash_value);
        transparent_crc(g_1280[i].f4, "g_1280[i].f4", print_hash_value);
        transparent_crc(g_1280[i].f5, "g_1280[i].f5", print_hash_value);

    }
    transparent_crc(g_1315, "g_1315", print_hash_value);
    transparent_crc(g_1356, "g_1356", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1429, "g_1429", print_hash_value);
    transparent_crc(g_1528.f1, "g_1528.f1", print_hash_value);
    transparent_crc(g_1528.f3, "g_1528.f3", print_hash_value);
    transparent_crc(g_1705, "g_1705", print_hash_value);
    transparent_crc(g_1857, "g_1857", print_hash_value);
    transparent_crc(g_1899, "g_1899", print_hash_value);
    transparent_crc(g_1900, "g_1900", print_hash_value);
    transparent_crc(g_2047, "g_2047", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
