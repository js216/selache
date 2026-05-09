// SPDX-License-Identifier: MIT
// cctest_csmith_452232a4.c --- cctest case csmith_452232a4 (csmith seed 1159869092)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb5b16be2 */

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

// Options:   -s 1159869092 -o /tmp/csmith_gen_g5yoqyfk/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   unsigned f0 : 10;
   unsigned f1 : 30;
   unsigned f2 : 2;
};

struct S1 {
   signed f0 : 6;
   unsigned f1 : 5;
   const unsigned f2 : 15;
   signed f3 : 8;
};

struct S2 {
   uint32_t  f0;
};

union U3 {
   struct S2  f0;
   const uint32_t  f1;
};

union U4 {
   uint16_t  f0;
   const signed f1 : 8;
   int64_t  f2;
};


static int32_t g_16[7] = {0x1CE3CB5AL,0xF7919ADBL,0x1CE3CB5AL,0x1CE3CB5AL,0xF7919ADBL,0x1CE3CB5AL,0x1CE3CB5AL};
static uint16_t g_17 = 0x32E3L;
static int16_t g_20 = (-5L);
static uint64_t g_39 = 1UL;
static int32_t g_71 = 0x43232AF7L;
static int16_t g_87 = 1L;
static int32_t g_90[2] = {0L,0L};
static uint32_t g_93 = 4294967286UL;
static uint8_t g_119[5][4][6] = {{{0x73L,0x07L,0x73L,0x66L,0x86L,0x66L},{0x73L,0x07L,0x73L,0x66L,0x86L,0x66L},{0x73L,0x07L,0x73L,0x66L,0x86L,0x66L},{0x73L,0x07L,0x73L,0x66L,0x86L,0x66L}},{{0x73L,0x07L,0x73L,0x66L,0x86L,0x66L},{0x73L,0x07L,0x73L,0x66L,0x86L,0x66L},{0x73L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL}},{{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL}},{{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL}},{{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL},{0x62L,0x66L,0x62L,255UL,0x73L,255UL}}};
static int64_t g_134 = (-1L);
static uint32_t *g_136 = &g_93;
static uint32_t **g_135 = &g_136;
static struct S2 g_139 = {0xBF0A6BB7L};
static struct S1 g_145[3][7][3] = {{{{2,4,112,-6},{1,4,10,-7},{-3,3,145,2}},{{0,3,165,7},{-7,0,124,-0},{-6,2,101,8}},{{1,4,10,-7},{1,4,10,-7},{5,2,74,-15}},{{-4,2,146,-2},{-2,4,162,-7},{2,3,65,2}},{{-6,0,7,-13},{-1,3,84,-6},{5,2,61,-5}},{{5,3,135,-10},{4,3,81,-10},{-2,4,162,-7}},{{5,2,61,-5},{-6,0,7,-13},{5,2,61,-5}}},{{{1,3,64,-11},{7,1,45,-4},{2,3,65,2}},{{3,3,47,-13},{1,4,103,1},{5,2,74,-15}},{{4,3,81,-10},{-4,2,146,-2},{-6,2,101,8}},{{-3,1,117,14},{-3,3,145,2},{-3,3,145,2}},{{4,3,81,-10},{7,1,126,-9},{5,3,135,-10}},{{3,3,47,-13},{-5,2,47,0},{1,4,10,-7}},{{1,3,64,-11},{5,3,135,-10},{4,3,81,-10}}},{{{5,2,61,-5},{5,2,74,-15},{0,4,18,-5}},{{5,3,135,-10},{5,3,135,-10},{-7,0,124,-0}},{{-6,0,7,-13},{-5,2,47,0},{4,3,134,-6}},{{-4,2,146,-2},{7,1,126,-9},{0,3,165,7}},{{1,4,10,-7},{-3,3,145,2},{-5,2,47,0}},{{0,3,165,7},{-4,2,146,-2},{0,3,165,7}},{{2,4,112,-6},{1,4,103,1},{4,3,134,-6}}}};
static struct S1 g_148 = {-5,1,46,-4};
static struct S1 *g_147 = &g_148;
static struct S1 g_150 = {-5,3,167,14};
static struct S1 *g_149 = &g_150;
static int16_t **g_154 = (void*)0;
static int32_t *g_157 = &g_71;
static union U4 g_252[6][5][1] = {{{{65535UL}},{{0xA82FL}},{{0x84F5L}},{{0xC6CEL}},{{0x84F5L}}},{{{0xA82FL}},{{65535UL}},{{0xEC56L}},{{65532UL}},{{0xEC56L}}},{{{65535UL}},{{0xA82FL}},{{0x84F5L}},{{0xC6CEL}},{{0x84F5L}}},{{{0xA82FL}},{{65535UL}},{{0xEC56L}},{{65532UL}},{{0xEC56L}}},{{{65535UL}},{{0xA82FL}},{{0x84F5L}},{{0xC6CEL}},{{0x84F5L}}},{{{0xA82FL}},{{65535UL}},{{0xEC56L}},{{65532UL}},{{0xEC56L}}}};
static union U4 g_255 = {0x0A2AL};
static union U4 g_257 = {1UL};
static const union U4 g_259 = {0x239AL};
static uint32_t ***g_283 = &g_135;
static uint8_t *g_290 = &g_119[3][1][0];
static uint8_t ** const g_289 = &g_290;
static uint8_t ** const *g_288 = &g_289;
static uint8_t **g_299 = &g_290;
static uint8_t ***g_298 = &g_299;
static union U3 g_307 = {{0x982BF4B3L}};
static uint32_t g_386 = 0x89D7B60CL;
static uint32_t g_412 = 1UL;
static int8_t g_417 = 0L;
static struct S0 g_420[1] = {{27,4930,0}};
static int32_t **g_436 = &g_157;
static uint64_t *g_462[1] = {(void*)0};
static uint64_t * const *g_461[1] = {&g_462[0]};
static union U4 *g_472[2][4][4] = {{{&g_252[1][4][0],&g_252[1][4][0],&g_252[1][4][0],&g_252[4][0][0]},{(void*)0,&g_252[1][4][0],&g_252[1][4][0],&g_252[3][4][0]},{(void*)0,&g_252[1][4][0],&g_252[4][0][0],&g_252[1][4][0]},{&g_252[3][4][0],&g_257,(void*)0,&g_252[1][4][0]}},{{&g_257,(void*)0,&g_252[4][0][0],&g_252[3][4][0]},{&g_252[1][4][0],&g_252[0][2][0],&g_252[0][2][0],&g_252[1][4][0]},{&g_252[1][4][0],&g_252[1][4][0],&g_252[4][0][0],&g_252[1][4][0]},{&g_257,&g_252[1][4][0],(void*)0,&g_252[1][4][0]}}};
static union U4 **g_471[6][5] = {{&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1]},{&g_472[0][3][3],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][3],&g_472[0][3][1]},{&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1]},{&g_472[0][3][3],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][3],&g_472[0][3][1]},{&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][1]},{&g_472[0][3][3],&g_472[0][3][1],&g_472[0][3][1],&g_472[0][3][3],&g_472[0][3][1]}};
static uint16_t **g_497 = (void*)0;
static uint16_t g_503 = 0x7ACCL;
static union U4 * const *g_615 = (void*)0;
static union U4 * const **g_614[7][3] = {{&g_615,&g_615,&g_615},{&g_615,&g_615,&g_615},{&g_615,&g_615,&g_615},{&g_615,&g_615,&g_615},{&g_615,&g_615,&g_615},{&g_615,&g_615,&g_615},{&g_615,&g_615,&g_615}};
static union U4 * const ***g_613 = &g_614[1][1];
static uint8_t * const *g_646 = &g_290;
static uint8_t * const **g_645 = &g_646;
static uint8_t * const ***g_644 = &g_645;
static uint8_t * const ****g_643 = &g_644;
static uint64_t g_712[6][5] = {{0x3EB834A0D9EDF4EBLL,6UL,1UL,0x2E17735ACEC5E39BLL,1UL},{0UL,0UL,6UL,0x674481B1EDF1E69CLL,1UL},{0x3EB834A0D9EDF4EBLL,1UL,0x220DA9CBC5544D5CLL,0x674481B1EDF1E69CLL,0x674481B1EDF1E69CLL},{0x674481B1EDF1E69CLL,0x9AE3AE5244E79E77LL,0x674481B1EDF1E69CLL,0x2E17735ACEC5E39BLL,18446744073709551615UL},{0x220DA9CBC5544D5CLL,1UL,0x3EB834A0D9EDF4EBLL,0xF2151AB1789A3E38LL,18446744073709551615UL},{6UL,0UL,0UL,6UL,0x674481B1EDF1E69CLL}};
static struct S0 *g_723[1][4][1] = {{{&g_420[0]},{&g_420[0]},{&g_420[0]},{&g_420[0]}}};
static uint32_t g_767[2] = {18446744073709551615UL,18446744073709551615UL};
static int8_t g_881 = 0x1DL;
static uint32_t *g_941 = &g_767[0];
static uint32_t **g_940 = &g_941;
static uint32_t ***g_939 = &g_940;
static struct S2 g_1155[1][4] = {{{1UL},{1UL},{1UL},{1UL}}};
static uint32_t g_1163 = 18446744073709551611UL;



static uint16_t  func_1(void);
static const struct S1 * func_4(int32_t ** p_5, uint64_t  p_6);
static int32_t ** func_21(struct S0  p_22, struct S1 * p_23);
static struct S1 * func_25(struct S1  p_26, int32_t * p_27, struct S2  p_28, uint32_t  p_29);
static int32_t  func_34(int64_t  p_35, uint16_t  p_36, int32_t * p_37);
static struct S2  func_52(int32_t ** const  p_53, uint64_t * p_54, struct S1 * const  p_55, uint64_t  p_56);
static int32_t ** func_57(int8_t  p_58, int16_t  p_59);
static uint32_t  func_66(int32_t ** p_67, int32_t  p_68);




static uint16_t  func_1(void)
{ 
    int32_t *l_2 = (void*)0;
    int32_t **l_3 = &l_2;
    uint32_t *l_9 = (void*)0;
    uint32_t *l_10 = (void*)0;
    uint32_t l_11[3][6] = {{0UL,0x4BA8B35EL,0UL,0xDB959C45L,0xDB959C45L,0UL},{18446744073709551606UL,18446744073709551606UL,0xDB959C45L,0x02278213L,0xDB959C45L,18446744073709551606UL},{0xDB959C45L,0x4BA8B35EL,0x02278213L,0x02278213L,0x4BA8B35EL,0xDB959C45L}};
    int16_t *l_18 = (void*)0;
    int16_t *l_19 = &g_20;
    struct S0 l_24[7][5] = {{{10,5782,1},{5,22222,0},{5,22222,0},{10,5782,1},{16,23490,0}},{{9,16100,0},{10,5782,1},{12,9785,1},{25,25909,0},{0,18548,0}},{{9,16100,0},{12,9785,1},{16,23490,0},{12,9785,1},{9,16100,0}},{{10,5782,1},{26,1621,1},{29,19608,1},{25,25909,0},{5,22222,0}},{{29,19608,1},{26,1621,1},{10,5782,1},{10,5782,1},{26,1621,1}},{{16,23490,0},{12,9785,1},{9,16100,0},{26,1621,1},{5,22222,0}},{{12,9785,1},{10,5782,1},{9,16100,0},{16,10004,1},{9,16100,0}}};
    struct S1 l_30 = {-5,3,127,-13};
    struct S2 l_31[5][1][4] = {{{{4294967295UL},{0UL},{4294967291UL},{0UL}}},{{{0UL},{0x88C83B91L},{4294967291UL},{4294967291UL}}},{{{4294967295UL},{4294967295UL},{0UL},{4294967291UL}}},{{{4294967291UL},{0x88C83B91L},{4294967291UL},{0UL}}},{{{4294967291UL},{0UL},{0UL},{4294967291UL}}}};
    uint64_t *l_38[3];
    int32_t l_40 = (-1L);
    uint16_t l_47[4] = {65535UL,65535UL,65535UL,65535UL};
    const struct S1 *l_1181[6][1][5] = {{{&g_145[1][0][1],&l_30,&g_148,&l_30,&g_148}},{{&l_30,&l_30,&g_145[1][0][1],&l_30,&l_30}},{{&g_148,&l_30,&g_148,&g_148,&l_30}},{{&l_30,&g_148,&g_148,&l_30,&g_148}},{{&l_30,&l_30,&g_145[1][0][1],&l_30,&l_30}},{{&g_148,&l_30,&g_148,&g_148,&l_30}}};
    const struct S1 **l_1180 = &l_1181[0][0][3];
    const int64_t l_1201 = 1L;
    int32_t *l_1202 = &l_40;
    int16_t l_1203 = 1L;
    uint64_t l_1204 = 0xC8E147D0E1034501LL;
    int32_t *l_1205 = &g_71;
    int32_t *l_1206 = &g_90[1];
    int32_t *l_1207 = &l_40;
    int32_t *l_1208 = &g_71;
    int32_t *l_1209 = &g_71;
    int32_t *l_1210 = &g_90[1];
    int32_t *l_1211[5][2][7] = {{{(void*)0,(void*)0,&g_71,&g_71,(void*)0,&l_40,&l_40},{&g_90[0],&l_40,&g_71,&g_90[0],&l_40,&g_90[0],&g_71}},{{&g_90[0],&g_90[0],&g_90[0],&g_71,(void*)0,(void*)0,&g_90[0]},{(void*)0,&g_71,(void*)0,&l_40,&l_40,&l_40,&l_40}},{{&l_40,&l_40,&l_40,&l_40,(void*)0,&l_40,(void*)0},{&l_40,&l_40,&g_90[1],(void*)0,&l_40,&l_40,&l_40}},{{&g_90[0],&l_40,&l_40,&g_90[0],(void*)0,&l_40,(void*)0},{&l_40,(void*)0,&g_71,(void*)0,&l_40,&l_40,&l_40}},{{&g_90[0],(void*)0,&g_90[0],(void*)0,&g_90[0],(void*)0,(void*)0},{&l_40,&g_90[0],&g_90[0],&l_40,&g_71,&g_90[0],&l_40}}};
    int16_t l_1212[2];
    int8_t l_1213 = 0xE8L;
    int32_t l_1214 = 0x87C13195L;
    uint64_t l_1215 = 18446744073709551607UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_38[i] = &g_39;
    for (i = 0; i < 2; i++)
        l_1212[i] = 0L;
    (*l_3) = l_2;
    (*l_1180) = func_4((((*l_19) = (safe_mod_func_uint32_t_u_u((--l_11[0][3]), (g_17 = (safe_rshift_func_int16_t_s_u(g_16[6], 15)))))) , func_21(l_24[6][3], func_25(l_30, (*l_3), l_31[1][0][3], (safe_add_func_int32_t_s_s(func_34(((l_40 = g_16[6]) && (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(g_16[6], g_16[6])) , l_47[1]) , 0x36C1L), 1)), g_39))), g_17, (*l_3)), g_39))))), l_47[2]);
    (*l_1205) |= ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((&l_47[1] != &l_47[3]), ((safe_mod_func_int8_t_s_s(g_412, (g_145[1][0][1].f3 & (~(safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*g_290) = ((safe_add_func_int16_t_s_s(l_30.f1, (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(((*l_1202) |= (((*g_147) , (l_1201 >= 0xBB00436F405D6216LL)) ^ g_93)), (*g_136))), l_24[6][3].f1)))) & l_1203)), g_257.f0)), 3UL)) >= g_148.f0), (**g_135))))))) < g_150.f2))), g_148.f2)) != l_1204);
    (*l_1202) &= ((g_1155[0][2] , l_1205) != (void*)0);
    l_1215++;
    return g_150.f1;
}



static const struct S1 * func_4(int32_t ** p_5, uint64_t  p_6)
{ 
    uint32_t ****l_942 = &g_939;
    int32_t *l_945[1];
    const int8_t l_967[7] = {1L,0xDDL,1L,1L,0xDDL,1L,1L};
    uint8_t *l_985 = &g_119[3][1][0];
    int8_t l_1035 = 0L;
    int32_t **l_1040[4];
    struct S1 l_1100 = {4,1,168,-9};
    struct S2 l_1156 = {0xFC07597AL};
    struct S0 l_1170 = {6,28412,0};
    struct S0 l_1171[6][5][3] = {{{{23,2666,0},{23,2666,0},{22,3020,1}},{{19,10303,0},{6,13348,0},{28,30754,1}},{{24,21134,0},{24,19625,0},{22,3020,1}},{{27,25406,1},{22,5351,1},{28,30754,1}},{{24,19625,0},{24,21134,0},{22,3020,1}}},{{{26,18454,0},{19,16940,0},{28,30754,1}},{{23,2666,0},{23,2666,0},{22,3020,1}},{{19,10303,0},{6,13348,0},{28,30754,1}},{{24,21134,0},{24,19625,0},{22,3020,1}},{{27,25406,1},{22,5351,1},{28,30754,1}}},{{{24,19625,0},{24,21134,0},{22,3020,1}},{{26,18454,0},{19,16940,0},{28,30754,1}},{{23,2666,0},{23,2666,0},{22,3020,1}},{{19,10303,0},{6,13348,0},{28,30754,1}},{{24,21134,0},{24,19625,0},{22,3020,1}}},{{{27,25406,1},{22,5351,1},{28,30754,1}},{{24,19625,0},{24,21134,0},{22,3020,1}},{{26,18454,0},{19,16940,0},{28,30754,1}},{{23,2666,0},{23,2666,0},{22,3020,1}},{{19,10303,0},{6,13348,0},{28,30754,1}}},{{{24,21134,0},{24,19625,0},{22,3020,1}},{{27,25406,1},{22,5351,1},{28,30754,1}},{{24,19625,0},{24,21134,0},{22,3020,1}},{{26,18454,0},{19,16940,0},{28,30754,1}},{{23,2666,0},{23,2666,0},{22,3020,1}}},{{{19,10303,0},{6,13348,0},{28,30754,1}},{{24,21134,0},{24,19625,0},{22,3020,1}},{{27,25406,1},{22,5351,1},{28,30754,1}},{{24,19625,0},{24,21134,0},{23,2666,0}},{{7,15222,1},{13,15034,0},{27,25406,1}}}};
    uint64_t *l_1172 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_945[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_1040[i] = &l_945[0];
lbl_1026:
    (*l_942) = g_939;
    for (g_257.f0 = 0; (g_257.f0 > 34); ++g_257.f0)
    { 
        uint32_t l_946 = 0x534B3A28L;
        uint8_t *** const * const *l_958 = (void*)0;
        int32_t ***l_964[7][1][5] = {{{&g_436,&g_436,&g_436,&g_436,&g_436}},{{&g_436,&g_436,&g_436,&g_436,&g_436}},{{&g_436,&g_436,&g_436,&g_436,&g_436}},{{&g_436,&g_436,&g_436,&g_436,&g_436}},{{&g_436,&g_436,&g_436,&g_436,&g_436}},{{&g_436,&g_436,&g_436,&g_436,&g_436}},{{&g_436,&g_436,&g_436,&g_436,&g_436}}};
        struct S0 l_973[4][1][7] = {{{{15,22915,0},{0,253,0},{31,6716,0},{22,26160,0},{0,31277,0},{30,29204,1},{7,9982,0}}},{{{0,31277,0},{7,9982,0},{5,5891,1},{5,5891,1},{7,9982,0},{0,31277,0},{15,22915,0}}},{{{1,2442,1},{5,5891,1},{31,6716,0},{15,22915,0},{21,3754,1},{0,31277,0},{0,31277,0}}},{{{22,26160,0},{21,3754,1},{31,21757,0},{21,3754,1},{22,26160,0},{30,29204,1},{1,2442,1}}}};
        uint32_t l_986 = 18446744073709551615UL;
        uint16_t l_1001 = 65532UL;
        uint32_t *l_1029 = &g_767[1];
        struct S2 * const l_1058[2] = {&g_139,&g_139};
        uint64_t **l_1083 = &g_462[0];
        const int16_t l_1166 = 0xE181L;
        struct S1 * const l_1173 = &g_145[0][5][2];
        uint8_t l_1179 = 0xFBL;
        int i, j, k;
        (*p_5) = l_945[0];
        l_946++;
        for (g_386 = 3; (g_386 <= 37); g_386 = safe_add_func_int16_t_s_s(g_386, 8))
        { 
            uint8_t *** const * const *l_957 = (void*)0;
            int32_t l_961 = 0x8A79293BL;
            int32_t l_970 = 0xC6FF34F7L;
            const struct S1 *l_972 = &g_148;
            int32_t l_998 = 2L;
            union U4 l_1009 = {0xDA9EL};
            int16_t l_1023[3][3] = {{0xEBF7L,0xEBF7L,0xEBF7L},{(-10L),(-10L),(-10L)},{0xEBF7L,0xEBF7L,0xEBF7L}};
            uint32_t *l_1028 = &g_767[0];
            int i, j;
            for (g_71 = 0; (g_71 <= 2); g_71 += 1)
            { 
                int32_t l_966 = 0L;
                struct S0 *l_974 = &g_420[0];
                for (g_503 = 0; (g_503 <= 2); g_503 += 1)
                { 
                    int16_t *l_959[5][1] = {{&g_20},{&g_87},{&g_20},{&g_87},{&g_20}};
                    int32_t l_960 = 5L;
                    int32_t ****l_965 = &l_964[1][0][1];
                    int64_t *l_968 = &g_252[1][4][0].f2;
                    int64_t *l_969 = &g_255.f2;
                    struct S2 l_971 = {0UL};
                    int i, j;
                    l_971 = (((((l_970 |= (((((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((g_712[(g_71 + 2)][(g_71 + 1)] ^ (l_960 ^= ((l_958 = l_957) == (void*)0))) == l_961), g_150.f1)) || (((*g_136)--) , 1L)), ((((*l_965) = l_964[6][0][4]) == (void*)0) == l_961))) <= p_6), l_966)) , l_966) != 1L) && l_967[4]) ^ p_6)) , p_6) != g_119[0][1][0]) != p_6) , g_307.f0);
                    return l_972;
                }
                (*l_974) = l_973[3][0][2];
            }
            if ((l_961 = (l_970 = (p_6 && (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_6, ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((g_145[1][0][1].f2 && (safe_sub_func_int8_t_s_s((p_6 < ((g_307 , (void*)0) == ((**g_288) = l_985))), l_970))), p_6)) > g_16[3]), l_986)) | l_970))), p_6)) < g_148.f0) > l_970)))))
            { 
                uint64_t l_987 = 0xAE29555A12BF282DLL;
                int32_t l_999 = 0L;
                if (l_961)
                    break;
                l_999 ^= (((**g_135) |= l_961) > (l_987 || (safe_lshift_func_int8_t_s_u((-3L), ((((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_6, (l_961 && p_6))), (l_998 && (-1L)))), 0x5981EC99L)), p_6)) , (void*)0) != (void*)0) < 0x67A5E145L)))));
                g_145[1][0][1].f3 = p_6;
            }
            else
            { 
                int64_t l_1000[4] = {0xE3DA1C2E8947F872LL,0xE3DA1C2E8947F872LL,0xE3DA1C2E8947F872LL,0xE3DA1C2E8947F872LL};
                int32_t l_1008 = 0xA04DCCF4L;
                int32_t l_1012 = 0x95CA1C72L;
                const struct S1 *l_1025 = &g_145[0][5][1];
                int i;
                if (p_6)
                    break;
                l_1001++;
                if (l_970)
                { 
                    int16_t *l_1004 = (void*)0;
                    int16_t *l_1005 = &g_87;
                    uint64_t *l_1007[1][5];
                    int32_t l_1013 = 0L;
                    int32_t l_1014[2][2][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1007[i][j] = (void*)0;
                    }
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1014[i][j][k] = 0x4DAB529FL;
                        }
                    }
                    l_1014[0][1][0] &= ((((*l_1005) = 0xD814L) | ((1L < (l_1008 = (+p_6))) | p_6)) | (l_1009 , (((safe_mul_func_int8_t_s_s(g_119[1][3][0], ((l_1012 |= (**g_646)) ^ l_1013))) , 0UL) == g_20)));
                    if (l_1014[0][1][0])
                        break;
                }
                else
                { 
                    int8_t *l_1021[1][7] = {{(void*)0,&g_881,(void*)0,(void*)0,&g_881,(void*)0,(void*)0}};
                    int32_t l_1022 = 0x12D18913L;
                    int32_t *l_1024 = &g_90[0];
                    int i, j;
                    l_998 ^= (((**g_644) == ((l_1023[1][1] = (((1UL | ((safe_lshift_func_int8_t_s_u((l_961 = ((safe_unary_minus_func_int8_t_s((((l_970 , ((2UL | (safe_lshift_func_uint8_t_u_s(1UL, (0x4B64L > (!p_6))))) >= 0x44CFL)) & (-2L)) ^ 8L))) <= l_1008)), (**g_289))) > 1L)) , l_1022) < l_970)) , (void*)0)) != l_1022);
                    (*p_5) = (l_1024 = &l_1022);
                    return l_1025;
                }
            }
            if ((l_998 = (0x66A8L <= (0x80L ^ (&g_436 == &p_5)))))
            { 
                int64_t l_1027 = 1L;
                uint8_t *l_1041 = &g_119[4][3][4];
                l_970 = g_39;
                if (l_1001)
                    goto lbl_1026;
                if ((((l_1027 = p_6) , l_1028) != (l_1029 = (*g_940))))
                { 
                    int8_t *l_1031 = &g_881;
                    l_970 |= ((+l_1027) | ((*l_1031) = 0x0AL));
                    (*l_942) = (void*)0;
                    l_961 = (safe_add_func_uint8_t_u_u(l_1027, 0x12L));
                }
                else
                { 
                    uint32_t l_1034 = 0xC8D0B469L;
                    struct S2 l_1056[2] = {{4294967295UL},{4294967295UL}};
                    struct S0 **l_1057 = &g_723[0][0][0];
                    int i;
                    if (l_1034)
                        break;
                    g_71 ^= ((((p_6 & (l_1035 <= ((l_1040[3] = func_57(l_970, (safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((0x5759L < g_16[0]), 1)), (-6L))))) != p_5))) , l_1041) != (**g_288)) ^ 1UL);
                    g_148.f3 &= (l_998 |= ((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(l_1027, (safe_mod_func_uint8_t_u_u((!((safe_lshift_func_uint16_t_u_s((((((((p_6 <= (~(*g_136))) >= (safe_mul_func_uint16_t_u_u((&g_723[0][0][0] == (l_1056[0] , l_1057)), p_6))) , &g_139) == l_1058[1]) , l_1027) , (*g_941)) , p_6), p_6)) < p_6)), 3L)))) != 0x90DEL), 10)) == p_6), 0xA4L)) >= 0xFB68L) & (***g_288)) == g_417));
                }
            }
            else
            { 
                int8_t l_1059[5] = {0xAFL,0xAFL,0xAFL,0xAFL,0xAFL};
                int i;
                l_1059[3] |= p_6;
            }
            if (l_961)
                continue;
        }
        for (p_6 = 0; (p_6 <= 1); p_6 += 1)
        { 
            struct S2 l_1060 = {4294967291UL};
            struct S0 l_1062 = {20,7577,1};
            int32_t l_1066 = 0L;
            int32_t l_1067[1][3][6];
            uint16_t *** const l_1097 = (void*)0;
            uint16_t *** const *l_1096 = &l_1097;
            int16_t *** const l_1101[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            const union U4 *l_1119[3][1];
            const union U4 **l_1118 = &l_1119[0][0];
            uint16_t l_1120 = 0x886BL;
            uint64_t *l_1154 = &g_712[3][1];
            int8_t *l_1178 = &g_881;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_1067[i][j][k] = 1L;
                }
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1119[i][j] = &g_259;
            }
            for (g_20 = 0; (g_20 <= 1); g_20 += 1)
            { 
                int32_t l_1069 = (-1L);
                int64_t l_1070 = 0xE88D0B068A20FE02LL;
                int32_t l_1071 = 0x8F3C6E41L;
                int32_t l_1072[1];
                uint32_t l_1073[5][7][2] = {{{0UL,0UL},{0xD948D06CL,0UL},{0UL,0x28D4B668L},{0x28D4B668L,0UL},{0UL,0xD948D06CL},{0UL,0UL},{0x28D4B668L,0x28D4B668L}},{{0UL,0UL},{0xD948D06CL,0UL},{0UL,0x28D4B668L},{0x28D4B668L,0UL},{0UL,0xD948D06CL},{0UL,0UL},{0x28D4B668L,0x28D4B668L}},{{0UL,0UL},{0xD948D06CL,0UL},{0UL,0x28D4B668L},{0x28D4B668L,0UL},{0UL,0xD948D06CL},{0UL,0UL},{0x28D4B668L,0x28D4B668L}},{{0UL,0UL},{0xD948D06CL,0UL},{0UL,0x28D4B668L},{0x28D4B668L,0UL},{0UL,0xD948D06CL},{0UL,0UL},{0x28D4B668L,0x28D4B668L}},{{0UL,0UL},{0xD948D06CL,0UL},{0UL,0x28D4B668L},{0x28D4B668L,0UL},{0UL,0xD948D06CL},{0UL,0UL},{0x28D4B668L,0x28D4B668L}}};
                const struct S1 *l_1076 = &g_145[0][0][2];
                union U4 l_1082 = {65529UL};
                int32_t *l_1102 = &g_16[6];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1072[i] = (-1L);
                g_90[p_6] = 0x1AE4DCA9L;
                l_1060 = g_307.f0;
                for (g_503 = 0; (g_503 <= 4); g_503 += 1)
                { 
                    struct S0 l_1061 = {29,20766,1};
                    uint16_t ** const **l_1064 = (void*)0;
                    uint16_t ** const ***l_1063 = &l_1064;
                    int8_t l_1065[5];
                    int32_t l_1068[6] = {0xBDB55883L,1L,0xBDB55883L,0xBDB55883L,1L,0xBDB55883L};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1065[i] = 0xE1L;
                    (*p_5) = (*p_5);
                    l_1062 = l_1061;
                    (*l_1063) = (void*)0;
                    ++l_1073[3][4][0];
                    return l_1076;
                }
                g_150.f3 &= (~(safe_mod_func_int64_t_s_s((((safe_add_func_uint32_t_u_u((l_1082 , ((l_973[3][0][2] , l_1083) != &g_462[0])), (safe_div_func_uint32_t_u_u((1L | (safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((*l_985) = ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_1096 != (void*)0), (*g_136))), 0xFA6BF31BL)) | g_119[2][3][2])), 0xD5L)), p_6)) ^ 1L), 4294967290UL))), (*g_136))))) || p_6) | p_6), g_90[p_6])));
                l_1071 &= (safe_mod_func_int64_t_s_s((((&g_154 == (l_1100 , l_1101[2][1])) == (((*l_1102) = ((l_1073[0][3][0] < ((g_255.f0 | (-1L)) <= (l_1062.f1 != 0x90B4179EL))) || (***g_283))) , (***g_288))) && 0xFE3FL), g_255.f0));
            }
            l_1067[0][0][2] |= (&l_1001 == (void*)0);
            for (g_39 = 0; (g_39 == 37); g_39++)
            { 
                const int32_t *l_1109 = &g_71;
                const int32_t **l_1108[6];
                const int32_t *** const l_1107 = &l_1108[1];
                const union U4 **l_1117 = (void*)0;
                int16_t l_1129 = 0x996DL;
                uint32_t l_1150 = 4294967290UL;
                int32_t l_1152 = 0xF708D0EDL;
                uint8_t * const *l_1164 = &g_290;
                struct S0 *l_1168 = &l_973[2][0][3];
                struct S0 *l_1169[6][1];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_1108[i] = &l_1109;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1169[i][j] = &g_420[0];
                }
                if ((safe_mul_func_int8_t_s_s((((void*)0 == &g_497) < l_1067[0][0][0]), ((void*)0 == l_1107))))
                { 
                    union U4 l_1110[5][3] = {{{0xD499L},{0xD499L},{0xD499L}},{{0xB69EL},{0xB69EL},{0xB69EL}},{{0xD499L},{0xD499L},{0xD499L}},{{0xB69EL},{0xB69EL},{0xB69EL}},{{0xD499L},{0xD499L},{0xD499L}}};
                    int32_t l_1130 = 0xA11F2CDEL;
                    int32_t l_1131 = 9L;
                    int i, j;
                    (*p_5) = (l_1110[0][2] , (*g_436));
                    l_1131 = ((safe_lshift_func_uint16_t_u_s(0x59EBL, 14)) < (l_1130 = ((safe_mod_func_uint32_t_u_u((l_1110[0][2].f0 >= (safe_mod_func_uint64_t_u_u(((l_1118 = l_1117) != &l_1119[1][0]), l_1120))), (safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((0x1490L & p_6), g_767[0])) , (*g_136)), 4294967295UL)) , p_6) && 0xC9L) <= p_6) <= (***l_1107)) || l_1129), (***l_1107))), 0x8810933EL)))) ^ (***g_645))));
                    if (l_1062.f2)
                        continue;
                    if (p_6)
                        continue;
                    if (p_6)
                        break;
                }
                else
                { 
                    uint8_t l_1139 = 5UL;
                    uint16_t *l_1140 = &g_503;
                    struct S1 l_1147 = {0,1,130,-3};
                    int8_t *l_1148 = (void*)0;
                    int8_t *l_1149 = (void*)0;
                    uint64_t *l_1151[1];
                    int32_t ** const l_1153 = &g_157;
                    struct S2 l_1165 = {0x7DDC9D04L};
                    int64_t *l_1167 = &g_255.f2;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1151[i] = (void*)0;
                    l_1152 &= (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(254UL, 5)) ^ (l_1067[0][0][5] = (safe_mul_func_int8_t_s_s((g_417 = (l_1150 = (((!(((*g_136) && (l_1139 | (((*l_1140)++) | g_417))) != (safe_rshift_func_uint8_t_u_u(l_1139, 2)))) >= (safe_sub_func_uint16_t_u_u(65535UL, (l_1147 , p_6)))) & g_150.f3))), 0x3BL)))), p_6));
                    g_90[0] ^= (249UL <= (((((l_1156 = g_1155[0][2]) , ((void*)0 == (*p_5))) , g_154) == g_154) | p_6));
                    l_1152 = 0L;
                    l_1147.f0 ^= (((safe_mul_func_uint8_t_u_u((((*l_1140)--) | ((((*l_1167) = (safe_add_func_uint64_t_u_u(((g_1163 || ((l_1164 != (l_1165 , (void*)0)) , ((***g_288) , ((void*)0 != &l_1129)))) && l_1060.f0), l_1166))) < p_6) && 7UL)), (***l_1107))) != g_420[0].f2) ^ p_6);
                    (*g_436) = (*g_436);
                }
                l_1171[5][0][0] = ((*g_149) , (l_1170 = ((*l_1168) = l_1062)));
                if (p_6)
                    break;
            }
            g_1155[0][2] = g_139;
        }
        if (l_1179)
            continue;
    }
    return &g_145[1][0][1];
}



static int32_t ** func_21(struct S0  p_22, struct S1 * p_23)
{ 
    int32_t *l_793 = &g_71;
    union U3 l_797 = {{0xDC9C943EL}};
    uint32_t l_803[4] = {0x428070DDL,0x428070DDL,0x428070DDL,0x428070DDL};
    uint64_t *l_812[5][6] = {{&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1]},{&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1]},{&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1]},{&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1]},{&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1],&g_712[3][1]}};
    int32_t l_813 = 0x63E652BAL;
    struct S0 l_826 = {27,20726,0};
    int32_t l_834 = 0x946ECBB2L;
    int32_t l_839 = 0x78B278B3L;
    int32_t l_841 = 0L;
    int32_t l_843 = 0xBD97C40EL;
    int32_t l_845 = 1L;
    uint64_t l_846[1];
    struct S1 ** const l_867 = &g_149;
    int32_t l_883 = 0x9BFC16D5L;
    int32_t l_884 = 0x5BF39C60L;
    int32_t l_885 = 0x2FF6EB72L;
    int32_t l_886[5] = {0x57F0E37EL,0x57F0E37EL,0x57F0E37EL,0x57F0E37EL,0x57F0E37EL};
    uint32_t ***l_898[3];
    uint32_t l_929 = 0x08AECC11L;
    int32_t **l_938 = &l_793;
    int i, j;
    for (i = 0; i < 1; i++)
        l_846[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_898[i] = &g_135;
    (*g_436) = l_793;
    if (((((!(safe_add_func_uint16_t_u_u((*l_793), (l_797 , (safe_div_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_u((((*p_23) , 0L) | (+(l_803[1] <= (safe_lshift_func_int8_t_s_u(g_87, 6))))), 14)) >= ((l_813 = ((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((***g_288)--), p_22.f0)), 0xE0159054DC46D3BCLL)) < (*l_793))) ^ 18446744073709551615UL)) <= (***g_283)) || (*l_793)), p_22.f2)))))) >= p_22.f0) || (-1L)) > (*g_157)))
    { 
        uint64_t *l_814 = (void*)0;
        struct S1 l_815[6][3] = {{{-1,1,176,-15},{-4,2,119,-2},{-1,1,176,-15}},{{-6,3,96,14},{-6,3,96,14},{-6,3,96,14}},{{-1,1,176,-15},{-4,2,119,-2},{-1,1,176,-15}},{{-6,3,96,14},{-6,3,96,14},{-6,3,96,14}},{{-1,1,176,-15},{-4,2,119,-2},{-1,1,176,-15}},{{-6,3,96,14},{-6,3,96,14},{-6,3,96,14}}};
        uint32_t l_821 = 1UL;
        struct S0 l_825 = {18,28522,1};
        int32_t l_833 = 0x6902E0A2L;
        int32_t l_835 = 1L;
        int32_t l_836[6][5] = {{1L,(-1L),1L,0xA3742EB1L,0xAD154C5DL},{(-1L),0xD4F1B475L,0xD4F1B475L,(-1L),0xD4F1B475L},{0xAD154C5DL,(-1L),(-9L),(-1L),0xAD154C5DL},{0xD4F1B475L,(-1L),0xD4F1B475L,0xD4F1B475L,(-1L)},{0xAD154C5DL,0xA3742EB1L,1L,(-1L),1L},{(-1L),(-1L),6L,(-1L),(-1L)}};
        int16_t ***l_895 = &g_154;
        int32_t **l_937 = &l_793;
        int i, j;
        for (g_417 = 0; (g_417 >= 0); g_417 -= 1)
        { 
            uint64_t l_820 = 0xDC6D370DA3E64C33LL;
            int64_t ** const l_823 = (void*)0;
            struct S0 *l_827 = &g_420[0];
            int32_t l_831 = 0x1D99BDE4L;
            int32_t l_832 = (-1L);
            int32_t l_837 = 0L;
            int32_t l_838 = 1L;
            int32_t l_840 = 0x7C76069DL;
            int32_t l_842 = 0xCF258142L;
            int32_t l_844 = (-1L);
            const struct S2 l_850[1][2] = {{{0x418DEF21L},{0x418DEF21L}}};
            union U4 * const ****l_866 = &g_613;
            int16_t *l_868 = &g_20;
            int32_t *l_869 = &l_841;
            int32_t l_882[1];
            uint32_t ***l_899 = (void*)0;
            uint64_t l_903 = 0UL;
            uint8_t l_913 = 250UL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_882[i] = 0x065CA7E5L;
            g_307.f0 = func_52(func_57(p_22.f0, p_22.f1), l_814, (l_815[3][1] , &g_145[2][4][2]), (((safe_mul_func_int16_t_s_s((p_22.f2 , (*l_793)), 0xCADEL)) & (*l_793)) < 0x129682D4L));
            for (g_87 = 0; (g_87 <= 2); g_87 += 1)
            { 
                uint32_t *l_822 = &g_767[1];
                int32_t *l_824[1][7] = {{&g_90[0],&g_90[0],&g_90[0],&g_90[0],&g_90[0],&g_90[0],&g_90[0]}};
                int i, j;
                l_813 ^= (safe_rshift_func_uint16_t_u_s(((((l_820 > l_821) & (0x12L != (4294967288UL & p_22.f0))) ^ ((*l_793) != ((**g_289) = ((((*l_822) = ((p_22.f2 ^ g_150.f1) != 0xDDL)) , (void*)0) == l_823)))) | 255UL), g_150.f1));
                for (g_20 = 0; (g_20 <= 1); g_20 += 1)
                { 
                    (*l_793) ^= 0xFA5093F8L;
                    if ((**g_436))
                        break;
                }
            }
            (*l_827) = (l_826 = l_825);
            (*l_869) &= (g_145[1][0][1].f0 ^= (((((*l_868) = (safe_div_func_int32_t_s_s((((((~(l_846[0]++)) && (!((l_850[0][0] , (*l_793)) != (safe_add_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((g_134 = l_815[3][1].f3), (safe_mod_func_uint64_t_u_u(((safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(((p_22.f1 ^ (0UL && (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_s(((void*)0 == l_866), (*l_793))))))) , 0UL), (*l_793))), p_22.f0)) > p_22.f1), 0x984D84C0387966FFLL)))), (*l_793))), g_119[3][1][0]))))) != 5L) , &p_23) != l_867), 7UL))) > p_22.f2) == (*l_793)) , (*g_157)));
            for (l_813 = 1; (l_813 >= 0); l_813 -= 1)
            { 
                uint8_t **l_875 = (void*)0;
                int32_t *l_880[3];
                int64_t l_887 = 3L;
                uint8_t l_888[2];
                int i;
                for (i = 0; i < 3; i++)
                    l_880[i] = &g_90[1];
                for (i = 0; i < 2; i++)
                    l_888[i] = 0x8AL;
                for (g_255.f2 = 0; (g_255.f2 <= 0); g_255.f2 += 1)
                { 
                    (*l_793) = (((safe_lshift_func_uint16_t_u_u(l_815[3][1].f3, 13)) <= p_22.f1) >= (((*l_868) = (~(safe_rshift_func_uint16_t_u_s((((void*)0 != l_875) > (((g_307 , (p_22.f1 >= (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(1L, g_39)), p_22.f1)))) | g_259.f0) <= g_119[0][1][2])), p_22.f0)))) , (**g_135)));
                }
                l_888[1]--;
                for (l_844 = 0; (l_844 <= 1); l_844 += 1)
                { 
                    return &g_157;
                }
            }
            for (g_257.f0 = 0; (g_257.f0 <= 0); g_257.f0 += 1)
            { 
                int16_t ***l_896 = &g_154;
                uint32_t ****l_897[6][3][4] = {{{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283}},{{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283}},{{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283}},{{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283}},{{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283}},{{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283},{&g_283,&g_283,&g_283,&g_283}}};
                uint16_t *l_904 = &g_255.f0;
                uint16_t *l_905 = &g_252[1][4][0].f0;
                int32_t *l_906 = (void*)0;
                int32_t l_909 = 9L;
                int32_t l_910 = (-2L);
                int32_t l_911 = 0x3E103075L;
                int32_t l_912 = (-3L);
                int32_t *l_917 = (void*)0;
                int32_t *l_918 = &g_71;
                int32_t *l_919 = (void*)0;
                int32_t *l_920 = &l_886[4];
                int32_t *l_921 = &g_90[0];
                int32_t *l_922 = &l_843;
                int32_t *l_923 = &l_910;
                int32_t *l_924 = &l_883;
                int32_t *l_925 = &l_836[4][1];
                int32_t *l_926 = &l_834;
                int32_t *l_927 = &l_832;
                int32_t *l_928[4][1];
                int32_t l_936 = 0L;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_928[i][j] = &l_835;
                }
            }
        }
        for (g_93 = 0; (g_93 <= 4); g_93 += 1)
        { 
            int i;
            (**g_436) &= l_886[g_93];
        }
        (*g_157) ^= 0xDBD668FDL;
    }
    else
    { 
        (*g_436) = &l_841;
    }
    return &g_157;
}



static struct S1 * func_25(struct S1  p_26, int32_t * p_27, struct S2  p_28, uint32_t  p_29)
{ 
    uint32_t ***l_282[3][1];
    uint32_t ****l_281 = &l_282[2][0];
    uint8_t ** const **l_291 = &g_288;
    uint8_t ** const **l_292 = (void*)0;
    uint8_t ** const *l_294 = &g_289;
    uint8_t ** const **l_293 = &l_294;
    uint8_t **l_296 = &g_290;
    uint8_t ***l_295[7][4][3] = {{{&l_296,(void*)0,(void*)0},{&l_296,&l_296,&l_296},{&l_296,&l_296,(void*)0},{(void*)0,&l_296,(void*)0}},{{&l_296,(void*)0,(void*)0},{&l_296,&l_296,&l_296},{&l_296,&l_296,(void*)0},{(void*)0,&l_296,(void*)0}},{{&l_296,(void*)0,(void*)0},{&l_296,&l_296,&l_296},{&l_296,&l_296,(void*)0},{(void*)0,&l_296,(void*)0}},{{&l_296,(void*)0,(void*)0},{&l_296,&l_296,&l_296},{&l_296,&l_296,(void*)0},{(void*)0,&l_296,(void*)0}},{{&l_296,(void*)0,(void*)0},{&l_296,&l_296,&l_296},{&l_296,&l_296,(void*)0},{(void*)0,&l_296,(void*)0}},{{&l_296,(void*)0,(void*)0},{&l_296,&l_296,&l_296},{&l_296,&l_296,(void*)0},{(void*)0,&l_296,(void*)0}},{{&l_296,(void*)0,(void*)0},{&l_296,&l_296,&l_296},{&l_296,&l_296,(void*)0},{(void*)0,&l_296,(void*)0}}};
    uint8_t ****l_297[4] = {&l_295[5][1][0],&l_295[5][1][0],&l_295[5][1][0],&l_295[5][1][0]};
    const int32_t l_300 = 0xFDA9C6A9L;
    int32_t l_301 = (-9L);
    uint32_t l_313 = 0UL;
    uint16_t *l_374 = &g_17;
    struct S0 l_376 = {1,17923,1};
    int32_t l_385 = 0L;
    int32_t l_389[7][2];
    int32_t l_393[1];
    int64_t * const l_402 = (void*)0;
    int64_t *l_404[5][6][7] = {{{(void*)0,&g_134,&g_134,&g_134,&g_134,(void*)0,&g_134},{&g_134,(void*)0,&g_134,&g_134,(void*)0,&g_134,&g_134},{(void*)0,&g_134,&g_134,&g_134,&g_134,&g_134,&g_134},{&g_134,(void*)0,&g_134,&g_134,&g_134,&g_134,&g_134},{&g_134,&g_134,(void*)0,&g_134,&g_134,(void*)0,&g_134},{&g_134,(void*)0,&g_134,&g_134,(void*)0,&g_134,(void*)0}},{{&g_134,&g_134,(void*)0,&g_134,&g_134,&g_134,&g_134},{&g_134,&g_134,&g_134,&g_134,&g_134,&g_134,(void*)0},{&g_134,&g_134,(void*)0,&g_134,(void*)0,(void*)0,&g_134},{(void*)0,&g_134,&g_134,&g_134,&g_134,(void*)0,(void*)0},{&g_134,&g_134,&g_134,&g_134,&g_134,(void*)0,&g_134},{(void*)0,&g_134,&g_134,&g_134,&g_134,(void*)0,&g_134}},{{&g_134,(void*)0,&g_134,&g_134,(void*)0,&g_134,&g_134},{(void*)0,&g_134,&g_134,&g_134,&g_134,&g_134,&g_134},{&g_134,(void*)0,&g_134,&g_134,&g_134,&g_134,&g_134},{&g_134,&g_134,(void*)0,&g_134,&g_134,(void*)0,&g_134},{&g_134,(void*)0,&g_134,&g_134,(void*)0,&g_134,(void*)0},{&g_134,&g_134,(void*)0,(void*)0,(void*)0,&g_134,&g_134}},{{&g_134,&g_134,(void*)0,(void*)0,(void*)0,(void*)0,&g_134},{&g_134,&g_134,(void*)0,(void*)0,(void*)0,&g_134,&g_134},{(void*)0,&g_134,&g_134,&g_134,&g_134,&g_134,(void*)0},{(void*)0,&g_134,&g_134,(void*)0,&g_134,&g_134,&g_134},{(void*)0,&g_134,&g_134,(void*)0,&g_134,&g_134,&g_134},{(void*)0,&g_134,&g_134,(void*)0,&g_134,(void*)0,&g_134}},{{(void*)0,&g_134,&g_134,&g_134,&g_134,&g_134,&g_134},{&g_134,&g_134,&g_134,&g_134,&g_134,&g_134,&g_134},{&g_134,&g_134,(void*)0,&g_134,&g_134,&g_134,&g_134},{&g_134,&g_134,(void*)0,&g_134,(void*)0,&g_134,(void*)0},{&g_134,&g_134,(void*)0,(void*)0,(void*)0,&g_134,&g_134},{&g_134,&g_134,(void*)0,(void*)0,(void*)0,(void*)0,&g_134}}};
    int64_t **l_403 = &l_404[0][1][2];
    int32_t *l_405 = &l_301;
    uint16_t l_406 = 1UL;
    const int32_t l_415 = (-7L);
    struct S1 * const l_438 = &g_145[1][6][2];
    uint32_t l_491 = 0x60BF6499L;
    union U4 **l_502 = &g_472[0][3][1];
    struct S1 *l_510 = (void*)0;
    uint64_t *l_528 = &g_39;
    uint8_t l_567 = 0x61L;
    int64_t l_602 = 0x131E03788D4E1704LL;
    uint32_t l_622[2];
    int16_t l_632 = 0L;
    int32_t l_633 = 0x832EE26EL;
    uint16_t l_634[6][6] = {{0xB683L,7UL,0x4AA1L,65528UL,65528UL,0x4AA1L},{65528UL,65528UL,0x4AA1L,7UL,0xB683L,0x4AA1L},{7UL,0xB683L,0x4AA1L,0xB683L,7UL,0x4AA1L},{0xB683L,7UL,0x4AA1L,65528UL,65528UL,0x4AA1L},{65528UL,65528UL,0x4AA1L,7UL,0xB683L,0x4AA1L},{7UL,0xB683L,0x4AA1L,0xB683L,7UL,0x4AA1L}};
    union U4 ****l_750 = (void*)0;
    union U4 ***l_752 = (void*)0;
    union U4 ****l_751 = &l_752;
    int64_t l_783 = 1L;
    int32_t l_788 = 3L;
    int32_t l_789[2][6][7] = {{{(-6L),8L,5L,0x15D63630L,(-1L),0L,0xBC183908L},{0L,0xC5A71CCBL,(-1L),5L,5L,0x65D271DDL,(-6L)},{0x4A965C46L,0x15D63630L,(-1L),(-1L),0x15D63630L,0x4A965C46L,4L},{0x12787A66L,0x95B805C2L,5L,(-1L),8L,9L,(-1L)},{5L,1L,0x2A3645B2L,0x97366A3BL,4L,0x642E1DE6L,(-6L)},{(-1L),0x95B805C2L,0x642E1DE6L,0x65D271DDL,0x12787A66L,(-1L),(-1L)}},{{0x95B805C2L,0x15D63630L,0L,(-1L),0L,0x65E469C5L,0L},{0x95B805C2L,0xC5A71CCBL,0xC5A71CCBL,0x95B805C2L,0x2A3645B2L,5L,0x97366A3BL},{(-1L),8L,0x4A965C46L,0x2A3645B2L,5L,0x4A965C46L,5L},{3L,1L,(-6L),(-1L),0x65D271DDL,0xBC183908L,(-1L)},{0x4A965C46L,0x30E74F22L,0L,1L,0L,0L,0x65D271DDL},{1L,0x642E1DE6L,0x30E74F22L,0L,5L,0L,0x30E74F22L}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_282[i][j] = &g_135;
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_389[i][j] = 0xAB20B747L;
    }
    for (i = 0; i < 1; i++)
        l_393[i] = 0L;
    for (i = 0; i < 2; i++)
        l_622[i] = 18446744073709551610UL;
    if (((*g_157) = ((((**g_289) &= ((safe_mod_func_int32_t_s_s(((((**g_135) = (((l_301 &= (safe_div_func_uint32_t_u_u((p_29 | 0L), (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((*l_281) = &g_135) == (g_283 = &g_135)), 1)), ((((safe_lshift_func_uint8_t_u_u(253UL, (safe_lshift_func_uint16_t_u_u((((((*l_293) = ((*l_291) = g_288)) == (g_298 = l_295[5][1][0])) == l_300) || 0x8FABBD06AB99F26ELL), 4)))) | 1L) & l_300) >= l_300)))))) , l_300) | l_300)) && (-1L)) >= (*g_157)), p_26.f3)) && 0x94D440E97E585A9FLL)) >= 1L) , l_300)))
    { 
        int32_t l_304 = 0xABFB8000L;
        struct S1 *l_316 = &g_150;
        int16_t * const l_333 = &g_20;
        const union U4 l_346[4][5][5] = {{{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}}},{{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}}},{{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}}},{{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}}}};
        int32_t *l_382 = &g_90[1];
        int32_t *l_383[7][3][3] = {{{&l_304,(void*)0,&l_304},{&g_71,&l_304,(void*)0},{&l_304,&g_71,&g_71}},{{&l_301,&g_71,(void*)0},{(void*)0,&l_304,&l_304},{&g_90[0],(void*)0,&g_71}},{{&g_90[0],&g_71,&l_301},{(void*)0,&l_304,&g_90[1]},{&l_301,&l_304,&g_71}},{{&l_304,&l_304,&g_71},{&g_71,&g_71,&g_71},{&l_304,(void*)0,&g_71}},{{(void*)0,&l_304,&g_71},{&g_71,&g_71,&g_71},{(void*)0,&g_71,&g_90[1]}},{{&g_71,&l_304,&l_301},{(void*)0,(void*)0,&g_71},{&l_304,(void*)0,&l_304}},{{&g_71,&l_304,(void*)0},{&l_304,&g_71,&g_71},{&l_301,&g_71,(void*)0}}};
        int32_t l_384 = (-1L);
        int i, j, k;
        if ((*g_157))
        { 
lbl_317:
            for (g_255.f2 = 0; (g_255.f2 >= 1); g_255.f2 = safe_add_func_uint16_t_u_u(g_255.f2, 8))
            { 
                if (p_26.f0)
                    break;
                if ((*g_157))
                    continue;
            }
            if ((l_313 ^= ((l_304 != 0x132CL) | ((safe_div_func_int8_t_s_s(g_93, ((g_307 , (safe_unary_minus_func_int8_t_s((g_139 , (safe_rshift_func_int8_t_s_s(((p_26.f1 , (safe_sub_func_uint64_t_u_u(l_301, p_26.f0))) > 0x838C3885L), l_304)))))) ^ l_304))) , p_26.f2))))
            { 
                int32_t **l_314 = &g_157;
                (*l_314) = p_27;
            }
            else
            { 
                struct S1 *l_315[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_315[i] = &g_145[2][2][2];
                return l_315[2];
            }
            return l_316;
        }
        else
        { 
            uint32_t l_324 = 1UL;
            int16_t *l_337 = &g_87;
            struct S1 **l_381 = (void*)0;
            for (l_313 = 0; (l_313 <= 0); l_313 += 1)
            { 
                int16_t *l_336 = (void*)0;
                uint8_t **l_361 = &g_290;
                int32_t l_378[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_378[i] = (-3L);
                if (l_313)
                    goto lbl_317;
                for (g_257.f0 = 0; (g_257.f0 <= 0); g_257.f0 += 1)
                { 
                    int32_t *l_318 = &g_90[0];
                    int32_t *l_319 = &l_304;
                    int32_t *l_320 = (void*)0;
                    int32_t *l_321 = &l_304;
                    int32_t *l_322 = (void*)0;
                    int32_t *l_323[3][3][6] = {{{&g_71,(void*)0,(void*)0,&g_71,(void*)0,(void*)0},{&g_71,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    if (g_257.f0)
                        goto lbl_317;
                    ++l_324;
                    (*l_318) = 1L;
                    (*l_318) = (safe_rshift_func_int16_t_s_u(g_17, ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((l_333 == (void*)0), (p_26.f3 , (safe_lshift_func_int8_t_s_u(0x18L, ((l_337 = l_336) == &g_20)))))), 0x2B927386L)) < g_307.f0.f0)));
                }
                for (g_257.f0 = 0; (g_257.f0 <= 2); g_257.f0 += 1)
                { 
                    uint32_t l_359 = 4294967291UL;
                    uint16_t *l_360 = &g_252[1][4][0].f0;
                    uint16_t **l_375 = &l_360;
                    int32_t *l_379 = &g_90[1];
                    int32_t **l_380 = &g_157;
                    int i, j;
                }
            }
            g_147 = &g_150;
        }
        g_386++;
    }
    else
    { 
        uint32_t l_390 = 0xF1142FC6L;
        l_390 = l_389[6][1];
        return &g_145[2][0][1];
    }
lbl_488:
    (*l_405) &= (safe_mod_func_int8_t_s_s(l_393[0], (safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s((**g_299), g_150.f1)) || p_29), (((safe_add_func_uint64_t_u_u((((l_402 != ((*l_403) = &g_134)) , (*g_157)) == 0x9C9424EEL), g_134)) < l_376.f1) || p_26.f2))), 14))));
    for (g_257.f0 = 0; (g_257.f0 <= 1); g_257.f0 += 1)
    { 
        uint32_t *l_411 = &g_412;
        int8_t *l_416[5][5] = {{&g_417,&g_417,&g_417,&g_417,&g_417},{&g_417,&g_417,&g_417,&g_417,&g_417},{&g_417,&g_417,&g_417,&g_417,&g_417},{&g_417,&g_417,&g_417,&g_417,&g_417},{&g_417,&g_417,&g_417,&g_417,&g_417}};
        struct S1 **l_418[6];
        struct S0 l_419 = {20,22647,0};
        int64_t **l_421 = (void*)0;
        int32_t l_442 = 0xA5A88354L;
        int32_t l_443 = 0L;
        int32_t l_445[2];
        int32_t l_447 = 0x5B2FE7C4L;
        struct S2 l_480 = {0x8F4E655AL};
        union U4 l_496 = {65535UL};
        uint32_t **l_509[7][6] = {{&l_411,&l_411,&l_411,&l_411,&l_411,&l_411},{&l_411,&l_411,&l_411,&l_411,&l_411,&l_411},{&l_411,&l_411,&l_411,&l_411,&l_411,&l_411},{(void*)0,&l_411,&l_411,(void*)0,&l_411,(void*)0},{(void*)0,&l_411,(void*)0,&l_411,&l_411,(void*)0},{&l_411,&l_411,&l_411,&l_411,&l_411,&l_411},{&l_411,&l_411,&l_411,&l_411,&l_411,&l_411}};
        struct S1 *l_526 = (void*)0;
        int32_t *l_535 = (void*)0;
        int32_t *l_536 = (void*)0;
        int32_t *l_537 = &l_393[0];
        int32_t *l_542 = &l_389[6][1];
        struct S0 *l_566 = &l_419;
        int i, j;
        for (i = 0; i < 6; i++)
            l_418[i] = &g_149;
        for (i = 0; i < 2; i++)
            l_445[i] = 0xFAB50AFDL;
    }
lbl_659:
    for (p_28.f0 = 0; (p_28.f0 <= 1); p_28.f0 += 1)
    { 
        int32_t l_587 = 1L;
        int32_t ***l_588 = &g_436;
        int32_t l_595 = (-6L);
        int32_t l_596 = 0L;
        int32_t l_598[2][4];
        uint32_t l_603 = 0xA58B2706L;
        uint64_t l_610[4] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
        uint32_t l_625 = 0x1923B2F4L;
        int32_t *l_628 = (void*)0;
        int32_t *l_629 = &l_393[0];
        int32_t *l_630[6] = {&l_389[6][1],&l_389[6][1],&l_389[6][1],&l_389[6][1],&l_389[6][1],&l_389[6][1]};
        int8_t l_631 = (-1L);
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_598[i][j] = 0L;
        }
        (*l_588) = func_57((!((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((!(l_587 |= (0x9ECB4C70L <= (safe_div_func_int32_t_s_s(((!(safe_rshift_func_int16_t_s_s(g_90[p_28.f0], 15))) == ((*l_438) , ((safe_sub_func_uint64_t_u_u(p_26.f1, (((((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((((*l_405) = (4UL <= 0x9B56L)) != g_90[p_28.f0]), 5)) != (**g_436)), 0xA0L)) | g_150.f1) > p_26.f1) == g_90[p_28.f0]) | 0x8C9AEC87L))) < g_148.f2))), g_90[p_28.f0]))))), g_90[p_28.f0])) & g_90[p_28.f0]), (*g_157))), p_26.f1)) | 65535UL)), p_26.f1);
        if ((**g_436))
            break;
        for (g_255.f0 = 0; (g_255.f0 <= 1); g_255.f0 += 1)
        { 
            int32_t l_591 = 0x5BF6CA24L;
            int32_t l_592 = 6L;
            int32_t l_593 = 0xB3E2C35AL;
            int32_t l_597 = 0xC12A4E06L;
            int32_t l_599 = 0x59FE69B3L;
            int32_t l_600 = 9L;
            int32_t l_601 = (-4L);
            int32_t l_607 = 0xC4BF1EA6L;
            int32_t l_609 = 0xA6DB89BAL;
            struct S2 *l_619[2][3][4] = {{{&g_139,&g_139,(void*)0,&g_139},{&g_139,&g_307.f0,(void*)0,&g_307.f0},{&g_139,&g_139,&g_139,(void*)0}},{{&g_307.f0,&g_139,&g_139,&g_307.f0},{&g_139,&g_307.f0,&g_139,&g_139},{&g_139,&g_139,&g_139,&g_139}}};
            int i, j, k;
            for (l_313 = 0; (l_313 <= 0); l_313 += 1)
            { 
                int32_t l_594[7][4];
                int32_t l_608 = 8L;
                int32_t *l_620 = &g_90[p_28.f0];
                int32_t *l_621[5][3] = {{&l_598[0][1],&g_71,(void*)0},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_598[0][1],&l_393[0]},{&l_598[0][1],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],(void*)0}};
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_594[i][j] = 0x14D2D5AAL;
                }
                if ((((*l_374) ^= l_393[l_313]) == g_87))
                { 
                    if (p_26.f1)
                        goto lbl_488;
                }
                else
                { 
                    int32_t l_589 = 1L;
                    int32_t *l_590[4][6][7] = {{{&l_301,&g_90[0],&l_385,(void*)0,(void*)0,&l_393[0],(void*)0},{&g_90[p_28.f0],&g_90[0],&g_90[0],&g_90[p_28.f0],(void*)0,&l_393[l_313],&l_587},{&g_71,&l_389[6][1],&l_393[l_313],&g_90[p_28.f0],&l_301,(void*)0,&g_71},{&l_587,&l_587,&l_389[4][1],&l_587,&l_587,&l_389[6][1],&l_393[l_313]},{&g_90[p_28.f0],&g_90[1],&l_385,&g_90[0],&l_301,&l_589,&g_71},{&l_393[l_313],&l_393[0],&l_385,&l_385,&l_393[0],&l_393[l_313],&l_389[6][1]}},{{&g_90[p_28.f0],&g_90[0],(void*)0,&g_90[p_28.f0],&g_71,(void*)0,&g_90[0]},{&g_90[0],&l_589,&l_393[l_313],(void*)0,&l_393[l_313],&l_589,&g_90[0]},{(void*)0,&g_90[0],&g_90[(l_313 + 1)],&g_90[(l_313 + 1)],&l_393[l_313],&l_393[0],&l_301},{&l_587,&l_393[0],&g_71,&l_393[l_313],&l_393[l_313],&g_71,&l_393[0]},{&g_90[0],&g_90[1],&g_90[(l_313 + 1)],(void*)0,&l_389[6][1],&g_90[(l_313 + 1)],&g_71},{&l_389[4][1],&l_393[l_313],&l_393[l_313],&l_389[4][1],&l_393[0],&l_389[4][1],&l_393[l_313]}},{{&l_393[l_313],(void*)0,(void*)0,(void*)0,&g_90[0],(void*)0,&l_393[l_313]},{&g_90[0],&l_393[l_313],&l_385,&l_393[l_313],&l_589,&l_589,&l_393[l_313]},{&l_385,(void*)0,&l_385,&g_90[(l_313 + 1)],&g_90[0],&l_589,&l_389[6][1]},{&l_393[l_313],&l_393[0],&g_90[(l_313 + 1)],(void*)0,&l_393[0],&g_90[p_28.f0],&l_393[0]},{&g_90[p_28.f0],&g_90[(l_313 + 1)],&l_301,&g_90[p_28.f0],&l_389[6][1],&l_589,&g_90[0]},{&l_589,&g_90[0],&l_393[l_313],&l_385,&l_393[l_313],&l_589,&l_589}},{{&l_393[l_313],&g_90[0],(void*)0,&g_90[0],&l_393[l_313],(void*)0,&g_90[0]},{&l_587,&l_389[6][1],&l_389[4][1],&l_393[l_313],&l_393[l_313],&l_389[4][1],&l_393[0]},{&l_301,(void*)0,&g_90[(l_313 + 1)],&l_589,&g_71,&g_90[(l_313 + 1)],&l_389[6][1]},{&l_587,&l_393[l_313],&g_90[p_28.f0],&l_587,&l_393[0],&g_71,&l_393[l_313]},{&l_393[l_313],&l_393[0],&l_301,(void*)0,&l_301,&l_393[0],&l_393[l_313]},{&l_589,&l_393[l_313],&l_385,&l_393[l_313],&g_90[0],&l_589,&l_393[l_313]}}};
                    int32_t l_606[3][4];
                    union U4 * const ****l_616 = &g_613;
                    struct S2 *l_618 = &g_307.f0;
                    struct S2 **l_617[5][5][6] = {{{&l_618,(void*)0,&l_618,&l_618,&l_618,(void*)0},{(void*)0,&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,(void*)0,&l_618,&l_618,&l_618,&l_618},{&l_618,(void*)0,(void*)0,&l_618,&l_618,&l_618},{(void*)0,&l_618,&l_618,&l_618,&l_618,&l_618}},{{&l_618,(void*)0,&l_618,(void*)0,(void*)0,&l_618},{&l_618,(void*)0,(void*)0,(void*)0,&l_618,&l_618},{&l_618,&l_618,(void*)0,(void*)0,&l_618,&l_618},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_618,&l_618,&l_618,&l_618,&l_618}},{{&l_618,(void*)0,&l_618,&l_618,&l_618,&l_618},{&l_618,(void*)0,&l_618,&l_618,&l_618,(void*)0},{(void*)0,&l_618,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_618,&l_618,&l_618,(void*)0,(void*)0},{&l_618,&l_618,&l_618,(void*)0,&l_618,&l_618}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_618,(void*)0},{(void*)0,&l_618,&l_618,&l_618,(void*)0,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,(void*)0,&l_618},{&l_618,&l_618,&l_618,(void*)0,&l_618,&l_618}},{{(void*)0,(void*)0,&l_618,&l_618,&l_618,(void*)0},{(void*)0,&l_618,(void*)0,&l_618,&l_618,&l_618},{(void*)0,&l_618,&l_618,&l_618,&l_618,(void*)0},{(void*)0,&l_618,&l_618,&l_618,(void*)0,(void*)0},{&l_618,(void*)0,(void*)0,&l_618,&l_618,(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_606[i][j] = 0L;
                    }
                    l_603++;
                    --l_610[3];
                    (*l_616) = g_613;
                    l_619[1][2][3] = &g_139;
                }
                if (l_601)
                    continue;
                if (l_607)
                    continue;
                l_622[0]--;
                l_625--;
            }
        }
        l_634[4][3]--;
    }
    for (g_39 = 0; (g_39 <= 2); g_39 += 1)
    { 
        uint8_t l_650 = 1UL;
        int32_t l_653 = 0x4EABB6E1L;
        int32_t l_654[5][5] = {{0xB128FA84L,0xB128FA84L,1L,0xCC5981E7L,0x90FBA2D5L},{(-4L),0x28F26101L,0x28F26101L,(-4L),0xB128FA84L},{(-4L),0xCC5981E7L,0x70BD7F6EL,0x70BD7F6EL,0xCC5981E7L},{0xB128FA84L,0x28F26101L,0x70BD7F6EL,1L,1L},{0x28F26101L,0xB128FA84L,0x28F26101L,0x70BD7F6EL,1L}};
        struct S0 l_694 = {11,12078,1};
        int64_t *l_734 = &g_257.f2;
        uint8_t ****l_737 = &l_295[5][1][0];
        union U4 ***l_748[1][6][7] = {{{&l_502,&g_471[4][3],(void*)0,(void*)0,&g_471[3][0],(void*)0,&g_471[2][4]},{&g_471[5][2],&l_502,&g_471[2][4],(void*)0,(void*)0,&l_502,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_471[2][4],&g_471[2][4],(void*)0},{&g_471[2][4],(void*)0,&g_471[5][2],&l_502,&l_502,&g_471[2][4],&g_471[1][2]},{(void*)0,&l_502,&g_471[2][4],&g_471[4][3],&g_471[2][4],&l_502,(void*)0},{&g_471[3][0],&g_471[4][3],&l_502,&g_471[1][2],&g_471[2][4],&l_502,(void*)0}}};
        union U4 ****l_747 = &l_748[0][3][2];
        uint16_t l_764 = 65535UL;
        int i, j, k;
        for (l_313 = 0; (l_313 <= 3); l_313 += 1)
        { 
            uint32_t l_639 = 18446744073709551611UL;
            int32_t *l_648 = &l_389[6][1];
            int32_t *l_649[5][5] = {{&l_393[0],&g_90[0],&g_90[0],&l_393[0],&l_393[0]},{&g_71,(void*)0,&g_71,(void*)0,&g_71},{&l_393[0],&l_393[0],&g_90[0],&g_90[0],&l_393[0]},{&l_389[6][1],(void*)0,&l_389[6][1],(void*)0,&l_389[6][1]},{&l_393[0],&g_90[0],&g_90[0],&l_393[0],&l_393[0]}};
            uint64_t l_655 = 0UL;
            int i, j;
            for (g_417 = 0; (g_417 <= 2); g_417 += 1)
            { 
                uint32_t l_647 = 0xC74FBCECL;
                for (g_20 = 1; (g_20 >= 0); g_20 -= 1)
                { 
                    int i, j, k;
                    l_389[g_417][g_20] = ((safe_div_func_uint64_t_u_u(g_119[(g_39 + 1)][(g_39 + 1)][(g_20 + 2)], l_639)) == g_150.f3);
                }
                for (l_602 = 1; (l_602 >= 0); l_602 -= 1)
                { 
                    uint8_t ***l_640 = &l_296;
                    uint16_t ***l_642 = &g_497;
                    uint16_t ****l_641 = &l_642;
                    int i, j, k;
                    (*l_640) = (*g_288);
                    (*l_641) = &g_497;
                    g_643 = (void*)0;
                    if (g_119[(g_417 + 1)][g_417][(g_39 + 2)])
                        break;
                    (*l_405) ^= l_647;
                }
            }
            l_650++;
            l_655++;
            for (l_567 = 0; (l_567 <= 3); l_567 += 1)
            { 
                (**g_436) |= (safe_unary_minus_func_uint8_t_u(0x05L));
            }
        }
        if (l_376.f1)
            goto lbl_659;
        for (l_491 = 0; (l_491 <= 3); l_491 += 1)
        { 
            uint32_t l_667 = 0x6F2C0D28L;
            int32_t *l_676 = &l_389[6][1];
            union U4 ***l_686 = (void*)0;
            uint64_t *l_699 = &g_39;
            for (g_503 = 0; (g_503 <= 2); g_503 += 1)
            { 
                int32_t *l_660 = &l_654[4][2];
                int32_t *l_661 = &l_653;
                int32_t *l_662 = &l_393[0];
                int32_t *l_663 = (void*)0;
                int32_t *l_664 = &l_389[3][1];
                int32_t *l_665 = &g_71;
                int32_t *l_666 = &l_389[6][1];
                const union U4 *l_674 = &g_257;
                int i, j, k;
                l_667++;
                (*l_665) = ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((l_674 != ((*l_502) = (void*)0)), g_119[g_503][(g_503 + 1)][g_503])), g_17)) != 0x897442BD44776526LL);
                (*l_666) ^= (p_28.f0 == (+(-1L)));
                (*g_436) = l_676;
                for (p_29 = 0; (p_29 <= 3); p_29 += 1)
                { 
                    struct S2 *l_677[3];
                    struct S2 l_678 = {4UL};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_677[i] = &g_307.f0;
                    l_678 = g_307.f0;
                    if ((**g_436))
                        continue;
                    if ((**g_436))
                        break;
                }
            }
        }
        for (l_385 = 0; (l_385 <= 2); l_385 += 1)
        { 
            union U4 *****l_749[7] = {&l_747,&l_747,&l_747,&l_747,&l_747,&l_747,&l_747};
            int32_t l_760 = (-4L);
            int32_t *l_761 = &l_654[1][3];
            int32_t *l_762[7] = {&g_71,&g_71,&l_760,&g_71,&g_71,&l_760,&g_71};
            int8_t l_763 = 1L;
            int32_t l_776 = 0xBEF4DD8BL;
            int8_t l_782 = (-1L);
            int i;
            (*g_157) |= ((((***l_294)--) > (-5L)) < ((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((((l_750 = l_747) != &g_614[1][1]) == ((l_751 == &l_748[0][3][2]) == (safe_lshift_func_uint16_t_u_u(((+(safe_mul_func_uint8_t_u_u((p_29 , (safe_mod_func_int16_t_s_s(l_760, p_26.f3))), 0x8FL))) , 65535UL), p_26.f3)))) <= 0xEAL), l_760)), g_255.f0)) || g_150.f1));
            l_764++;
            for (g_386 = 0; (g_386 <= 3); g_386 += 1)
            { 
                int8_t l_772 = 0x49L;
                int32_t l_775 = (-1L);
                int32_t l_777 = 1L;
                int32_t l_778 = 0xBF156F4BL;
                int32_t l_779 = 0x53E5044DL;
                int32_t l_780 = 0x5F2DF1E8L;
                int32_t l_781[2][3][3] = {{{0xE7EF91AEL,0x0C1916B5L,(-10L)},{0xF88FF19EL,0xAB623044L,0x8D4D9223L},{0xE7EF91AEL,0xE7EF91AEL,0x8D4D9223L}},{{0xAB623044L,0xF88FF19EL,(-10L)},{0x0C1916B5L,0xE7EF91AEL,0x0C1916B5L},{0x0C1916B5L,0xAB623044L,0xE7EF91AEL}}};
                uint16_t l_784 = 0xC6D4L;
                int16_t l_787 = 0L;
                uint8_t l_790 = 249UL;
                int i, j, k;
                (**g_436) = ((g_767[0] &= p_26.f1) || (+p_29));
                (*l_405) = (safe_sub_func_uint64_t_u_u((~((*g_157) & (((l_772 & 0x25L) || ((((*g_147) , ((((((p_26.f3 >= ((p_28.f0 < (safe_add_func_uint64_t_u_u((l_775 = (l_772 , l_772)), g_712[3][0]))) != g_412)) && (**g_436)) , 18446744073709551615UL) , g_150.f2) >= 0x7F791CEB7C1FA82CLL) < l_772)) == g_150.f2) != g_412)) > (*l_405)))), 1UL));
                l_784++;
                l_790--;
            }
        }
    }
    return &g_150;
}



static int32_t  func_34(int64_t  p_35, uint16_t  p_36, int32_t * p_37)
{ 
    int32_t *l_70 = &g_71;
    int32_t **l_69 = &l_70;
    int16_t *l_86[1];
    uint32_t l_88 = 0x0323AA36L;
    int32_t *l_89[5][3];
    uint8_t l_91 = 0xC4L;
    uint32_t *l_92 = &g_93;
    uint32_t l_197 = 1UL;
    uint64_t *l_199 = &g_39;
    struct S1 * const l_200 = &g_150;
    int16_t l_262 = (-1L);
    int16_t l_263 = 0x88B9L;
    int8_t l_264 = 0L;
    uint8_t l_265 = 0UL;
    int64_t l_268 = 0xF4388EDDE48FA140LL;
    int32_t l_269 = 1L;
    uint16_t l_270 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_86[i] = &g_87;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_89[i][j] = &g_90[0];
    }
    if (((*l_70) = (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((func_52(func_57(((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u(func_66(l_69, (g_71 < ((safe_lshift_func_int16_t_s_s((((g_20 = (((*l_92) &= (0x2FL && (safe_add_func_int32_t_s_s((l_91 = (((((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((g_87 &= ((safe_div_func_uint16_t_u_u(((g_20 , g_16[3]) != ((void*)0 == &p_37)), g_16[0])) > p_36)), 9)) == 0x547EF217EDEBCD59LL), l_88)), (**l_69))), (**l_69))) , (void*)0) == (void*)0) < (*l_70)) < 0x3D526046L)), 7L)))) | (*l_70))) >= g_90[0]) ^ 0UL), p_35)) , p_35))), 3UL)), p_35)), 0UL)) , p_36), l_197), l_199, l_200, p_36) , g_150.f1), 3)), 255UL))))
    { 
        return (*g_157);
    }
    else
    { 
        uint32_t l_209[1];
        uint8_t * const l_213 = &l_91;
        uint8_t * const *l_212 = &l_213;
        int32_t l_218 = 1L;
        union U4 *l_251 = &g_252[1][4][0];
        const union U4 *l_258[4] = {&g_259,&g_259,&g_259,&g_259};
        const union U4 *l_261 = &g_259;
        const union U4 **l_260 = &l_261;
        int i;
        for (i = 0; i < 1; i++)
            l_209[i] = 0x1D89197FL;
        if ((l_209[0] <= g_134))
        { 
            uint8_t * const **l_214 = (void*)0;
            uint8_t * const **l_215 = (void*)0;
            uint8_t * const **l_216[5][7][3] = {{{(void*)0,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,(void*)0,(void*)0},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{(void*)0,&l_212,(void*)0}},{{&l_212,&l_212,&l_212},{&l_212,(void*)0,(void*)0},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,&l_212,(void*)0},{&l_212,&l_212,&l_212}},{{(void*)0,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,(void*)0,(void*)0},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{(void*)0,&l_212,(void*)0}},{{&l_212,&l_212,&l_212},{&l_212,(void*)0,(void*)0},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,&l_212,(void*)0},{&l_212,&l_212,&l_212}},{{(void*)0,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,(void*)0,(void*)0},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{&l_212,&l_212,&l_212},{(void*)0,&l_212,(void*)0}}};
            int32_t l_217 = 0x4BAF5F1EL;
            int i, j, k;
            (*g_157) |= (l_218 |= ((((safe_rshift_func_uint16_t_u_u(g_16[3], 15)) != ((((l_212 = l_212) != (void*)0) != ((p_35 && (&l_86[0] == g_154)) == (0xE29CL < g_150.f3))) & l_217)) && p_35) || p_35));
        }
        else
        { 
            union U4 l_219 = {0xEB94L};
            struct S1 **l_222 = &g_149;
            struct S1 **l_223 = &g_147;
            const uint8_t *l_226 = (void*)0;
            const uint8_t **l_225 = &l_226;
            const uint8_t ***l_224 = &l_225;
            int64_t *l_227 = &g_134;
            union U4 *l_254 = &g_255;
            union U4 *l_256[5];
            int i;
            for (i = 0; i < 5; i++)
                l_256[i] = &g_257;
            if ((((*l_227) = (l_219 , ((g_16[6] >= l_219.f0) == ((((safe_mul_func_uint8_t_u_u((((*l_223) = ((*l_222) = &g_148)) != ((l_224 != (void*)0) , l_200)), (*l_70))) , p_36) != g_119[3][1][0]) != l_219.f0)))) | g_150.f2))
            { 
                int64_t l_247 = 0xA27154731B12DA38LL;
                for (g_20 = 0; (g_20 >= 0); g_20 -= 1)
                { 
                    uint8_t *l_233 = &l_91;
                    uint8_t **l_232[5][4][3] = {{{&l_233,&l_233,&l_233},{&l_233,&l_233,(void*)0},{&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233}},{{&l_233,&l_233,(void*)0},{&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233},{&l_233,&l_233,(void*)0}},{{&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233},{&l_233,&l_233,(void*)0},{&l_233,&l_233,&l_233}},{{&l_233,&l_233,&l_233},{&l_233,&l_233,(void*)0},{&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233}},{{&l_233,&l_233,&l_233},{&l_233,&l_233,(void*)0},{&l_233,(void*)0,&l_233},{&l_233,&l_233,&l_233}}};
                    uint8_t ***l_234 = &l_232[3][3][1];
                    uint16_t *l_245[2];
                    uint32_t *l_246[2][6][7] = {{{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197}},{{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197},{&l_209[0],&g_139.f0,&l_209[0],&l_197,(void*)0,(void*)0,&l_197}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_245[i] = &g_17;
                    (*g_157) = (((((safe_unary_minus_func_int8_t_s((l_209[g_20] , ((+(((--l_209[g_20]) != ((*l_224) != ((*l_234) = l_232[3][3][1]))) , (((*g_136) <= (g_139.f0 = ((safe_lshift_func_uint16_t_u_u((g_145[1][0][1].f3 >= (safe_mul_func_uint8_t_u_u(((*l_213) ^= ((((safe_mul_func_uint16_t_u_u((((((**l_223) , ((*l_227) = (((((g_17 = (safe_add_func_int32_t_s_s((((safe_sub_func_int64_t_s_s(l_219.f0, p_35)) != 1UL) || g_71), l_219.f0))) >= 5L) == p_36) | g_150.f1) ^ 1L))) != p_36) , l_219.f0) & 0xACL), g_90[0])) || l_209[0]) , p_35) >= 0x2F63L)), 0x32L))), l_209[0])) ^ 2UL))) > l_247))) & l_219.f0)))) >= l_218) == 0xCE8EL) >= l_218) >= 0x58B7L);
                }
            }
            else
            { 
                uint32_t **l_250 = &g_136;
                union U4 **l_253[3][4][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_253[i][j][k] = &l_251;
                    }
                }
                for (g_93 = 0; (g_93 > 52); g_93 = safe_add_func_int8_t_s_s(g_93, 1))
                { 
                    (*l_69) = &g_90[0];
                    (*g_157) |= ((**l_69) >= ((void*)0 != l_250));
                }
                l_256[0] = (l_254 = l_251);
            }
        }
        (*l_260) = (l_258[2] = &g_252[3][4][0]);
    }
    l_265--;
    l_270++;
    return (*g_157);
}



static struct S2  func_52(int32_t ** const  p_53, uint64_t * p_54, struct S1 * const  p_55, uint64_t  p_56)
{ 
    const union U4 l_201[7] = {{0xFF7CL},{0xFF7CL},{0xFF7CL},{0xFF7CL},{0xFF7CL},{0xFF7CL},{0xFF7CL}};
    struct S2 l_208 = {0x5B27021FL};
    int i;
    (*g_157) ^= (l_201[2] , (((((safe_lshift_func_int8_t_s_s(((l_201[2].f0 && p_56) >= (safe_rshift_func_uint8_t_u_s((l_201[2].f0 >= (0x91L | (((safe_lshift_func_int8_t_s_s((((**g_135) = 0UL) & 0xD3E2A85BL), 4)) || g_145[1][0][1].f3) != 1L))), 2))), 7)) > l_201[2].f0) < l_201[2].f0) >= g_87) < g_17));
    return l_208;
}



static int32_t ** func_57(int8_t  p_58, int16_t  p_59)
{ 
    int32_t **l_198 = &g_157;
    return l_198;
}



static uint32_t  func_66(int32_t ** p_67, int32_t  p_68)
{ 
    uint32_t *l_95 = (void*)0;
    uint32_t **l_94 = &l_95;
    uint32_t ***l_96 = &l_94;
    int32_t *l_107 = &g_71;
    int32_t **l_106 = &l_107;
    struct S0 l_110 = {3,20802,1};
    struct S2 l_117 = {0x9D1C2D9EL};
    const uint8_t l_120 = 255UL;
    uint16_t l_126[6][7] = {{0xA69EL,65535UL,7UL,65535UL,0xA69EL,7UL,0x1A1BL},{0x1A1BL,0x6A17L,0x0A6AL,0x1A1BL,0x0A6AL,0x6A17L,0x1A1BL},{0x5DDBL,0x1A1BL,0x6A17L,0x0A6AL,0x1A1BL,0x0A6AL,0x6A17L},{0x1A1BL,0x1A1BL,7UL,0xA69EL,65535UL,7UL,65535UL},{0xA69EL,0x6A17L,0x6A17L,0xA69EL,0x0A6AL,0x5DDBL,0xA69EL},{0x5DDBL,65535UL,0x0A6AL,0x0A6AL,65535UL,0x5DDBL,0x6A17L}};
    union U4 l_164 = {0x336EL};
    int16_t *l_179[4] = {&g_20,&g_20,&g_20,&g_20};
    int32_t *l_190[4] = {&g_90[1],&g_90[1],&g_90[1],&g_90[1]};
    int8_t l_191[6][1][4] = {{{0x8CL,(-3L),0x8CL,0x8CL}},{{(-3L),(-3L),0xC8L,(-3L)}},{{(-3L),0x8CL,0x8CL,(-3L)}},{{0x8CL,(-3L),0x8CL,0x8CL}},{{(-3L),(-3L),0xC8L,(-3L)}},{{(-3L),0x8CL,0x8CL,(-3L)}}};
    int32_t l_192[4];
    int32_t l_193 = 0x9A6AD73DL;
    uint8_t l_194 = 8UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_192[i] = (-7L);
    (*l_96) = l_94;
    for (p_68 = 21; (p_68 < (-30)); p_68--)
    { 
        const int8_t l_101[4] = {(-1L),(-1L),(-1L),(-1L)};
        uint8_t *l_118 = &g_119[3][1][0];
        const struct S0 l_121 = {6,15349,1};
        uint32_t ***l_132 = &l_94;
        int32_t *l_171[2][5][7] = {{{&g_71,&g_90[0],&g_90[0],&g_90[0],&g_71,&g_90[0],&g_90[0]},{&g_90[0],&g_90[1],&g_90[0],&g_90[0],&g_90[1],&g_90[0],&g_90[0]},{(void*)0,&g_90[0],(void*)0,&g_90[0],(void*)0,&g_90[0],(void*)0},{&g_90[0],&g_90[0],&g_90[0],&g_90[1],&g_90[1],&g_90[0],&g_90[0]},{&g_71,&g_90[0],&g_90[0],&g_90[0],&g_71,&g_90[0],&g_90[0]}},{{&g_90[1],&g_90[1],&g_90[0],&g_90[0],&g_90[0],&g_90[0],&g_90[0]},{(void*)0,&g_90[0],(void*)0,&g_90[0],(void*)0,&g_90[0],(void*)0},{&g_90[1],&g_90[0],&g_90[0],&g_90[1],&g_90[0],&g_90[0],&g_90[0]},{&g_71,&g_90[0],&g_90[0],&g_90[0],&g_71,&g_90[0],&g_90[0]},{&g_90[0],&g_90[1],&g_90[0],&g_90[0],&g_90[1],&g_90[0],&g_90[0]}}};
        uint8_t l_172 = 0UL;
        uint64_t *l_175 = &g_39;
        int16_t *l_178 = (void*)0;
        int16_t *l_180[5];
        uint8_t **l_187 = &l_118;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_180[i] = &g_20;
    }
    --l_194;
    return p_68;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);

    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_90[i], "g_90[i]", print_hash_value);

    }
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_119[i][j][k], "g_119[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_145[i][j][k].f0, "g_145[i][j][k].f0", print_hash_value);
                transparent_crc(g_145[i][j][k].f1, "g_145[i][j][k].f1", print_hash_value);
                transparent_crc(g_145[i][j][k].f2, "g_145[i][j][k].f2", print_hash_value);
                transparent_crc(g_145[i][j][k].f3, "g_145[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_148.f0, "g_148.f0", print_hash_value);
    transparent_crc(g_148.f1, "g_148.f1", print_hash_value);
    transparent_crc(g_148.f2, "g_148.f2", print_hash_value);
    transparent_crc(g_148.f3, "g_148.f3", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    transparent_crc(g_150.f2, "g_150.f2", print_hash_value);
    transparent_crc(g_150.f3, "g_150.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_252[i][j][k].f0, "g_252[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_307.f0.f0, "g_307.f0.f0", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_420[i].f0, "g_420[i].f0", print_hash_value);
        transparent_crc(g_420[i].f1, "g_420[i].f1", print_hash_value);
        transparent_crc(g_420[i].f2, "g_420[i].f2", print_hash_value);

    }
    transparent_crc(g_503, "g_503", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_712[i][j], "g_712[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_767[i], "g_767[i]", print_hash_value);

    }
    transparent_crc(g_881, "g_881", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1155[i][j].f0, "g_1155[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_1163, "g_1163", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
