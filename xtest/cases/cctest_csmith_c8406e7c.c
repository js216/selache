// SPDX-License-Identifier: MIT
// cctest_csmith_c8406e7c.c --- cctest case csmith_c8406e7c (csmith seed 3359665788)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf38c481a */

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

// Options:   -s 3359665788 -o /tmp/csmith_gen_wrrnjkex/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

struct S1 {
   uint32_t  f0;
   uint16_t  f1;
   int64_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

union U3 {
   int8_t  f0;
   int64_t  f1;
   const int32_t  f2;
};

union U5 {
   int32_t  f0;
   uint16_t  f1;
};


static uint32_t g_12 = 0UL;
static int32_t g_20[1][3][2] = {{{8L,8L},{8L,8L},{8L,8L}}};
static uint8_t g_21 = 255UL;
static int8_t g_48[3][1][2] = {{{0L,0x2AL}},{{0x2AL,0L}},{{0x2AL,0x2AL}}};
static uint64_t g_70 = 4UL;
static struct S1 g_84 = {1UL,0x28B9L,0xDA2685807939616DLL};
static uint32_t g_86 = 0x0B5C327FL;
static struct S0 g_92 = {4L,8L,0x9BFE1A8FL};
static uint32_t g_104 = 0x9145A4F9L;
static uint32_t g_107 = 1UL;
static uint32_t g_128 = 0x281BCF51L;
static uint32_t g_161 = 0xB4D8F4AAL;
static int32_t g_162 = 0x9A2289B7L;
static union U3 g_164 = {0x49L};
static int64_t g_168[3][2] = {{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}};
static uint8_t g_169 = 8UL;
static union U5 g_199[4] = {{-2L},{-2L},{-2L},{-2L}};



static int32_t  func_1(void);
static union U3  func_2(int64_t  p_3, int32_t  p_4, uint32_t  p_5, uint32_t  p_6);
static int32_t  func_14(union U3  p_15, int32_t  p_16);
static const uint64_t  func_26(struct S0  p_27);




static int32_t  func_1(void)
{ 
    int32_t l_11 = (-9L);
    int32_t l_13 = 0xF6B3E713L;
    struct S2 l_185 = {18446744073709551615UL,0UL};
    int16_t l_204 = 0x0AC0L;
    uint32_t l_205[2];
    uint16_t l_206 = 65534UL;
    int i;
    for (i = 0; i < 2; i++)
        l_205[i] = 18446744073709551615UL;
    l_11 = (0xB3F36565L <= (func_2((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(l_11, ((g_12 | (l_11 <= g_12)) , g_12))), (-1L))), g_12, l_13, l_13) , 0x9A845578L));
    for (g_164.f0 = 16; (g_164.f0 > 26); g_164.f0 = safe_add_func_uint64_t_u_u(g_164.f0, 8))
    { 
        struct S2 l_167[5] = {{0x352EEFF2L,0x67DBE3FBL},{0x352EEFF2L,0x67DBE3FBL},{0x352EEFF2L,0x67DBE3FBL},{0x352EEFF2L,0x67DBE3FBL},{0x352EEFF2L,0x67DBE3FBL}};
        int i;
        if ((((((((-1L) || (l_11 = (l_167[4] , (0x69AB3D763EE6F0E4LL < ((g_168[0][0] ^= ((l_167[4].f1 , l_167[4].f1) || 1UL)) >= g_161))))) < g_48[0][0][0]) || (-5L)) & 0x4BC1480928FA46B6LL) && 0UL) || g_162))
        { 
            const int32_t l_186 = 6L;
            int32_t l_187 = (-9L);
            if (g_48[0][0][0])
            { 
                ++g_169;
                g_162 ^= 6L;
                if (g_12)
                    continue;
            }
            else
            { 
                return l_13;
            }
            g_162 = ((safe_sub_func_int64_t_s_s(1L, ((((!(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_187 = (safe_mul_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((l_185 , (g_164 , ((l_167[4].f0 | l_186) , g_84.f0))), l_167[4].f0)) , g_70) != g_48[0][0][0]), g_162))), g_20[0][1][1])), 2)), 14)) , 3UL) < l_167[4].f0)) > 0xC55D5BA149CD5C75LL) >= l_13) != l_13))) && g_84.f2);
        }
        else
        { 
            uint64_t l_188 = 0x4B1711A83D060D73LL;
            return l_188;
        }
    }
    l_185 = ((safe_mul_func_int16_t_s_s(((g_199[0].f1 = (((safe_sub_func_uint32_t_u_u(0UL, ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((g_199[0] , (((safe_mod_func_int64_t_s_s(g_48[0][0][0], (safe_mul_func_uint8_t_u_u(((0x09L != l_185.f0) | 3UL), 255UL)))) > g_199[0].f1) > l_204)) > 0xF8E475CC96602D58LL), 5)), g_84.f2)), g_84.f2)) < g_70))) >= l_185.f1) | l_185.f1)) <= l_205[1]), l_206)) , l_185);
    return g_86;
}



static union U3  func_2(int64_t  p_3, int32_t  p_4, uint32_t  p_5, uint32_t  p_6)
{ 
    union U3 l_17 = {-7L};
    int32_t l_163 = (-1L);
    g_162 = func_14(l_17, (safe_mul_func_uint8_t_u_u(l_17.f0, (((l_17.f0 <= l_17.f0) == 1L) <= l_17.f0))));
    l_163 = l_17.f0;
    return g_164;
}



static int32_t  func_14(union U3  p_15, int32_t  p_16)
{ 
    uint16_t l_25 = 1UL;
    int32_t l_110[5][1];
    int32_t l_127[5] = {0xFC1C174CL,0xFC1C174CL,0xFC1C174CL,0xFC1C174CL,0xFC1C174CL};
    uint32_t l_154[2][5] = {{0xAEB3B6C1L,0xAEB3B6C1L,0xAEB3B6C1L,0xAEB3B6C1L,0xAEB3B6C1L},{0xCB09B1B0L,4294967295UL,0xCB09B1B0L,4294967295UL,0xCB09B1B0L}};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_110[i][j] = 4L;
    }
    g_21--;
    if (p_16)
    { 
        struct S0 l_28 = {-1L,-1L,4294967295UL};
        if ((l_110[4][0] = ((((((safe_unary_minus_func_uint32_t_u(l_25)) != 0x5243L) , (p_16 != func_26(l_28))) ^ p_16) ^ g_86) != g_20[0][1][0])))
        { 
            uint64_t l_111 = 0xD9AC2FE1997BD6D7LL;
            int32_t l_112 = 0x7A549A7EL;
            l_112 = l_111;
            g_128 = (safe_sub_func_uint16_t_u_u(g_21, (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((g_84.f1 ^= g_104) ^ ((safe_sub_func_uint8_t_u_u((l_110[3][0] = (l_127[1] ^= (safe_div_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u(((-1L) <= (l_111 & l_110[4][0])), 1)) > 0xEC43L), g_92.f1)) >= l_110[4][0]), l_28.f0)))), l_25)) == 0xC5L)) , l_28.f2), l_25)), p_16))));
        }
        else
        { 
            for (l_25 = 1; (l_25 == 4); l_25++)
            { 
                return p_15.f0;
            }
            for (p_15.f1 = (-17); (p_15.f1 >= 10); p_15.f1 = safe_add_func_int32_t_s_s(p_15.f1, 6))
            { 
                if (g_107)
                    break;
                return g_84.f0;
            }
        }
    }
    else
    { 
        uint64_t l_138 = 0x8A72D5F9F679CEDCLL;
        int32_t l_145[3];
        int i;
        for (i = 0; i < 3; i++)
            l_145[i] = 6L;
        for (g_84.f1 = 0; (g_84.f1 <= 0); g_84.f1 += 1)
        { 
            int i;
            if (l_127[(g_84.f1 + 1)])
                break;
            for (g_104 = 0; (g_104 <= 0); g_104 += 1)
            { 
                int i, j;
                l_110[(g_104 + 2)][g_84.f1] = ((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((~(l_138 | ((safe_add_func_uint64_t_u_u(((((safe_add_func_uint64_t_u_u((p_16 , (g_70--)), g_92.f2)) & ((l_127[(g_84.f1 + 1)] &= 0x0EL) > 0x90L)) ^ 0xFFL) > 9UL), 0xCCE49B202198C401LL)) , 0x4B4BL))) | l_145[2]), 11)), g_20[0][1][0])) | 0x09B2EA33L);
            }
            if (l_127[0])
                break;
            for (g_92.f2 = 0; (g_92.f2 <= 0); g_92.f2 += 1)
            { 
                return p_15.f0;
            }
        }
    }
    g_161 &= (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(l_154[0][2], 9)) != (safe_mod_func_int64_t_s_s((0xE392L & (9UL > (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((p_16 > p_15.f0) < 1L), 0xB6L)), g_21)))), 1UL))), g_48[0][0][0])), 0x5AL)), g_107));
    return g_21;
}



static const uint64_t  func_26(struct S0  p_27)
{ 
    const union U3 l_41 = {-6L};
    int32_t l_47[1];
    union U5 l_64 = {0xFE6B3E96L};
    int i;
    for (i = 0; i < 1; i++)
        l_47[i] = 0x3AC16B40L;
    g_48[0][0][0] = (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((l_41 , (safe_div_func_uint64_t_u_u((g_12 && (safe_sub_func_uint8_t_u_u(((~(9L < (l_47[0] = l_41.f0))) && p_27.f2), p_27.f0))), 0x646899DB2213AABDLL))) | 0x10C33490L), g_20[0][1][1])), 0xE8AFL)) > (-1L)), l_41.f0)) <= l_41.f0) & 1UL), g_12)), l_41.f0)), 65529UL));
    for (p_27.f2 = (-26); (p_27.f2 != 19); p_27.f2 = safe_add_func_int8_t_s_s(p_27.f2, 3))
    { 
        uint32_t l_55 = 0xA86D6A6CL;
        int32_t l_71 = 0x75E77332L;
        struct S1 l_83 = {0x894124F9L,4UL,0x0253A1071FCCBB7ALL};
        int32_t l_105 = 1L;
        int32_t l_106[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_106[i][j] = 0x63B3A314L;
        }
        if ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((g_20[0][1][1] != (l_55++)), (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((g_48[2][0][0] = (safe_lshift_func_int8_t_s_u((l_64 , 0xA7L), 5))), ((!((safe_rshift_func_uint16_t_u_u((g_70 = (((safe_mul_func_uint8_t_u_u(4UL, 0x28L)) && l_47[0]) ^ 0xA000C971708C9934LL)), l_64.f0)) ^ l_71)) < p_27.f2))), p_27.f0)))), g_20[0][1][0])))
        { 
            int16_t l_78 = 0x2A22L;
            int32_t l_79 = 1L;
            for (l_71 = 19; (l_71 <= (-26)); l_71 = safe_sub_func_uint32_t_u_u(l_71, 5))
            { 
                if (g_48[2][0][1])
                    break;
            }
            l_79 = (safe_sub_func_uint32_t_u_u(g_48[2][0][1], (l_64 , (safe_mod_func_uint32_t_u_u(l_64.f0, l_78)))));
            for (l_78 = 16; (l_78 >= 23); l_78++)
            { 
                struct S2 l_82 = {18446744073709551615UL,0x6F2FC99FL};
                l_82 = l_82;
            }
        }
        else
        { 
            struct S1 l_85 = {0x418E4AA2L,9UL,1L};
            struct S0 l_91 = {0L,0xE344E30AL,4294967290UL};
            l_85 = (g_84 = l_83);
            l_71 ^= (g_86 || ((-10L) && (((safe_lshift_func_int16_t_s_u(g_84.f0, (g_84.f1 = (p_27.f1 & g_70)))) && 0x4E7E319870F1E569LL) >= l_85.f2)));
            for (p_27.f0 = 0; (p_27.f0 < (-13)); --p_27.f0)
            { 
                const int64_t l_103 = 8L;
                if (p_27.f0)
                    break;
                g_92 = l_91;
                l_64.f0 = (safe_div_func_uint8_t_u_u(0xF8L, (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((((((g_48[1][0][0] <= l_85.f2) , ((g_92.f0 ^ l_103) == p_27.f2)) , g_20[0][1][1]) & g_92.f0) | g_20[0][1][1]) >= g_104) != 0x2C8AC77275A216BALL), p_27.f1)), g_48[0][0][0])), l_47[0])), g_21))));
            }
        }
        g_107--;
    }
    return g_84.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_20[i][j][k], "g_20[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_48[i][j][k], "g_48[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_164.f0, "g_164.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_168[i][j], "g_168[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_199[i].f1, "g_199[i].f1", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
