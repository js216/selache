// SPDX-License-Identifier: MIT
// cctest_csmith_90519111.c --- cctest case csmith_90519111 (csmith seed 2421264657)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x100c636c */

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

// Options:   -s 2421264657 -o /tmp/csmith_gen_lcfb1q6x/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint64_t  f0;
   uint64_t  f1;
};

struct S1 {
   uint32_t  f0;
};

union U2 {
   int64_t  f0;
   int32_t  f1;
};

union U3 {
   uint8_t  f0;
   uint8_t  f1;
};

union U4 {
   uint16_t  f0;
   int64_t  f1;
};


static uint8_t g_11 = 0x97L;
static union U3 g_17 = {0x3EL};
static struct S0 g_21 = {0UL,18446744073709551615UL};
static uint32_t g_46 = 0xA8726ABEL;
static uint16_t g_51 = 0xFF5FL;
static int64_t g_58 = 0L;
static int8_t g_101 = 0L;
static struct S1 g_126 = {18446744073709551615UL};
static uint32_t g_133[1][1][2] = {{{0x4C7D6E71L,0x4C7D6E71L}}};
static int32_t g_158 = 0xB801CBC8L;
static int8_t g_163[4][5] = {{(-2L),0x9EL,(-3L),(-2L),0x82L},{0xACL,(-2L),(-1L),(-2L),0xACL},{(-3L),0xD6L,0x9EL,0x82L,0xD6L},{0xACL,0x9EL,0x9EL,0xACL,0x82L}};
static int32_t g_165 = 1L;
static uint16_t g_166 = 0x1F2AL;
static int32_t g_198 = (-3L);
static int32_t g_209 = 0x0889FC68L;
static uint64_t g_222[4][1] = {{0UL},{0UL},{0UL},{0UL}};
static uint64_t g_229[2][4] = {{0x41B5795B1210621FLL,0x41B5795B1210621FLL,0x41B5795B1210621FLL,0x41B5795B1210621FLL},{0x41B5795B1210621FLL,0x41B5795B1210621FLL,0x41B5795B1210621FLL,0x41B5795B1210621FLL}};
static union U2 g_236[3][5][4] = {{{{0x069C672CBD4892DCLL},{0x069C672CBD4892DCLL},{0xC9AE339B050142BCLL},{0x069C672CBD4892DCLL}},{{0x069C672CBD4892DCLL},{0L},{0L},{0x069C672CBD4892DCLL}},{{0L},{0x069C672CBD4892DCLL},{0L},{0L}},{{0L},{0L},{0x069C672CBD4892DCLL},{0L}},{{0L},{0xC9AE339B050142BCLL},{0xC9AE339B050142BCLL},{0L}}},{{{0xC9AE339B050142BCLL},{0L},{0xC9AE339B050142BCLL},{0xC9AE339B050142BCLL}},{{0L},{0L},{0x069C672CBD4892DCLL},{0L}},{{0L},{0xC9AE339B050142BCLL},{0xC9AE339B050142BCLL},{0L}},{{0xC9AE339B050142BCLL},{0L},{0xC9AE339B050142BCLL},{0xC9AE339B050142BCLL}},{{0L},{0L},{0x069C672CBD4892DCLL},{0L}}},{{{0L},{0xC9AE339B050142BCLL},{0xC9AE339B050142BCLL},{0L}},{{0xC9AE339B050142BCLL},{0L},{0xC9AE339B050142BCLL},{0xC9AE339B050142BCLL}},{{0L},{0L},{0x069C672CBD4892DCLL},{0L}},{{0L},{0xC9AE339B050142BCLL},{0xC9AE339B050142BCLL},{0L}},{{0xC9AE339B050142BCLL},{0L},{0xC9AE339B050142BCLL},{0xC9AE339B050142BCLL}}}};
static int32_t g_284 = 1L;
static uint8_t g_285[4][1][5] = {{{0x12L,0x12L,0UL,0UL,0x12L}},{{6UL,0x42L,6UL,0x42L,6UL}},{{0x12L,0UL,0UL,0x12L,0x12L}},{{0x00L,0x42L,0x00L,0x42L,0x00L}}};
static int64_t g_309 = 0xA6F946EF15EC3500LL;



static int32_t  func_1(void);
static struct S0  func_5(uint32_t  p_6, struct S0  p_7, uint32_t  p_8, uint8_t  p_9, uint32_t  p_10);
static struct S0  func_12(union U3  p_13, int32_t  p_14, union U2  p_15, int8_t  p_16);
static uint32_t  func_25(union U3  p_26, uint32_t  p_27, uint64_t  p_28, struct S0  p_29);




static int32_t  func_1(void)
{ 
    int32_t l_4 = (-2L);
    union U2 l_18 = {0xF889E022A5BC4220LL};
    uint8_t l_23 = 0x10L;
    union U3 l_230[5][3][2] = {{{{0x5DL},{1UL}},{{1UL},{255UL}},{{0UL},{0x60L}}},{{{255UL},{0x60L}},{{0UL},{255UL}},{{1UL},{1UL}}},{{{0x5DL},{249UL}},{{0UL},{0x04L}},{{249UL},{0x60L}}},{{{0x4BL},{249UL}},{{1UL},{0x5DL}},{{1UL},{249UL}}},{{{0x4BL},{0x60L}},{{249UL},{0x04L}},{{0UL},{249UL}}}};
    union U4 l_249 = {65535UL};
    int32_t l_279[3];
    int8_t l_281 = 0xF7L;
    uint16_t l_318[3];
    struct S1 l_389 = {0x2EF0FFA9L};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_279[i] = 0xE0E4D524L;
    for (i = 0; i < 3; i++)
        l_318[i] = 0xDC77L;
    if ((((safe_sub_func_uint32_t_u_u((l_4 , (func_5(g_11, func_12(g_17, g_17.f0, l_18, l_18.f1), l_23, g_21.f0, g_21.f0) , l_18.f0)), g_165)) <= (-4L)) < g_163[0][3]))
    { 
        uint32_t l_207 = 0x4A5956B6L;
        int32_t l_214 = 0x089B8EC4L;
        int8_t l_215 = (-1L);
        for (l_23 = 0; (l_23 <= 11); l_23 = safe_add_func_int8_t_s_s(l_23, 5))
        { 
            uint64_t l_216[5][5] = {{18446744073709551609UL,0x0B35E963BA376BEBLL,18446744073709551609UL,18446744073709551609UL,0x0B35E963BA376BEBLL},{4UL,3UL,3UL,4UL,3UL},{0x0B35E963BA376BEBLL,0x0B35E963BA376BEBLL,18446744073709551610UL,0x0B35E963BA376BEBLL,0x0B35E963BA376BEBLL},{3UL,4UL,3UL,3UL,4UL},{0x0B35E963BA376BEBLL,18446744073709551609UL,18446744073709551609UL,0x0B35E963BA376BEBLL,18446744073709551609UL}};
            int32_t l_221 = 0x9EF08FD1L;
            int i, j;
            for (g_17.f0 = 4; (g_17.f0 >= 36); g_17.f0 = safe_add_func_int8_t_s_s(g_17.f0, 1))
            { 
                const uint64_t l_208 = 0x22DFB8A6804FA82FLL;
                g_198 ^= g_158;
                l_18.f1 = (((safe_mul_func_int8_t_s_s(0x58L, ((safe_unary_minus_func_uint8_t_u((!(safe_mod_func_int64_t_s_s(1L, 0xE1FE0044E9B0027CLL))))) <= (((((((safe_div_func_uint32_t_u_u(l_207, l_208)) <= l_208) != l_208) >= 0x215DL) , g_209) < l_4) & g_101)))) == l_208) ^ 0x48L);
            }
            if (((l_216[3][1] = (l_215 = (l_23 != (((l_207 != ((safe_rshift_func_int8_t_s_u(l_207, (safe_mod_func_uint8_t_u_u(((l_214 = g_198) <= 0xA664L), g_163[3][4])))) >= 65532UL)) ^ g_51) != g_17.f0)))) >= 18446744073709551611UL))
            { 
                uint32_t l_217 = 0xF6A2AC77L;
                l_217++;
                g_126 = g_126;
                l_18.f1 ^= (g_158 != ((((g_58 != g_163[1][2]) , l_217) , g_17.f1) && 0UL));
            }
            else
            { 
                int8_t l_220 = 0x22L;
                ++g_222[1][0];
            }
        }
        if (((safe_sub_func_int64_t_s_s((((g_21.f1 = g_209) , (safe_mod_func_uint64_t_u_u(l_207, (g_222[3][0] |= (g_163[0][3] < ((-9L) || l_215)))))) > 0xB8L), l_18.f1)) < l_23))
        { 
            const int8_t l_231[3] = {4L,4L,4L};
            int32_t l_237 = 0xF659E5E0L;
            int i;
            l_214 ^= ((((((g_229[0][2] = (0xE1426F25L || g_133[0][0][0])) && (g_126.f0 , (l_230[3][2][1] , 0x984CL))) , l_231[0]) , 0xC453L) == g_133[0][0][0]) >= l_231[0]);
            l_237 = (((safe_mod_func_uint64_t_u_u(l_23, l_215)) & l_231[0]) ^ ((((((g_236[2][2][3] , (-8L)) | g_163[2][3]) <= l_207) >= g_198) & g_46) ^ 0UL));
        }
        else
        { 
            int64_t l_240 = (-1L);
            int32_t l_263[5][3][5] = {{{(-3L),0x62AB164AL,1L,0L,0xD12BE0C6L},{0x2AABA8EBL,0xD12BE0C6L,9L,9L,0xD12BE0C6L},{(-5L),7L,1L,5L,9L}},{{0x73300B03L,5L,0x08EE9788L,(-5L),0x541C6466L},{1L,(-3L),7L,9L,0x62AB164AL},{0x73300B03L,1L,9L,0x73300B03L,(-1L)}},{{(-5L),0L,0x08EE9788L,(-3L),(-3L)},{0x2AABA8EBL,0L,0x2AABA8EBL,(-1L),0x73300B03L},{(-3L),1L,(-1L),0x62AB164AL,9L}},{{0x62AB164AL,(-3L),1L,0x541C6466L,(-5L)},{0x2AABA8EBL,5L,(-1L),9L,5L},{5L,7L,0x2AABA8EBL,0xD12BE0C6L,9L}},{{0L,0xD12BE0C6L,0x08EE9788L,0xD12BE0C6L,0L},{7L,0x2AABA8EBL,1L,0L,0xB1052B52L},{7L,1L,0x08EE9788L,7L,0x4DCBCBF5L}}};
            int i, j, k;
            for (g_158 = 7; (g_158 < 18); g_158 = safe_add_func_uint64_t_u_u(g_158, 4))
            { 
                return l_240;
            }
            if ((((g_21.f1 && (safe_mod_func_uint64_t_u_u(g_209, (safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_158, (g_101 != 0x106AL))), 0x668E61B92BA6CF05LL)), g_163[0][3]))))) ^ (-9L)) == l_214))
            { 
                uint16_t l_266 = 65528UL;
                l_214 = ((l_249 , (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s((((g_236[2][2][3].f1 != (0xB96F8895823D9D43LL || (safe_add_func_int16_t_s_s(g_21.f1, 0UL)))) ^ g_101) , (-2L)), 0x7758L)))), 2L))) <= g_209);
                l_214 ^= g_158;
                g_158 |= (safe_sub_func_uint16_t_u_u(l_207, (safe_add_func_uint64_t_u_u(((((safe_sub_func_int16_t_s_s((g_46 || ((g_17.f1--) || g_51)), ((l_207 != l_240) ^ g_46))) ^ g_229[0][2]) <= l_266) == l_23), 2UL))));
            }
            else
            { 
                uint16_t l_278[4][2];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_278[i][j] = 65531UL;
                }
                g_158 ^= g_222[2][0];
                g_158 = (safe_div_func_uint16_t_u_u((((!(0xE6DED1B19E4E2A6ALL && (((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(l_214, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((l_263[1][0][2] < l_240) < 0xFCL), 4)), 0)))) != l_278[3][1]) != g_46) <= l_278[3][1]), 15)) & 0x37144D6AL) , 0UL))) , g_222[1][0]) <= g_236[2][2][3].f1), l_214));
                return g_165;
            }
        }
    }
    else
    { 
        int64_t l_280 = 0xF6CDE482A85E6C29LL;
        int32_t l_282 = 0x6A13217AL;
        int32_t l_283 = 0L;
        int32_t l_296 = (-7L);
        ++g_285[1][0][2];
        l_296 &= (l_283 = ((((l_282 |= ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_280, 15)), (safe_lshift_func_int16_t_s_u(l_283, (((safe_lshift_func_int8_t_s_s(l_279[2], 6)) | (((0xA586F34C10F2D454LL ^ g_229[0][2]) == g_133[0][0][1]) | 0x5F2836864C590541LL)) != g_165))))) , l_280)) & 0x54L) , 0x3F60L) && (-2L)));
        l_283 = (((((((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((1L & l_281), 0xBFL)), l_282)), l_279[0])) , g_285[1][0][2]), l_282)), g_236[2][2][3].f0)), g_158)) == g_309) != l_282) || (-1L)) && g_285[3][0][3]) > 6UL) & 0x4B2AL) < g_101) != 6UL);
    }
    if ((l_4 = ((((safe_lshift_func_uint8_t_u_s(g_133[0][0][0], 5)) , 0x7C95L) & (l_281 > (safe_div_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(g_285[1][0][2], g_198)), g_229[1][0])) > l_249.f0), l_318[1])))) , g_209)))
    { 
        uint16_t l_333 = 65534UL;
        int32_t l_360 = 9L;
        struct S1 l_371 = {0x9474D827L};
        for (g_17.f1 = 3; (g_17.f1 < 49); g_17.f1 = safe_add_func_uint16_t_u_u(g_17.f1, 4))
        { 
            for (g_126.f0 = 7; (g_126.f0 > 20); ++g_126.f0)
            { 
                return l_281;
            }
        }
        if ((l_4 = (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_4, (safe_sub_func_int64_t_s_s((g_229[0][2] , (safe_sub_func_int32_t_s_s((l_279[0] &= (0x58420658B8F4D61ALL <= ((0xCAL | l_333) | l_333))), l_18.f1))), g_158)))), l_333)), g_285[3][0][0]))))
        { 
            int32_t l_336 = 0x1D9A2B6CL;
            struct S1 l_343 = {0UL};
            int32_t l_361 = (-7L);
            if (((safe_mul_func_int16_t_s_s((l_336 = g_51), (safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s(g_222[1][0], (safe_rshift_func_uint8_t_u_u(((1UL & (g_17.f0 == 0L)) > l_333), 0)))), g_126.f0)))) , 0x9687AAEBL))
            { 
                struct S1 l_344[4] = {{0x359F1E09L},{0x359F1E09L},{0x359F1E09L},{0x359F1E09L}};
                int i;
                l_343 = g_126;
                l_344[3] = (g_126 = g_126);
            }
            else
            { 
                int16_t l_359 = 0x79E8L;
                int32_t l_362 = 0xC2925DAAL;
                g_126 = l_343;
                l_362 = (((((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_360 = (((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s((0UL ^ ((safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((((g_222[1][0] & g_11) & (l_359 ^ g_209)) == 0UL), 0xD266B7CBL)), 0)) & 0x6190955EL) & l_359), g_133[0][0][0])) && g_236[2][2][3].f1)), 1)) , l_318[2]) | l_318[1]), l_359)) > l_336) == 65528UL)), 2)), l_359)) && l_361) && g_46) && 0x59BAL) | g_46) , l_318[2]) && l_333);
            }
            if ((g_236[2][2][3].f1 &= (l_360 || (safe_add_func_int16_t_s_s(((g_285[3][0][4] = l_360) < ((((0xCFL | (g_17.f0 = (safe_mod_func_uint32_t_u_u(((0xCCL <= l_360) < l_361), l_279[0])))) , l_336) || 0xAFL) == 1L)), g_166)))))
            { 
                return g_163[0][3];
            }
            else
            { 
                uint32_t l_369 = 0x59DEBC2BL;
                struct S1 l_370 = {0x6661C088L};
                l_371 = (g_126 = (l_370 = (((safe_div_func_uint8_t_u_u((l_336 || ((((((((l_361 = ((0xDEL ^ (g_284 ^ (-4L))) , l_369)) & l_336) == 248UL) || l_369) , g_166) , 0x42L) & (-1L)) <= g_126.f0)), 0x0DL)) > g_11) , g_126)));
                g_126 = g_126;
                g_236[2][2][3].f1 &= (g_126 , 0x5647761DL);
            }
        }
        else
        { 
            uint64_t l_382 = 1UL;
            l_18.f1 = (((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((g_209 > 0UL) && (g_51 < (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_382, g_309)), l_382)))), g_133[0][0][1])), l_230[3][2][1].f0)), l_333)) || l_281) > (-1L));
        }
    }
    else
    { 
        int8_t l_390 = 2L;
        int32_t l_401 = 0x33D54592L;
        if ((func_12(g_17, (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_4 == (g_46 = ((g_163[0][1] >= (l_389 , g_229[1][2])) <= (-8L)))), l_18.f1)), g_163[0][3])), g_229[0][2])), l_18, l_390) , 0x726DD106L))
        { 
            uint32_t l_395 = 0x34EC1C7CL;
            if (((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((l_395 > (0x5D67176CL == ((((((g_51 = (((g_166 &= (safe_add_func_int8_t_s_s(((l_389.f0 < l_390) | 0xB201L), g_209))) < g_158) < 0x74A0L)) == l_395) & 7L) && g_222[3][0]) != l_395) >= l_390))), g_236[2][2][3].f1)), 9)) > 0xE035L))
            { 
                struct S1 l_398[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
                int i;
                g_236[2][2][3].f1 = 4L;
                g_126 = l_398[0];
                g_126 = ((l_401 = (safe_div_func_uint64_t_u_u((l_390 && ((l_390 <= g_165) && 0x1A3AA215L)), l_398[0].f0))) , l_398[4]);
            }
            else
            { 
                return l_395;
            }
        }
        else
        { 
            int32_t l_408 = 1L;
            for (g_101 = 2; (g_101 >= 0); g_101 -= 1)
            { 
                uint64_t l_416 = 0x6E8BCC63CCAE71D0LL;
                int i;
                g_236[2][2][3].f1 |= ((safe_mod_func_uint64_t_u_u(((((((((l_318[g_101] || (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(l_279[g_101], (l_408 = g_222[0][0]))), (safe_lshift_func_uint8_t_u_s(((!(safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(l_416, 9)) | g_17.f0) | l_401), 6))) == g_222[0][0]), 1))))) != 0x1E3BC394L) | l_279[g_101]) ^ 0xB9EBL) <= g_158) || 0L) ^ l_279[0]) && 0L), 0xD6819490D06F9413LL)) < g_166);
            }
            l_401 = 0x21D15DC8L;
        }
    }
    return l_230[3][2][1].f1;
}



static struct S0  func_5(uint32_t  p_6, struct S0  p_7, uint32_t  p_8, uint8_t  p_9, uint32_t  p_10)
{ 
    int16_t l_24[3][5] = {{0xF793L,9L,(-9L),9L,0xF793L},{0xF793L,9L,(-9L),9L,0xF793L},{0xF793L,9L,(-9L),9L,0xF793L}};
    int32_t l_33 = (-4L);
    struct S0 l_34 = {0UL,0x31EC8E12B6A36042LL};
    int32_t l_82 = 0x0D489CA1L;
    struct S1 l_104 = {0xCAC47384L};
    int64_t l_132 = (-6L);
    const union U2 l_187 = {0L};
    int i, j;
    if ((l_82 = (l_24[0][3] && ((func_25(g_17, ((l_33 ^= ((safe_rshift_func_int8_t_s_s((~(0xD2570D9780293238LL < (g_21.f1 |= 0x00D1A0C844FC37F2LL))), g_17.f0)) && g_17.f0)) != 0x78317D23L), l_24[1][4], l_34) ^ l_34.f1) , l_34.f1))))
    { 
        return l_34;
    }
    else
    { 
        struct S0 l_90 = {0x5E3015D2C3574787LL,0xBDB463C3EAA4BB8CLL};
        int32_t l_125 = 0L;
        for (g_17.f1 = 0; (g_17.f1 != 50); g_17.f1 = safe_add_func_uint8_t_u_u(g_17.f1, 1))
        { 
            int32_t l_85 = 1L;
            if (((l_85 < (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(g_21.f1, 5)), (g_11 & (l_85 || g_58)))) <= p_7.f1) && p_6)) <= l_85))
            { 
                return l_90;
            }
            else
            { 
                int16_t l_91 = (-1L);
                l_91 = l_90.f0;
            }
            g_101 |= ((safe_lshift_func_int8_t_s_s((-1L), (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((l_82 && (!g_21.f1)), (safe_add_func_uint64_t_u_u(0x913F082F4DE99E49LL, p_7.f0)))), p_7.f1)))) ^ 0L);
            if (l_90.f0)
                break;
        }
        if ((safe_add_func_int16_t_s_s(l_33, (l_104 , (g_21.f1 < (g_58 < g_21.f1))))))
        { 
            uint8_t l_107 = 3UL;
            l_107++;
            l_125 = (~((safe_add_func_int8_t_s_s((-1L), ((safe_add_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(g_101, ((safe_mod_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((p_7.f0 == (p_7.f1 && 0L)), 0x84AEL)) > 4294967295UL), l_107)) & g_101) == l_107), 0x85L)) != l_90.f0))) && 0x66DA98BAAD8DB6A5LL) && g_11), 1UL)) == l_107))) | l_24[0][4]));
            l_104 = (g_126 = g_126);
        }
        else
        { 
            for (g_51 = (-18); (g_51 == 14); g_51++)
            { 
                int32_t l_129 = 0L;
                if (l_129)
                    break;
            }
        }
    }
    l_82 ^= (l_33 |= ((safe_rshift_func_int16_t_s_u(l_132, g_126.f0)) , (g_133[0][0][1] = (g_101 < (-1L)))));
    if ((safe_rshift_func_int8_t_s_u((-7L), l_34.f0)))
    { 
        uint16_t l_150 = 0xF064L;
        int32_t l_151 = 0x9C2F3C20L;
        int32_t l_164 = 0x447BDB70L;
        l_151 |= ((safe_rshift_func_int8_t_s_u((-1L), 5)) | (safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(g_17.f1, ((((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s(p_8, ((((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_82 = ((p_6 == l_34.f1) && p_6)), l_150)), 1L)) || 4294967291UL) , l_150) || p_6))), p_6)) & g_58) >= 0xA2L) >= l_150))), p_7.f0)));
        l_151 &= (safe_add_func_int16_t_s_s((g_17.f1 < l_24[0][4]), p_7.f0));
        if ((g_158 = (g_58 || ((safe_mod_func_int8_t_s_s(0x8CL, (g_11 = (((g_51 = ((safe_lshift_func_uint8_t_u_u(((l_33 = (g_46 , g_133[0][0][0])) & p_7.f0), 2)) , p_7.f0)) || g_126.f0) | g_101)))) > 7L))))
        { 
            return p_7;
        }
        else
        { 
            int8_t l_159[2][3] = {{0x95L,0x95L,0x38L},{0x95L,0x95L,0x38L}};
            int32_t l_160 = 1L;
            int32_t l_161 = (-9L);
            int32_t l_162 = (-10L);
            uint32_t l_171[2][4][3] = {{{4294967295UL,4294967295UL,0xD09DF1B6L},{4294967295UL,4294967295UL,4294967295UL},{0xD09DF1B6L,4294967295UL,1UL},{1UL,4294967295UL,0x9F75E263L}},{{0xD09DF1B6L,0xD09DF1B6L,0x9F75E263L},{4294967295UL,1UL,1UL},{4294967295UL,0xD09DF1B6L,4294967295UL},{4294967295UL,4294967295UL,0xD09DF1B6L}}};
            int i, j, k;
            ++g_166;
            if ((g_158 = (l_34 , (g_51 >= (-1L)))))
            { 
                uint32_t l_178[3][5] = {{0x5E417620L,0x5E417620L,0x665C64D3L,0x5E417620L,0x5E417620L},{0xEF34DD4FL,0x5E417620L,0xEF34DD4FL,0xEF34DD4FL,0x5E417620L},{0x5E417620L,0xEF34DD4FL,0xEF34DD4FL,0x5E417620L,0xEF34DD4FL}};
                int i, j;
                l_164 = l_164;
                g_158 = (safe_div_func_int8_t_s_s((((l_171[1][0][2] != (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x2CD0L, 6)), (safe_mul_func_uint8_t_u_u((0xC2C0C57DL ^ l_178[1][0]), g_133[0][0][1]))))) != p_6) ^ 0x8CD3L), g_17.f0));
            }
            else
            { 
                uint32_t l_181[2][3][5] = {{{0x59394A59L,0x80C45E75L,0UL,0x80C45E75L,0x59394A59L},{0x59394A59L,0x80C45E75L,0UL,0x80C45E75L,0x59394A59L},{0x59394A59L,0x80C45E75L,0UL,0x80C45E75L,0x59394A59L}},{{0x59394A59L,0x80C45E75L,0UL,0x80C45E75L,0x59394A59L},{0x59394A59L,0x80C45E75L,0UL,0x80C45E75L,0x59394A59L},{0x59394A59L,0x80C45E75L,0UL,0x80C45E75L,0x59394A59L}}};
                int i, j, k;
                l_162 = ((safe_add_func_int8_t_s_s(l_181[0][2][2], 1L)) , (safe_mul_func_int16_t_s_s(l_151, ((g_126 , l_159[1][2]) == l_171[1][0][2]))));
                return p_7;
            }
        }
    }
    else
    { 
        struct S1 l_188 = {0xA6F6BFB3L};
        int32_t l_191 = 0x3FF8919AL;
        if (((+(((g_163[1][4] , p_8) ^ ((safe_mul_func_uint16_t_u_u(0x47A6L, (((l_187 , g_166) < g_165) > 0x18137C7680494BA7LL))) || 4294967295UL)) , 4UL)) ^ g_163[0][3]))
        { 
            l_188 = l_188;
        }
        else
        { 
            l_191 = (safe_lshift_func_int8_t_s_u(l_82, 1));
        }
        for (p_7.f1 = 0; (p_7.f1 < 37); p_7.f1 = safe_add_func_uint64_t_u_u(p_7.f1, 7))
        { 
            l_104 = l_104;
        }
    }
    return p_7;
}



static struct S0  func_12(union U3  p_13, int32_t  p_14, union U2  p_15, int8_t  p_16)
{ 
    struct S0 l_22[2] = {{0x0CADFB1AF9D66DE6LL,0x9338886A6C65B0B5LL},{0x0CADFB1AF9D66DE6LL,0x9338886A6C65B0B5LL}};
    int i;
    for (p_13.f1 = 8; (p_13.f1 > 19); p_13.f1 = safe_add_func_uint8_t_u_u(p_13.f1, 7))
    { 
        return g_21;
    }
    return l_22[1];
}



static uint32_t  func_25(union U3  p_26, uint32_t  p_27, uint64_t  p_28, struct S0  p_29)
{ 
    union U3 l_41 = {0xDDL};
    union U2 l_42 = {0x4457C1B23FE29831LL};
    int32_t l_78 = (-10L);
    if ((safe_lshift_func_int16_t_s_u((((((safe_mod_func_uint8_t_u_u((((((0x1930L || (safe_lshift_func_uint16_t_u_u((l_41 , ((l_42 = l_42) , ((safe_unary_minus_func_int64_t_s(((((safe_rshift_func_int16_t_s_u(l_42.f0, 11)) || p_29.f0) && 0x4DL) && l_41.f1))) == 0x96L))), 11))) & g_17.f1) | g_11) >= 0UL) && p_27), 7L)) <= p_28) , p_26.f0) < p_29.f0) <= 0x78FF5F6FL), 9)))
    { 
        g_46--;
        for (l_42.f1 = 0; (l_42.f1 < 1); l_42.f1 = safe_add_func_uint64_t_u_u(l_42.f1, 9))
        { 
            g_51++;
        }
    }
    else
    { 
        uint16_t l_54 = 0xEA67L;
        int32_t l_57[5][1][2] = {{{0L,0L}},{{0L,0L}},{{0L,0L}},{{0L,0L}},{{0L,0L}}};
        uint32_t l_59[4][1][5] = {{{1UL,1UL,1UL,1UL,1UL}},{{0xF595C982L,1UL,0xF595C982L,0xF595C982L,1UL}},{{1UL,0xF595C982L,0xF595C982L,1UL,0xF595C982L}},{{1UL,1UL,1UL,1UL,1UL}}};
        int i, j, k;
        l_54--;
        --l_59[3][0][1];
    }
    for (p_29.f1 = 0; (p_29.f1 != 35); p_29.f1 = safe_add_func_uint32_t_u_u(p_29.f1, 5))
    { 
        int8_t l_77 = 0xCCL;
        uint64_t l_79 = 18446744073709551615UL;
        int32_t l_80 = 0L;
        uint64_t l_81[1];
        int i;
        for (i = 0; i < 1; i++)
            l_81[i] = 9UL;
        l_42.f1 = ((!((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((p_27 < (((l_80 ^= (g_58 = (safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((((((((safe_rshift_func_uint16_t_u_s(l_42.f1, (l_78 = (l_42.f1 != l_77)))) != g_21.f0) | l_77) ^ 1UL) || l_41.f0) ^ 1L) | g_51), (-1L))), g_58)) , g_11), l_79)))) || p_27) && 0x241BL)), p_26.f1)), l_81[0])) != l_42.f1)) , (-3L));
    }
    return p_26.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_133[i][j][k], "g_133[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_163[i][j], "g_163[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_222[i][j], "g_222[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_229[i][j], "g_229[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_236[i][j][k].f1, "g_236[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_284, "g_284", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_285[i][j][k], "g_285[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_309, "g_309", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
