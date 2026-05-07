// SPDX-License-Identifier: MIT
// cctest_csmith_be27d2a4.c --- cctest case csmith_be27d2a4 (csmith seed 3190280868)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb6519da2 */

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

// Options:   -s 3190280868 -o /tmp/csmith_gen_e4d18wc4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 23;
   signed f1 : 30;
   unsigned f2 : 2;
   signed f3 : 15;
   signed f4 : 13;
};

struct S1 {
   unsigned f0 : 15;
};

union U2 {
   const int8_t  f0;
   int64_t  f1;
   uint16_t  f2;
};


static int32_t g_2 = 0x40194DDBL;
static int64_t g_32 = 0x8CDC14C38D679BDDLL;
static int64_t g_33 = 0x5DBD55ADB51FD9ABLL;
static int8_t g_62[1][4][1] = {{{0L},{0L},{0L},{0L}}};
static struct S1 g_67 = {97};
static uint32_t g_105 = 0x3B10D6F6L;
static int32_t g_111 = 0x89797D0EL;
static int16_t g_150 = 0L;
static uint64_t g_151[1] = {0xB116CE8D70DEC899LL};
static const struct S0 g_158 = {-122,-20189,1,126,9};
static uint64_t g_170[1] = {18446744073709551615UL};
static uint32_t g_173 = 4294967295UL;
static uint8_t g_190[2][4][2] = {{{3UL,255UL},{255UL,3UL},{255UL,255UL},{3UL,255UL}},{{255UL,3UL},{255UL,255UL},{3UL,255UL},{255UL,3UL}}};
static int32_t g_193 = 0L;



static int64_t  func_1(void);
static uint8_t  func_12(int64_t  p_13);
static const struct S0  func_14(uint32_t  p_15, const struct S0  p_16);
static const struct S0  func_18(int64_t  p_19, struct S1  p_20, uint32_t  p_21, union U2  p_22, int64_t  p_23);




static int64_t  func_1(void)
{ 
    uint32_t l_3 = 0UL;
    int32_t l_5 = 8L;
    int64_t l_174 = 0x3390C0CC138C4916LL;
    int16_t l_177 = 7L;
    uint8_t l_194 = 1UL;
    if (g_2)
    { 
        uint32_t l_4 = 0UL;
        int32_t l_6 = 1L;
        if (g_2)
        { 
            return l_3;
        }
        else
        { 
            uint8_t l_7 = 0xA9L;
            l_4 ^= 0x1867B8F5L;
            if ((g_2 & (g_2 == g_2)))
            { 
                return g_2;
            }
            else
            { 
                ++l_7;
            }
        }
        l_174 = (safe_sub_func_uint16_t_u_u((func_12(g_2) ^ (g_173 = (0x98AF002CDD91CD6CLL || (0UL ^ l_4)))), g_2));
    }
    else
    { 
        uint8_t l_178 = 0UL;
        int32_t l_189 = 0L;
        for (l_3 = 0; (l_3 != 8); l_3++)
        { 
            return l_177;
        }
        if ((((g_62[0][2][0] |= l_178) == (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_177, l_174)), l_178)), g_151[0])), 65526UL)), g_158.f2))) & (-3L)))
        { 
            --g_190[0][0][1];
        }
        else
        { 
            g_193 = (l_5 = g_190[1][2][0]);
            return l_3;
        }
    }
    l_5 = l_194;
    l_5 = ((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(2UL, (safe_mod_func_int16_t_s_s((g_2 & 0xCC48AF1FL), g_158.f2)))), 6)) > g_158.f4);
    return g_151[0];
}



static uint8_t  func_12(int64_t  p_13)
{ 
    int8_t l_17 = 0xDDL;
    struct S1 l_34 = {37};
    union U2 l_35 = {-1L};
    struct S0 l_168 = {-1576,8351,0,5,38};
    int32_t l_169 = 7L;
    l_168 = func_14(l_17, func_18((p_13 >= (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s((g_33 = (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((-1L), (g_32 = 8UL))), l_17))), l_17)) | p_13), 5))), l_34, g_2, l_35, g_2));
    g_170[0]++;
    return l_35.f0;
}



static const struct S0  func_14(uint32_t  p_15, const struct S0  p_16)
{ 
    int32_t l_162 = 0L;
    const uint16_t l_167[3][4][2] = {{{65535UL,1UL},{2UL,65535UL},{0x2BF5L,65531UL},{0x2BF5L,65535UL}},{{2UL,1UL},{65535UL,0x3D7AL},{0UL,0xE988L},{1UL,65535UL}},{{65535UL,65535UL},{1UL,0xE988L},{0UL,0x3D7AL},{65535UL,1UL}}};
    int i, j, k;
    l_162 = (p_16 , (safe_div_func_int8_t_s_s(((!(l_162 & (g_151[0] = (safe_lshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(l_167[1][1][0], 247UL)) , 1L), 12))))) || l_162), p_16.f3)));
    return p_16;
}



static const struct S0  func_18(int64_t  p_19, struct S1  p_20, uint32_t  p_21, union U2  p_22, int64_t  p_23)
{ 
    uint16_t l_47 = 0UL;
    int32_t l_77 = 0xFB1A9164L;
    int32_t l_79 = 0x788274EAL;
    int32_t l_80 = 0xEF6D7B3CL;
    struct S1 l_121 = {45};
    uint32_t l_139[1];
    int32_t l_140 = 1L;
    int32_t l_142[2];
    int64_t l_143 = 1L;
    int i;
    for (i = 0; i < 1; i++)
        l_139[i] = 1UL;
    for (i = 0; i < 2; i++)
        l_142[i] = 0xEF3A8CD9L;
    for (p_19 = (-7); (p_19 < (-25)); p_19 = safe_sub_func_uint16_t_u_u(p_19, 9))
    { 
        int32_t l_42[5][3] = {{(-2L),(-2L),0x95C1F4ACL},{(-1L),(-1L),1L},{(-2L),(-2L),0x95C1F4ACL},{(-1L),(-1L),1L},{(-2L),(-2L),0x95C1F4ACL}};
        int32_t l_50 = 0xECA1AEA0L;
        int64_t l_51[3];
        int8_t l_56 = 0x9CL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_51[i] = (-1L);
        if ((safe_mul_func_uint8_t_u_u((l_50 |= (safe_mul_func_uint16_t_u_u((l_42[4][2] || (((g_33 > ((safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_47, (((safe_lshift_func_uint16_t_u_s((0UL > p_19), p_21)) , 0xE481L) | l_42[4][2]))), g_32)) != p_21)) == 0UL) , g_33)), p_19))), l_51[0])))
        { 
            if (p_23)
                break;
        }
        else
        { 
            int8_t l_61 = 4L;
            l_61 = (((((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(l_56, (g_2 == (((safe_mul_func_int8_t_s_s(((p_19 || ((safe_mul_func_int16_t_s_s((p_19 == 3L), p_21)) != g_2)) , 0x76L), g_33)) >= g_33) , g_33)))), g_32)) || l_51[2]) > p_20.f0) , p_20.f0) ^ p_22.f0);
        }
    }
    for (p_22.f1 = 0; (p_22.f1 <= 0); p_22.f1 += 1)
    { 
        int16_t l_103 = 0L;
        struct S1 l_120 = {155};
        int32_t l_144 = 1L;
        for (g_33 = 0; (g_33 <= 0); g_33 += 1)
        { 
            int32_t l_68 = 0x0FDEBFC8L;
            const struct S0 l_81 = {-1730,10877,1,82,-11};
            int64_t l_104[3];
            int i;
            for (i = 0; i < 3; i++)
                l_104[i] = 0x046A17DA69EDF730LL;
            if ((g_62[0][3][0] && (safe_mul_func_uint8_t_u_u((0x04L == ((safe_sub_func_uint32_t_u_u(g_62[0][2][0], ((g_67 = g_67) , g_67.f0))) , l_47)), l_68))))
            { 
                uint32_t l_69 = 18446744073709551615UL;
                int32_t l_76 = (-3L);
                int64_t l_78[4] = {0x6575EB915481186CLL,0x6575EB915481186CLL,0x6575EB915481186CLL,0x6575EB915481186CLL};
                int i;
                l_69 &= g_2;
                l_80 = ((l_79 |= (safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(l_69, 1UL)) != (safe_mul_func_uint16_t_u_u(((l_68 = (g_62[0][0][0] = (l_77 = ((l_76 & (0x4A889BFFL ^ p_19)) <= l_68)))) == l_78[1]), 1L))), (-1L)))) | p_21);
            }
            else
            { 
                return l_81;
            }
            for (p_19 = 0; (p_19 <= 0); p_19 += 1)
            { 
                uint16_t l_82 = 65535UL;
                int i, j, k;
                ++l_82;
                if (g_62[p_22.f1][g_33][g_33])
                    break;
            }
            g_105 = ((((safe_rshift_func_int16_t_s_s((+(safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((+(65535UL >= (l_80 && (safe_mul_func_uint8_t_u_u((l_79 >= ((((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_103, g_33)) || 0xBE908AE3L), p_22.f2)) ^ g_32) && p_22.f0) & 7L)), l_47))))), l_68)), 4)) > l_104[2]), 65532UL)) || p_19), p_23))), l_47)) <= p_22.f0) ^ g_32) <= g_2);
            for (p_21 = 0; (p_21 <= 0); p_21 += 1)
            { 
                int32_t l_110 = 0L;
                int i, j, k;
                if (g_62[p_21][p_21][p_22.f1])
                    break;
                if (p_22.f1)
                    continue;
                g_111 |= (safe_div_func_uint32_t_u_u(g_67.f0, (safe_rshift_func_int16_t_s_s(((l_110 = g_32) , (255UL <= l_47)), 5))));
            }
        }
        for (p_19 = 0; (p_19 <= 0); p_19 += 1)
        { 
            const int16_t l_119 = 3L;
            struct S1 l_122 = {47};
            int32_t l_124 = 0xBCCF1A09L;
            int32_t l_146 = (-1L);
            if (((!((g_67.f0 , (safe_mul_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_77, p_19)), l_103)) , 0x5AFD930511C70F4ALL) < p_22.f0), 1L))) ^ l_119)) ^ l_103))
            { 
                l_121 = l_120;
                if (g_105)
                    break;
            }
            else
            { 
                if (l_119)
                    break;
                l_121 = l_122;
            }
            l_124 = ((!0x21D5L) , (l_80 = ((((((p_22.f2 <= (g_2 >= g_33)) == p_19) , (-2L)) < p_22.f1) | g_105) >= 0UL)));
            for (l_79 = 0; (l_79 <= 0); l_79 += 1)
            { 
                int i, j, k;
                p_20 = l_120;
                if (g_62[p_22.f1][p_19][p_19])
                    continue;
            }
            for (l_47 = 0; (l_47 <= 0); l_47 += 1)
            { 
                int32_t l_141 = 0x8EE9F968L;
                int32_t l_145 = 0x2C44E1F5L;
                int32_t l_147 = 1L;
                int32_t l_148 = 0L;
                int32_t l_149 = 0x262ADE66L;
                int i, j, k;
                g_111 = (safe_add_func_uint16_t_u_u((((g_62[p_19][p_22.f1][l_47] == (safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(((1L ^ 0xE1FDL) & 0xD4602054L), p_23)), 1)) , 1L), 0)), g_62[p_19][p_22.f1][l_47])), l_139[0])), p_22.f0))) || p_22.f2) | 1L), 0x417AL));
                g_151[0]++;
                l_141 = (p_23 || (0xB703A76A61A6B3F7LL <= ((safe_div_func_int32_t_s_s(g_105, l_119)) , 0UL)));
            }
        }
    }
    return g_158;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_62[i][j][k], "g_62[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_151[i], "g_151[i]", print_hash_value);

    }
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_158.f1, "g_158.f1", print_hash_value);
    transparent_crc(g_158.f2, "g_158.f2", print_hash_value);
    transparent_crc(g_158.f3, "g_158.f3", print_hash_value);
    transparent_crc(g_158.f4, "g_158.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_170[i], "g_170[i]", print_hash_value);

    }
    transparent_crc(g_173, "g_173", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_190[i][j][k], "g_190[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_193, "g_193", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
