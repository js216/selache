// SPDX-License-Identifier: MIT
// cctest_csmith_d5cbc853.c --- cctest case csmith_d5cbc853 (csmith seed 3586902099)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6e7e8b8a */

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

// Options:   -s 3586902099 -o /tmp/csmith_gen__fgaa23a/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   int64_t  f1;
   uint8_t  f2;
};

union U1 {
   int64_t  f0;
   int8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};


static int32_t g_3[2] = {8L,8L};
static int16_t g_6[1] = {0x96CEL};
static const struct S0 g_24 = {0x800FL,0x68E10D32DE9E5A93LL,0x0DL};
static uint32_t g_31[2][3] = {{18446744073709551614UL,0UL,18446744073709551614UL},{18446744073709551614UL,0UL,18446744073709551614UL}};
static uint16_t g_56 = 0x6C33L;
static uint32_t g_63 = 18446744073709551610UL;
static int64_t g_70[4][5] = {{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-2L),(-2L),(-2L),(-2L),(-2L)},{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-2L),(-2L),(-2L),(-2L),(-2L)}};
static int16_t g_82 = 0x2441L;
static uint32_t g_98 = 0xE0D328F3L;
static uint16_t g_105 = 65527UL;
static int8_t g_108[2][3] = {{0x5DL,0x5DL,0x5DL},{0L,0L,0L}};
static union U1 g_109 = {1L};
static uint8_t g_117 = 0x25L;
static int32_t g_138 = 7L;
static uint16_t g_140 = 5UL;
static uint16_t g_143 = 65531UL;
static uint32_t g_171 = 1UL;
static int16_t g_182 = (-1L);
static int8_t g_183[3][4][2] = {{{(-1L),(-7L)},{0x64L,0xF8L},{0x64L,(-7L)},{(-1L),1L}},{{(-7L),4L},{(-9L),1L},{0L,0x3EL},{0x3EL,0x3EL}},{{0L,1L},{0x64L,(-1L)},{0xF8L,0L},{(-9L),0xF8L}}};
static uint16_t g_184 = 0x85F6L;



static union U1  func_1(void);
static int8_t  func_7(uint16_t  p_8, int32_t  p_9, int8_t  p_10, uint16_t  p_11, uint8_t  p_12);
static uint8_t  func_13(const uint32_t  p_14, int32_t  p_15, uint16_t  p_16);
static int16_t  func_19(uint32_t  p_20, const struct S0  p_21, struct S0  p_22, int64_t  p_23);




static union U1  func_1(void)
{ 
    uint64_t l_2[4][4] = {{0x6444696A485BF25CLL,0x6444696A485BF25CLL,0x43BEB7161AB6EC79LL,18446744073709551615UL},{0xF1813F1A0734F094LL,0xE673292C5EB20068LL,0xF1813F1A0734F094LL,0x43BEB7161AB6EC79LL},{0xF1813F1A0734F094LL,0x43BEB7161AB6EC79LL,0x43BEB7161AB6EC79LL,0xF1813F1A0734F094LL},{0x6444696A485BF25CLL,0x43BEB7161AB6EC79LL,18446744073709551615UL,0x43BEB7161AB6EC79LL}};
    int32_t l_5 = 0xEA21E1D8L;
    uint32_t l_107 = 0UL;
    struct S0 l_142 = {65535UL,0xB7EED95D173CA947LL,0x15L};
    int16_t l_156[5] = {0x1FBBL,0x1FBBL,0x1FBBL,0x1FBBL,0x1FBBL};
    union U1 l_187[4][1][3] = {{{{0xDEC698B38BCC480ELL},{0xDEC698B38BCC480ELL},{0xDEC698B38BCC480ELL}}},{{{0xDEC698B38BCC480ELL},{0xDEC698B38BCC480ELL},{0xDEC698B38BCC480ELL}}},{{{0xDEC698B38BCC480ELL},{0xDEC698B38BCC480ELL},{0xDEC698B38BCC480ELL}}},{{{0xDEC698B38BCC480ELL},{0xDEC698B38BCC480ELL},{0xDEC698B38BCC480ELL}}}};
    int i, j, k;
    for (g_3[1] = 0; (g_3[1] <= 3); g_3[1] += 1)
    { 
        int32_t l_4[4] = {8L,8L,8L,8L};
        uint64_t l_79[2];
        union U1 l_83 = {7L};
        int32_t l_110 = (-9L);
        struct S0 l_141 = {0x7705L,0x97E96616590C650DLL,0UL};
        int i;
        for (i = 0; i < 2; i++)
            l_79[i] = 0x6F2FD6C9D3DA5920LL;
        if ((g_6[0] ^= (l_5 = (l_4[2] = 0x6C619A80L))))
        { 
            uint32_t l_59 = 8UL;
            union U1 l_106 = {0x5F2429B40CD912EBLL};
            int32_t l_111 = 0xBFF5949BL;
            if ((g_3[1] , ((func_7((func_13(g_6[0], g_6[0], g_3[1]) < l_2[0][0]), g_24.f0, g_6[0], l_2[0][1], g_24.f1) , l_59) , g_3[0])))
            { 
                int64_t l_62 = 0L;
                g_63 ^= (safe_sub_func_uint16_t_u_u(l_62, 1L));
                g_70[0][2] = (l_62 , ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((g_6[0] != 0L) , ((g_63 | g_31[0][1]) == (-6L))), 253UL)), g_6[0])) || (-1L)));
                l_111 ^= ((safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((g_109.f1 = (l_5 = (safe_rshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((g_82 = (l_79[0]--)) <= ((((l_83 , ((((safe_div_func_int64_t_s_s(((g_108[1][2] = ((safe_mod_func_uint64_t_u_u(l_59, (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((((((l_4[0] != (((safe_add_func_uint8_t_u_u(((++g_98) | (g_105 ^= (g_70[1][2] = (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_70[2][1], (-1L))), 3UL))))), g_31[0][2])) != g_31[0][2]) && (-1L))) , 0xC405962D98881B11LL) , l_106) , l_62) | g_6[0]), 0)), l_107)), g_31[0][0])), l_106.f1)))) && g_105)) & l_4[2]), 0x54CD5CA7D7ACB2E3LL)) && 1L) , g_109) , (-1L))) , g_109.f3) == l_83.f3) < l_107)), g_3[0])) && l_106.f2), g_31[0][2])))), 2UL)) >= l_110), g_6[0])) ^ g_6[0]);
            }
            else
            { 
                int32_t l_113 = 0x8D826447L;
                if (g_108[1][2])
                    break;
                g_117 ^= (((safe_unary_minus_func_uint64_t_u(0UL)) <= ((l_113 , (-2L)) && ((+(safe_lshift_func_int16_t_s_s((g_6[0] = l_113), l_106.f3))) && g_24.f2))) && l_113);
            }
        }
        else
        { 
            uint32_t l_118 = 0xFBE72DC7L;
            union U1 l_125 = {0x27B0CF0C6D799D52LL};
            const uint32_t l_139 = 0xE4AD8520L;
            g_140 |= (((l_118++) ^ (((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((l_125 , (safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(0xE5DFL, (safe_lshift_func_uint8_t_u_u(((l_110 & (((safe_sub_func_uint64_t_u_u(((g_138 = (safe_sub_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s(0x5CE3L, l_125.f1)) , g_24) , l_110), g_6[0]))) >= (-2L)), g_6[0])) && g_105) , g_70[0][2])) , g_6[0]), 3)))) < g_109.f1) && g_70[1][3]), l_139))) <= g_3[0]), 0x0554FBD3L)) && 65529UL), g_109.f1)) || g_117) == 0xF7C0L)) , g_31[0][2]);
            l_142 = l_141;
        }
        for (g_109.f0 = 3; (g_109.f0 >= 0); g_109.f0 -= 1)
        { 
            uint8_t l_150[1][4];
            union U1 l_172 = {0x42BE2F300D2E18EFLL};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_150[i][j] = 0x06L;
            }
            if ((g_143 = (-1L)))
            { 
                int32_t l_151 = 0x8FBBB315L;
                int i, j;
                l_156[0] &= (((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((l_4[2] = l_2[g_109.f0][g_109.f0]) | l_2[g_109.f0][g_109.f0]), (l_151 = l_150[0][1]))) >= (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((5L & l_150[0][2]) == l_83.f2), g_117)), l_150[0][2]))), 0L)) , l_150[0][1]), 6L)) > l_2[g_109.f0][g_109.f0]) == 0x4937C557L);
                g_171 = ((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_3[1], 0xEBD8L)), (((safe_mul_func_uint8_t_u_u(((l_142 , (~((((safe_mul_func_uint16_t_u_u((+(safe_mod_func_uint16_t_u_u(g_140, g_109.f2))), l_156[0])) == l_79[0]) , 0UL) & 65535UL))) ^ g_82), l_150[0][2])) == g_24.f0) >= l_151))) > g_70[1][2]) , l_110) && 18446744073709551615UL), g_6[0])) == g_6[0]);
                return l_172;
            }
            else
            { 
                int32_t l_175 = 0x48F621FCL;
                uint32_t l_181 = 18446744073709551615UL;
                g_182 |= (safe_mod_func_uint64_t_u_u(l_175, (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((l_181 &= (((((((g_70[0][2] && (~g_140)) , g_24) , g_6[0]) != g_31[0][2]) <= l_83.f0) || l_175) && 0xAC72L)) >= 0xA7893A053FBE9BACLL) < g_117), 9UL)), g_70[0][0]))));
                g_183[0][3][1] = g_70[0][2];
            }
        }
        g_184--;
    }
    return l_187[1][0][1];
}



static int8_t  func_7(uint16_t  p_8, int32_t  p_9, int8_t  p_10, uint16_t  p_11, uint8_t  p_12)
{ 
    uint64_t l_58[3][5] = {{0xEEA3ADEB0CCCF04ALL,0x022AD61797E2BD63LL,0xB63B58950224C6ACLL,0x022AD61797E2BD63LL,0xEEA3ADEB0CCCF04ALL},{0xEEA3ADEB0CCCF04ALL,0x022AD61797E2BD63LL,0xB63B58950224C6ACLL,0x022AD61797E2BD63LL,0xEEA3ADEB0CCCF04ALL},{0xEEA3ADEB0CCCF04ALL,0x022AD61797E2BD63LL,0xB63B58950224C6ACLL,0x022AD61797E2BD63LL,0xEEA3ADEB0CCCF04ALL}};
    int i, j;
    return l_58[1][3];
}



static uint8_t  func_13(const uint32_t  p_14, int32_t  p_15, uint16_t  p_16)
{ 
    uint64_t l_25 = 18446744073709551606UL;
    int32_t l_26 = 0x16E31137L;
    struct S0 l_27 = {0xD41BL,0x43D9C8C74C3EEC73LL,0x5CL};
    int32_t l_57 = (-1L);
    if ((safe_mod_func_int16_t_s_s(func_19(p_16, g_24, ((l_26 = (l_25 == (1L != p_14))) , l_27), l_27.f2), g_3[1])))
    { 
        p_15 |= g_31[0][2];
    }
    else
    { 
        uint32_t l_47[2][3][1] = {{{0xDBE6A916L},{0x6C9A4A91L},{0x6C9A4A91L}},{{0xDBE6A916L},{0x6C9A4A91L},{0x6C9A4A91L}}};
        int i, j, k;
        l_26 = (((!0xEB07L) | (~g_24.f1)) == (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_31[0][2], (l_25 != 0L))), l_27.f0)));
        l_47[0][2][0] ^= (safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((l_26 = 0x1177734166DA9A16LL), ((safe_lshift_func_uint8_t_u_s(((!(0xDD2C990BL && ((safe_sub_func_int16_t_s_s((-2L), g_6[0])) & (-1L)))) , 1UL), p_16)) , p_14))), l_27.f1));
    }
    l_57 &= (l_26 ^= ((1UL ^ ((0x63L > p_15) == (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((g_56 = ((safe_mod_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(p_16, g_31[0][2])) < 0xC20713981DC8A068LL), g_6[0])) | l_27.f0)), g_31[0][2])), g_31[0][2])))) || g_3[0]));
    return p_16;
}



static int16_t  func_19(uint32_t  p_20, const struct S0  p_21, struct S0  p_22, int64_t  p_23)
{ 
    uint64_t l_30 = 18446744073709551615UL;
    p_22 = p_22;
    for (p_22.f0 = (-21); (p_22.f0 < 39); p_22.f0++)
    { 
        return g_3[0];
    }
    g_31[0][2] &= l_30;
    return p_21.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_31[i][j], "g_31[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_108[i][j], "g_108[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3, "g_109.f3", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_183[i][j][k], "g_183[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_184, "g_184", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
