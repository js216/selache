// SPDX-License-Identifier: MIT
// cctest_csmith_327e9ac4.c --- cctest case csmith_327e9ac4 (csmith seed 847157956)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb56a1a5e */

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

// Options:   -s 847157956 -o /tmp/csmith_gen_137njfzs/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int8_t  f0;
   int32_t  f1;
   int16_t  f2;
};

union U1 {
   int8_t  f0;
   struct S0  f1;
};


static int32_t g_2 = 1L;
static int32_t g_5 = (-1L);
static int32_t g_9 = 0x9A971867L;
static struct S0 g_43 = {5L,0x24A04C7CL,5L};
static int32_t *g_45 = &g_9;
static int32_t *g_46 = &g_43.f1;
static int64_t g_47 = 0x0846D72D30A93753LL;
static uint32_t g_48 = 0xA5A1D019L;
static const struct S0 g_66 = {8L,0x96E7F8E4L,0x2054L};
static const struct S0 g_68 = {5L,0x6D3E8DF3L,4L};
static struct S0 g_89 = {-3L,-1L,-4L};
static struct S0 *g_104 = (void*)0;
static uint64_t g_119 = 0x1D6041FE22FAA98ALL;
static uint64_t g_121 = 0xD91CD6C83836BFEFLL;
static struct S0 g_126 = {-10L,0x759302C5L,0x52BBL};
static uint64_t g_151 = 0xEE394F392A451E7ELL;
static union U1 g_165 = {-7L};
static uint64_t g_190[4][4][3] = {{{18446744073709551615UL,0xA7616D2739A248FCLL,0xC6687685B39BC731LL},{0xF5A8E2E1F9CA2593LL,0xF5A8E2E1F9CA2593LL,0xCF87870E3E810FF7LL},{0x7FF32E4EA202B76FLL,0xF5A8E2E1F9CA2593LL,0xF4A33FF738745218LL},{0UL,0xA7616D2739A248FCLL,0xF5A8E2E1F9CA2593LL}},{{0UL,1UL,4UL},{0xC6687685B39BC731LL,0UL,0xF5A8E2E1F9CA2593LL},{0xDDA2071F1495489CLL,0xF4A33FF738745218LL,0xF4A33FF738745218LL},{6UL,18446744073709551615UL,0xCF87870E3E810FF7LL}},{{6UL,0xCF87870E3E810FF7LL,0xC6687685B39BC731LL},{0xDDA2071F1495489CLL,0x7FF32E4EA202B76FLL,0UL},{0xC6687685B39BC731LL,0UL,18446744073709551615UL},{0UL,0x7FF32E4EA202B76FLL,18446744073709551615UL}},{{0UL,0xCF87870E3E810FF7LL,0UL},{0x7FF32E4EA202B76FLL,18446744073709551615UL,0UL},{0xF5A8E2E1F9CA2593LL,0xF4A33FF738745218LL,18446744073709551615UL},{18446744073709551615UL,1UL,4UL}}};
static uint16_t g_197 = 65535UL;
static uint16_t *g_196[4][5][5] = {{{&g_197,(void*)0,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197},{(void*)0,(void*)0,&g_197,(void*)0,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197},{(void*)0,&g_197,&g_197,(void*)0,&g_197}},{{&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,(void*)0,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197},{(void*)0,(void*)0,&g_197,(void*)0,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197}},{{(void*)0,&g_197,&g_197,(void*)0,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,(void*)0,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197},{(void*)0,(void*)0,&g_197,(void*)0,(void*)0}},{{&g_197,&g_197,&g_197,&g_197,&g_197},{(void*)0,&g_197,&g_197,(void*)0,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,(void*)0,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197}}};
static uint64_t g_208 = 18446744073709551614UL;
static uint64_t g_241 = 4UL;
static uint16_t g_246 = 65535UL;
static int8_t *g_253 = &g_89.f0;
static uint8_t g_258[6][7] = {{254UL,254UL,1UL,254UL,254UL,1UL,254UL},{250UL,255UL,0xD8L,255UL,0xD8L,255UL,250UL},{255UL,254UL,255UL,255UL,254UL,255UL,255UL},{250UL,255UL,1UL,255UL,250UL,0UL,250UL},{254UL,255UL,255UL,254UL,255UL,255UL,254UL},{0xD8L,255UL,0xD8L,255UL,250UL,255UL,0xD8L}};
static int32_t **g_276 = &g_45;
static int32_t ***g_275 = &g_276;
static int32_t g_328 = 0L;
static uint64_t g_329 = 18446744073709551615UL;
static uint32_t g_347 = 0UL;
static int64_t *g_352 = &g_47;
static uint8_t g_389 = 0xC1L;
static uint16_t g_433 = 0x77B4L;
static int64_t **g_442[5] = {&g_352,&g_352,&g_352,&g_352,&g_352};
static int64_t ***g_441 = &g_442[2];
static uint16_t g_445 = 0x114CL;
static struct S0 ***g_458 = (void*)0;
static int32_t g_462 = 0xB21E9B14L;
static uint8_t g_464 = 0x7CL;
static const int32_t *g_473 = &g_68.f1;
static const int32_t ** const g_472[6] = {&g_473,&g_473,&g_473,&g_473,&g_473,&g_473};
static const int32_t ** const *g_471 = &g_472[3];
static uint16_t g_476 = 0UL;
static int64_t g_509 = 0x06502B04E7DF0C69LL;
static uint8_t g_530[6] = {0xAEL,0xAEL,0xAEL,0xAEL,0xAEL,0xAEL};
static int64_t *** const *g_610 = &g_441;
static int64_t *** const **g_609[3] = {&g_610,&g_610,&g_610};
static uint8_t *g_715[6][1] = {{&g_530[5]},{(void*)0},{&g_530[5]},{(void*)0},{&g_530[5]},{(void*)0}};
static uint8_t **g_714[1][6] = {{&g_715[3][0],&g_715[5][0],&g_715[3][0],&g_715[3][0],&g_715[5][0],&g_715[3][0]}};
static uint8_t g_720 = 0xE2L;
static uint16_t g_740 = 0x6D32L;
static const int32_t **g_750 = &g_473;
static const int32_t ***g_749 = &g_750;
static const int32_t ****g_748[6][2][5] = {{{&g_749,(void*)0,&g_749,&g_749,(void*)0},{(void*)0,&g_749,(void*)0,(void*)0,&g_749}},{{&g_749,&g_749,&g_749,&g_749,&g_749},{(void*)0,&g_749,&g_749,(void*)0,&g_749}},{{&g_749,(void*)0,&g_749,&g_749,&g_749},{&g_749,&g_749,&g_749,&g_749,&g_749}},{{&g_749,&g_749,&g_749,&g_749,&g_749},{(void*)0,&g_749,&g_749,(void*)0,&g_749}},{{&g_749,&g_749,&g_749,&g_749,&g_749},{&g_749,&g_749,&g_749,&g_749,&g_749}},{{&g_749,&g_749,&g_749,(void*)0,(void*)0},{&g_749,&g_749,&g_749,&g_749,&g_749}}};
static const int32_t *****g_747 = &g_748[5][1][4];
static uint16_t g_794 = 65531UL;
static int32_t g_799 = (-1L);
static uint32_t g_800[2][1][3] = {{{0x3439D76FL,0x3439D76FL,0x3439D76FL}},{{0x3439D76FL,0x3439D76FL,0x3439D76FL}}};
static int8_t g_842 = (-6L);
static uint32_t g_846 = 0x174CD194L;
static int64_t g_909 = 0x726D9301779DFE2DLL;
static uint64_t *g_925 = (void*)0;
static uint64_t g_937 = 0x90564E98EE9C8D89LL;
static uint64_t g_945 = 0xA1181BB578D7DC45LL;
static uint16_t g_959 = 65535UL;



static int8_t  func_1(void);
static int32_t * func_10(int32_t * p_11);
static int32_t * func_12(int16_t  p_13, int64_t  p_14);
static int64_t  func_17(int32_t * p_18, const uint32_t  p_19);
static int32_t * func_20(uint64_t  p_21, int32_t * p_22, int32_t  p_23);
static union U1  func_24(int32_t * const  p_25);
static int32_t * func_26(uint64_t  p_27);
static struct S0  func_28(const uint32_t  p_29, int16_t  p_30, int32_t  p_31, int32_t * p_32);




static int8_t  func_1(void)
{ 
    uint16_t l_222 = 3UL;
    int16_t l_230 = 0x20B7L;
    int32_t l_815 = 0x32113162L;
    int32_t l_816 = 0xE9498068L;
    int32_t l_821 = (-7L);
    int32_t l_822 = (-4L);
    int32_t l_823 = 0x3C425926L;
    int32_t l_841 = 0L;
    struct S0 ** const l_857 = (void*)0;
    struct S0 ** const *l_856 = &l_857;
    uint8_t ***l_900 = (void*)0;
    int32_t l_903[7][3][6] = {{{0x0066A418L,(-1L),0x0066A418L,0L,0L,0x0066A418L},{(-7L),(-7L),0L,0x7229F669L,0L,(-7L)},{0L,(-1L),0x7229F669L,0x7229F669L,(-1L),0L}},{{(-7L),0L,0x7229F669L,0L,(-7L),(-7L)},{0x0066A418L,0L,0L,0x0066A418L,(-1L),0x0066A418L},{0x0066A418L,(-1L),0x0066A418L,0L,0L,0x0066A418L}},{{(-7L),(-7L),0L,0x7229F669L,0L,(-7L)},{0L,(-1L),0x7229F669L,0x7229F669L,(-1L),0L},{(-7L),0L,0x7229F669L,0L,(-7L),(-7L)}},{{0x0066A418L,0L,0L,0x0066A418L,(-1L),0x0066A418L},{0x0066A418L,(-1L),0x0066A418L,0L,0L,0x0066A418L},{(-7L),(-7L),0L,0x7229F669L,0L,(-7L)}},{{0L,(-1L),0x7229F669L,0x7229F669L,(-1L),0L},{(-7L),0L,0x7229F669L,0L,(-7L),(-7L)},{0x0066A418L,0L,0L,0x0066A418L,(-1L),0x0066A418L}},{{0x0066A418L,(-1L),0x0066A418L,0L,0L,0x0066A418L},{(-7L),(-7L),0L,0x7229F669L,0L,(-7L)},{0L,(-1L),0x7229F669L,0x7229F669L,(-1L),0L}},{{(-7L),0L,0x7229F669L,0L,(-7L),(-7L)},{0x0066A418L,0L,0L,0x0066A418L,(-1L),0x0066A418L},{0x0066A418L,(-1L),0x0066A418L,0L,0L,0x0066A418L}}};
    int64_t **l_926 = &g_352;
    int32_t l_949 = 3L;
    uint32_t l_954 = 4294967291UL;
    int32_t l_958 = 0x0C5AE215L;
    int i, j, k;
    for (g_2 = 0; (g_2 != 11); ++g_2)
    { 
        uint16_t l_224[6][6][5] = {{{1UL,0UL,65531UL,65530UL,0x4EF9L},{0x4E12L,0xC7CBL,0xC310L,0xC7CBL,0x4E12L},{65535UL,0x8836L,0x30D7L,9UL,65532UL},{0x3F98L,65535UL,0xC850L,65535UL,0xF784L},{8UL,9UL,0x31F2L,0x3CC8L,65532UL},{0x711BL,65535UL,65533UL,65527UL,0xFC02L}},{{65532UL,0x4EF9L,0x9AFEL,1UL,0x0A6CL},{5UL,5UL,0xFC02L,65535UL,0xE4FEL},{65535UL,0x69C0L,65528UL,4UL,1UL},{0xE391L,0xD46AL,0x2393L,65535UL,65535UL},{0x8836L,65535UL,0x8836L,1UL,0x584FL},{65535UL,0xE0BCL,0xD836L,1UL,0xD46AL}},{{0x2C78L,0x5D75L,8UL,0UL,65528UL},{5UL,0xEC38L,0xD836L,0xD46AL,0x3F98L},{1UL,65527UL,0x8836L,0xBF7BL,9UL},{0x4E12L,0xFA48L,0x2393L,0xFC02L,5UL},{0x30D7L,1UL,65528UL,0xAB79L,1UL},{0xDB36L,65533UL,0xFC02L,0xE0BCL,65528UL}},{{0x31F2L,0x65B0L,0x9AFEL,0x9AFEL,0x65B0L},{0xE0BCL,0x3F98L,65533UL,0xC310L,65532UL},{9UL,0xAB79L,0x31F2L,1UL,65535UL},{65535UL,65533UL,0xC850L,0UL,0xD836L},{9UL,65528UL,1UL,0x2C78L,65531UL},{0xE0BCL,0xDB36L,0x3F98L,0xE4FEL,0xC7CBL}},{{0x31F2L,9UL,0x69C0L,9UL,0UL},{0xDB36L,0xC310L,0x0DAFL,65526UL,65535UL},{0x30D7L,2UL,0x3CC8L,0x4EF9L,8UL},{0x4E12L,0x711BL,0x711BL,0x4E12L,0xC850L},{1UL,0UL,0xAB79L,1UL,0xD9F2L},{5UL,2UL,0xFA48L,0xD836L,0x2393L}},{{0x2C78L,1UL,0UL,1UL,65533UL},{65535UL,1UL,65526UL,0x4E12L,0xFA48L},{0x8836L,0xBF7BL,9UL,0x4EF9L,1UL},{0xE391L,0x8D62L,0x7577L,65526UL,65527UL},{65535UL,8UL,0xBF7BL,9UL,0x9AFEL},{5UL,0xE391L,2UL,0xE4FEL,2UL}}};
        int32_t l_228 = 0x050536D2L;
        int8_t l_229 = (-1L);
        int64_t l_572 = 0xFE14C3EC5194E839LL;
        uint8_t l_573 = 0x7CL;
        int32_t *l_804 = (void*)0;
        const uint16_t l_811 = 0x9761L;
        int32_t *l_817 = &g_5;
        int32_t *l_818 = &g_328;
        int32_t *l_819 = &g_165.f1.f1;
        int32_t *l_820[2];
        uint16_t l_824 = 0UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_820[i] = &g_9;
        for (g_5 = (-16); (g_5 >= 1); g_5++)
        { 
            int32_t *l_8 = &g_9;
            uint64_t *l_207 = &g_208;
            int32_t l_217 = 0x83D5683CL;
            int8_t *l_223 = (void*)0;
            int32_t *l_812 = (void*)0;
            int32_t *l_813 = &g_165.f1.f1;
            int32_t *l_814 = &l_217;
            (*l_8) = 0x3707822EL;
            l_804 = ((**g_275) = func_10(func_12((safe_mod_func_int32_t_s_s(((func_17(func_20(((*l_207) ^= (func_24(func_26((*l_8))) , 3UL)), ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u((l_217 > (safe_sub_func_int8_t_s_s((l_224[5][1][4] = (safe_lshift_func_uint16_t_u_u(l_222, 11))), ((+((safe_mul_func_int8_t_s_s(g_68.f2, g_197)) , l_228)) == l_229)))), 7L)), g_197)) >= g_5) >= l_229), l_230)) , l_228), l_222)) , &l_217), g_2), g_5) | l_572) , l_573), l_228)), l_229)));
            for (g_89.f0 = 2; (g_89.f0 >= 0); g_89.f0 -= 1)
            { 
                int8_t l_805[1][2][7] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0L,0x50L,0L,0x50L,0L,0x50L,0L}}};
                int i, j, k;
                if ((*l_804))
                    break;
                if (l_805[0][1][2])
                    continue;
            }
            (*l_814) &= ((*g_473) || ((safe_sub_func_int64_t_s_s(((*l_8) & (1UL && (!((safe_unary_minus_func_uint8_t_u(((**g_276) & (*l_8)))) & (*l_804))))), (safe_unary_minus_func_int64_t_s((((l_811 , (*l_8)) , (***g_749)) <= 0L))))) || l_222));
        }
        ++l_824;
    }
    for (g_165.f0 = 0; (g_165.f0 >= 0); g_165.f0 -= 1)
    { 
        int16_t l_830 = 0x3584L;
        int32_t l_839 = 0xB511C8BCL;
        int32_t l_845 = 0xD9300F5CL;
        int32_t ****l_872 = &g_275;
        int32_t ***** const l_871 = &l_872;
        const uint8_t **l_907[4];
        const uint8_t ***l_906[4][1] = {{&l_907[3]},{&l_907[3]},{&l_907[3]},{&l_907[3]}};
        int32_t *l_942 = &g_5;
        int32_t *l_943 = &l_845;
        int32_t *l_944[7] = {&l_815,&l_839,&l_815,&l_815,&l_839,&l_815,&l_839};
        uint32_t l_950 = 0xC026E751L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_907[i] = (void*)0;
        for (l_230 = 0; (l_230 <= 0); l_230 += 1)
        { 
            int16_t *l_838[1];
            int32_t l_840 = 0xD6ABAE23L;
            int64_t l_868 = 0x7435E5DF8B9125A1LL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_838[i] = (void*)0;
            if ((+(((0xF3L == (safe_add_func_int32_t_s_s(5L, l_821))) ^ (l_830 , ((***g_441) | ((((safe_div_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u(((l_839 = (safe_mul_func_int16_t_s_s((l_830 >= ((!l_830) >= (*g_253))), 65535UL))) && 1L), l_840)) && l_839) & 0x5CF55AE7F32F45D1LL) ^ l_830), l_830)) ^ 0x150BC3CD5DC0D770LL) <= 0x0BL) == (***g_749))))) && (-1L))))
            { 
                int32_t *l_843 = &g_126.f1;
                int32_t *l_844[3][3] = {{&g_43.f1,&g_43.f1,&l_823},{&g_43.f1,&g_43.f1,&l_823},{&g_43.f1,&g_43.f1,&l_823}};
                int i, j;
                (**g_276) = l_222;
                (*g_46) = l_841;
                --g_846;
                for (g_445 = 0; (g_445 <= 0); g_445 += 1)
                { 
                    return (*g_253);
                }
            }
            else
            { 
                struct S0 **l_854 = (void*)0;
                struct S0 ***l_853[3][6] = {{&l_854,&l_854,&l_854,&l_854,&l_854,&l_854},{&l_854,&l_854,&l_854,&l_854,&l_854,&l_854},{&l_854,&l_854,&l_854,&l_854,&l_854,&l_854}};
                struct S0 ****l_855 = &l_853[1][4];
                uint8_t *l_860 = &g_258[4][6];
                uint16_t *l_867 = &g_197;
                int i, j;
                (**g_276) = (safe_mod_func_int64_t_s_s(((*g_352) = (0x7189L <= ((l_823 , l_845) , (((*l_855) = l_853[0][0]) != (l_856 = l_856))))), (l_868 = (((*l_867) = (((l_839 = (safe_lshift_func_uint8_t_u_u(((*l_860) = 253UL), 7))) || (safe_lshift_func_uint8_t_u_s((l_815 = ((*l_860) = (safe_div_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s(l_830, l_815)) && l_840) , g_246), 2UL)))), (*g_253)))) >= (*g_253))) , (-1L)))));
            }
        }
        ++g_945;
        for (l_822 = 1; (l_822 >= 0); l_822 -= 1)
        { 
            int32_t *l_948[3];
            int i;
            for (i = 0; i < 3; i++)
                l_948[i] = &l_845;
            l_948[2] = ((***l_872) = (*g_276));
            if (l_903[3][1][5])
                break;
            ++l_950;
            for (l_845 = 1; (l_845 >= 0); l_845 -= 1)
            { 
                int8_t l_953[5];
                int32_t *l_957[6];
                int i;
                for (i = 0; i < 5; i++)
                    l_953[i] = (-1L);
                for (i = 0; i < 6; i++)
                    l_957[i] = &l_839;
                for (l_841 = 0; (l_841 >= 0); l_841 -= 1)
                { 
                    ++l_954;
                    (*g_276) = func_10(l_957[5]);
                    --g_959;
                }
                (*****l_871) = 0x254F30E7L;
                for (g_119 = 0; (g_119 <= 1); g_119 += 1)
                { 
                    return l_903[4][1][2];
                }
            }
        }
    }
    return (*g_253);
}



static int32_t * func_10(int32_t * p_11)
{ 
    int32_t *l_803 = &g_9;
    return l_803;
}



static int32_t * func_12(int16_t  p_13, int64_t  p_14)
{ 
    int32_t *l_574[1][6] = {{&g_43.f1,&g_43.f1,&g_43.f1,&g_43.f1,&g_43.f1,&g_43.f1}};
    uint8_t *l_575 = &g_464;
    int64_t *** const l_576 = &g_442[0];
    uint32_t l_604 = 0xE01AB8E4L;
    int32_t l_649 = 7L;
    int64_t l_662[4];
    struct S0 l_674 = {0x0AL,9L,0x5F7BL};
    const int16_t l_707[1][4][3] = {{{0x12B5L,1L,1L},{1L,0L,(-9L)},{0x12B5L,0L,0x12B5L},{0x5DA7L,1L,(-9L)}}};
    int16_t l_734 = 0xF75BL;
    int64_t *l_783 = &g_47;
    int64_t ** const l_782 = &l_783;
    int64_t ** const *l_781[2][2][1];
    int64_t ** const **l_780[1];
    int64_t l_793 = (-1L);
    int32_t l_798 = 7L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_662[i] = 0xB21B1684AE915F63LL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_781[i][j][k] = &l_782;
        }
    }
    for (i = 0; i < 1; i++)
        l_780[i] = &l_781[1][1][0];
    (**g_275) = l_574[0][2];
    (**g_276) &= (((*l_575) = p_14) == p_14);
    (*g_45) = (*g_473);
    if (((p_14 , (l_576 == l_576)) && (p_13 , g_462)))
    { 
        uint32_t *l_598[3][5] = {{&g_347,&g_347,&g_48,&g_347,&g_347},{(void*)0,&g_48,(void*)0,(void*)0,&g_48},{&g_347,&g_48,&g_48,&g_347,&g_48}};
        int32_t l_601 = 0x440D906DL;
        int16_t *l_602 = &g_89.f2;
        int16_t *l_603 = &g_126.f2;
        int32_t l_605 = (-1L);
        int i, j;
        (*g_45) = (~(safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((((-4L) > (safe_add_func_int16_t_s_s((((*l_575)++) != (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((!(((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u(((p_13 ^ ((((p_13 >= (((((*l_603) = ((safe_rshift_func_int16_t_s_s(((*l_602) ^= ((((1UL && (--g_48)) || (0L && l_601)) , (((*g_253) && (*g_253)) & p_14)) >= g_462)), p_13)) , p_13)) , l_604) , p_13) , l_605)) , 0x2B83A40CFA9FB95CLL) <= p_13) > 18446744073709551610UL)) ^ 0xC67DE4F1L), g_389)))) != (*g_352)) <= 1UL)), 0UL)) , p_13), p_13))), g_462))) < p_13), (*g_253))) & p_13) >= 0xE82886E475BF6CA2LL), g_530[2])) <= (***g_441)), p_14)));
    }
    else
    { 
        int32_t *l_606 = &g_89.f1;
        struct S0 l_628 = {0x0CL,1L,-6L};
        int32_t l_638 = 1L;
        int32_t l_639 = 0xCDE8A484L;
        int32_t l_645[1][1][2];
        int16_t l_661 = 1L;
        uint8_t * const *l_679 = &l_575;
        uint64_t l_706 = 0x786F0EA2E5AB8D08LL;
        int32_t l_717 = 0L;
        struct S0 *** const *l_723 = &g_458;
        uint16_t l_754 = 1UL;
        const int32_t ***l_760 = &g_750;
        int64_t ****l_779 = (void*)0;
        uint64_t l_788[5];
        int64_t l_789 = 0xA344070C09348ADCLL;
        int8_t l_797 = 0x16L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_645[i][j][k] = 0L;
            }
        }
        for (i = 0; i < 5; i++)
            l_788[i] = 0x6236D74DBD673CC3LL;
        l_574[0][2] = l_606;
        for (g_389 = (-20); (g_389 < 15); g_389++)
        { 
            int8_t **l_611 = &g_253;
            int8_t *l_613 = &g_43.f0;
            int8_t **l_612 = &l_613;
            int32_t l_614 = 0x7E9667ECL;
            struct S0 l_622 = {8L,0x9616BEFFL,0xD099L};
            int32_t l_647 = 0x5156F922L;
            int32_t l_648 = 0L;
            int32_t l_651 = 1L;
            int32_t l_654 = 0x7E799691L;
            int32_t l_656 = 0x6D438B20L;
            int32_t l_657 = 0x2180E724L;
            int32_t l_658 = (-6L);
            int32_t l_659[2][1][3] = {{{1L,1L,1L}},{{0x101925F5L,0x101925F5L,0x101925F5L}}};
            int32_t ** const *l_713 = &g_276;
            int32_t ** const **l_712 = &l_713;
            int32_t ***l_728 = &g_276;
            int i, j, k;
            g_609[1] = (void*)0;
            (*l_606) ^= (l_614 = (((((*l_611) = g_253) == ((*l_612) = l_575)) , &g_104) != (void*)0));
            for (g_48 = 0; (g_48 <= 4); g_48 += 1)
            { 
                int64_t ***l_617[6][3][3] = {{{&g_442[2],&g_442[2],&g_442[2]},{&g_442[1],&g_442[2],&g_442[1]},{&g_442[2],&g_442[2],&g_442[2]}},{{&g_442[2],&g_442[2],&g_442[2]},{&g_442[1],&g_442[2],&g_442[2]},{&g_442[2],&g_442[2],&g_442[2]}},{{&g_442[1],&g_442[2],&g_442[1]},{&g_442[2],&g_442[2],&g_442[2]},{&g_442[2],&g_442[2],&g_442[2]}},{{&g_442[1],&g_442[2],&g_442[2]},{&g_442[2],&g_442[2],&g_442[2]},{&g_442[1],&g_442[2],&g_442[1]}},{{&g_442[2],&g_442[2],&g_442[2]},{&g_442[2],&g_442[2],&g_442[2]},{&g_442[1],&g_442[2],&g_442[2]}},{{&g_442[2],&g_442[2],&g_442[2]},{&g_442[1],&g_442[2],&g_442[1]},{&g_442[2],&g_442[2],&g_442[2]}}};
                uint8_t **l_620 = &l_575;
                int32_t *l_621 = &g_328;
                int32_t l_642 = 0xC12A4E06L;
                int32_t l_643 = 0x0E5080FBL;
                int32_t l_646[4][2][1] = {{{(-9L)},{0L}},{{(-9L)},{0L}},{{(-9L)},{0L}},{{(-9L)},{0L}}};
                int64_t l_655 = (-3L);
                int8_t l_660 = 0xE1L;
                uint8_t ***l_716 = &g_714[0][1];
                int i, j, k;
            }
            for (l_661 = 0; (l_661 < 8); l_661 = safe_add_func_uint32_t_u_u(l_661, 8))
            { 
                int64_t l_735 = 0x3326A07C3CECCFA8LL;
                int32_t l_739[6][7][6] = {{{(-9L),0x57BE4EA2L,2L,0xA909999CL,0L,1L},{(-9L),(-1L),0xA909999CL,1L,2L,1L},{2L,0x52206870L,0xF85774AEL,0xB6854A30L,0xF85774AEL,0x52206870L},{0x57BE4EA2L,0x9A2FFAB9L,0x3B1D9097L,0x59A547A1L,0x65D46FD5L,0x57BE4EA2L},{(-5L),1L,0xF73AFB9AL,2L,0x52206870L,0xCEC1622DL},{1L,1L,(-1L),0xA909999CL,0x65D46FD5L,(-2L)},{1L,0x9A2FFAB9L,0xA909999CL,0xF85774AEL,0xF85774AEL,0xA909999CL}},{{0x52206870L,0x52206870L,0x57BE4EA2L,0x3B1D9097L,2L,1L},{0x57BE4EA2L,(-1L),(-1L),0xF73AFB9AL,0L,0x57BE4EA2L},{0xCEC1622DL,0x57BE4EA2L,(-1L),(-1L),0x52206870L,1L},{(-2L),(-1L),1L,0xF73AFB9AL,0x52206870L,0xF73AFB9AL},{0xF73AFB9AL,0x52206870L,0xF73AFB9AL,1L,1L,(-1L)},{0xF85774AEL,0x57BE4EA2L,1L,0x65D46FD5L,1L,1L},{1L,0xCEC1622DL,0x9A2FFAB9L,0x65D46FD5L,(-5L),1L}},{{0xF85774AEL,(-2L),(-1L),1L,0x57BE4EA2L,0x57BE4EA2L},{0xF73AFB9AL,0xA909999CL,0xA909999CL,0xF73AFB9AL,2L,0x59A547A1L},{(-1L),1L,0xF73AFB9AL,1L,(-9L),0x3B1D9097L},{1L,0x57BE4EA2L,(-2L),0x9A2FFAB9L,(-9L),2L},{1L,1L,0L,(-1L),2L,1L},{0x57BE4EA2L,0xA909999CL,0L,0xA909999CL,0x57BE4EA2L,(-1L)},{0x59A547A1L,(-2L),(-9L),0xF73AFB9AL,(-5L),0xB6854A30L}},{{0x3B1D9097L,0xCEC1622DL,0xF73AFB9AL,(-2L),1L,0xB6854A30L},{2L,0x57BE4EA2L,(-9L),0L,1L,(-1L)},{1L,0x52206870L,0L,0L,0x52206870L,1L},{(-1L),1L,0L,(-9L),0x57BE4EA2L,2L},{0xB6854A30L,1L,(-2L),0xF73AFB9AL,0xCEC1622DL,0x3B1D9097L},{0xB6854A30L,(-5L),0xF73AFB9AL,(-9L),(-2L),0x59A547A1L},{(-1L),0x57BE4EA2L,0xA909999CL,0L,0xA909999CL,0x57BE4EA2L}},{{1L,2L,(-1L),0L,1L,1L},{2L,(-9L),0x9A2FFAB9L,(-2L),0x57BE4EA2L,1L},{0x3B1D9097L,(-9L),1L,0xF73AFB9AL,1L,(-1L)},{0x59A547A1L,2L,0xF73AFB9AL,0xA909999CL,0xA909999CL,0xF73AFB9AL},{0x57BE4EA2L,0x57BE4EA2L,1L,(-1L),(-2L),0xF85774AEL},{1L,(-5L),0x65D46FD5L,0x9A2FFAB9L,0xCEC1622DL,1L},{1L,1L,0x65D46FD5L,1L,0x57BE4EA2L,0xF85774AEL}},{{(-1L),1L,1L,0xF73AFB9AL,0x52206870L,0xF73AFB9AL},{0xF73AFB9AL,0x52206870L,0xF73AFB9AL,1L,1L,(-1L)},{0xF85774AEL,0x57BE4EA2L,1L,0x65D46FD5L,1L,1L},{1L,0xCEC1622DL,0x9A2FFAB9L,0x65D46FD5L,(-5L),1L},{0xF85774AEL,(-2L),(-1L),1L,0x57BE4EA2L,0x57BE4EA2L},{0xF73AFB9AL,0xA909999CL,0xA909999CL,0xF73AFB9AL,2L,0x59A547A1L},{(-1L),1L,0xF73AFB9AL,1L,(-9L),0x3B1D9097L}}};
                uint16_t l_751[2][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_751[i][j] = 65529UL;
                }
                for (l_654 = 0; (l_654 == (-12)); --l_654)
                { 
                    int64_t l_736 = 0L;
                    int32_t l_737 = 0L;
                    int32_t l_738 = 0x52DA7C41L;
                    int64_t *l_746 = &l_736;
                    g_740++;
                    if ((*l_606))
                        break;
                    g_747 = (((***l_728) = ((*l_606) & (((*l_746) = ((***l_576) = (safe_lshift_func_int16_t_s_u((+(-1L)), p_13)))) != p_13))) , (void*)0);
                    l_751[0][0]--;
                }
                if ((*g_45))
                    continue;
                return (**g_275);
            }
            --l_754;
        }
        (***g_275) &= (((g_68.f1 || ((safe_add_func_int32_t_s_s((**g_750), p_14)) ^ (&p_14 != (***g_610)))) | (18446744073709551610UL || g_530[2])) || p_13);
        (*l_606) = ((**g_276) |= ((((+(0UL || (l_760 == (void*)0))) && ((**l_679) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(1UL, 12)), (safe_add_func_uint32_t_u_u(0UL, (((((((****g_610) | ((safe_add_func_uint8_t_u_u(p_13, p_14)) > (*l_606))) == 0x6B128FA84BBE470BLL) >= p_14) , g_433) != (*l_606)) != p_13))))))) >= (***l_760)) != 0UL));
        for (g_43.f0 = 2; (g_43.f0 > (-1)); g_43.f0--)
        { 
            uint32_t l_786[2];
            uint16_t *l_787[5] = {&g_433,&g_433,&g_433,&g_433,&g_433};
            int32_t l_790 = 0xDBB05EA1L;
            int32_t l_791[1];
            int8_t l_792 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_786[i] = 8UL;
            for (i = 0; i < 1; i++)
                l_791[i] = 0x1CAD2D11L;
            l_788[0] = ((***g_275) &= ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((((*l_576) == (void*)0) ^ ((((*l_606) = (safe_rshift_func_uint16_t_u_u((~((!((0xA4E73A16L != (l_779 == (l_780[0] = (void*)0))) && (safe_sub_func_uint16_t_u_u((0x13CAL != (*l_606)), (-1L))))) || 0x2DL)), l_786[1]))) >= g_740) | 0xA76CL)) < 1UL) >= p_14), 9)), 0L)) > 0UL));
            ++g_794;
            (***g_275) = p_13;
            ++g_800[0][0][1];
        }
    }
    return (*g_276);
}



static int64_t  func_17(int32_t * p_18, const uint32_t  p_19)
{ 
    int32_t *l_571 = (void*)0;
    (**g_275) = l_571;
    return p_19;
}



static int32_t * func_20(uint64_t  p_21, int32_t * p_22, int32_t  p_23)
{ 
    int32_t *l_231 = &g_89.f1;
    int32_t *l_232 = &g_89.f1;
    int32_t *l_233 = &g_126.f1;
    int32_t *l_234 = &g_165.f1.f1;
    int32_t *l_235 = (void*)0;
    int32_t l_236[2][3][1] = {{{0xB798C47FL},{0L},{0xB798C47FL}},{{0L},{0xB798C47FL},{0L}}};
    int32_t *l_237 = &g_126.f1;
    int32_t *l_238 = (void*)0;
    int32_t *l_239 = &g_165.f1.f1;
    int32_t *l_240[5];
    int32_t l_244 = 0x9D73837DL;
    const struct S0 * const l_262 = &g_89;
    int64_t *l_350 = &g_47;
    struct S0 **l_457[5];
    struct S0 ***l_456 = &l_457[1];
    int32_t l_467[6][6][6] = {{{1L,0xE29CE996L,6L,0x95F5A43BL,0L,4L},{0L,(-3L),0x4661F291L,0L,(-1L),0x3531FD29L},{0L,0x1A413F0AL,1L,0xADA1F746L,0x803977CFL,1L},{1L,0x52765D85L,0x0DB4193CL,1L,0x1A413F0AL,4L},{0x590FC22FL,0L,0xD7272AAFL,0L,0xD7272AAFL,0L},{1L,0x09EF3BACL,0x336E55BAL,0x95F5A43BL,0x52765D85L,0L}},{{0x576C43D0L,4L,5L,0L,7L,0x576C43D0L},{0x0DB4193CL,4L,1L,0x83328A8EL,0x52765D85L,(-4L)},{(-4L),0x09EF3BACL,0xADA1F746L,0L,0xD7272AAFL,0xE579572AL},{0x3531FD29L,0L,0L,0xE0977423L,0x1A413F0AL,0x4EA0DA7AL},{0L,0x52765D85L,0xE994592DL,5L,0x803977CFL,0x1A413F0AL},{0x576C43D0L,0x1A413F0AL,6L,4L,(-1L),7L}},{{0xADA1F746L,(-3L),1L,4L,0L,(-4L)},{0L,0xE29CE996L,1L,1L,1L,1L},{0x38103768L,0x38103768L,0L,0x4661F291L,0x1A413F0AL,0x517D98B2L},{0L,0xF45E9A4CL,0x336E55BAL,0L,0x00E04B57L,0L},{0L,0L,0x336E55BAL,4L,0x38103768L,0x517D98B2L},{1L,4L,0L,0x0DB4193CL,(-2L),1L}},{{0x0DB4193CL,(-2L),1L,0xB64AF7EEL,4L,(-4L)},{0x3531FD29L,0x590FC22FL,1L,6L,0xD7272AAFL,7L},{0xD7272AAFL,0xF45E9A4CL,6L,0xE0977423L,0xE29CE996L,0x1A413F0AL},{0L,4L,0xE994592DL,0L,0L,0x4EA0DA7AL},{1L,0x1A413F0AL,0L,0xE579572AL,0L,0xE579572AL},{0xADA1F746L,4L,0xADA1F746L,0L,0xB64AF7EEL,(-4L)}},{{0x590FC22FL,0x4EA0DA7AL,1L,0x4661F291L,1L,0x576C43D0L},{4L,0x52765D85L,5L,0x4661F291L,0xE29CE996L,0L},{0x590FC22FL,0L,0x336E55BAL,0L,0x3531FD29L,0L},{0xADA1F746L,0L,0xD7272AAFL,0xE579572AL,0x52765D85L,4L},{1L,(-2L),0x0DB4193CL,0L,4L,1L},{0L,7L,1L,0xE0977423L,4L,0x3531FD29L}},{{1L,(-8L),(-2L),4L,0x576C43D0L,0x0DB4193CL},{1L,1L,4L,1L,0xD7272AAFL,0xD7272AAFL},{0xE994592DL,4L,4L,0xE994592DL,7L,0x336E55BAL},{0x4661F291L,0x3531FD29L,2L,0x0DB4193CL,1L,5L},{4L,0xB64AF7EEL,0xE579572AL,0x09EF3BACL,1L,1L},{(-1L),0x3531FD29L,0x803977CFL,(-2L),7L,0xADA1F746L}}};
    const int32_t *l_469 = (void*)0;
    const int32_t ** const l_468 = &l_469;
    int8_t l_505 = 1L;
    int32_t *l_570 = (void*)0;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_240[i] = &l_236[1][0][0];
    for (i = 0; i < 5; i++)
        l_457[i] = &g_104;
    --g_241;
    (*l_239) = (*g_45);
lbl_556:
    for (g_126.f1 = 0; (g_126.f1 <= 2); g_126.f1 += 1)
    { 
        int16_t l_245 = 0x95E8L;
        int8_t *l_256 = &g_165.f0;
        int32_t l_257 = 0x4FACB78FL;
        int32_t *l_261 = &l_236[0][1][0];
        const int32_t *l_283 = &g_66.f1;
        const int32_t ** const l_282 = &l_283;
        const int32_t ** const *l_281 = &l_282;
        const struct S0 l_286 = {9L,0L,-2L};
        int32_t l_327 = 0x0F50867CL;
        int64_t l_359[1];
        int8_t l_360 = 0xC8L;
        struct S0 ** const l_409 = &g_104;
        int32_t l_431 = (-6L);
        int32_t l_432 = 0x5B3AF782L;
        int64_t ***l_439 = (void*)0;
        union U1 l_443 = {0x16L};
        int i;
        for (i = 0; i < 1; i++)
            l_359[i] = (-2L);
        ++g_246;
        for (l_244 = 0; (l_244 <= 2); l_244 += 1)
        { 
            int32_t l_252 = (-4L);
            int8_t *l_255[4][6][7] = {{{&g_126.f0,&g_43.f0,&g_43.f0,&g_89.f0,&g_43.f0,&g_43.f0,&g_126.f0},{&g_89.f0,&g_126.f0,&g_43.f0,&g_43.f0,(void*)0,&g_126.f0,&g_126.f0},{&g_126.f0,&g_126.f0,&g_89.f0,&g_89.f0,&g_165.f0,&g_126.f0,&g_43.f0},{&g_89.f0,&g_89.f0,&g_43.f0,&g_126.f0,&g_89.f0,&g_89.f0,&g_43.f0},{&g_89.f0,&g_43.f0,&g_43.f0,&g_165.f0,&g_43.f0,&g_89.f0,&g_43.f0},{&g_89.f0,&g_126.f0,&g_126.f0,&g_165.f0,&g_89.f0,&g_165.f0,&g_126.f0}},{{(void*)0,(void*)0,&g_126.f0,&g_126.f0,&g_126.f0,&g_89.f0,&g_89.f0},{&g_89.f0,&g_126.f0,&g_126.f0,&g_89.f0,&g_126.f0,(void*)0,&g_126.f0},{&g_165.f0,(void*)0,&g_89.f0,&g_43.f0,&g_126.f0,&g_126.f0,(void*)0},{&g_165.f0,&g_43.f0,&g_89.f0,&g_89.f0,&g_89.f0,&g_126.f0,&g_43.f0},{&g_126.f0,&g_126.f0,&g_165.f0,&g_89.f0,&g_43.f0,&g_126.f0,&g_43.f0},{&g_43.f0,&g_126.f0,&g_126.f0,&g_43.f0,&g_89.f0,&g_126.f0,&g_89.f0}},{{&g_43.f0,&g_165.f0,&g_126.f0,&g_126.f0,&g_165.f0,(void*)0,&g_165.f0},{&g_43.f0,&g_89.f0,&g_89.f0,&g_126.f0,(void*)0,&g_89.f0,&g_89.f0},{&g_89.f0,&g_89.f0,&g_89.f0,&g_43.f0,&g_43.f0,&g_165.f0,&g_43.f0},{&g_89.f0,&g_43.f0,(void*)0,&g_126.f0,&g_89.f0,&g_89.f0,&g_43.f0},{&g_89.f0,&g_89.f0,&g_89.f0,&g_89.f0,&g_89.f0,&g_89.f0,(void*)0},{&g_89.f0,&g_89.f0,(void*)0,&g_89.f0,&g_43.f0,&g_126.f0,&g_126.f0}},{{&g_43.f0,&g_43.f0,&g_165.f0,&g_43.f0,&g_43.f0,&g_126.f0,&g_89.f0},{&g_43.f0,&g_89.f0,&g_126.f0,&g_126.f0,&g_126.f0,&g_43.f0,&g_126.f0},{&g_43.f0,&g_89.f0,(void*)0,&g_89.f0,(void*)0,&g_43.f0,&g_43.f0},{&g_126.f0,&g_43.f0,(void*)0,(void*)0,(void*)0,(void*)0,&g_43.f0},{&g_165.f0,&g_43.f0,&g_89.f0,(void*)0,&g_126.f0,&g_89.f0,&g_126.f0},{&g_126.f0,&g_43.f0,&g_43.f0,&g_89.f0,&g_89.f0,&g_126.f0,(void*)0}}};
            int8_t **l_254[5];
            const uint32_t l_265 = 1UL;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_254[i] = &l_255[1][3][0];
            (*l_234) = (l_257 |= ((+g_197) ^ (((*g_253) = (l_252 && (g_253 == (l_256 = (void*)0)))) == 1UL)));
            for (g_165.f1.f2 = 2; (g_165.f1.f2 >= 0); g_165.f1.f2 -= 1)
            { 
                g_258[0][5]--;
                for (g_126.f2 = 2; (g_126.f2 >= 0); g_126.f2 -= 1)
                { 
                    const struct S0 *l_264 = &g_68;
                    const struct S0 **l_263 = &l_264;
                    int i, j, k;
                    (*l_263) = (func_28((&p_22 != &p_22), g_258[0][5], p_21, l_261) , l_262);
                    if ((*l_261))
                        continue;
                    if ((*p_22))
                        break;
                    if (l_265)
                        continue;
                }
            }
        }
        for (g_43.f2 = 0; (g_43.f2 <= 2); g_43.f2 += 1)
        { 
            int32_t ****l_277 = &g_275;
            const int32_t **l_279 = (void*)0;
            const int32_t ** const *l_278 = &l_279;
            const int32_t ** const **l_280[7][5] = {{&l_278,(void*)0,&l_278,&l_278,&l_278},{&l_278,&l_278,&l_278,&l_278,&l_278},{&l_278,&l_278,(void*)0,&l_278,(void*)0},{(void*)0,(void*)0,&l_278,&l_278,&l_278},{&l_278,&l_278,&l_278,&l_278,(void*)0},{&l_278,&l_278,&l_278,&l_278,&l_278},{(void*)0,&l_278,&l_278,&l_278,&l_278}};
            int32_t l_341 = 0x30439F44L;
            int32_t l_345 = 1L;
            int32_t l_346 = 0x089EF0A4L;
            const int8_t *l_361 = &g_89.f0;
            struct S0 **l_407 = &g_104;
            int64_t **l_437[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_437[i][j] = (void*)0;
            }
        }
    }
    if ((((func_24(func_26(p_21)) , ((((0x78F69DFE5DAE64E9LL | p_23) != l_467[2][0][1]) , l_468) != (*g_275))) , p_23) == 0xDC95982F445A098DLL))
    { 
        struct S0 l_470 = {0x47L,-1L,0xAED1L};
        int32_t l_474 = (-10L);
        int32_t l_475[2][2][2] = {{{0x98035B68L,0x98035B68L},{1L,0x98035B68L}},{{0x98035B68L,1L},{0x98035B68L,0x98035B68L}}};
        int16_t *l_479[1];
        int16_t l_483 = 0x7102L;
        int32_t l_507 = (-6L);
        uint8_t l_510 = 6UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_479[i] = &l_470.f2;
        g_126 = l_470;
        g_471 = &l_468;
        --g_476;
        if ((l_479[0] == (void*)0))
        { 
            uint8_t l_480 = 0x68L;
            uint8_t l_506 = 0x2DL;
            int32_t l_513 = 0x0481C509L;
            int32_t l_527 = 0x7B000F91L;
            int32_t l_528 = 2L;
            (**g_275) = &p_23;
            --l_480;
lbl_484:
            (*l_231) = (l_483 = 0x0EC4BF4FL);
            for (g_151 = 0; (g_151 <= 0); g_151 += 1)
            { 
                uint64_t l_508 = 0x66C8A14AFFD61C10LL;
                int32_t l_526 = 0xA2E0B57DL;
                int32_t l_529 = 0x3CB82B9CL;
                for (g_464 = 0; (g_464 <= 0); g_464 += 1)
                { 
                    int16_t *l_504 = &l_470.f2;
                    if (g_241)
                        goto lbl_484;
                    (*l_232) = ((~((safe_rshift_func_int16_t_s_s(p_21, 7)) , ((*g_352) &= (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((*p_22) & ((+((0x9E32L || (safe_mul_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((~l_470.f0), (((safe_mul_func_int8_t_s_s((((l_480 , (1L & (safe_mul_func_uint8_t_u_u(((void*)0 != l_504), (*g_253))))) & 0xE0L) < p_23), l_505)) >= (*g_253)) && g_2))), p_21)) & l_506) | (-5L)), 0x4AL))) == l_507)) == l_508)), g_509)), l_510))))) == 0x8593L);
                    (***g_275) = 0xF3D58CA9L;
                }
                for (g_165.f1.f2 = 0; (g_165.f1.f2 >= 0); g_165.f1.f2 -= 1)
                { 
                    int32_t *l_522 = &g_328;
                    int i;
                    (*p_22) ^= (safe_add_func_uint16_t_u_u((((((((l_513 = p_21) , ((((g_68.f0 , g_165) , (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(p_23, p_23)), ((l_470 , p_21) == (***g_441)))), l_508)), 4))) & 6UL) < l_470.f1)) , &g_347) != p_22) < (*g_253)) < 4L) , l_508), 0x2C86L));
                    return l_522;
                }
                for (g_126.f0 = 0; (g_126.f0 <= 0); g_126.f0 += 1)
                { 
                    uint32_t l_523 = 1UL;
                    ++l_523;
                    ++g_530[2];
                }
            }
        }
        else
        { 
            (*l_468) = (*l_468);
        }
    }
    else
    { 
        int32_t * const l_552 = &g_126.f1;
        uint8_t *l_553 = &g_464;
        uint8_t *l_554 = &g_258[2][1];
        const int32_t l_555 = 0x665DA689L;
        int64_t l_569 = (-1L);
        (*p_22) |= (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(p_21, 12)) ^ ((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s(p_21, 4)) > (((safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(g_208, ((safe_rshift_func_uint8_t_u_u((((~0xDAF5F7CEL) <= (((safe_lshift_func_uint8_t_u_u((((((*l_554) = ((*l_552) = ((*l_553) |= (func_24(l_552) , (p_21 || 0x327BCD8DC7A8503ELL))))) & g_68.f0) != g_476) & g_241), 7)) , 0L) >= g_241)) || g_329), 1)) ^ g_530[0]))) <= p_23), p_21)) == p_23) >= 18446744073709551615UL)) > g_530[2]) , (*l_233)), g_66.f0)), l_555)) <= p_21)), p_23));
        if (l_555)
            goto lbl_556;
        (*p_22) = ((safe_sub_func_uint32_t_u_u(g_347, (safe_lshift_func_uint8_t_u_u(((((((*g_253) = (-1L)) || (safe_rshift_func_uint16_t_u_u((*l_552), p_23))) | ((((-1L) ^ (((safe_lshift_func_int8_t_s_u(((((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(((p_21 | p_21) , p_23), 2)) > 0x5DL) , (*l_552)) || g_119), p_21)) == 0x39L) <= (*l_233)) <= (-1L)), 2)) >= (*g_46)) || (*p_22))) > 0x48L) <= g_347)) || l_569) , 0x83L), 5)))) == p_23);
    }
    return l_570;
}



static union U1  func_24(int32_t * const  p_25)
{ 
    uint32_t l_56 = 0xFFC8DFB1L;
    const struct S0 *l_67 = &g_68;
    struct S0 * const l_69 = &g_43;
    int32_t l_106 = 0x6CDFB547L;
    int32_t l_107 = 0x61A6B3F7L;
    int32_t l_108 = 0x3AC3EA96L;
    int32_t l_109[3];
    int32_t **l_158 = &g_46;
    uint32_t l_166 = 0xA5526950L;
    union U1 l_169[4][4] = {{{-10L},{-3L},{-10L},{-3L}},{{-10L},{-3L},{-10L},{-3L}},{{-10L},{-3L},{-10L},{-3L}},{{-10L},{-3L},{-10L},{-3L}}};
    uint16_t *l_198 = &g_197;
    int64_t *l_203 = (void*)0;
    int64_t *l_204 = (void*)0;
    int64_t *l_205[4][5][5] = {{{&g_47,&g_47,&g_47,&g_47,&g_47},{(void*)0,(void*)0,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,(void*)0,(void*)0,&g_47},{&g_47,&g_47,(void*)0,&g_47,&g_47}},{{&g_47,(void*)0,&g_47,(void*)0,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,(void*)0,&g_47,(void*)0},{&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,(void*)0}},{{&g_47,&g_47,(void*)0,(void*)0,&g_47},{(void*)0,&g_47,(void*)0,&g_47,&g_47},{&g_47,&g_47,&g_47,(void*)0,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47}},{{(void*)0,(void*)0,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,(void*)0,(void*)0,&g_47},{&g_47,&g_47,(void*)0,&g_47,&g_47},{&g_47,(void*)0,&g_47,(void*)0,&g_47}}};
    uint32_t *l_206 = &g_48;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_109[i] = 1L;
    for (g_43.f0 = 0; (g_43.f0 <= 3); g_43.f0 = safe_add_func_int64_t_s_s(g_43.f0, 1))
    { 
        int64_t l_55 = (-7L);
        int32_t l_57 = 0L;
        const struct S0 *l_62 = &g_43;
        const struct S0 **l_63 = &l_62;
        const struct S0 *l_65 = &g_66;
        const struct S0 **l_64[2];
        uint16_t l_70 = 65532UL;
        int32_t l_71 = 1L;
        uint16_t l_110 = 65535UL;
        int8_t l_146 = 0x26L;
        int32_t **l_148 = &g_45;
        int32_t ***l_147 = &l_148;
        struct S0 l_173 = {-4L,0x8BFBE81AL,0x69C3L};
        int i;
        for (i = 0; i < 2; i++)
            l_64[i] = &l_65;
        l_71 |= (safe_mod_func_int16_t_s_s((l_55 = 0x8684L), ((((((l_57 = l_56) != 18446744073709551613UL) , g_47) , (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((l_67 = ((*l_63) = l_62)) != l_69), 1)) | ((l_56 & 0xD9L) | g_68.f2)), g_68.f0))) , 4294967295UL) || l_70)));
        if ((*g_45))
        { 
            int32_t *l_72 = &g_9;
            g_45 = p_25;
            (*l_72) = (g_66.f1 | 0x3D18L);
        }
        else
        { 
            int64_t l_81 = (-5L);
            int16_t *l_87 = &g_43.f2;
            int32_t **l_95[4][3][2] = {{{&g_46,&g_45},{&g_46,&g_46},{(void*)0,&g_46}},{{&g_46,&g_45},{&g_46,&g_46},{(void*)0,&g_46}},{{&g_46,&g_45},{&g_46,&g_46},{(void*)0,&g_46}},{{&g_46,&g_46},{(void*)0,&g_45},{&g_45,&g_45}}};
            struct S0 *l_103[7] = {&g_43,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43};
            uint64_t *l_118 = &g_119;
            uint64_t *l_120 = &g_121;
            int i, j, k;
            g_43.f1 &= ((((*l_87) = ((0xE65AFEF7L != (((+((g_5 != 0x53L) , (safe_sub_func_int16_t_s_s(((((!(safe_mod_func_int32_t_s_s((((safe_div_func_uint32_t_u_u((l_81 < ((safe_mod_func_int8_t_s_s(l_81, (((safe_mod_func_uint16_t_u_u(((l_81 , (~(*p_25))) , 65535UL), l_55)) <= 0xC179BD3B10D6F689LL) , l_70))) <= 0UL)), l_56)) >= 0x7B1CL) == l_81), l_81))) & l_56) > 0x32F9EFC8E810CDF1LL) >= l_81), g_68.f2)))) | g_43.f2) && l_81)) == (*p_25))) != l_56) > l_81);
            for (l_70 = 0; (l_70 <= 1); l_70 += 1)
            { 
                struct S0 *l_93 = &g_43;
                struct S0 **l_92[1];
                int32_t ** const l_94 = &g_45;
                int32_t l_105 = 0x72C44E1FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_92[i] = &l_93;
                for (g_47 = 0; (g_47 <= 1); g_47 += 1)
                { 
                    struct S0 *l_88 = &g_89;
                    int32_t *l_91 = &g_9;
                    int32_t ***l_96[6] = {&l_95[2][1][1],(void*)0,&l_95[2][1][1],&l_95[2][1][1],(void*)0,&l_95[2][1][1]};
                    int32_t **l_97 = (void*)0;
                    int i;
                    (*l_88) = (*l_69);
                    (*l_91) &= (g_89.f0 , (safe_unary_minus_func_uint64_t_u(0x0A6BB719D3565F0DLL)));
                    (*l_63) = (*l_63);
                    g_89 = ((&l_65 != l_92[0]) , func_28((l_94 != (l_97 = l_95[2][0][0])), ((*g_45) == (safe_div_func_int8_t_s_s((l_71 == (((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(((g_104 = l_103[1]) == &g_66))) != g_2), g_48)) , g_9) || l_70)), g_89.f1))), (**l_94), &g_9));
                    l_110++;
                }
            }
            g_46 = p_25;
            if ((safe_mul_func_uint16_t_u_u((l_109[2] == (((safe_unary_minus_func_int8_t_s((((((*l_120) = ((*l_118) = g_5)) ^ (&g_89 != l_67)) && (~(*g_45))) && 0x18B63CE86B1698A3LL))) > 0L) == l_70)), 0xA79CL)))
            { 
                int16_t l_144 = 0x1DA4L;
                const int16_t l_145[5] = {0xC09FL,0xC09FL,0xC09FL,0xC09FL,0xC09FL};
                int32_t l_161[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_161[i] = 1L;
                for (g_89.f1 = 14; (g_89.f1 <= 21); ++g_89.f1)
                { 
                    struct S0 l_125 = {-3L,0L,-8L};
                    g_126 = l_125;
                }
                for (l_108 = 0; (l_108 <= (-12)); l_108 = safe_sub_func_uint16_t_u_u(l_108, 5))
                { 
                    int32_t ***l_141 = &l_95[3][0][0];
                    int32_t ****l_149 = &l_147;
                    uint16_t *l_150[1][1];
                    const int16_t l_156 = 0xA796L;
                    int64_t *l_157 = &l_81;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_150[i][j] = &l_70;
                    }
                    if ((*p_25))
                        break;
                    g_9 = 0x90B99AC9L;
                    g_43.f1 &= (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_107 ^= (safe_div_func_uint8_t_u_u(g_89.f2, (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((l_141 == ((*l_149) = ((((((safe_rshift_func_uint16_t_u_s((((&l_69 != (void*)0) | ((0x489111B8B91DEDA0LL ^ (((((l_144 , 0xDB69L) & l_145[0]) & l_110) < (-1L)) >= 0L)) > g_66.f0)) <= l_71), 1)) | 0xF63DAB8FL) != l_146) || g_121) | g_89.f1) , l_147))) || (**l_148)), 65535UL)) & 6UL), 0xA123L)), l_109[2]))))), g_68.f1)), 6));
                    (**l_149) = (((((*l_157) = (((g_151 &= 65535UL) | (((l_109[0] <= (((void*)0 != l_69) < (safe_rshift_func_uint8_t_u_u(0UL, ((safe_mul_func_uint16_t_u_u(((void*)0 == l_103[6]), (****l_149))) | l_156))))) > 1UL) ^ (*p_25))) | 0x8EFA52C4L)) | g_43.f0) > g_126.f1) , l_158);
                }
                for (l_146 = 0; (l_146 <= (-2)); --l_146)
                { 
                    uint32_t l_162 = 1UL;
                    ++l_162;
                    if ((*p_25))
                        continue;
                    return g_165;
                }
            }
            else
            { 
                uint8_t l_172[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_172[i] = 0x32L;
                --l_166;
                l_172[0] &= (l_169[2][3] , (safe_rshift_func_int8_t_s_s(g_68.f2, g_89.f1)));
                l_173 = (**l_63);
            }
        }
    }
    for (l_56 = 0; (l_56 < 3); ++l_56)
    { 
        uint16_t l_176[5][7][7] = {{{65527UL,0x8C64L,0xC80CL,1UL,2UL,65535UL,2UL},{1UL,0xC80CL,0xC80CL,1UL,0UL,1UL,65535UL},{0x8D2DL,0UL,65535UL,0xC80CL,0xB6E7L,1UL,0x22B2L},{0xE03FL,65527UL,1UL,65535UL,0x8C64L,0x2FDBL,65535UL},{0UL,1UL,3UL,0x2FDBL,65534UL,2UL,2UL},{0x0438L,0x2FDBL,65535UL,0x2FDBL,0x0438L,0UL,0UL},{0xC80CL,3UL,0x22B2L,65535UL,0xF1FBL,0xB6E7L,0x920CL}},{{0x9E8DL,0x0438L,0x9623L,0xC80CL,65527UL,0x8C64L,0xF1FBL},{0xC80CL,65535UL,0x941BL,1UL,65535UL,65534UL,0UL},{0x0438L,65535UL,1UL,1UL,65535UL,0x0438L,0x8C64L},{0UL,0x920CL,0x0438L,0x8D2DL,65527UL,0xF1FBL,1UL},{0xE03FL,0xA1A6L,0x2FDBL,1UL,0xF1FBL,65527UL,0x8D2DL},{0x8D2DL,0x920CL,0xA1A6L,0x8C64L,0x0438L,65535UL,1UL},{1UL,65535UL,65534UL,0UL,65534UL,65535UL,1UL}},{{65527UL,65535UL,0UL,0xF1FBL,0x8C64L,65527UL,0xC80CL},{2UL,0x0438L,1UL,0x920CL,0xB6E7L,0xF1FBL,65535UL},{65527UL,3UL,0UL,0UL,0UL,0x0438L,0x2FDBL},{3UL,0x2FDBL,65534UL,2UL,2UL,65534UL,0x2FDBL},{0xB6E7L,1UL,0xA1A6L,65535UL,0x2FDBL,0x8C64L,65535UL},{0x941BL,65527UL,0x2FDBL,0x22B2L,1UL,0xB6E7L,0xC80CL},{0x2FDBL,0UL,0x0438L,65535UL,1UL,0UL,1UL}},{{0x8C64L,0xC80CL,1UL,2UL,65535UL,2UL,1UL},{0x8C64L,0x8C64L,0x941BL,0UL,0x9E8DL,0x2FDBL,0x8D2DL},{0x2FDBL,0xE03FL,0x9623L,0x920CL,0x941BL,1UL,3UL},{0x0438L,0xA1A6L,1UL,65535UL,0xB6E7L,3UL,0xF1FBL},{1UL,1UL,65535UL,0x9623L,1UL,1UL,0x9623L},{0x920CL,1UL,0x920CL,0xF1FBL,3UL,0xB6E7L,65535UL},{0x941BL,0xA1A6L,65534UL,3UL,65527UL,0x0438L,65527UL}},{{0UL,65535UL,1UL,0xC80CL,0x9E8DL,0xB6E7L,0xE03FL},{0x8D2DL,0xF1FBL,2UL,65527UL,0UL,1UL,0UL},{65534UL,2UL,2UL,65534UL,0x2FDBL,3UL,1UL},{0xC80CL,0xE03FL,1UL,2UL,1UL,65527UL,1UL},{65535UL,0x941BL,65534UL,0x22B2L,0xF1FBL,0x9E8DL,1UL},{0x9623L,3UL,0x920CL,0x9E8DL,0xA1A6L,0UL,0UL},{0UL,0x9E8DL,65535UL,0x9E8DL,0UL,0x2FDBL,0xE03FL}}};
        uint8_t l_177 = 0x5DL;
        int16_t *l_180 = &g_165.f1.f2;
        int64_t *l_181[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_182 = 0L;
        int i, j, k;
        l_182 ^= (l_176[2][3][1] && ((l_177 == ((safe_lshift_func_int16_t_s_s((**l_158), ((*l_180) = (-1L)))) == 9L)) & ((((**l_158) , (g_47 = (((((l_176[2][6][0] , (**l_158)) | l_176[2][3][1]) , g_48) != l_176[0][1][4]) >= 0L))) ^ 7L) <= l_176[2][1][6])));
    }
    for (g_48 = 0; (g_48 <= 46); g_48 = safe_add_func_int16_t_s_s(g_48, 3))
    { 
        int32_t *l_185 = (void*)0;
        int32_t *l_186 = &g_9;
        int32_t *l_187 = (void*)0;
        int32_t *l_188 = &l_109[2];
        int32_t *l_189[1][6];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_189[i][j] = &g_89.f1;
        }
        (*l_158) = &g_5;
        --g_190[1][2][1];
    }
    l_106 ^= (safe_sub_func_int32_t_s_s((*g_46), (!((*l_206) = ((**l_158) <= ((g_196[0][1][0] == l_198) < (((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((((((g_47 = (-10L)) <= (g_43 , g_151)) != 0xDA364DE6L) ^ (**l_158)) || g_2), 0x1667L)) | 0x9871L), (**l_158))) | 1UL) | 3UL)))))));
    return l_169[2][3];
}



static int32_t * func_26(uint64_t  p_27)
{ 
    int32_t *l_33 = &g_2;
    struct S0 *l_41 = (void*)0;
    struct S0 *l_42 = &g_43;
    int32_t **l_44[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int i, j;
    (*l_42) = func_28(((void*)0 != l_33), ((&g_2 != (void*)0) ^ p_27), (*l_33), l_33);
    g_46 = (g_45 = &g_2);
    g_48--;
    l_41 = (void*)0;
    return &g_2;
}



static struct S0  func_28(const uint32_t  p_29, int16_t  p_30, int32_t  p_31, int32_t * p_32)
{ 
    int64_t l_38 = 3L;
    int32_t *l_39[6][6][6] = {{{(void*)0,&g_9,&g_2,&g_9,(void*)0,&g_5},{&g_9,&g_5,&g_5,&g_2,&g_5,&g_9},{&g_9,&g_5,&g_2,(void*)0,(void*)0,&g_2},{&g_9,&g_9,&g_5,&g_5,&g_9,&g_5},{&g_9,(void*)0,&g_9,&g_9,&g_5,&g_5},{&g_5,&g_9,&g_9,&g_5,&g_9,&g_5}},{{&g_5,&g_5,&g_5,&g_5,&g_5,&g_2},{&g_5,&g_5,&g_2,&g_5,(void*)0,&g_9},{&g_5,&g_2,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_2,&g_2,&g_5,&g_9,(void*)0},{&g_5,&g_5,&g_9,&g_5,&g_5,&g_9},{&g_5,&g_5,&g_9,&g_9,&g_5,&g_5}},{{&g_9,&g_5,&g_5,&g_5,&g_9,&g_9},{&g_9,&g_2,&g_9,(void*)0,&g_5,&g_5},{&g_9,&g_2,&g_9,&g_2,(void*)0,&g_5},{&g_9,&g_5,&g_9,&g_9,&g_5,&g_5},{(void*)0,&g_2,&g_5,&g_9,&g_5,&g_5},{&g_2,&g_5,&g_5,&g_9,&g_9,&g_5}},{{&g_2,&g_9,&g_9,&g_9,&g_9,&g_9},{(void*)0,&g_5,&g_9,&g_5,&g_9,&g_5},{&g_5,(void*)0,&g_9,&g_9,&g_5,&g_9},{&g_5,(void*)0,&g_9,&g_9,&g_9,&g_9},{&g_5,&g_5,(void*)0,&g_2,&g_9,&g_2},{&g_5,&g_9,&g_5,&g_5,&g_9,(void*)0}},{{&g_5,&g_5,&g_5,&g_2,&g_5,&g_2},{(void*)0,&g_2,(void*)0,&g_5,&g_5,&g_9},{&g_5,&g_5,&g_9,&g_9,(void*)0,&g_9},{&g_2,&g_9,&g_9,&g_9,&g_5,&g_5},{&g_5,&g_9,&g_9,&g_5,&g_5,&g_9},{(void*)0,&g_2,&g_9,&g_2,&g_9,&g_5}},{{&g_5,&g_9,&g_5,&g_5,&g_9,&g_5},{&g_5,&g_2,&g_5,&g_2,&g_5,&g_5},{&g_5,&g_9,&g_5,&g_9,&g_5,&g_5},{&g_5,&g_9,&g_5,&g_9,(void*)0,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_2,&g_5,&g_9,&g_5,&g_5}}};
    struct S0 l_40 = {0xFFL,-1L,-1L};
    int i, j, k;
    g_9 = (p_31 < (((safe_add_func_uint16_t_u_u(9UL, (g_9 < (safe_add_func_int64_t_s_s(((l_38 && g_5) >= 0xBA5B0420L), (g_9 , 0x87FD074DEFC72FA5LL)))))) , 65529UL) || l_38));
    return l_40;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_43.f2, "g_43.f2", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_126.f2, "g_126.f2", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_190[i][j][k], "g_190[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_258[i][j], "g_258[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_530[i], "g_530[i]", print_hash_value);

    }
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_799, "g_799", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_800[i][j][k], "g_800[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_842, "g_842", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
