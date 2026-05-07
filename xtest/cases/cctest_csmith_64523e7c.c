// SPDX-License-Identifier: MIT
// cctest_csmith_64523e7c.c --- cctest case csmith_64523e7c (csmith seed 1683111548)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1889bfb7 */

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

// Options:   -s 1683111548 -o /tmp/csmith_gen_vhkv4t3t/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 12;
};

union U1 {
   uint64_t  f0;
   const uint8_t  f1;
};

union U2 {
   uint8_t  f0;
   int8_t  f1;
   int8_t  f2;
   const uint16_t  f3;
};


static int32_t g_3 = 1L;
static int8_t g_35 = 1L;
static int32_t g_36 = 3L;
static int32_t g_37 = (-1L);
static uint16_t g_39 = 0xB619L;
static uint16_t g_44 = 0x8E7EL;
static uint32_t g_45 = 0x898D08F4L;
static uint8_t g_54 = 8UL;
static union U1 g_74[1][2][1] = {{{{0xC0DB1B79375E7733LL}},{{0xC0DB1B79375E7733LL}}}};
static int32_t g_78 = 0xF15FC87CL;
static uint32_t g_117 = 18446744073709551615UL;
static uint64_t g_148[4][1] = {{0xC2020794590A9178LL},{0xC2020794590A9178LL},{0xC2020794590A9178LL},{0xC2020794590A9178LL}};
static int64_t g_153 = 0x4011989475B274B4LL;
static int64_t g_155 = 3L;
static struct S0 g_179 = {62};
static uint8_t g_180 = 1UL;
static union U2 g_204[3][3][5] = {{{{255UL},{255UL},{255UL},{255UL},{255UL}},{{0x2CL},{0x2CL},{0x2CL},{0x2CL},{0x2CL}},{{255UL},{255UL},{255UL},{255UL},{255UL}}},{{{0x2CL},{0x2CL},{0x2CL},{0x2CL},{0x2CL}},{{255UL},{255UL},{255UL},{255UL},{255UL}},{{0x2CL},{0x2CL},{0x2CL},{0x2CL},{0x2CL}}},{{{255UL},{255UL},{255UL},{255UL},{255UL}},{{0x2CL},{0x2CL},{0x2CL},{0x2CL},{0x2CL}},{{255UL},{255UL},{255UL},{255UL},{255UL}}}};
static int8_t g_205 = 1L;
static int32_t g_209 = 0xA3AA068DL;



static struct S0  func_1(void);
static int32_t  func_6(uint16_t  p_7, const int32_t  p_8, union U2  p_9, uint64_t  p_10, int16_t  p_11);
static struct S0  func_12(uint32_t  p_13);
static int16_t  func_18(uint8_t  p_19, int8_t  p_20, uint16_t  p_21, uint32_t  p_22);




static struct S0  func_1(void)
{ 
    int64_t l_2[3][5] = {{0x78F3C34EEA2A3B3FLL,0L,0x78F3C34EEA2A3B3FLL,0x78F3C34EEA2A3B3FLL,0L},{0L,0x78F3C34EEA2A3B3FLL,0x78F3C34EEA2A3B3FLL,0L,0x78F3C34EEA2A3B3FLL},{0L,0L,0xC0AA39ED080C170CLL,0L,0L}};
    int32_t l_34[2];
    union U2 l_121 = {254UL};
    int64_t l_208[2][3] = {{1L,1L,1L},{(-1L),(-1L),(-1L)}};
    struct S0 l_217 = {43};
    int i, j;
    for (i = 0; i < 2; i++)
        l_34[i] = 0L;
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        int64_t l_31 = 0xAE215169FF4CAA5DLL;
        int32_t l_38 = (-3L);
        int64_t l_122 = (-5L);
        int8_t l_192 = 0L;
        int32_t l_206 = 0x27D2546FL;
        int32_t l_207[4];
        int i;
        for (i = 0; i < 4; i++)
            l_207[i] = 1L;
        l_192 = (safe_mod_func_int64_t_s_s(((func_6(((func_12((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((func_18((g_3 , (((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(g_3, (safe_mul_func_int16_t_s_s(l_31, (l_38 |= (safe_mod_func_uint64_t_u_u((g_39++), (safe_mul_func_uint8_t_u_u((g_45 &= (g_44 ^= l_2[2][0])), 0x96L))))))))) == l_34[0]), l_34[0])), l_31)) || g_35) && g_39)), g_3, g_36, g_37) && g_45) ^ g_74[0][0][0].f0), g_36)), 2))) , g_37) & g_74[0][0][0].f1), l_31, l_121, l_122, g_3) & 8UL) >= l_121.f0), g_74[0][0][0].f1));
        l_206 = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((g_44 != 1L), (+((((0x35L ^ ((safe_rshift_func_int16_t_s_u((g_204[1][2][4] , 0L), 5)) != 18446744073709551615UL)) , g_54) , l_121.f2) > g_205)))), g_74[0][0][0].f0)), 2));
        if (g_36)
            continue;
        for (g_117 = 0; (g_117 <= 2); g_117 += 1)
        { 
            uint64_t l_210[4] = {0UL,0UL,0UL,0UL};
            int32_t l_213 = 0x77F11762L;
            int i, j;
            --l_210[1];
            l_34[0] = ((++g_180) , l_2[g_117][(g_3 + 1)]);
        }
    }
    for (g_205 = 0; (g_205 <= 0); g_205 += 1)
    { 
        int64_t l_216[2];
        int i;
        for (i = 0; i < 2; i++)
            l_216[i] = 0xB990F7100B6ED011LL;
        l_216[0] = g_153;
        return g_179;
    }
    return l_217;
}



static int32_t  func_6(uint16_t  p_7, const int32_t  p_8, union U2  p_9, uint64_t  p_10, int16_t  p_11)
{ 
    uint32_t l_129 = 0x5AB84A4DL;
    int32_t l_134 = (-1L);
    int16_t l_161 = 2L;
    struct S0 l_178[1][5] = {{{19},{19},{19},{19},{19}}};
    int i, j;
    for (g_54 = 0; (g_54 != 35); g_54 = safe_add_func_int16_t_s_s(g_54, 7))
    { 
        uint32_t l_145[3][3][3] = {{{4294967292UL,0x684B0DFAL,4294967295UL},{0x407F4633L,0x407F4633L,0x91146291L},{0x45913EF9L,0x684B0DFAL,0x684B0DFAL}},{{0x91146291L,0x08FD8E19L,4294967292UL},{0x45913EF9L,0x17F063A1L,0x45913EF9L},{0x407F4633L,0x91146291L,4294967292UL}},{{4294967292UL,4294967292UL,0x684B0DFAL},{4294967290UL,0x91146291L,0x91146291L},{0x684B0DFAL,0x17F063A1L,4294967295UL}}};
        int32_t l_154 = 0L;
        int i, j, k;
        for (g_78 = (-9); (g_78 < 4); g_78++)
        { 
            int16_t l_130 = 0x0C84L;
            int32_t l_133 = 0x5F70B01AL;
            if ((safe_add_func_uint8_t_u_u(((l_130 = l_129) | (-8L)), (g_74[0][0][0].f0 ^ (safe_mul_func_uint8_t_u_u(l_133, 0xC4L))))))
            { 
                uint32_t l_135 = 0xBF6D4BD0L;
                l_135--;
            }
            else
            { 
                return p_9.f2;
            }
        }
        if (((((((safe_lshift_func_int8_t_s_s((l_134 |= (safe_lshift_func_int16_t_s_s((0x7BC6L == ((safe_lshift_func_int16_t_s_u(p_9.f0, (safe_unary_minus_func_uint8_t_u(g_74[0][0][0].f1)))) > l_129)), 8))), 4)) | p_9.f1) == l_145[2][1][0]) , l_134) | p_8) != 4294967287UL))
        { 
            int16_t l_151 = 0xD030L;
            int32_t l_152[1][4][5] = {{{1L,1L,1L,1L,1L},{0xBFF4CCE4L,0xE88B3BFFL,0xBFF4CCE4L,0xE88B3BFFL,0xBFF4CCE4L},{1L,1L,1L,1L,1L},{0xBFF4CCE4L,0xE88B3BFFL,0xBFF4CCE4L,0xE88B3BFFL,0xBFF4CCE4L}}};
            int i, j, k;
            for (l_134 = 0; (l_134 != 18); l_134 = safe_add_func_uint16_t_u_u(l_134, 6))
            { 
                uint32_t l_156 = 1UL;
                --g_148[0][0];
                l_156--;
            }
            if (((safe_lshift_func_uint8_t_u_u((((0L | (l_161 & g_36)) < ((g_45 = g_74[0][0][0].f0) >= p_9.f0)) < g_39), g_117)) == 18446744073709551610UL))
            { 
                uint16_t l_162 = 65535UL;
                l_154 = p_8;
                return l_162;
            }
            else
            { 
                uint32_t l_163[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_163[i] = 0UL;
                --l_163[1];
            }
            for (g_45 = 5; (g_45 > 18); g_45 = safe_add_func_int8_t_s_s(g_45, 1))
            { 
                l_134 ^= p_8;
                l_154 = ((safe_sub_func_int64_t_s_s((p_7 < (safe_mul_func_int8_t_s_s(g_44, (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0xE53FL, ((((safe_div_func_uint32_t_u_u((g_148[0][0] | 0UL), l_129)) > p_9.f2) && l_152[0][3][2]) , l_161))), 0xA4L))))), l_154)) == 0x77L);
                g_179 = l_178[0][2];
            }
        }
        else
        { 
            uint8_t l_189 = 255UL;
            ++g_180;
            g_179.f0 = (safe_div_func_int16_t_s_s(0xEFF2L, (safe_sub_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u((((--l_189) ^ g_74[0][0][0].f1) ^ 1UL), (((func_12((l_161 < g_3)) , g_78) ^ g_180) && g_153))) >= g_74[0][0][0].f1) == g_74[0][0][0].f1), (-5L)))));
            if (p_8)
                break;
        }
    }
    return p_10;
}



static struct S0  func_12(uint32_t  p_13)
{ 
    int32_t l_116 = 0xB7B5DC45L;
    int32_t l_118 = 0xB035E89BL;
    int32_t l_119[1];
    struct S0 l_120 = {18};
    int i;
    for (i = 0; i < 1; i++)
        l_119[i] = 0x6D39625AL;
    l_119[0] = ((g_3 , (g_44 |= ((~(safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((((l_118 = ((safe_add_func_int64_t_s_s(p_13, ((safe_div_func_uint32_t_u_u((g_45 = (!((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s((g_117 = (((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((p_13 > ((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_u(((p_13 || l_116) | 2UL), g_39)))) > p_13)), 11)), g_36)), p_13)), g_3)) & l_116) && g_39)), 0x18499145L)), 0x9042C8AC77275A21LL)) ^ g_37) , 9UL), l_116)) ^ p_13) || p_13), g_35)) == 0L) , 0x77E1F98DL), 5L)), 7)) ^ 0UL))), p_13)) ^ 0xC4L))) & l_116)) | l_116) ^ 0x8EL), 5)) <= g_74[0][0][0].f1), g_54))) | l_116))) ^ p_13);
    return l_120;
}



static int16_t  func_18(uint8_t  p_19, int8_t  p_20, uint16_t  p_21, uint32_t  p_22)
{ 
    uint64_t l_57 = 0x4E4A53E8AF80453DLL;
    int32_t l_58 = (-4L);
    uint64_t l_59[3][3][2] = {{{0x2A7181CA8FD5F396LL,0x86D6A6C34309E953LL},{0x2A7181CA8FD5F396LL,0x2A7181CA8FD5F396LL},{0x86D6A6C34309E953LL,0x2A7181CA8FD5F396LL}},{{0x2A7181CA8FD5F396LL,0x86D6A6C34309E953LL},{0x2A7181CA8FD5F396LL,0x2A7181CA8FD5F396LL},{0x86D6A6C34309E953LL,0x2A7181CA8FD5F396LL}},{{0x2A7181CA8FD5F396LL,0x86D6A6C34309E953LL},{0x2A7181CA8FD5F396LL,0x2A7181CA8FD5F396LL},{0x86D6A6C34309E953LL,0x2A7181CA8FD5F396LL}}};
    int32_t l_76[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_76[i] = 0xFD024CA9L;
    l_58 = (p_21 | (safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((p_21 || (safe_add_func_uint64_t_u_u((((g_54 = p_19) && ((safe_mul_func_uint16_t_u_u(((l_57 = (g_3 && 0x61L)) & p_21), (-10L))) != 0xA3A1L)) >= 0xB817L), 0L))), g_35)) > 0xE333L) ^ 0xFBL), g_36)));
    for (p_22 = 0; (p_22 <= 1); p_22 += 1)
    { 
        uint32_t l_75[5] = {0x695BD660L,0x695BD660L,0x695BD660L,0x695BD660L,0x695BD660L};
        int32_t l_77 = 0xFB330CFEL;
        int i;
        g_78 = (safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(g_39, (safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(g_36, 7)), ((((l_75[1] = (safe_mul_func_uint8_t_u_u(((0x8C99L != (safe_sub_func_int64_t_s_s((g_74[0][0][0] , 1L), 1UL))) || 5UL), l_58))) ^ l_76[0]) , p_19) , l_76[0]))) == p_19), l_77)))), 18446744073709551609UL));
        for (g_37 = 0; (g_37 <= 1); g_37 += 1)
        { 
            return g_37;
        }
    }
    l_76[0] |= ((-1L) & (safe_sub_func_int8_t_s_s(p_22, (p_20 | (safe_mod_func_uint8_t_u_u((0x7B846FCCBB28B9DDLL & p_20), l_59[1][2][0]))))));
    return p_21;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_74[i][j][k].f0, "g_74[i][j][k].f0", print_hash_value);
                transparent_crc(g_74[i][j][k].f1, "g_74[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_148[i][j], "g_148[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_204[i][j][k].f0, "g_204[i][j][k].f0", print_hash_value);
                transparent_crc(g_204[i][j][k].f1, "g_204[i][j][k].f1", print_hash_value);
                transparent_crc(g_204[i][j][k].f2, "g_204[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
