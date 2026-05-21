// SPDX-License-Identifier: MIT
// cctest_csmith_995b86f4.c --- cctest case csmith_995b86f4 (csmith seed 2572912372)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x70531b1b */

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

// Options:   -s 2572912372 -o /tmp/csmith_gen_bj70acna/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   uint8_t  f2;
};

union U1 {
   const struct S0  f0;
   uint8_t  f1;
};

union U2 {
   uint32_t  f0;
   int32_t  f1;
};


static int8_t g_2 = 0x53L;
static struct S0 g_16 = {0x108531D14CD49598LL,0xAFL,0xA9L};
static struct S0 g_49[6][3][4] = {{{{18446744073709551612UL,0UL,0xADL},{0UL,0xD2L,0x0CL},{0UL,0xD2L,0x0CL},{18446744073709551612UL,0UL,0xADL}},{{0UL,0xD2L,0x0CL},{18446744073709551612UL,0UL,0xADL},{0x8BA7967268F57F54LL,0xB1L,0x07L},{0x6377F0A061FA46B4LL,0x01L,1UL}},{{0UL,0xD2L,0x0CL},{0x8BA7967268F57F54LL,0xB1L,0x07L},{0UL,0xD2L,0x0CL},{0UL,0UL,255UL}}},{{{18446744073709551612UL,0UL,0xADL},{0x6377F0A061FA46B4LL,0x01L,1UL},{0UL,0UL,255UL},{0UL,0UL,255UL}},{{0x8BA7967268F57F54LL,0xB1L,0x07L},{0x8BA7967268F57F54LL,0xB1L,0x07L},{0UL,0x79L,0x56L},{0x6377F0A061FA46B4LL,0x01L,1UL}},{{0x6377F0A061FA46B4LL,0x01L,1UL},{18446744073709551612UL,0UL,0xADL},{0UL,0x79L,0x56L},{18446744073709551612UL,0UL,0xADL}}},{{{0x8BA7967268F57F54LL,0xB1L,0x07L},{0UL,0xD2L,0x0CL},{0UL,0UL,255UL},{0UL,0x79L,0x56L}},{{18446744073709551612UL,0UL,0xADL},{0UL,0xD2L,0x0CL},{0UL,0xD2L,0x0CL},{18446744073709551612UL,0UL,0xADL}},{{0UL,0xD2L,0x0CL},{18446744073709551612UL,0UL,0xADL},{0x8BA7967268F57F54LL,0xB1L,0x07L},{0x6377F0A061FA46B4LL,0x01L,1UL}}},{{{0UL,0xD2L,0x0CL},{0x8BA7967268F57F54LL,0xB1L,0x07L},{0UL,0xD2L,0x0CL},{0UL,0UL,255UL}},{{18446744073709551612UL,0UL,0xADL},{0x6377F0A061FA46B4LL,0x01L,1UL},{0UL,0UL,255UL},{0UL,0UL,255UL}},{{0x8BA7967268F57F54LL,0xB1L,0x07L},{0x8BA7967268F57F54LL,0xB1L,0x07L},{0x8BA7967268F57F54LL,0xB1L,0x07L},{0UL,0UL,255UL}}},{{{0UL,0UL,255UL},{0UL,0xD2L,0x0CL},{0x8BA7967268F57F54LL,0xB1L,0x07L},{0UL,0xD2L,0x0CL}},{{18446744073709551615UL,0xA6L,1UL},{0x6377F0A061FA46B4LL,0x01L,1UL},{0UL,0x79L,0x56L},{0x8BA7967268F57F54LL,0xB1L,0x07L}},{{0UL,0xD2L,0x0CL},{0x6377F0A061FA46B4LL,0x01L,1UL},{0x6377F0A061FA46B4LL,0x01L,1UL},{0UL,0xD2L,0x0CL}}},{{{0x6377F0A061FA46B4LL,0x01L,1UL},{0UL,0xD2L,0x0CL},{18446744073709551615UL,0xA6L,1UL},{0UL,0UL,255UL}},{{0x6377F0A061FA46B4LL,0x01L,1UL},{18446744073709551615UL,0xA6L,1UL},{0x6377F0A061FA46B4LL,0x01L,1UL},{0UL,0x79L,0x56L}},{{0UL,0xD2L,0x0CL},{0UL,0UL,255UL},{0UL,0x79L,0x56L},{0UL,0x79L,0x56L}}}};
static int32_t g_54 = (-1L);
static uint32_t g_60 = 0xEA361F88L;
static struct S0 *g_64 = &g_16;
static struct S0 **g_63[4] = {&g_64,&g_64,&g_64,&g_64};
static uint32_t g_69 = 0x38CF8356L;
static union U1 g_73 = {{0x5DAE8CE1F6DC3DB8LL,9UL,1UL}};
static union U1 *g_72 = &g_73;
static uint16_t g_82[7][6][2] = {{{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL}},{{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL}},{{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL}},{{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL}},{{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL}},{{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL}},{{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL},{1UL,0x4C71L},{1UL,1UL}}};
static uint64_t g_94 = 0UL;
static int8_t g_97 = 0x16L;
static int32_t g_98 = 0xED2767F9L;
static uint16_t g_100 = 5UL;
static union U2 g_107 = {0xD5E08CE2L};
static union U2 *g_106 = &g_107;
static union U2 **g_114 = (void*)0;
static int8_t g_133[1] = {0xF7L};
static uint32_t g_134 = 0x8AF5EEACL;
static int64_t g_180 = 1L;
static int32_t *g_201 = &g_54;
static uint16_t g_245 = 65535UL;
static int16_t g_250 = (-1L);
static int32_t **g_272[6][5] = {{(void*)0,&g_201,&g_201,(void*)0,&g_201},{&g_201,(void*)0,&g_201,&g_201,(void*)0},{&g_201,&g_201,(void*)0,(void*)0,(void*)0},{&g_201,&g_201,&g_201,&g_201,(void*)0},{&g_201,(void*)0,(void*)0,(void*)0,&g_201},{&g_201,&g_201,&g_201,(void*)0,&g_201}};
static int64_t g_310 = 0x07B4E46D7EC74853LL;
static int64_t *g_332 = &g_180;
static uint32_t g_394[1] = {18446744073709551610UL};
static uint32_t g_576 = 0x795F501CL;
static int32_t g_598 = 0xDF701A50L;
static const int32_t **g_616 = (void*)0;
static const int32_t ***g_615[6][6] = {{&g_616,&g_616,&g_616,&g_616,&g_616,(void*)0},{&g_616,&g_616,&g_616,&g_616,(void*)0,(void*)0},{&g_616,&g_616,&g_616,&g_616,&g_616,&g_616},{&g_616,&g_616,(void*)0,&g_616,(void*)0,&g_616},{&g_616,(void*)0,(void*)0,&g_616,&g_616,&g_616},{&g_616,(void*)0,(void*)0,&g_616,(void*)0,&g_616}};
static const int32_t ****g_614 = &g_615[1][0];
static const int16_t g_656 = (-1L);
static uint64_t g_668 = 3UL;
static const union U1 *g_833[7][5] = {{&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,&g_73,(void*)0,&g_73},{&g_73,(void*)0,&g_73,(void*)0,&g_73},{&g_73,(void*)0,&g_73,(void*)0,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,&g_73,(void*)0,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73}};
static const union U1 **g_832 = &g_833[2][3];
static const union U1 ***g_831 = &g_832;
static union U1 * const * const g_835 = &g_72;
static union U1 * const * const *g_834[1][3][6] = {{{&g_835,&g_835,&g_835,&g_835,&g_835,&g_835},{&g_835,&g_835,&g_835,&g_835,&g_835,&g_835},{&g_835,&g_835,&g_835,&g_835,&g_835,&g_835}}};
static union U1 **g_856 = (void*)0;
static union U1 ***g_855 = &g_856;
static union U1 g_930 = {{0xA1EC340D30612F76LL,1UL,0xDCL}};
static uint32_t **g_950 = (void*)0;
static int64_t g_956 = 9L;
static union U1 ***g_1026 = &g_856;
static uint16_t ***g_1079 = (void*)0;
static const struct S0 *g_1102 = (void*)0;
static const struct S0 **g_1101 = &g_1102;
static uint32_t *g_1119 = &g_60;
static int16_t g_1141 = 8L;
static union U2 **g_1146 = &g_106;
static union U1 g_1151 = {{18446744073709551608UL,0xC6L,1UL}};
static int32_t g_1174 = 0x7DDE525DL;
static uint32_t g_1175 = 0UL;
static struct S0 ** const *g_1281 = &g_63[1];
static struct S0 ** const **g_1280 = &g_1281;
static uint16_t g_1333[2][1] = {{0UL},{0UL}};
static const int32_t g_1352 = 0x0E60F7F6L;
static const uint16_t g_1403[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
static const uint16_t *g_1402 = &g_1403[4];
static const uint16_t **g_1401[1][6][3] = {{{&g_1402,&g_1402,&g_1402},{(void*)0,(void*)0,&g_1402},{&g_1402,&g_1402,&g_1402},{(void*)0,(void*)0,&g_1402},{&g_1402,&g_1402,&g_1402},{(void*)0,(void*)0,&g_1402}}};
static int16_t g_1451 = 2L;
static int8_t *g_1487 = &g_133[0];
static int8_t **g_1486 = &g_1487;
static union U1 * const * const **g_1511 = &g_834[0][2][1];
static union U1 * const * const ***g_1510[3] = {&g_1511,&g_1511,&g_1511};
static struct S0 ***g_1614 = &g_63[3];
static struct S0 ****g_1613 = &g_1614;
static const int32_t g_1766 = 0x9B804F2EL;
static uint64_t g_1769 = 1UL;
static uint64_t g_1814 = 0xA9E8CFF145AEDAF4LL;
static union U1 g_1824[1] = {{{0x87CCAC76010A3870LL,247UL,0xAFL}}};
static int32_t g_1853 = 0x0FCAAEEFL;
static int32_t g_1904[6][5][3] = {{{(-4L),(-5L),0x43571679L},{(-1L),0x8CFEF325L,8L},{0x5590571AL,0x63120108L,0x5590571AL},{1L,(-6L),(-1L)},{(-4L),0x63120108L,(-1L)}},{{0x8CFEF325L,0x8CFEF325L,0x9340258FL},{0xE2260575L,(-5L),0x5590571AL},{0x8CFEF325L,8L,(-6L)},{(-4L),(-3L),0x43571679L},{1L,0x8CFEF325L,(-6L)}},{{0x5590571AL,1L,0x5590571AL},{(-1L),(-6L),0x9340258FL},{(-4L),1L,(-1L)},{0L,0x8CFEF325L,(-1L)},{0xE2260575L,(-3L),0x5590571AL}},{{0L,8L,8L},{(-4L),(-5L),0x43571679L},{(-1L),0x8CFEF325L,8L},{0x5590571AL,0x63120108L,0x5590571AL},{1L,(-6L),(-1L)}},{{(-4L),0x63120108L,(-1L)},{0x8CFEF325L,0x8CFEF325L,0x9340258FL},{0xE2260575L,(-5L),0x5590571AL},{0x8CFEF325L,8L,(-6L)},{(-4L),(-3L),0x43571679L}},{{1L,0x8CFEF325L,(-6L)},{0x5590571AL,1L,0x5590571AL},{(-1L),(-6L),0x9340258FL},{(-4L),1L,(-1L)},{0L,0x8CFEF325L,(-1L)}}};
static uint64_t *g_2061 = (void*)0;
static uint64_t **g_2060 = &g_2061;
static uint32_t * const *g_2080[7] = {(void*)0,&g_1119,&g_1119,(void*)0,&g_1119,&g_1119,(void*)0};
static uint32_t * const **g_2079 = &g_2080[3];
static const uint32_t *g_2083 = (void*)0;
static const uint32_t **g_2082 = &g_2083;
static const uint32_t ***g_2081 = &g_2082;
static uint32_t g_2090 = 6UL;
static uint32_t **g_2256 = (void*)0;
static uint32_t ***g_2255 = &g_2256;
static uint32_t ****g_2254 = &g_2255;
static uint32_t ***** const g_2253 = &g_2254;
static int16_t g_2274 = (-1L);
static int32_t *g_2320[7][1][5] = {{{&g_1904[4][0][0],&g_1904[4][0][0],&g_1904[0][3][1],&g_1904[4][0][0],&g_1904[4][0][0]}},{{&g_1904[4][0][0],&g_1904[5][3][0],&g_1904[0][3][1],&g_1904[4][0][0],(void*)0}},{{&g_1904[5][1][0],&g_1904[0][3][1],&g_1904[4][0][0],&g_1904[0][3][1],&g_1904[5][1][0]}},{{&g_1904[4][0][0],&g_1904[5][3][0],&g_1904[4][0][0],&g_1904[5][1][0],&g_1904[0][3][1]}},{{&g_1904[5][3][0],&g_1904[0][3][1],&g_1904[4][0][0],(void*)0,(void*)0}},{{&g_1904[1][4][2],&g_1904[4][0][0],&g_1904[1][4][2],&g_1904[4][0][0],&g_1904[0][3][1]}},{{&g_1904[5][1][0],(void*)0,&g_1904[0][3][1],&g_1904[4][0][0],&g_1904[1][4][2]}}};
static uint64_t ****g_2378[1] = {(void*)0};
static uint64_t *****g_2377 = &g_2378[0];
static union U2 g_2432[1][2][5] = {{{{4UL},{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL},{4UL}}}};
static int8_t g_2442 = 0x02L;
static uint8_t g_2477[7] = {0x70L,0x70L,0UL,0x70L,0x70L,0UL,0x70L};
static union U1 g_2598 = {{0x51653EB9E2F45EC2LL,2UL,0xFEL}};
static uint8_t g_2617[6] = {1UL,0xD1L,0xD1L,1UL,0xD1L,0xD1L};
static uint32_t g_2684 = 0x2137EBB4L;
static union U1 g_2690 = {{0UL,6UL,2UL}};
static int8_t g_2691 = 0x17L;
static int8_t g_2701[5] = {7L,7L,7L,7L,7L};
static int64_t g_2850 = 4L;
static const union U2 g_2904 = {0x6212ABFEL};
static const union U2 *g_2903[1][5] = {{&g_2904,&g_2904,&g_2904,&g_2904,&g_2904}};
static int64_t g_3010 = 0x2AEB9F8CD926CCB3LL;
static int32_t g_3022 = 0x0F3FC517L;
static uint8_t g_3082 = 0x62L;
static int32_t *g_3133 = &g_1853;
static uint32_t *g_3265 = &g_1175;
static uint32_t ** const g_3264 = &g_3265;
static union U1 g_3283 = {{0xE47673BC920B55D6LL,0x07L,0x83L}};
static union U2 *g_3342 = &g_2432[0][0][0];
static uint64_t g_3382[4][4] = {{18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0UL},{0xD641AE6BD67510ACLL,1UL,0UL,0UL},{18446744073709551613UL,18446744073709551613UL,0x65237794C4440CF2LL,1UL},{1UL,0xD641AE6BD67510ACLL,0x65237794C4440CF2LL,0xD641AE6BD67510ACLL}};
static struct S0 * const *g_3394 = (void*)0;
static struct S0 * const **g_3393 = &g_3394;
static int32_t **g_3418 = &g_2320[2][0][4];
static uint8_t g_3435[6] = {0xFCL,0xFCL,0xFCL,0xFCL,0xFCL,0xFCL};
static int16_t g_3444[7] = {0L,0L,0L,0L,0L,0L,0L};
static uint16_t g_3454 = 65535UL;
static int32_t g_3467 = 0L;
static int32_t g_3469[5] = {1L,1L,1L,1L,1L};
static int16_t g_3580[1] = {0xFA14L};
static uint32_t g_3665[1] = {0xE33152EAL};
static int32_t * const g_3686 = &g_3467;
static uint16_t *****g_3708 = (void*)0;
static int16_t g_3719 = 0x104AL;



static struct S0  func_1(void);
static union U1  func_3(int32_t  p_4, const uint16_t  p_5);
static int16_t  func_10(struct S0  p_11, int64_t  p_12, union U1  p_13, uint64_t  p_14, uint8_t  p_15);
static union U1  func_18(uint8_t  p_19, int16_t  p_20, struct S0  p_21, int64_t  p_22, uint64_t  p_23);
static uint16_t  func_30(int32_t  p_31, int32_t  p_32, uint32_t  p_33);
static uint64_t  func_34(struct S0  p_35, struct S0  p_36, union U1  p_37, int32_t  p_38, int32_t  p_39);
static struct S0  func_40(struct S0  p_41, int8_t  p_42, int32_t  p_43);
static struct S0  func_44(int64_t  p_45, int32_t  p_46);




static struct S0  func_1(void)
{ 
    int16_t l_17 = (-1L);
    struct S0 *l_50 = &g_49[0][2][1];
    struct S0 l_1128 = {4UL,0x71L,0UL};
    union U1 l_1129 = {{18446744073709551615UL,0x9CL,255UL}};
    int32_t *l_1173 = &g_1174;
    uint8_t *l_2280 = &g_49[4][1][3].f2;
    uint64_t *****l_3337[5][4][4] = {{{(void*)0,&g_2378[0],&g_2378[0],&g_2378[0]},{&g_2378[0],&g_2378[0],&g_2378[0],&g_2378[0]},{&g_2378[0],&g_2378[0],&g_2378[0],&g_2378[0]},{&g_2378[0],&g_2378[0],&g_2378[0],&g_2378[0]}},{{(void*)0,&g_2378[0],(void*)0,&g_2378[0]},{&g_2378[0],&g_2378[0],&g_2378[0],(void*)0},{&g_2378[0],&g_2378[0],(void*)0,&g_2378[0]},{&g_2378[0],(void*)0,&g_2378[0],&g_2378[0]}},{{&g_2378[0],(void*)0,&g_2378[0],&g_2378[0]},{&g_2378[0],(void*)0,(void*)0,&g_2378[0]},{&g_2378[0],&g_2378[0],&g_2378[0],&g_2378[0]},{&g_2378[0],&g_2378[0],(void*)0,&g_2378[0]}},{{(void*)0,(void*)0,&g_2378[0],(void*)0},{&g_2378[0],&g_2378[0],&g_2378[0],&g_2378[0]},{&g_2378[0],&g_2378[0],&g_2378[0],&g_2378[0]},{&g_2378[0],(void*)0,&g_2378[0],&g_2378[0]}},{{(void*)0,&g_2378[0],(void*)0,&g_2378[0]},{&g_2378[0],&g_2378[0],&g_2378[0],&g_2378[0]},{&g_2378[0],(void*)0,&g_2378[0],&g_2378[0]},{(void*)0,&g_2378[0],&g_2378[0],&g_2378[0]}}};
    union U2 l_3340 = {0x41D6E362L};
    union U2 **l_3341[1];
    int32_t l_3370 = 6L;
    int32_t l_3371 = (-4L);
    int32_t l_3373 = 0xF2F23188L;
    int32_t l_3374[4];
    int32_t l_3375 = 1L;
    uint16_t l_3397 = 0x93DDL;
    int32_t l_3431 = 0x25A2407EL;
    int32_t l_3434[2];
    int64_t l_3471 = 0x7EC01C1AB57B5543LL;
    uint32_t l_3505[5];
    uint32_t ***l_3510 = &g_950;
    uint32_t l_3567 = 0xA1E9E774L;
    int16_t l_3597 = 1L;
    uint32_t l_3598 = 4294967287UL;
    uint32_t l_3624 = 2UL;
    int8_t l_3625 = (-4L);
    int64_t l_3683 = (-8L);
    uint32_t l_3685 = 0UL;
    uint16_t *l_3692 = (void*)0;
    uint16_t **l_3691 = &l_3692;
    const union U1 **l_3738 = &g_833[6][1];
    int8_t l_3740 = 0x17L;
    int8_t l_3765 = 1L;
    const int64_t l_3784 = 1L;
    int32_t l_3797 = 0x2CCCBF99L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_3341[i] = &g_106;
    for (i = 0; i < 4; i++)
        l_3374[i] = (-8L);
    for (i = 0; i < 2; i++)
        l_3434[i] = 0xF8F9046CL;
    for (i = 0; i < 5; i++)
        l_3505[i] = 6UL;
    g_2 &= 0xA9C4C8D3L;
    return (***g_1614);
}



static union U1  func_3(int32_t  p_4, const uint16_t  p_5)
{ 
    int32_t l_2731 = 0x700B1552L;
    int32_t l_2732 = (-4L);
    int32_t l_2733 = 0x48AC47CDL;
    int32_t *l_2737 = &g_2432[0][1][4].f1;
    const union U1 * const l_2790[3][7][5] = {{{&g_930,&g_2690,&g_1151,&g_1151,&g_2690},{&g_1824[0],&g_1151,(void*)0,&g_73,&g_73},{&g_1151,&g_1151,&g_1151,&g_1151,&g_1824[0]},{&g_1151,&g_73,&g_73,&g_73,&g_1151},{&g_1151,&g_930,&g_1151,&g_2690,&g_1151},{&g_2598,&g_2598,&g_1824[0],(void*)0,&g_73},{&g_1151,&g_2690,&g_2690,&g_1151,(void*)0}},{{&g_1151,(void*)0,&g_73,&g_73,(void*)0},{(void*)0,&g_2690,&g_1824[0],&g_1151,&g_1151},{&g_1151,&g_2598,&g_1151,&g_73,&g_1824[0]},{&g_1151,&g_1151,&g_1151,&g_1151,&g_1151},{&g_1151,&g_1151,&g_2598,(void*)0,&g_2598},{(void*)0,(void*)0,&g_1151,&g_1151,&g_930},{&g_1151,&g_1151,&g_1151,&g_1151,&g_2598}},{{&g_1151,&g_1151,&g_1824[0],&g_1824[0],&g_1151},{&g_2598,&g_1151,&g_73,&g_1824[0],&g_1824[0]},{&g_2690,(void*)0,&g_2690,&g_1824[0],&g_1151},{(void*)0,&g_1151,&g_1824[0],&g_1151,(void*)0},{&g_2690,&g_1151,(void*)0,&g_1151,(void*)0},{&g_2598,&g_2598,&g_1824[0],(void*)0,&g_73},{&g_1151,&g_2690,&g_2690,&g_1151,(void*)0}}};
    uint8_t *l_2815[2][7] = {{&g_73.f1,&g_2617[0],&g_73.f1,(void*)0,(void*)0,&g_73.f1,&g_2617[0]},{(void*)0,&g_2617[0],(void*)0,(void*)0,&g_2617[0],(void*)0,&g_2617[0]}};
    int32_t l_2816 = 3L;
    uint32_t *l_2819 = &g_60;
    const uint32_t ***l_2827 = &g_2082;
    const uint32_t ****l_2828 = &l_2827;
    uint32_t ***l_2829 = (void*)0;
    struct S0 l_2830 = {18446744073709551611UL,1UL,255UL};
    int32_t *l_2879[4][1];
    union U2 *l_2905[4][5][1] = {{{&g_107},{&g_2432[0][1][4]},{&g_107},{&g_107},{&g_2432[0][0][4]}},{{&g_2432[0][0][4]},{&g_107},{&g_107},{&g_2432[0][1][4]},{&g_107}},{{&g_107},{&g_2432[0][0][4]},{&g_2432[0][0][4]},{&g_107},{&g_107}},{{&g_2432[0][1][4]},{&g_107},{&g_107},{&g_2432[0][0][4]},{&g_2432[0][0][4]}}};
    uint16_t * const l_2948[6][3][3] = {{{&g_100,&g_100,&g_245},{&g_82[2][3][1],&g_245,&g_100},{&g_100,&g_100,&g_82[2][3][1]}},{{&g_1333[0][0],&g_1333[0][0],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_100}},{{&g_245,&g_1333[0][0],&g_245},{&g_100,&g_100,&g_100},{(void*)0,&g_245,&g_245}},{{&g_1333[0][0],&g_100,&g_100},{(void*)0,&g_82[2][3][1],&g_245},{&g_245,(void*)0,&g_100}},{{&g_1333[0][0],(void*)0,(void*)0},{&g_1333[0][0],&g_100,(void*)0},{&g_245,&g_245,&g_82[2][3][1]}},{{(void*)0,&g_100,&g_100},{&g_1333[0][0],&g_245,&g_245},{(void*)0,&g_100,&g_100}}};
    uint16_t * const *l_2947[2];
    uint16_t * const **l_2946 = &l_2947[0];
    union U1 l_2954 = {{5UL,0x54L,0UL}};
    int32_t **l_2963 = &g_2320[0][0][2];
    int16_t l_2966[3];
    int64_t l_2987 = 0x56137F00B1DA753BLL;
    uint64_t ***l_3036 = (void*)0;
    int8_t l_3072 = 1L;
    const int32_t *l_3137 = &g_1352;
    const int32_t **l_3136 = &l_3137;
    struct S0 l_3160 = {1UL,0xCAL,0x7DL};
    const struct S0 * const *l_3196 = &g_1102;
    const struct S0 * const **l_3195 = &l_3196;
    int8_t l_3204 = (-10L);
    uint64_t l_3259 = 0x880D0799F1D92361LL;
    union U1 l_3336 = {{1UL,247UL,1UL}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_2879[i][j] = &g_107.f1;
    }
    for (i = 0; i < 2; i++)
        l_2947[i] = &l_2948[1][0][2];
    for (i = 0; i < 3; i++)
        l_2966[i] = (-2L);
    return l_3336;
}



static int16_t  func_10(struct S0  p_11, int64_t  p_12, union U1  p_13, uint64_t  p_14, uint8_t  p_15)
{ 
    int64_t l_2288 = 0x677DAD5D8AD3E3E9LL;
    int32_t l_2291 = (-1L);
    int32_t l_2303 = 0x0315362DL;
    int32_t l_2305 = (-1L);
    struct S0 *****l_2310 = &g_1613;
    int16_t l_2329[3][3][7] = {{{0x53D1L,0xB5B2L,7L,0xB5B2L,0x53D1L,0x53D1L,0xB5B2L},{0x9D08L,0xB58EL,0x9D08L,0xD14AL,0x6197L,(-9L),0x9736L},{0xB5B2L,2L,7L,7L,2L,0xB5B2L,2L}},{{0x9D08L,0xD14AL,0x9D08L,0xD3C6L,4L,0xD3C6L,0x9D08L},{0xB5B2L,0xB5B2L,0L,2L,0L,0xB5B2L,0xB5B2L},{0x6197L,(-9L),0x9736L,(-9L),0x6197L,0xD14AL,0x9D08L}},{{7L,0x53D1L,7L,0L,0L,7L,0x53D1L},{0x9D08L,0L,0x9736L,0xB58EL,4L,(-9L),4L},{7L,0L,0L,7L,0x53D1L,7L,0L}}};
    int32_t *l_2330 = &l_2291;
    union U2 l_2416 = {18446744073709551607UL};
    union U1 l_2429[1] = {{{1UL,0x9FL,0UL}}};
    union U2 l_2445 = {18446744073709551608UL};
    uint32_t *l_2490 = &g_394[0];
    uint32_t **l_2489 = &l_2490;
    uint16_t l_2503 = 0x28DFL;
    const uint32_t * const *l_2545 = &g_2083;
    const int64_t l_2561 = 0x1E62AD69AD41C8C0LL;
    int32_t l_2579 = 0xD941FA45L;
    union U2 *l_2624 = &l_2416;
    int8_t *l_2640 = (void*)0;
    union U1 *l_2689[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2689[i] = &g_2690;
    for (g_16.f0 = 3; (g_16.f0 < 2); g_16.f0 = safe_sub_func_int32_t_s_s(g_16.f0, 3))
    { 
        int16_t *l_2289 = &g_1451;
        int32_t l_2290[4][6][2];
        int32_t *l_2292 = (void*)0;
        int32_t *l_2293 = &g_107.f1;
        int8_t l_2302 = 0xF0L;
        int8_t l_2304 = 5L;
        uint8_t l_2306 = 0UL;
        union U1 l_2361 = {{0x5641E62B9925C1F9LL,0x20L,0x50L}};
        uint8_t l_2374 = 0xF7L;
        uint64_t *****l_2381[3];
        union U2 *l_2385 = (void*)0;
        uint16_t l_2461[2];
        union U2 l_2488 = {0xE95154DCL};
        int16_t l_2492 = 0x7C64L;
        int32_t *l_2520 = &l_2416.f1;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 2; k++)
                    l_2290[i][j][k] = 0x46EF0C27L;
            }
        }
        for (i = 0; i < 3; i++)
            l_2381[i] = &g_2378[0];
        for (i = 0; i < 2; i++)
            l_2461[i] = 0xB67EL;
        (*l_2293) = (((void*)0 != g_950) == (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(9UL, (0x013288BAL & (p_14 && (l_2291 &= ((((*g_1487) = (0x796BL < ((*l_2289) |= l_2288))) & l_2290[3][5][0]) && 0xA1FE8CD2L)))))) > 0xAD22D4ADL), p_11.f2)));
    }
    for (g_956 = (-5); (g_956 == (-6)); g_956--)
    { 
        int32_t *l_2523 = &g_1174;
        uint32_t l_2542[4][3] = {{4294967295UL,4294967295UL,4294967295UL},{4294967287UL,0x8FB665E9L,4294967287UL},{4294967295UL,4294967295UL,4294967295UL},{4294967287UL,0x8FB665E9L,4294967287UL}};
        uint16_t *l_2553 = &g_1333[0][0];
        uint16_t **l_2552 = &l_2553;
        int32_t l_2577 = (-8L);
        int32_t l_2578 = 0xB1A716BBL;
        uint32_t l_2580 = 0x6E9AEA4EL;
        const union U2 l_2606 = {0UL};
        uint64_t *****l_2618 = &g_2378[0];
        uint64_t ** const *l_2621[6] = {&g_2060,&g_2060,(void*)0,&g_2060,&g_2060,(void*)0};
        uint64_t ** const **l_2620 = &l_2621[1];
        uint64_t ** const ***l_2619 = &l_2620;
        int64_t **l_2663[1];
        int16_t l_2697 = (-1L);
        int i, j;
        for (i = 0; i < 1; i++)
            l_2663[i] = (void*)0;
        l_2523 = &l_2291;
        for (g_2090 = 8; (g_2090 >= 35); g_2090 = safe_add_func_int16_t_s_s(g_2090, 3))
        { 
            int64_t l_2538 = 0x9F603D10254E0B6BLL;
            int16_t *l_2539 = &g_1141;
            int32_t *l_2540 = &g_598;
            int32_t *l_2541 = (void*)0;
            (*l_2540) |= (p_15 && ((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((*l_2539) = (safe_sub_func_int8_t_s_s((p_13.f0 , ((**l_2310) != ((*l_2523) , (*g_1613)))), ((safe_lshift_func_int16_t_s_s(((*g_332) != ((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((**g_1486) |= ((p_11.f2 , p_11.f0) == p_11.f1)) , (-6L)), 0xBA7EL)), l_2538)) && 0x97L)), l_2538)) && 7L)))), (*l_2523))), p_13.f0.f1)) >= 0UL));
            ++l_2542[2][0];
        }
        if (((void*)0 == &l_2542[1][1]))
        { 
            uint8_t *l_2546 = &g_2477[2];
            int32_t l_2551[3][5] = {{(-6L),(-6L),0L,(-6L),(-6L)},{0x6B5957E1L,0xBA1AC6A4L,0x6B5957E1L,0x6B5957E1L,0xBA1AC6A4L},{(-6L),0x13205A4EL,0x13205A4EL,(-6L),0x13205A4EL}};
            uint16_t **l_2554 = (void*)0;
            int32_t l_2555 = 0xC6C9A34EL;
            int i, j;
            (*l_2523) = (*l_2330);
            (*g_64) = func_44((((*l_2523) = ((-1L) ^ (g_1451 == ((0x44F43359L || (((void*)0 == l_2545) <= (((*l_2546) ^= p_12) <= (((l_2551[1][1] = ((l_2554 = ((((((((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(g_1824[0].f0.f0, 1L)), l_2551[1][1])) , (void*)0) == (*g_1613)) >= 0L) & 0L) , p_13.f0.f0) & (**g_1486)) , l_2552)) == &g_1402)) != (*l_2523)) <= (*l_2330))))) ^ l_2555)))) , (*g_332)), p_11.f0);
        }
        else
        { 
            uint64_t l_2556 = 18446744073709551615UL;
            return l_2556;
        }
    }
    return g_54;
}



static union U1  func_18(uint8_t  p_19, int16_t  p_20, struct S0  p_21, int64_t  p_22, uint64_t  p_23)
{ 
    union U1 l_2281[7][7] = {{{{18446744073709551615UL,4UL,0xEDL}},{{0UL,0xEBL,246UL}},{{1UL,0xCEL,0xEFL}},{{0x4A2C195339E35216LL,0x41L,3UL}},{{1UL,0xCEL,0xEFL}},{{0UL,0xEBL,246UL}},{{18446744073709551615UL,4UL,0xEDL}}},{{{18446744073709551615UL,0x4BL,252UL}},{{18446744073709551615UL,4UL,0xEDL}},{{0xFBBDE4CDF3B22FB4LL,1UL,0x36L}},{{0x4A2C195339E35216LL,0x41L,3UL}},{{0xC01A7A05DD505D86LL,246UL,0xC6L}},{{0x8537161FE8A3CE97LL,1UL,0x77L}},{{18446744073709551612UL,0x43L,248UL}}},{{{0x6659D725BE83A691LL,1UL,0xE2L}},{{0x0939740E45031578LL,0xEFL,0xF3L}},{{0UL,0x94L,251UL}},{{18446744073709551612UL,0x43L,248UL}},{{18446744073709551615UL,0x4BL,252UL}},{{0x2D5ED8F56DDF789DLL,247UL,255UL}},{{0x2D5ED8F56DDF789DLL,247UL,255UL}}},{{{0UL,0x94L,251UL}},{{6UL,255UL,1UL}},{{0xFBBDE4CDF3B22FB4LL,1UL,0x36L}},{{6UL,255UL,1UL}},{{0UL,0x94L,251UL}},{{0x608CF774D6BAC7F2LL,0x59L,0xEFL}},{{0x11A27E4BAD9AC9A1LL,255UL,0UL}}},{{{0x11A27E4BAD9AC9A1LL,255UL,0UL}},{{6UL,255UL,1UL}},{{1UL,0xCEL,0xEFL}},{{18446744073709551615UL,4UL,0xEDL}},{{0x4A2C195339E35216LL,0x41L,3UL}},{{0x76DFE55BC8505833LL,0x26L,254UL}},{{18446744073709551615UL,0x4BL,252UL}}},{{{6UL,255UL,1UL}},{{0x0939740E45031578LL,0xEFL,0xF3L}},{{0x4A2C195339E35216LL,0x41L,3UL}},{{0UL,1UL,255UL}},{{0xFBBDE4CDF3B22FB4LL,1UL,0x36L}},{{0xFBBDE4CDF3B22FB4LL,1UL,0x36L}},{{0UL,1UL,255UL}}},{{{0x11A27E4BAD9AC9A1LL,255UL,0UL}},{{18446744073709551615UL,4UL,0xEDL}},{{0x11A27E4BAD9AC9A1LL,255UL,0UL}},{{0xFBBDE4CDF3B22FB4LL,1UL,0x36L}},{{0x8537161FE8A3CE97LL,1UL,0x77L}},{{0x0939740E45031578LL,0xEFL,0xF3L}},{{0UL,1UL,255UL}}}};
    int i, j;
    return l_2281[2][2];
}



static uint16_t  func_30(int32_t  p_31, int32_t  p_32, uint32_t  p_33)
{ 
    struct S0 l_1178 = {0x06434D39AC80F954LL,0xC3L,0xCBL};
    union U1 l_1182 = {{0xDF9FEDA4EE030357LL,0x2CL,254UL}};
    union U1 **l_1183 = &g_72;
    const union U2 l_1186 = {18446744073709551612UL};
    int32_t l_1187 = 4L;
    int8_t l_1194 = 0x8AL;
    struct S0 *l_1200 = (void*)0;
    struct S0 *l_1201 = &g_49[4][1][3];
    const union U2 *l_1217 = &g_107;
    struct S0 * const **l_1218 = (void*)0;
    int32_t l_1221[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int16_t l_1307 = 1L;
    uint16_t l_1308 = 0x73F8L;
    int32_t *l_1334 = &g_107.f1;
    const int32_t *l_1351 = &g_1352;
    int32_t l_1463[6];
    int32_t *l_1517 = (void*)0;
    uint16_t **l_1538 = (void*)0;
    uint16_t ***l_1537[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t ****l_1570 = &l_1537[5];
    int64_t *l_1609 = &g_310;
    uint8_t l_1644 = 0x43L;
    int32_t l_1648 = 0x5FB1B472L;
    union U2 ***l_1664 = &g_1146;
    union U1 ****l_1696[6] = {(void*)0,&g_855,&g_855,(void*)0,&g_855,&g_855};
    union U1 *****l_1697 = (void*)0;
    union U1 *****l_1698 = &l_1696[5];
    union U1 ****l_1700 = (void*)0;
    union U1 *****l_1699 = &l_1700;
    uint64_t l_1701 = 0x6EB3A595C1C7907ELL;
    int32_t l_1702[2];
    int16_t *l_1703 = &l_1307;
    uint8_t l_1741 = 0x5CL;
    int16_t l_1748 = 0x3546L;
    int32_t *l_1863 = (void*)0;
    uint64_t *l_1876 = (void*)0;
    uint64_t **l_1875[3];
    uint64_t ***l_1874 = &l_1875[0];
    uint16_t l_1901[4] = {0xACC1L,0xACC1L,0xACC1L,0xACC1L};
    union U2 **l_2050 = &g_106;
    union U2 l_2059 = {0xE36735AFL};
    uint32_t **l_2066[7] = {&g_1119,&g_1119,&g_1119,&g_1119,&g_1119,&g_1119,&g_1119};
    uint16_t *****l_2108 = &l_1570;
    uint32_t *l_2123 = &g_60;
    int32_t l_2149[1][3][3] = {{{0x8A2BFDCCL,0x8A2BFDCCL,0x99B69482L},{0x8A2BFDCCL,0x8A2BFDCCL,0x99B69482L},{0x8A2BFDCCL,0x8A2BFDCCL,0x99B69482L}}};
    int32_t l_2154 = 0xE420E8C6L;
    int32_t l_2162 = 0x728F10C9L;
    uint32_t ****l_2180 = (void*)0;
    int32_t *l_2258 = &l_1221[0];
    int32_t *l_2259 = (void*)0;
    int32_t *l_2260 = &l_1221[5];
    int32_t *l_2261 = &l_1221[5];
    int32_t *l_2262 = &l_2059.f1;
    int32_t *l_2263 = &l_2149[0][2][0];
    int32_t *l_2264 = &l_2149[0][2][0];
    int32_t *l_2265 = (void*)0;
    int32_t *l_2266 = &g_1853;
    int32_t *l_2267 = &g_107.f1;
    int32_t *l_2268 = &g_98;
    int32_t *l_2269 = &l_1221[4];
    int32_t *l_2270 = &g_107.f1;
    int32_t *l_2271[5] = {&g_1853,&g_1853,&g_1853,&g_1853,&g_1853};
    int32_t l_2272 = 0x14946140L;
    int32_t l_2273[4];
    int8_t l_2275 = (-6L);
    int64_t l_2276 = 0xA23A5BB9A0A2BF4CLL;
    uint32_t l_2277 = 0xF25601EFL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1463[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_1702[i] = 0xC7C213F0L;
    for (i = 0; i < 3; i++)
        l_1875[i] = &l_1876;
    for (i = 0; i < 4; i++)
        l_2273[i] = 0x373E4ACFL;
    return p_33;
}



static uint64_t  func_34(struct S0  p_35, struct S0  p_36, union U1  p_37, int32_t  p_38, int32_t  p_39)
{ 
    int16_t l_1132[4];
    union U2 **l_1142 = &g_106;
    union U1 *l_1150 = &g_1151;
    uint64_t l_1152 = 9UL;
    union U1 ****l_1163 = (void*)0;
    union U1 *****l_1162 = &l_1163;
    int32_t l_1169 = (-3L);
    int8_t *l_1170[2][2] = {{&g_97,&g_97},{&g_97,&g_97}};
    int32_t l_1171 = 0x6F323D89L;
    int32_t *l_1172 = &g_598;
    int i, j;
    for (i = 0; i < 4; i++)
        l_1132[i] = 0x48EBL;
    for (p_38 = 1; (p_38 <= 4); p_38 += 1)
    { 
        int16_t l_1133 = 1L;
        int32_t l_1134 = 0xCF5FB13AL;
        int32_t *l_1135 = &g_54;
        int16_t *l_1139 = &g_250;
        int16_t *l_1140 = &g_1141;
        union U2 ***l_1143 = &l_1142;
        union U2 ***l_1144 = (void*)0;
        union U2 ***l_1145[5][1][4] = {{{&g_114,&g_114,&g_114,&g_114}},{{&g_114,&g_114,&g_114,&g_114}},{{&g_114,&g_114,&g_114,&g_114}},{{&g_114,&g_114,&g_114,&g_114}},{{&g_114,&g_114,&g_114,&g_114}}};
        union U2 **l_1147 = &g_106;
        struct S0 l_1148 = {18446744073709551615UL,0x32L,0xADL};
        struct S0 *l_1149 = &g_49[5][2][1];
        int i, j, k;
        (*l_1149) = (*l_1149);
        return p_37.f0.f0;
    }
    (**g_831) = (l_1150 = &p_37);
    for (g_54 = 0; g_54 < 1; g_54 += 1)
    {
        g_394[g_54] = 0xA2E7C011L;
    }
    (*l_1172) &= (l_1152 , (safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((g_107.f1 > ((!((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((&g_1026 == ((*l_1162) = &g_1026)), ((l_1171 = (l_1169 = (safe_mod_func_uint32_t_u_u((l_1152 <= (safe_lshift_func_int16_t_s_s(((!7UL) > l_1132[2]), 3))), (*g_1119))))) ^ g_69))), g_668)) | p_35.f0)) , 0xF8F18A330B3AA77ELL)), l_1132[3])) > 0x7DL) > 9L), 6)));
    return g_133[0];
}



static struct S0  func_40(struct S0  p_41, int8_t  p_42, int32_t  p_43)
{ 
    int8_t l_58 = 1L;
    int32_t l_59[5][3] = {{(-10L),(-10L),0x53D3C485L},{0x53D3C485L,(-10L),0x53D3C485L},{0x53D3C485L,(-10L),0x53D3C485L},{0x53D3C485L,(-10L),0x53D3C485L},{0x53D3C485L,(-10L),0x53D3C485L}};
    union U2 l_93 = {0x99195F91L};
    uint16_t *l_119 = &g_82[0][3][0];
    int32_t *l_147 = (void*)0;
    union U1 l_229[5] = {{{0x294016B02DDAE1D8LL,0x18L,0x11L}},{{0x294016B02DDAE1D8LL,0x18L,0x11L}},{{0x294016B02DDAE1D8LL,0x18L,0x11L}},{{0x294016B02DDAE1D8LL,0x18L,0x11L}},{{0x294016B02DDAE1D8LL,0x18L,0x11L}}};
    int32_t *l_314 = &g_107.f1;
    int32_t ***l_315 = &g_272[5][4];
    int32_t ****l_316 = (void*)0;
    int32_t ***l_317 = &g_272[5][4];
    uint64_t *l_318 = &g_94;
    uint8_t l_321 = 0x6EL;
    int64_t l_378[4] = {0x300D8E7D01A9C0D5LL,0x300D8E7D01A9C0D5LL,0x300D8E7D01A9C0D5LL,0x300D8E7D01A9C0D5LL};
    int16_t l_419[1][3];
    struct S0 **l_529 = &g_64;
    uint64_t l_556[4][7] = {{0UL,1UL,0xA775543B0F5CA092LL,18446744073709551609UL,0xA775543B0F5CA092LL,1UL,0UL},{1UL,18446744073709551606UL,0UL,1UL,0xF78A96D0B85E1819LL,0xA775543B0F5CA092LL,0xF78A96D0B85E1819LL},{1UL,0xF78A96D0B85E1819LL,0xF78A96D0B85E1819LL,1UL,0UL,0xE72F0E1443D9A370LL,18446744073709551609UL},{0UL,0xE72F0E1443D9A370LL,0UL,0UL,0UL,0UL,0xE72F0E1443D9A370LL}};
    const union U2 l_573 = {18446744073709551607UL};
    uint8_t l_575 = 0x36L;
    int16_t l_596 = 1L;
    uint64_t l_663 = 0x8A045FA83EA6BD11LL;
    uint32_t l_746 = 1UL;
    uint32_t l_774 = 8UL;
    int64_t l_908 = (-1L);
    int16_t l_910 = 0x71A6L;
    union U1 *l_929 = &g_930;
    int8_t *l_955 = &g_133[0];
    int16_t l_957 = 0x5D4DL;
    struct S0 l_959 = {2UL,0x0EL,0xA0L};
    union U2 *l_985 = (void*)0;
    uint8_t l_1024 = 0x7CL;
    struct S0 *l_1127 = &g_49[4][1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_419[i][j] = 9L;
    }
    for (p_43 = 0; (p_43 < (-9)); p_43 = safe_sub_func_uint32_t_u_u(p_43, 8))
    { 
        int32_t *l_53 = &g_54;
        int32_t l_55 = 0xF3E63D4DL;
        int32_t *l_56 = &l_55;
        int32_t *l_57[3];
        union U2 *l_103 = &l_93;
        uint16_t *l_191 = &g_100;
        struct S0 l_199 = {0x699A9D7EB52307CDLL,255UL,8UL};
        union U2 *l_213 = &g_107;
        union U1 l_228[6] = {{{18446744073709551612UL,248UL,0UL}},{{18446744073709551612UL,248UL,0UL}},{{18446744073709551612UL,248UL,0UL}},{{18446744073709551612UL,248UL,0UL}},{{18446744073709551612UL,248UL,0UL}},{{18446744073709551612UL,248UL,0UL}}};
        struct S0 ***l_307 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_57[i] = (void*)0;
        g_60++;
        if (((*l_56) = g_49[4][1][3].f0))
        { 
            struct S0 **l_65 = &g_64;
            int32_t l_66 = 0xB9CE0865L;
            int32_t l_67 = 0x091E6DCFL;
            int32_t l_68 = (-1L);
            l_65 = g_63[1];
            g_69++;
            g_72 = (void*)0;
            for (p_41.f0 = 28; (p_41.f0 < 35); p_41.f0 = safe_add_func_int32_t_s_s(p_41.f0, 4))
            { 
                struct S0 **l_86 = &g_64;
                int32_t *l_96 = &l_68;
                int32_t l_99 = 0L;
                for (l_66 = 2; (l_66 >= 0); l_66 -= 1)
                { 
                    union U1 *l_78 = &g_73;
                    union U1 **l_79 = (void*)0;
                    union U1 **l_80 = &g_72;
                    uint16_t *l_81 = &g_82[2][3][1];
                    struct S0 ***l_85 = (void*)0;
                    int32_t **l_95 = (void*)0;
                    union U2 **l_104 = (void*)0;
                    union U2 **l_105[2][6][6] = {{{&l_103,&l_103,&l_103,&l_103,&l_103,&l_103},{(void*)0,&l_103,&l_103,&l_103,(void*)0,&l_103},{&l_103,&l_103,&l_103,&l_103,&l_103,&l_103},{(void*)0,&l_103,&l_103,&l_103,(void*)0,&l_103},{&l_103,&l_103,&l_103,&l_103,&l_103,&l_103},{(void*)0,&l_103,&l_103,&l_103,(void*)0,&l_103}},{{&l_103,&l_103,&l_103,&l_103,&l_103,&l_103},{(void*)0,&l_103,&l_103,&l_103,(void*)0,&l_103},{&l_103,&l_103,&l_103,&l_103,&l_103,&l_103},{(void*)0,&l_103,&l_103,&l_103,(void*)0,&l_103},{&l_103,&l_103,&l_103,&l_103,&l_103,&l_103},{(void*)0,&l_103,&l_103,&l_103,(void*)0,&l_103}}};
                    int i, j, k;
                    l_59[(l_66 + 1)][l_66] ^= ((((safe_rshift_func_int16_t_s_u((l_78 == ((*l_80) = l_78)), (++(*l_81)))) , l_65) == (l_86 = &g_64)) == ((+((((((+((safe_mod_func_int8_t_s_s((5L >= ((safe_lshift_func_uint8_t_u_u(g_54, g_73.f0.f1)) > (*l_56))), 5L)) && p_41.f2)) , l_93) , p_41.f1) && p_41.f0) ^ g_94) && 0xB8L)) <= p_41.f0));
                    l_96 = &g_54;
                    if (l_93.f1)
                        break;
                    ++g_100;
                    g_106 = (p_41.f1 , l_103);
                }
                l_59[0][1] = 0x7FB82E29L;
            }
            for (g_97 = 0; g_97 < 6; g_97 += 1)
            {
                for (p_41.f2 = 0; p_41.f2 < 3; p_41.f2 += 1)
                {
                    for (p_42 = 0; p_42 < 4; p_42 += 1)
                    {
                        struct S0 tmp = {18446744073709551615UL,0xE9L,0x6AL};
                        g_49[g_97][p_41.f2][p_42] = tmp;
                    }
                }
            }
        }
        else
        { 
            const uint32_t l_108 = 1UL;
            union U2 **l_115[4] = {&g_106,&g_106,&g_106,&g_106};
            struct S0 l_144[7][1][5] = {{{{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L}}},{{{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L}}},{{{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L}}},{{{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L}}},{{{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L}}},{{{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L}}},{{{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L},{0xFA4CC697D3C6209DLL,0x6BL,0x71L}}}};
            int32_t *l_146 = &g_107.f1;
            int i, j, k;
            g_54 &= l_108;
            for (p_41.f0 = 0; (p_41.f0 <= 3); p_41.f0 += 1)
            { 
                const uint32_t l_109 = 4294967295UL;
                (*l_53) &= l_109;
            }
            for (p_41.f2 = 0; (p_41.f2 == 57); p_41.f2 = safe_add_func_int8_t_s_s(p_41.f2, 2))
            { 
                uint16_t **l_120 = &l_119;
                uint16_t **l_121 = (void*)0;
                uint16_t *l_123[4] = {&g_82[2][3][1],&g_82[2][3][1],&g_82[2][3][1],&g_82[2][3][1]};
                uint16_t **l_122 = &l_123[1];
                uint16_t *l_124[7];
                uint8_t *l_125 = &g_49[4][1][3].f2;
                uint16_t l_126[3];
                int8_t l_131 = (-2L);
                int32_t l_132[5][6] = {{8L,0x7E307078L,0x7E307078L,8L,(-1L),8L},{8L,(-1L),8L,0x7E307078L,0x7E307078L,8L},{(-1L),(-1L),0x7E307078L,0x5CD318D0L,0x7E307078L,(-1L)},{8L,(-1L),(-1L),(-1L),(-1L),8L},{0x7E307078L,8L,(-1L),8L,0x7E307078L,0x7E307078L}};
                int i, j;
                for (i = 0; i < 7; i++)
                    l_124[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_126[i] = 0xC1DFL;
                if (((((*l_125) ^= ((safe_add_func_uint32_t_u_u((((g_114 = &l_103) != l_115[3]) && p_43), (((l_59[0][1] ^= (safe_div_func_uint16_t_u_u(1UL, ((l_93.f0 || ((+p_42) || ((((*l_122) = ((*l_120) = l_119)) == &g_100) >= 1UL))) ^ g_49[4][1][3].f1)))) > p_41.f0) , g_2))) >= 0L)) , 0x7C9B672CL) || p_42))
                { 
                    l_126[2]--;
                }
                else
                { 
                    struct S0 *l_145 = &l_144[3][0][1];
                    (*l_56) ^= (((++(*l_125)) < l_131) <= l_131);
                    g_134--;
                    l_132[4][1] ^= (safe_mod_func_uint64_t_u_u((!g_49[4][1][3].f2), (safe_lshift_func_int16_t_s_s((p_43 || ((((*l_103) , (safe_sub_func_int8_t_s_s(0L, g_133[0]))) > (((*l_145) = l_144[3][0][1]) , (l_126[2] ^ g_97))) >= g_54)), 7))));
                    if (g_60)
                        continue;
                    return l_144[6][0][1];
                }
            }
            l_147 = l_146;
        }
        for (g_69 = 23; (g_69 <= 53); g_69 = safe_add_func_int64_t_s_s(g_69, 2))
        { 
            union U2 l_156 = {0x7F932FAAL};
            int32_t l_182[6] = {(-1L),5L,5L,(-1L),5L,5L};
            uint16_t *l_190 = &g_100;
            struct S0 l_198 = {0xC7AEBA48171D3657LL,247UL,0UL};
            int i;
            for (p_42 = (-14); (p_42 == (-21)); p_42--)
            { 
                int64_t *l_179[2][7][1] = {{{&g_180},{&g_180},{&g_180},{(void*)0},{&g_180},{(void*)0},{&g_180}},{{&g_180},{&g_180},{(void*)0},{&g_180},{(void*)0},{&g_180},{&g_180}}};
                int32_t l_181 = 0xA88FD382L;
                struct S0 l_196[1] = {{18446744073709551611UL,7UL,0x03L}};
                int32_t **l_208 = (void*)0;
                int32_t **l_209[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j, k;
                if ((safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((l_156 , (l_93 , (safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(p_41.f2, (safe_mul_func_int16_t_s_s(g_16.f2, (--g_100))))), (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((+((safe_add_func_uint8_t_u_u((((0x37BB743FEE94D8E9LL <= (l_156.f1 = (~l_156.f0))) >= (0xEB6903EBL > p_41.f2)) < g_107.f0), l_181)) && 0x06BE9B9EL)) ^ g_97), g_60)) | l_182[3]), 3)), 5)) , 0xD958E107FD1B8A4DLL) , g_69))) | p_42) ^ 0xCBL), g_107.f0)) && g_16.f2), 0x81L)))), g_97)) , (*l_56)), 0x19L)))
                { 
                    int64_t l_183 = 0xD84AA6036CB78A07LL;
                    uint16_t **l_192 = &l_191;
                    struct S0 *l_195[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_195[i] = &g_49[4][1][3];
                    l_196[0] = func_44(l_183, (safe_sub_func_uint64_t_u_u(p_41.f0, (((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(0xBAL, 0)) | (((l_183 && (l_190 == ((*l_192) = l_191))) & ((safe_mul_func_uint16_t_u_u(65535UL, l_182[3])) || 0x6BL)) & g_49[4][1][3].f2)), g_134)) , 0x9FL) ^ (-4L)))));
                }
                else
                { 
                    struct S0 l_197 = {18446744073709551611UL,0x1BL,0x69L};
                    int32_t *l_200 = &l_59[4][0];
                    l_198 = l_197;
                    g_201 = (l_199 , (g_73 , l_200));
                }
                for (g_107.f1 = 0; (g_107.f1 <= 5); g_107.f1 += 1)
                { 
                    union U1 l_204 = {{18446744073709551615UL,0x34L,0x48L}};
                    struct S0 *l_206 = (void*)0;
                    struct S0 *l_207 = &l_196[0];
                    int i;
                    (*l_207) = func_44(((l_182[g_107.f1] | (safe_add_func_int32_t_s_s(((p_41.f1 > (g_69 && ((l_204 , g_107.f0) != ((*l_191) ^= (safe_unary_minus_func_uint16_t_u(0xB59CL)))))) < g_49[4][1][3].f1), (*g_201)))) <= 0L), p_41.f2);
                }
                l_53 = &g_54;
            }
            if (g_16.f2)
                goto lbl_1126;
        }
        if (p_41.f1)
            break;
        for (g_98 = 12; (g_98 >= 26); ++g_98)
        { 
            int8_t *l_255 = &g_2;
            int8_t *l_256 = &l_58;
            struct S0 *l_261 = &l_199;
            int16_t *l_262 = &g_250;
            const int32_t l_266 = (-9L);
            int64_t *l_304 = &g_180;
            struct S0 ** const *l_308[2][5][4] = {{{(void*)0,(void*)0,&g_63[1],&g_63[1]},{(void*)0,(void*)0,&g_63[1],(void*)0},{&g_63[1],(void*)0,&g_63[1],&g_63[1]},{(void*)0,&g_63[1],&g_63[1],&g_63[1]},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_63[1],&g_63[1]},{(void*)0,(void*)0,&g_63[1],(void*)0},{&g_63[1],(void*)0,&g_63[1],&g_63[1]},{(void*)0,&g_63[1],&g_63[1],&g_63[1]},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            int64_t *l_309 = &g_310;
            int i, j, k;
            if ((g_250 , ((g_245 && (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_43, (*l_56))), (p_42 |= ((*l_256) ^= ((*l_255) &= g_100)))))) | (((((*l_262) = ((safe_lshift_func_int16_t_s_u((!(!((void*)0 != l_261))), p_41.f1)) <= 0L)) <= g_133[0]) && (*g_201)) != p_41.f2))))
            { 
                uint8_t l_267 = 0x97L;
                for (g_54 = 6; (g_54 == 24); g_54 = safe_add_func_uint8_t_u_u(g_54, 2))
                { 
                    (*l_56) = (+(l_266 > (-7L)));
                    return p_41;
                }
                for (l_199.f2 = 0; (l_199.f2 <= 3); l_199.f2 += 1)
                { 
                    l_267 ^= (*g_201);
                }
            }
            else
            { 
                uint8_t *l_281 = (void*)0;
                uint8_t *l_282 = &l_199.f2;
                for (g_94 = 26; (g_94 >= 33); g_94 = safe_add_func_uint8_t_u_u(g_94, 9))
                { 
                    int32_t **l_270 = &g_201;
                    int32_t ***l_271[7] = {&l_270,&l_270,&l_270,&l_270,&l_270,&l_270,&l_270};
                    uint8_t l_278[7] = {0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L};
                    int i;
                    (*l_270) = &g_98;
                    g_272[5][4] = l_270;
                    l_278[3] |= (safe_sub_func_uint64_t_u_u(((!((safe_mul_func_uint8_t_u_u(g_16.f1, ((((0x40L != 0x24L) < p_43) < 18446744073709551615UL) != p_42))) ^ p_41.f0)) != 8UL), 0x6D3C327D7966237CLL));
                }
                if (((safe_lshift_func_uint8_t_u_u(251UL, p_41.f1)) == (((--(*l_282)) > (((+l_266) > g_98) > l_266)) >= g_49[4][1][3].f2)))
                { 
                    if (l_266)
                        break;
                }
                else
                { 
                    uint64_t *l_287 = &g_94;
                    int32_t l_288[3][1];
                    int64_t *l_289 = &g_180;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_288[i][j] = 1L;
                    }
                    (*l_56) ^= ((g_107.f1 && (((~((*l_287) = g_82[5][0][1])) , l_288[2][0]) < ((*l_191) = (((*l_289) &= 0x351F7D0607FCC5ADLL) < g_82[4][3][1])))) < 0x7299L);
                    return (*g_64);
                }
                return (*g_64);
            }
            if (p_43)
                break;
            (*l_56) = (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((g_49[4][1][3].f0 | (0UL <= (((*l_309) = ((((*l_191) &= (safe_mul_func_uint8_t_u_u(((((((safe_div_func_int32_t_s_s(((g_133[0] >= ((((safe_sub_func_uint16_t_u_u((((((safe_sub_func_int64_t_s_s(((*l_304) = g_69), ((((((safe_sub_func_uint16_t_u_u(1UL, ((((((l_307 == l_308[0][1][1]) <= g_2) , &l_147) == (void*)0) != p_42) > p_41.f2))) , g_60) != g_133[0]) , &g_107) != (void*)0) || g_49[4][1][3].f1))) || g_16.f0) != p_43) ^ p_41.f1) <= p_43), 65527UL)) || g_73.f0.f2) && (*g_201)) & g_82[2][3][1])) >= 6UL), 0x4879D23CL)) ^ p_42) ^ p_42) >= g_54) < l_266) ^ (*g_201)), p_41.f2))) | g_134) == 6L)) < 18446744073709551615UL))), p_43)) && l_266), p_43)), 0));
        }
    }
lbl_1126:
    if ((l_93.f1 |= ((func_44((((*g_201) = p_41.f1) | ((l_229[4].f0.f0 , ((!0xAFEEL) & ((*l_314) = l_229[4].f0.f0))) && ((((*l_318) = (((((*l_119) = (*l_314)) , ((((l_315 != (l_317 = l_315)) , g_69) , (void*)0) == (void*)0)) & g_16.f0) <= 0xAA55L)) >= (*l_314)) || g_73.f0.f1))), l_58) , g_49[4][1][3].f1) > p_42)))
    { 
        int32_t *l_319 = &g_98;
        int32_t *l_320[3];
        int64_t *l_329[4][4][4] = {{{&g_180,&g_180,&g_310,&g_180},{&g_180,&g_180,&g_310,&g_180},{&g_180,&g_310,&g_310,&g_310},{&g_180,&g_310,&g_310,&g_180}},{{&g_180,&g_180,&g_180,(void*)0},{&g_180,(void*)0,&g_180,&g_310},{&g_310,(void*)0,&g_310,&g_310},{&g_180,(void*)0,&g_310,(void*)0}},{{&g_180,&g_180,&g_180,&g_180},{&g_180,&g_310,&g_180,&g_310},{(void*)0,&g_310,&g_310,&g_180},{(void*)0,&g_180,&g_180,&g_180}},{{&g_180,&g_180,&g_180,&g_310},{&g_180,&g_180,&g_310,&g_180},{&g_180,&g_180,&g_310,&g_310},{&g_310,&g_180,&g_180,&g_180}}};
        union U1 l_351[3][2][1] = {{{{{1UL,0xCBL,6UL}}},{{{1UL,0xCBL,6UL}}}},{{{{1UL,0xCBL,6UL}}},{{{1UL,0xCBL,6UL}}}},{{{{1UL,0xCBL,6UL}}},{{{1UL,0xCBL,6UL}}}}};
        int32_t *l_376 = &l_93.f1;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_320[i] = &g_54;
        l_321--;
        for (g_107.f0 = 0; (g_107.f0 <= 2); g_107.f0 += 1)
        { 
            return (*g_64);
        }
        for (g_54 = 0; (g_54 <= 4); g_54 += 1)
        { 
            int32_t l_326 = 6L;
            uint16_t l_353 = 0xE3A7L;
            struct S0 l_369 = {18446744073709551615UL,255UL,247UL};
            int32_t *l_374 = &g_107.f1;
            struct S0 *l_375 = &g_49[4][1][3];
            int32_t **l_377 = &l_320[0];
            int32_t l_397 = (-2L);
            int32_t l_398[3][2];
            uint64_t l_407 = 7UL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_398[i][j] = (-10L);
            }
            if (((l_326 >= (g_54 > 0x43L)) >= l_326))
            { 
                struct S0 *l_327 = &g_49[4][1][3];
                struct S0 *l_328[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                p_41 = ((*l_327) = p_41);
            }
            else
            { 
                int64_t *l_330 = &g_180;
                int64_t **l_331[1][4][6] = {{{&l_330,(void*)0,(void*)0,&l_330,(void*)0,(void*)0},{&l_330,(void*)0,(void*)0,&l_330,(void*)0,(void*)0},{&l_330,(void*)0,(void*)0,&l_330,(void*)0,(void*)0},{&l_330,(void*)0,(void*)0,&l_330,(void*)0,(void*)0}}};
                int32_t l_352 = (-4L);
                union U1 * const *l_367 = &g_72;
                int32_t *l_368 = &g_107.f1;
                struct S0 l_372 = {1UL,0x91L,0x66L};
                int i, j, k;
                if ((((l_329[1][0][1] != (g_332 = l_330)) == ((l_326 != (safe_add_func_uint64_t_u_u(g_49[4][1][3].f1, (safe_rshift_func_uint8_t_u_u(g_82[2][3][1], 1))))) & ((((safe_unary_minus_func_int64_t_s((((((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((((((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((((p_41.f0 <= (((((!(safe_mul_func_uint8_t_u_u(((l_351[1][1][0] , 0x6CC7DBC7L) , l_326), 2L))) && g_100) , p_43) , p_43) , g_133[0])) || p_42) < p_41.f2) && p_43) < 0xBB0C62E2L), l_352)), (*l_319))) || l_353), g_49[4][1][3].f1)) > 0x443C70DBL) ^ l_326) | 18446744073709551615UL) > 1L) < 4L) ^ p_41.f1), p_41.f2)), g_133[0])) & p_42) <= 4294967295UL) , p_42) || 0UL))) == g_49[4][1][3].f1) > 0xBD5FL) || g_16.f2))) ^ l_326))
                { 
                    if (p_43)
                        break;
                    (*l_314) |= (*g_201);
                }
                else
                { 
                    uint8_t l_354 = 0xD2L;
                    uint32_t *l_363[1];
                    uint32_t l_364 = 5UL;
                    struct S0 *l_370 = (void*)0;
                    struct S0 *l_371[4][1][6] = {{{(void*)0,&g_16,&g_49[5][0][0],&g_16,&l_369,&l_369}},{{&g_16,(void*)0,(void*)0,&g_16,&l_369,&g_49[5][0][0]}},{{&g_49[3][2][0],(void*)0,&l_369,&g_49[3][2][0],&l_369,(void*)0}},{{&g_16,(void*)0,&g_49[5][0][0],&g_16,&l_369,&l_369}}};
                    union U1 **l_373 = &g_72;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_363[i] = (void*)0;
                    --l_354;
                    l_368 = ((safe_div_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((0x9226773E6724607DLL > l_353) , ((g_60 = (--l_364)) > ((*g_106) , 6UL))) >= ((((*g_106) , l_367) == (void*)0) >= 0x96F7AD59D9401A70LL)), (-4L))) , (*l_319)) , p_42), g_98)) | p_41.f0) != 1UL) && g_82[6][3][1]), g_133[0])) , (void*)0);
                    l_372 = (p_43 , l_369);
                    (*l_373) = (*l_367);
                    l_374 = &l_352;
                }
            }
            (*l_319) = 0L;
            (*l_375) = l_229[4].f0;
            (*l_377) = l_376;
            if (l_378[1])
                break;
            for (g_97 = 4; (g_97 >= 0); g_97 -= 1)
            { 
                int32_t l_400 = 0xB6EBABB2L;
                int32_t l_401 = 0xB1ACD26AL;
                int32_t l_402 = 0xCAE0697DL;
                int32_t l_403[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_403[i] = (-2L);
                (*l_377) = l_320[0];
                for (l_58 = 3; (l_58 >= 0); l_58 -= 1)
                { 
                    int32_t l_395 = 0L;
                    int64_t l_396 = 0x85F0D162033E1AD2LL;
                    int32_t l_399 = 0xD8554B9EL;
                    int32_t l_404 = (-8L);
                    int32_t l_405 = 0xF73EE0B1L;
                    int32_t l_406[6][6] = {{(-1L),1L,1L,(-1L),0x38E1897AL,0xEA31AFB0L},{(-5L),1L,0x38E1897AL,(-5L),0x38E1897AL,1L},{0x70DE6C0FL,1L,0xEA31AFB0L,0x70DE6C0FL,0x38E1897AL,0x38E1897AL},{(-1L),1L,1L,(-1L),0x38E1897AL,0xEA31AFB0L},{(-5L),1L,0x38E1897AL,(-5L),0x38E1897AL,1L},{0x70DE6C0FL,1L,0xEA31AFB0L,0x70DE6C0FL,0x38E1897AL,0x38E1897AL}};
                    int i, j;
                    (*l_314) &= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(p_43, 15)), (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((**l_377), g_250)), ((safe_mod_func_uint8_t_u_u(((!(*l_319)) | g_94), (safe_mul_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(((0x0AD510BEB12974DALL >= 0xAEFC5B0755153C90LL) || g_394[0]), (*g_201))) ^ p_42) >= p_41.f2) >= g_49[4][1][3].f2), 1UL)))) & 1UL)))));
                    l_407--;
                }
            }
        }
    }
    else
    { 
        int32_t *l_410 = &l_59[3][2];
        int32_t **l_411 = &g_201;
        struct S0 **l_414 = &g_64;
        int32_t l_418 = (-3L);
        int32_t l_420 = 1L;
        const uint32_t l_441 = 0x6C2B119FL;
        struct S0 l_444[5][5] = {{{0x5AF454D5774EB36DLL,0xEEL,0x1CL},{18446744073709551615UL,0x26L,0x2BL},{18446744073709551615UL,0x26L,0x2BL},{0x5AF454D5774EB36DLL,0xEEL,0x1CL},{18446744073709551615UL,0x26L,0x2BL}},{{0x8C82E6787CCAED22LL,9UL,255UL},{0x8C82E6787CCAED22LL,9UL,255UL},{0UL,0xEFL,9UL},{0x8C82E6787CCAED22LL,9UL,255UL},{0x8C82E6787CCAED22LL,9UL,255UL}},{{18446744073709551615UL,0x26L,0x2BL},{0x5AF454D5774EB36DLL,0xEEL,0x1CL},{18446744073709551615UL,0x26L,0x2BL},{18446744073709551615UL,0x26L,0x2BL},{0x5AF454D5774EB36DLL,0xEEL,0x1CL}},{{0x8C82E6787CCAED22LL,9UL,255UL},{0xC439382799945AEALL,0UL,0x46L},{0xC439382799945AEALL,0UL,0x46L},{0x8C82E6787CCAED22LL,9UL,255UL},{0xC439382799945AEALL,0UL,0x46L}},{{0x5AF454D5774EB36DLL,0xEEL,0x1CL},{0x5AF454D5774EB36DLL,0xEEL,0x1CL},{18446744073709551614UL,1UL,4UL},{0x5AF454D5774EB36DLL,0xEEL,0x1CL},{0x5AF454D5774EB36DLL,0xEEL,0x1CL}}};
        int64_t l_478 = 0x43280F156B2362DCLL;
        int32_t l_479 = 0x3D23FBD7L;
        int32_t l_480 = 0x7083E0E3L;
        int32_t l_481 = 0x8B864C37L;
        int32_t l_482 = (-4L);
        int32_t l_483 = (-1L);
        int32_t *l_546 = &l_418;
        int32_t l_552 = 0L;
        int32_t l_553 = 3L;
        int8_t *l_617 = (void*)0;
        int8_t *l_618 = &g_133[0];
        int16_t *l_627 = (void*)0;
        union U2 *l_630 = &l_93;
        struct S0 ***l_643[7];
        uint32_t *l_688 = &g_107.f0;
        const struct S0 *l_693[1];
        const struct S0 **l_692[1][3][6] = {{{&l_693[0],&l_693[0],&l_693[0],&l_693[0],&l_693[0],&l_693[0]},{&l_693[0],&l_693[0],&l_693[0],&l_693[0],&l_693[0],&l_693[0]},{&l_693[0],&l_693[0],&l_693[0],&l_693[0],&l_693[0],&l_693[0]}}};
        const struct S0 ***l_691 = &l_692[0][2][1];
        const struct S0 ****l_690 = &l_691;
        int16_t l_766 = 2L;
        int64_t l_767 = 0x29AD7311001FB11DLL;
        int32_t l_768 = 0x152A5702L;
        int32_t l_769 = (-8L);
        int32_t l_770 = 0x2F87FE10L;
        uint8_t l_797 = 0x04L;
        struct S0 l_828[2] = {{0x50B9E4BE71DDE5C2LL,247UL,0UL},{0x50B9E4BE71DDE5C2LL,247UL,0UL}};
        int16_t l_874 = (-2L);
        int32_t l_886 = (-9L);
        int8_t l_887[4] = {0x2EL,0x2EL,0x2EL,0x2EL};
        int8_t l_888[4] = {(-1L),(-1L),(-1L),(-1L)};
        union U1 *l_926 = &l_229[4];
        union U1 l_972 = {{18446744073709551607UL,0x97L,5UL}};
        int16_t l_979 = 0xC59BL;
        const union U1 l_1016 = {{0x02CB2733B66FAD41LL,247UL,0x32L}};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_643[i] = &g_63[1];
        for (i = 0; i < 1; i++)
            l_693[i] = &g_49[4][1][3];
        (*l_411) = l_410;
    }
    (*l_1127) = (**l_529);
    return p_41;
}



static struct S0  func_44(int64_t  p_45, int32_t  p_46)
{ 
    union U1 l_47 = {{18446744073709551611UL,255UL,255UL}};
    struct S0 *l_48 = &g_49[4][1][3];
    (*l_48) = (l_47 , g_16);
    return (*l_48);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_49[i][j][k].f0, "g_49[i][j][k].f0", print_hash_value);
                transparent_crc(g_49[i][j][k].f1, "g_49[i][j][k].f1", print_hash_value);
                transparent_crc(g_49[i][j][k].f2, "g_49[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_73.f0.f0, "g_73.f0.f0", print_hash_value);
    transparent_crc(g_73.f0.f1, "g_73.f0.f1", print_hash_value);
    transparent_crc(g_73.f0.f2, "g_73.f0.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_82[i][j][k], "g_82[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);

    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_394[i], "g_394[i]", print_hash_value);

    }
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_930.f0.f0, "g_930.f0.f0", print_hash_value);
    transparent_crc(g_930.f0.f1, "g_930.f0.f1", print_hash_value);
    transparent_crc(g_930.f0.f2, "g_930.f0.f2", print_hash_value);
    transparent_crc(g_956, "g_956", print_hash_value);
    transparent_crc(g_1141, "g_1141", print_hash_value);
    transparent_crc(g_1151.f0.f0, "g_1151.f0.f0", print_hash_value);
    transparent_crc(g_1151.f0.f1, "g_1151.f0.f1", print_hash_value);
    transparent_crc(g_1151.f0.f2, "g_1151.f0.f2", print_hash_value);
    transparent_crc(g_1174, "g_1174", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1333[i][j], "g_1333[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1352, "g_1352", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1403[i], "g_1403[i]", print_hash_value);

    }
    transparent_crc(g_1451, "g_1451", print_hash_value);
    transparent_crc(g_1766, "g_1766", print_hash_value);
    transparent_crc(g_1769, "g_1769", print_hash_value);
    transparent_crc(g_1814, "g_1814", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1824[i].f0.f0, "g_1824[i].f0.f0", print_hash_value);
        transparent_crc(g_1824[i].f0.f1, "g_1824[i].f0.f1", print_hash_value);
        transparent_crc(g_1824[i].f0.f2, "g_1824[i].f0.f2", print_hash_value);

    }
    transparent_crc(g_1853, "g_1853", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1904[i][j][k], "g_1904[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2090, "g_2090", print_hash_value);
    transparent_crc(g_2274, "g_2274", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2432[i][j][k].f0, "g_2432[i][j][k].f0", print_hash_value);
                transparent_crc(g_2432[i][j][k].f1, "g_2432[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_2442, "g_2442", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2477[i], "g_2477[i]", print_hash_value);

    }
    transparent_crc(g_2598.f0.f0, "g_2598.f0.f0", print_hash_value);
    transparent_crc(g_2598.f0.f1, "g_2598.f0.f1", print_hash_value);
    transparent_crc(g_2598.f0.f2, "g_2598.f0.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2617[i], "g_2617[i]", print_hash_value);

    }
    transparent_crc(g_2684, "g_2684", print_hash_value);
    transparent_crc(g_2690.f0.f0, "g_2690.f0.f0", print_hash_value);
    transparent_crc(g_2690.f0.f1, "g_2690.f0.f1", print_hash_value);
    transparent_crc(g_2690.f0.f2, "g_2690.f0.f2", print_hash_value);
    transparent_crc(g_2691, "g_2691", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2701[i], "g_2701[i]", print_hash_value);

    }
    transparent_crc(g_2850, "g_2850", print_hash_value);
    transparent_crc(g_2904.f0, "g_2904.f0", print_hash_value);
    transparent_crc(g_2904.f1, "g_2904.f1", print_hash_value);
    transparent_crc(g_3010, "g_3010", print_hash_value);
    transparent_crc(g_3022, "g_3022", print_hash_value);
    transparent_crc(g_3082, "g_3082", print_hash_value);
    transparent_crc(g_3283.f0.f0, "g_3283.f0.f0", print_hash_value);
    transparent_crc(g_3283.f0.f1, "g_3283.f0.f1", print_hash_value);
    transparent_crc(g_3283.f0.f2, "g_3283.f0.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3382[i][j], "g_3382[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_3435[i], "g_3435[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_3444[i], "g_3444[i]", print_hash_value);

    }
    transparent_crc(g_3454, "g_3454", print_hash_value);
    transparent_crc(g_3467, "g_3467", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3469[i], "g_3469[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3580[i], "g_3580[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3665[i], "g_3665[i]", print_hash_value);

    }
    transparent_crc(g_3719, "g_3719", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
