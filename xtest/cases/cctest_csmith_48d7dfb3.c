// SPDX-License-Identifier: MIT
// cctest_csmith_48d7dfb3.c --- cctest case csmith_48d7dfb3 (csmith seed 1222107059)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5b1b5b9f */

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

// Options:   -s 1222107059 -o /tmp/csmith_gen_f27zxnr2/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
   int64_t  f1;
   uint8_t  f2;
   const uint32_t  f3;
   uint32_t  f4;
   const int64_t  f5;
   int32_t  f6;
};

union U1 {
   const uint64_t  f0;
   int8_t  f1;
   const struct S0  f2;
};

union U2 {
   int32_t  f0;
   int32_t  f1;
   int8_t  f2;
   uint32_t  f3;
};

union U3 {
   int32_t  f0;
};

union U4 {
   int64_t  f0;
};


static int32_t g_10 = 0x1F13B01DL;
static int32_t g_13 = 0x7812A3CCL;
static int8_t g_30 = 0x5EL;
static const int32_t g_46 = (-2L);
static const int32_t *g_45 = &g_46;
static const int32_t *g_47 = (void*)0;
static union U2 g_72 = {0x38C87C63L};
static int16_t g_76 = (-1L);
static uint64_t g_92 = 0UL;
static uint8_t g_102[1] = {1UL};
static int64_t g_118 = 0x7A49E812ED69965FLL;
static int32_t g_142[1] = {6L};
static uint32_t g_163 = 4294967292UL;
static union U4 g_168 = {1L};
static uint64_t g_170[5][3][4] = {{{5UL,18446744073709551615UL,0xEBD96B05D7DFB7EELL,0UL},{1UL,0UL,0x1E89F1BA8A213CC1LL,18446744073709551615UL},{1UL,1UL,1UL,0UL}},{{0UL,0xC650DF9A620E0AF8LL,0x95D173CA94711538LL,18446744073709551607UL},{0UL,18446744073709551615UL,18446744073709551607UL,0xC650DF9A620E0AF8LL},{0xEBD96B05D7DFB7EELL,0x44CA3D7B8FE932ECLL,18446744073709551607UL,5UL}},{{0UL,0xEBD96B05D7DFB7EELL,0x95D173CA94711538LL,1UL},{0UL,0x1E89F1BA8A213CC1LL,1UL,1UL},{1UL,1UL,0x1E89F1BA8A213CC1LL,0UL}},{{1UL,0x95D173CA94711538LL,0xEBD96B05D7DFB7EELL,0UL},{5UL,18446744073709551607UL,0x44CA3D7B8FE932ECLL,0xEBD96B05D7DFB7EELL},{0UL,0UL,0UL,1UL}},{{0UL,0x44CA3D7B8FE932ECLL,0UL,1UL},{0xEBD96B05D7DFB7EELL,0x3A84B1F90EDD5446LL,0x38C5593A3FB78770LL,0x3A84B1F90EDD5446LL},{0x9ED38AF219272154LL,1UL,1UL,18446744073709551615UL}}};
static int64_t g_171 = 0x1A12690506A2FBD8LL;
static struct S0 g_185 = {0xEB405AA7L,-6L,0UL,0x15AB6DA7L,0xA41DF588L,0x6CA199CCF4BB6045LL,0L};
static union U3 g_187 = {3L};
static uint16_t g_209 = 0xC764L;
static struct S0 g_228 = {0L,0x7BE03BB9ED89F813LL,0xFDL,0UL,0UL,0x0C7B2332137CA801LL,1L};
static union U1 g_275 = {0xC81D454ED2D85002LL};
static int32_t *g_317 = &g_228.f0;
static const struct S0 g_412 = {-2L,0xA2B5EFFBAF7BE566LL,7UL,0x784E38B7L,0x668EE8ABL,7L,0x8E2DAAFBL};
static struct S0 g_473 = {0x6140496EL,9L,0xE8L,4294967293UL,0x99166B22L,-3L,0x05D1BA71L};
static struct S0 *g_474 = (void*)0;
static uint8_t *g_503[4] = {&g_473.f2,&g_473.f2,&g_473.f2,&g_473.f2};
static uint8_t **g_502 = &g_503[1];
static uint16_t *g_549 = &g_209;
static uint16_t **g_548 = &g_549;
static int32_t g_639[1][5][7] = {{{(-9L),0L,5L,0x53F256B0L,0x53F256B0L,5L,0L},{(-9L),0L,5L,0x53F256B0L,0x53F256B0L,5L,0L},{(-9L),0L,5L,0x53F256B0L,0x53F256B0L,5L,0L},{(-9L),0L,5L,0x53F256B0L,0x53F256B0L,5L,0L},{(-9L),0L,5L,0x53F256B0L,0x53F256B0L,5L,0L}}};
static int8_t *g_671 = &g_72.f2;
static int8_t **g_670 = &g_671;
static int8_t ***g_669 = &g_670;
static int16_t *g_693[4][2][2] = {{{&g_76,&g_76},{&g_76,&g_76}},{{&g_76,&g_76},{&g_76,&g_76}},{{&g_76,&g_76},{&g_76,&g_76}},{{&g_76,&g_76},{&g_76,&g_76}}};
static int16_t **g_692 = &g_693[3][0][1];
static uint8_t g_697 = 5UL;
static uint64_t g_708 = 18446744073709551607UL;
static union U2 g_795 = {0x7F08A892L};
static const uint32_t g_806[3] = {1UL,1UL,1UL};
static uint32_t g_889 = 1UL;
static union U3 *g_894 = (void*)0;
static const union U2 **g_929 = (void*)0;
static uint32_t g_958 = 5UL;
static int16_t g_983[6][2] = {{1L,0xD446L},{0xD446L,1L},{0xD446L,0xD446L},{1L,0xD446L},{0xD446L,1L},{0xD446L,0xD446L}};
static const int8_t g_1002 = 0xBEL;
static const int8_t *g_1001[5] = {&g_1002,&g_1002,&g_1002,&g_1002,&g_1002};
static const int8_t **g_1000 = &g_1001[4];
static union U4 g_1017 = {0xCB342EBA78CA26CCLL};
static uint64_t **g_1053 = (void*)0;
static uint8_t g_1065 = 0UL;
static union U1 g_1123 = {0x6484103E476E1D65LL};
static union U1 * const g_1122 = &g_1123;
static int64_t g_1126 = 0x5A748BDAF44B9C05LL;
static int32_t g_1193 = 0x06583712L;
static int8_t g_1241 = 0xD6L;
static const int16_t g_1258 = 5L;
static uint16_t ***g_1352 = &g_548;
static int64_t *** const g_1380 = (void*)0;
static struct S0 **g_1418 = (void*)0;
static struct S0 ***g_1417[7][4] = {{&g_1418,&g_1418,&g_1418,&g_1418},{&g_1418,&g_1418,&g_1418,&g_1418},{&g_1418,&g_1418,&g_1418,&g_1418},{&g_1418,&g_1418,&g_1418,&g_1418},{&g_1418,&g_1418,&g_1418,&g_1418},{&g_1418,&g_1418,&g_1418,&g_1418},{&g_1418,&g_1418,&g_1418,&g_1418}};
static int32_t *g_1426[3] = {&g_1193,&g_1193,&g_1193};
static int32_t ** const g_1425 = &g_1426[0];
static const int32_t *g_1544[7][2] = {{&g_795.f1,&g_795.f1},{&g_142[0],&g_795.f1},{&g_795.f1,&g_142[0]},{&g_185.f6,&g_185.f6},{&g_185.f6,&g_142[0]},{&g_795.f1,&g_795.f1},{&g_142[0],&g_795.f1}};
static union U3 * const *g_1568 = &g_894;
static union U3 * const ** const g_1567[7] = {&g_1568,&g_1568,&g_1568,&g_1568,&g_1568,&g_1568,&g_1568};
static struct S0 g_1578 = {0x30BACBDDL,0xBC4044BEE21724C1LL,1UL,0xBCE519E9L,0xF7771CE9L,0xA7F6AB1A25EA72C1LL,0x50E0761EL};
static uint8_t g_1586 = 0x2AL;
static uint32_t *g_1637 = &g_958;
static uint32_t **g_1636 = &g_1637;
static union U1 g_1662 = {0x0C769B5381833764LL};
static uint8_t *g_1694 = (void*)0;
static struct S0 *** const *g_1758 = (void*)0;
static struct S0 g_1824[1][2][7] = {{{{0xCDF8DFEBL,1L,0UL,0x43BCFDF3L,4294967294UL,-1L,0x5CE8F7D6L},{0xA9002165L,0x15F55F410C9B5BDCLL,2UL,0xE8ECFACFL,0x7E8A02BEL,0L,0x9F4F1556L},{0xA9002165L,0x15F55F410C9B5BDCLL,2UL,0xE8ECFACFL,0x7E8A02BEL,0L,0x9F4F1556L},{0xCDF8DFEBL,1L,0UL,0x43BCFDF3L,4294967294UL,-1L,0x5CE8F7D6L},{0x6AE1DA95L,0x0A1F211E5865C52ELL,0xCFL,0xB5F565F9L,0xB51AA867L,0xECDD042BAAA9FBECLL,0x8C6FF73FL},{-2L,0x2F9BDC6E6A775AB0LL,255UL,0xC2F45DFFL,0x85A11F6BL,-10L,0L},{0x6AE1DA95L,0x0A1F211E5865C52ELL,0xCFL,0xB5F565F9L,0xB51AA867L,0xECDD042BAAA9FBECLL,0x8C6FF73FL}},{{0xCDF8DFEBL,1L,0UL,0x43BCFDF3L,4294967294UL,-1L,0x5CE8F7D6L},{0xA9002165L,0x15F55F410C9B5BDCLL,2UL,0xE8ECFACFL,0x7E8A02BEL,0L,0x9F4F1556L},{0xA9002165L,0x15F55F410C9B5BDCLL,2UL,0xE8ECFACFL,0x7E8A02BEL,0L,0x9F4F1556L},{0xCDF8DFEBL,1L,0UL,0x43BCFDF3L,4294967294UL,-1L,0x5CE8F7D6L},{0x6AE1DA95L,0x0A1F211E5865C52ELL,0xCFL,0xB5F565F9L,0xB51AA867L,0xECDD042BAAA9FBECLL,0x8C6FF73FL},{-2L,0x2F9BDC6E6A775AB0LL,255UL,0xC2F45DFFL,0x85A11F6BL,-10L,0L},{0x6AE1DA95L,0x0A1F211E5865C52ELL,0xCFL,0xB5F565F9L,0xB51AA867L,0xECDD042BAAA9FBECLL,0x8C6FF73FL}}}};
static int16_t ***g_1840 = &g_692;
static int16_t *** const * const g_1839 = &g_1840;
static uint64_t g_1946 = 0x0002D558C9B15775LL;
static union U2 *g_1969 = &g_72;
static union U2 **g_1968 = &g_1969;
static union U2 ***g_1967 = &g_1968;
static union U2 ****g_1966[3][6][5] = {{{&g_1967,&g_1967,(void*)0,&g_1967,&g_1967},{(void*)0,(void*)0,&g_1967,&g_1967,&g_1967},{(void*)0,&g_1967,(void*)0,&g_1967,(void*)0},{(void*)0,&g_1967,(void*)0,(void*)0,&g_1967},{&g_1967,&g_1967,(void*)0,&g_1967,&g_1967},{&g_1967,(void*)0,(void*)0,&g_1967,(void*)0}},{{(void*)0,&g_1967,(void*)0,&g_1967,(void*)0},{&g_1967,&g_1967,&g_1967,(void*)0,(void*)0},{&g_1967,&g_1967,(void*)0,&g_1967,&g_1967},{(void*)0,(void*)0,&g_1967,&g_1967,&g_1967},{(void*)0,&g_1967,(void*)0,&g_1967,(void*)0},{(void*)0,&g_1967,(void*)0,(void*)0,&g_1967}},{{&g_1967,&g_1967,(void*)0,&g_1967,&g_1967},{&g_1967,(void*)0,(void*)0,&g_1967,(void*)0},{(void*)0,&g_1967,(void*)0,&g_1967,(void*)0},{&g_1967,&g_1967,&g_1967,(void*)0,(void*)0},{&g_1967,&g_1967,(void*)0,&g_1967,&g_1967},{(void*)0,(void*)0,&g_1967,&g_1967,&g_1967}}};
static uint16_t g_2025 = 0xD4B6L;
static uint32_t g_2106 = 0xE472D982L;
static int8_t ****g_2123 = &g_669;
static uint8_t ****g_2136[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_2139 = 0xACC77C7DL;
static int8_t * const g_2202[4][7][5] = {{{&g_1662.f1,&g_1241,&g_1241,&g_1662.f1,&g_795.f2},{&g_72.f2,&g_1123.f1,&g_795.f2,&g_795.f2,&g_1123.f1},{&g_30,&g_30,&g_1662.f1,&g_795.f2,&g_795.f2},{&g_795.f2,&g_72.f2,&g_1662.f1,&g_72.f2,&g_795.f2},{&g_1241,&g_30,&g_72.f2,&g_72.f2,&g_72.f2},{&g_1123.f1,&g_1123.f1,&g_1123.f1,&g_72.f2,&g_1241},{&g_30,&g_1241,&g_275.f1,&g_795.f2,&g_1662.f1}},{{&g_1123.f1,&g_1123.f1,&g_72.f2,&g_795.f2,&g_795.f2},{&g_1241,&g_1123.f1,&g_275.f1,&g_1662.f1,&g_1123.f1},{&g_795.f2,&g_1662.f1,&g_1123.f1,&g_1123.f1,&g_795.f2},{&g_30,&g_795.f2,&g_72.f2,&g_1241,&g_1662.f1},{&g_72.f2,&g_1662.f1,&g_1662.f1,&g_1241,&g_1241},{&g_1662.f1,&g_1123.f1,&g_1662.f1,&g_1241,&g_72.f2},{&g_30,&g_1123.f1,&g_795.f2,&g_1123.f1,&g_795.f2}},{{&g_1662.f1,&g_1241,&g_1241,&g_1662.f1,&g_795.f2},{&g_72.f2,&g_1123.f1,&g_795.f2,&g_795.f2,&g_1123.f1},{&g_30,&g_30,&g_1662.f1,&g_795.f2,&g_795.f2},{&g_795.f2,&g_72.f2,&g_1662.f1,&g_72.f2,&g_795.f2},{&g_1241,&g_30,&g_72.f2,&g_72.f2,&g_72.f2},{&g_1123.f1,&g_1123.f1,&g_1123.f1,&g_72.f2,&g_1241},{&g_30,&g_1241,&g_275.f1,&g_795.f2,&g_1662.f1}},{{&g_1123.f1,&g_1123.f1,&g_72.f2,&g_795.f2,&g_795.f2},{&g_1241,&g_1123.f1,&g_275.f1,&g_1662.f1,&g_1123.f1},{&g_795.f2,&g_1662.f1,&g_1123.f1,&g_1123.f1,&g_795.f2},{&g_30,&g_795.f2,&g_72.f2,&g_1241,&g_1662.f1},{&g_72.f2,&g_1662.f1,&g_1662.f1,&g_1241,&g_72.f2},{&g_275.f1,&g_1662.f1,&g_275.f1,&g_275.f1,&g_1241},{&g_72.f2,&g_30,&g_72.f2,&g_1123.f1,&g_1662.f1}}};
static union U2 *****g_2215[5][6][5] = {{{&g_1966[0][0][3],&g_1966[0][0][0],&g_1966[2][5][0],&g_1966[2][2][4],&g_1966[2][4][4]},{&g_1966[2][1][0],&g_1966[1][2][2],&g_1966[1][3][3],&g_1966[2][4][4],&g_1966[1][5][3]},{&g_1966[0][0][2],&g_1966[2][1][0],&g_1966[2][2][0],&g_1966[2][1][0],&g_1966[0][0][2]},{(void*)0,&g_1966[1][2][2],&g_1966[1][5][3],&g_1966[1][3][3],(void*)0},{&g_1966[1][2][2],&g_1966[2][4][0],&g_1966[1][3][3],&g_1966[0][0][2],&g_1966[0][0][1]},{&g_1966[1][2][2],&g_1966[0][0][2],(void*)0,&g_1966[1][2][2],(void*)0}},{{&g_1966[1][5][3],&g_1966[0][0][2],&g_1966[2][0][3],&g_1966[1][5][3],&g_1966[0][0][2]},{(void*)0,&g_1966[2][0][3],&g_1966[1][2][2],&g_1966[0][0][0],&g_1966[1][5][3]},{&g_1966[1][2][2],&g_1966[0][0][2],&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[2][4][4]},{&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[0][0][0]},{&g_1966[1][2][2],(void*)0,&g_1966[2][4][0],&g_1966[1][2][2],&g_1966[1][2][2]},{&g_1966[1][2][2],&g_1966[2][1][0],&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[1][2][2]}},{{&g_1966[1][2][2],(void*)0,&g_1966[0][0][3],&g_1966[2][0][3],&g_1966[1][2][1]},{&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[0][5][0],&g_1966[1][2][2],&g_1966[0][5][0]},{(void*)0,(void*)0,&g_1966[0][0][2],&g_1966[2][1][0],&g_1966[1][2][2]},{&g_1966[1][5][3],(void*)0,&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[1][2][1]},{&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[1][3][3]},{&g_1966[1][2][2],(void*)0,&g_1966[1][2][2],&g_1966[1][2][2],(void*)0}},{{(void*)0,(void*)0,&g_1966[2][0][3],&g_1966[1][2][2],&g_1966[0][0][0]},{&g_1966[0][0][2],&g_1966[1][2][2],&g_1966[2][5][0],&g_1966[1][2][2],&g_1966[1][2][2]},{&g_1966[2][1][0],(void*)0,&g_1966[0][1][2],&g_1966[2][4][4],&g_1966[1][2][2]},{&g_1966[0][0][3],&g_1966[2][1][0],&g_1966[1][5][3],&g_1966[1][2][2],&g_1966[0][0][2]},{&g_1966[1][2][1],(void*)0,&g_1966[1][5][3],&g_1966[1][2][2],&g_1966[1][2][2]},{&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[0][1][2],&g_1966[0][0][2],&g_1966[1][2][2]}},{{&g_1966[0][0][1],&g_1966[0][0][2],&g_1966[2][5][0],(void*)0,(void*)0},{&g_1966[1][2][2],&g_1966[2][0][3],&g_1966[2][0][3],&g_1966[1][2][2],&g_1966[0][0][3]},{(void*)0,&g_1966[0][0][2],&g_1966[1][2][2],&g_1966[0][0][0],&g_1966[1][2][2]},{(void*)0,&g_1966[0][0][2],&g_1966[1][2][2],&g_1966[0][5][0],&g_1966[2][4][4]},{&g_1966[1][2][2],&g_1966[2][4][0],&g_1966[1][2][2],&g_1966[0][0][0],&g_1966[1][2][2]},{&g_1966[1][2][2],&g_1966[1][2][2],&g_1966[0][0][2],&g_1966[1][2][2],(void*)0}}};



static uint32_t  func_1(void);
static int16_t  func_18(uint32_t  p_19, union U4  p_20, int64_t  p_21, int32_t  p_22, const int32_t  p_23);
static union U2  func_34(int8_t * p_35, const union U1  p_36, int32_t * p_37, union U4  p_38, union U3  p_39);
static union U2  func_40(int32_t * const  p_41);
static int32_t * func_48(int32_t ** p_49, int8_t * const  p_50, int32_t ** p_51);
static int8_t * func_54(int64_t  p_55, int32_t  p_56, union U3  p_57, int8_t  p_58, int32_t ** p_59);
static int64_t  func_62(struct S0  p_63, int32_t * p_64);
static int32_t  func_66(union U2  p_67, int32_t  p_68, int8_t * p_69, int32_t * p_70, int8_t * p_71);




static uint32_t  func_1(void)
{ 
    int32_t *l_2 = (void*)0;
    uint8_t l_3 = 0x92L;
    int32_t *l_11 = (void*)0;
    int32_t *l_12[2][3][1];
    union U4 l_2014[7][7] = {{{9L},{0x16E4515142286F68LL},{-1L},{0x4FAF6FFCF2A795B5LL},{0L},{-1L},{-1L}},{{0L},{0x8C5454F096D0C8F6LL},{-1L},{0x8C5454F096D0C8F6LL},{0L},{0x4FAF6FFCF2A795B5LL},{9L}},{{0x7F3FCF11E91298B2LL},{0xCDDB63A871C638A2LL},{-1L},{0xC0DB2387E1788B84LL},{0x8C5454F096D0C8F6LL},{-1L},{3L}},{{0xC0DB2387E1788B84LL},{0xE4CA18BCFAAF0B1DLL},{-1L},{-1L},{-1L},{-1L},{0xE4CA18BCFAAF0B1DLL}},{{0x7F3FCF11E91298B2LL},{0xC0DB2387E1788B84LL},{0xE4CA18BCFAAF0B1DLL},{0x7F3FCF11E91298B2LL},{0L},{0x16E4515142286F68LL},{-1L}},{{0x748C76E30DEFB4E1LL},{-1L},{-1L},{0xC0DB2387E1788B84LL},{0L},{0L},{0L}},{{0x7F3FCF11E91298B2LL},{0L},{0L},{0x7F3FCF11E91298B2LL},{0xCDDB63A871C638A2LL},{-1L},{0xC0DB2387E1788B84LL}}};
    union U3 l_2015 = {0x60A99C46L};
    union U2 *l_2157[1];
    struct S0 *** const *l_2160 = (void*)0;
    struct S0 *** const * const l_2161[3] = {(void*)0,(void*)0,(void*)0};
    int32_t l_2187 = 0L;
    uint16_t l_2198 = 0x2D12L;
    union U2 *** const *l_2214 = &g_1967;
    union U2 *** const * const *l_2213 = &l_2214;
    uint32_t l_2230[1];
    uint8_t l_2237 = 251UL;
    int64_t l_2238 = (-1L);
    int32_t l_2258 = 0L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_12[i][j][k] = &g_13;
        }
    }
    for (i = 0; i < 1; i++)
        l_2157[i] = &g_795;
    for (i = 0; i < 1; i++)
        l_2230[i] = 0x252BF6B9L;
    l_3++;
    g_13 &= (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_10, g_10)), g_10));
    l_12[0][1][0] = l_12[1][1][0];
    for (l_3 = 0; (l_3 < 45); l_3++)
    { 
        int8_t *l_28 = (void*)0;
        int8_t *l_29[4];
        int32_t * const l_42 = (void*)0;
        const union U1 l_2013 = {0UL};
        int16_t l_2041 = 0x4AB0L;
        int16_t *l_2042 = &g_983[5][0];
        int8_t l_2043 = 8L;
        union U4 l_2044 = {1L};
        union U2 *l_2156 = &g_795;
        int64_t l_2164 = 0xB7A4BC77C6013F7ELL;
        int32_t l_2165 = 0x1FB7DB64L;
        int32_t l_2166 = 0x311F9EA9L;
        int32_t l_2168 = 0x0381865FL;
        int32_t l_2171 = 0L;
        int32_t l_2172[2];
        uint32_t l_2175 = 0xDAD1ED0FL;
        union U1 l_2196 = {0x13F2CF4DA40C3A6BLL};
        uint16_t l_2197 = 65535UL;
        uint8_t l_2201[4] = {255UL,255UL,255UL,255UL};
        uint32_t l_2204[3];
        struct S0 l_2252 = {1L,1L,0xADL,4294967295UL,0x342F3D47L,0x41CE3CB5AF9F7C8BLL,0x66C1932EL};
        int64_t l_2257[2];
        const int16_t l_2259[7][5] = {{1L,0x988FL,0x988FL,1L,0xC394L},{1L,0x8B01L,0xB78FL,0xB78FL,0x8B01L},{0xC394L,0x988FL,0xB78FL,(-7L),(-7L)},{0x988FL,0xC394L,0x988FL,0xB78FL,(-7L)},{0x8B01L,1L,(-7L),1L,0x8B01L},{0x988FL,1L,0xC394L,0x8B01L,0xC394L},{0xC394L,0xC394L,(-7L),0x8B01L,1L}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_29[i] = &g_30;
        for (i = 0; i < 2; i++)
            l_2172[i] = (-5L);
        for (i = 0; i < 3; i++)
            l_2204[i] = 0UL;
        for (i = 0; i < 2; i++)
            l_2257[i] = 0xBA5B042041022496LL;
    }
    return (**g_1636);
}



static int16_t  func_18(uint32_t  p_19, union U4  p_20, int64_t  p_21, int32_t  p_22, const int32_t  p_23)
{ 
    union U2 *l_2047 = &g_795;
    int32_t *l_2051 = &g_639[0][4][4];
    union U1 l_2054[3] = {{0x3865DF7290AD256ALL},{0x3865DF7290AD256ALL},{0x3865DF7290AD256ALL}};
    int8_t l_2059 = (-1L);
    int64_t *l_2093 = &g_1578.f1;
    int64_t **l_2092 = &l_2093;
    union U3 l_2144 = {0x1261871CL};
    int32_t *l_2150 = &g_473.f0;
    int32_t **l_2152 = (void*)0;
    int32_t **l_2153[3];
    int32_t *l_2154 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_2153[i] = &g_317;
    for (p_21 = 0; (p_21 >= 6); p_21 = safe_add_func_uint16_t_u_u(p_21, 5))
    { 
        int32_t l_2052 = (-8L);
        int32_t l_2060 = 0x94BD38F2L;
        int64_t *l_2091 = &g_1824[0][0][2].f1;
        int64_t **l_2090 = &l_2091;
        int8_t ****l_2121[1];
        int32_t **l_2151[3][5] = {{&l_2051,&l_2051,&l_2051,&l_2051,&l_2051},{&l_2051,&l_2051,&l_2051,&l_2051,&l_2051},{&l_2051,&l_2051,&l_2051,&l_2051,&l_2051}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_2121[i] = &g_669;
        (*g_1968) = l_2047;
        for (g_1578.f4 = (-1); (g_1578.f4 != 16); g_1578.f4++)
        { 
            int32_t **l_2050[4][6][2] = {{{&g_317,(void*)0},{&g_317,&g_317},{&g_317,(void*)0},{&g_317,&g_317},{&g_317,&g_317},{&g_317,(void*)0}},{{&g_317,&g_317},{&g_317,(void*)0},{&g_317,&g_317},{&g_317,&g_317},{&g_317,(void*)0},{&g_317,&g_317}},{{&g_317,(void*)0},{&g_317,&g_317},{&g_317,&g_317},{&g_317,(void*)0},{&g_317,&g_317},{&g_317,(void*)0}},{{&g_317,&g_317},{&g_317,&g_317},{&g_317,(void*)0},{&g_317,&g_317},{&g_317,(void*)0},{&g_317,&g_317}}};
            uint32_t *l_2053 = &g_889;
            struct S0 ***l_2075 = &g_1418;
            uint32_t ***l_2084 = (void*)0;
            int16_t ***l_2146 = &g_692;
            int i, j, k;
            g_1544[6][0] = (void*)0;
            l_2051 = &p_22;
            if ((((*l_2053) = l_2052) | ((((l_2054[1] , (safe_lshift_func_int8_t_s_u((**g_670), ((l_2060 ^= (safe_lshift_func_uint8_t_u_u((((**g_1425) = 0x64BB7317L) , (((1L <= (((void*)0 == &p_22) , l_2059)) ^ (**g_548)) & 0UL)), (**g_502)))) >= 0x77BEL)))) && 0x9B01L) > 0xA765438FC1E6D1ECLL) , 0UL)))
            { 
                const uint16_t l_2105[4] = {0xA2BCL,0xA2BCL,0xA2BCL,0xA2BCL};
                int64_t l_2107 = 0x06BEDDC68971168ELL;
                int32_t l_2110 = 0x33F9E43DL;
                int i;
                (*g_317) |= (((*l_2053) = 4294967295UL) && (((((0x7D4FL & ((safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s(((p_23 <= 0x9C015EACA5FD172ALL) >= (safe_div_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(246UL, ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(((((*g_671) = (1L != (*l_2051))) && p_22) || 5UL), p_19)) <= 0xB2D45DEFL), g_102[0])) == (*l_2051)))) | 0x1EF48340L) < 0UL), p_23))), 0x43EBL)), p_19)) >= 0x1758L)) && l_2052) , p_23) < 0x4F9DL) == 18446744073709551615UL));
                for (g_185.f4 = 0; (g_185.f4 >= 11); g_185.f4++)
                { 
                    struct S0 ****l_2076 = &g_1417[5][2];
                    union U3 l_2077[7] = {{0xAFC1573AL},{0L},{0L},{0xAFC1573AL},{0L},{0L},{0xAFC1573AL}};
                    int16_t *l_2089 = &g_983[5][0];
                    uint64_t *l_2094 = &g_708;
                    struct S0 *** const **l_2111 = &g_1758;
                    int i;
                    (*l_2051) = p_19;
                    (*g_317) |= ((((*l_2076) = l_2075) != (void*)0) | (((l_2077[2] , ((safe_mod_func_uint64_t_u_u((((*l_2094) ^= (((safe_div_func_uint16_t_u_u(p_23, (safe_mod_func_int32_t_s_s((((l_2084 == (((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((((((((*l_2089) = l_2052) , (*l_2051)) && p_22) , l_2090) == l_2092) == l_2052), (*l_2051))), p_19)) > 0UL) , &g_1636)) >= 9UL) >= (**g_670)), (-9L))))) <= (-6L)) || g_412.f5)) && p_20.f0), l_2052)) , (-6L))) != g_170[4][2][2]) , p_20.f0));
                    (*g_317) = ((safe_sub_func_uint32_t_u_u(g_1126, (((safe_add_func_int16_t_s_s(((((((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(0x05A1L, (((p_23 != (p_20.f0 <= ((**g_502) = 0xB3L))) > (0UL >= (((safe_div_func_int16_t_s_s((((p_23 , l_2105[0]) >= 0L) || p_20.f0), (*g_549))) >= l_2105[0]) < 0xDDC7B3DDL))) <= 0x2D16D20C83705A16LL))) | g_2106) < l_2052), p_21)) ^ p_21) || 0x7398FAE7L) == l_2107) ^ 0x5E93FD57L) , 0x7788L), 6L)) || 0x9A44L) != p_21))) , (*g_45));
                    g_1578.f6 |= (*g_317);
                    (*l_2051) = ((safe_rshift_func_uint8_t_u_u(l_2110, ((((*l_2111) = &g_1417[6][3]) != &l_2075) < 0x7194E65BBCC436B5LL))) , (((safe_unary_minus_func_int32_t_s((safe_add_func_int16_t_s_s((-1L), ((*g_549) = (*g_549)))))) , (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_2077[2].f0, l_2077[2].f0)), p_23))) > l_2107));
                }
                for (g_1662.f1 = 0; (g_1662.f1 >= 15); ++g_1662.f1)
                { 
                    int8_t *****l_2122[3][2] = {{&l_2121[0],&l_2121[0]},{&l_2121[0],&l_2121[0]},{&l_2121[0],&l_2121[0]}};
                    union U4 *l_2125 = &g_168;
                    union U4 **l_2124 = &l_2125;
                    int i, j;
                    g_2123 = l_2121[0];
                    (*l_2124) = &g_168;
                }
            }
            else
            { 
                int32_t * const l_2130 = &g_10;
                uint64_t *l_2131 = &g_708;
                int16_t ****l_2145 = &g_1840;
                int32_t l_2149 = 0x8C51A62EL;
                (*g_317) = ((((***g_669) = ((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u(((((((void*)0 != l_2130) < ((*l_2131) &= g_639[0][3][6])) && (safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s(1L, ((void*)0 != g_2136[0]))), ((*l_2051) | (*l_2051))))) ^ 8UL) | (*l_2051)), 255UL)) & p_22) == 255UL) == 0x433534B73541F4A4LL), (*g_45))) <= (*g_549))) ^ p_21) ^ (*l_2051));
                (*g_317) &= ((g_2139 || (((((((safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((**l_2090) = (l_2144 , (((*l_2145) = &g_692) == l_2146))), g_185.f5)), (safe_lshift_func_int8_t_s_s((p_22 > g_187.f0), 1)))) | 0xBBL) ^ (**g_502)) | l_2149) , 0xBDL) == 249UL) > p_23)) & 0xAB4FL);
                return p_22;
            }
        }
        if (l_2060)
            break;
        g_45 = l_2150;
        return p_23;
    }
    l_2154 = func_48(&g_317, &l_2059, &l_2150);
    return p_22;
}



static union U2  func_34(int8_t * p_35, const union U1  p_36, int32_t * p_37, union U4  p_38, union U3  p_39)
{ 
    struct S0 **l_2016[4];
    int32_t *l_2017 = &g_185.f0;
    int32_t *l_2018 = (void*)0;
    int32_t *l_2019 = &g_795.f1;
    int32_t *l_2020 = &g_72.f1;
    int32_t *l_2021 = &g_1578.f6;
    int32_t *l_2022 = &g_639[0][1][4];
    int32_t *l_2023[4][5][3] = {{{&g_185.f6,(void*)0,&g_1578.f6},{&g_1824[0][0][2].f6,&g_639[0][3][4],(void*)0},{(void*)0,&g_185.f6,&g_1824[0][0][2].f0},{&g_228.f0,&g_639[0][3][4],&g_228.f0},{(void*)0,(void*)0,&g_639[0][3][4]}},{{(void*)0,&g_1578.f6,&g_228.f0},{&g_639[0][3][4],(void*)0,&g_1824[0][0][2].f0},{&g_13,&g_13,(void*)0},{&g_639[0][3][4],&g_639[0][3][4],&g_1578.f6},{(void*)0,&g_142[0],&g_1824[0][0][2].f6}},{{(void*)0,&g_639[0][3][4],(void*)0},{&g_228.f0,&g_13,&g_1824[0][0][2].f6},{(void*)0,(void*)0,(void*)0},{&g_1824[0][0][2].f6,&g_1578.f6,&g_1824[0][0][2].f6},{&g_185.f6,(void*)0,&g_1578.f6}},{{&g_1824[0][0][2].f6,&g_639[0][3][4],&g_1824[0][0][2].f6},{(void*)0,&g_1824[0][0][2].f0,&g_1578.f6},{&g_13,&g_13,&g_13},{&g_185.f6,(void*)0,(void*)0},{&g_228.f0,&g_142[0],&g_13}}};
    int32_t l_2024 = 0x8B88899AL;
    union U2 l_2028 = {0x0767846CL};
    struct S0 ****l_2035 = &g_1417[5][2];
    int16_t l_2036[2][1][4] = {{{0xE197L,0xE197L,0xE197L,0xE197L}},{{0xE197L,0xE197L,0xE197L,0xE197L}}};
    int32_t **l_2039 = (void*)0;
    int32_t **l_2040 = &l_2020;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2016[i] = &g_474;
    (*g_317) = ((void*)0 != l_2016[0]);
    g_2025--;
    if (((l_2028 , (**g_670)) || 0xE3L))
    { 
        (*l_2020) = (*p_37);
    }
    else
    { 
        union U2 l_2037 = {9L};
        union U2 ****l_2038 = &g_1967;
        (*l_2017) = ((g_412.f6 < (((safe_mul_func_uint16_t_u_u((g_168 , (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_36.f1, ((((((((void*)0 == l_2035) | l_2036[1][0][2]) , p_36.f1) , l_2037) , l_2038) != &g_1967) ^ g_639[0][3][4]))), p_38.f0))), (***g_1352))) || 0x8059D818123CAA6DLL) <= 0x01AFA26B76183CF9LL)) < 4L);
        (*l_2017) |= ((*g_317) = (*p_37));
    }
    (*l_2040) = &l_2024;
    return (**g_1968);
}



static union U2  func_40(int32_t * const  p_41)
{ 
    const int32_t *l_44 = (void*)0;
    const int32_t **l_43[4][7] = {{&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,(void*)0,&l_44,&l_44,(void*)0,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44}};
    int32_t *l_53 = &g_13;
    int32_t **l_52 = &l_53;
    struct S0 l_65 = {-8L,0L,252UL,4294967295UL,0xB51ECDE4L,0x4C77A5C6A8B5F6E5LL,0x995E148CL};
    int16_t *l_75 = &g_76;
    int32_t l_77 = 0x077743AFL;
    int8_t *l_78 = &g_72.f2;
    int64_t *l_1510 = &g_1126;
    union U3 l_1511 = {1L};
    int32_t l_1512 = 0x2E9448B6L;
    int32_t **l_1906 = (void*)0;
    int32_t **l_1907 = &g_317;
    int16_t *l_1908 = &g_983[3][1];
    uint32_t l_1917 = 0x66F92678L;
    const union U1 l_1991 = {0xACD5DD8E52A6A298LL};
    const union U2 l_2000 = {0x1BFC28A7L};
    uint32_t l_2008 = 0UL;
    uint32_t *l_2009 = (void*)0;
    uint32_t *l_2010 = &g_1824[0][0][2].f4;
    int8_t *l_2011 = &g_1123.f1;
    uint32_t l_2012 = 1UL;
    int i, j;
    g_1544[6][0] = (((*l_1908) &= ((g_47 = (g_45 = &g_13)) == ((*l_1907) = ((*l_52) = func_48(l_52, func_54(((*l_1510) = (g_13 , (safe_add_func_uint64_t_u_u((*l_53), (func_62(l_65, (func_66(g_72, (safe_mod_func_int16_t_s_s(((*l_75) = (-1L)), l_77)), l_78, (*l_52), &g_30) , (*l_52))) && 1UL))))), (*l_53), l_1511, l_1512, &l_53), l_52))))) , (void*)0);
    for (g_228.f6 = 1; (g_228.f6 >= 0); g_228.f6 -= 1)
    { 
        struct S0 l_1911 = {-1L,0xCB70696095155A05LL,0xF7L,0UL,0UL,0x82E1C2DD0DC0303ALL,-5L};
        int64_t *l_1916[1][5] = {{&g_171,&g_171,&g_171,&g_171,&g_171}};
        uint32_t l_1918 = 0xE8D0C479L;
        int16_t *l_1919 = &g_76;
        int16_t **l_1920[4][1][1];
        int16_t *l_1921 = &g_76;
        int32_t **l_1923 = &g_1426[2];
        int32_t ***l_1922 = &l_1923;
        int32_t **l_1925 = &g_1426[1];
        int32_t ***l_1924 = &l_1925;
        union U2 l_1935 = {0x8820E5FEL};
        union U3 **l_1945 = &g_894;
        uint32_t l_1953 = 0x014A023FL;
        const uint8_t *l_1957 = &g_412.f2;
        const uint8_t **l_1956 = &l_1957;
        uint32_t *l_1962 = (void*)0;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1920[i][j][k] = &g_693[0][1][1];
            }
        }
        l_1918 ^= ((**l_52) = ((((safe_mul_func_uint8_t_u_u((((*l_1510) |= ((l_1911 , ((((((-1L) | (&g_1568 != (void*)0)) == (safe_sub_func_int32_t_s_s(l_1911.f5, (((safe_add_func_uint16_t_u_u(((**g_548) = (*g_549)), 1UL)) < l_1911.f3) == l_1911.f5)))) , l_1916[0][3]) != (void*)0) , 0x15F1L)) >= l_1917)) | (*l_53)), l_1911.f5)) & l_1911.f2) | 0x78BEL) != l_1911.f0));
    }
    g_1824[0][0][2].f0 = (l_1991 , ((safe_div_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(((*l_2011) = (safe_mul_func_uint8_t_u_u((((*l_2010) ^= (1UL || ((**l_52) = ((**g_670) = (safe_add_func_int16_t_s_s(((((l_2000 , ((*l_75) = ((**l_52) || (**g_548)))) != (safe_unary_minus_func_uint16_t_u((*g_549)))) && (safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((**g_548), l_2008)) && (**l_52)) , 0UL), 0UL)) && (**l_1907)), g_170[4][2][2]))) , 1L), (*l_53))))))) || (*g_317)), (**g_502)))), 0x02L)) | l_2012) <= (***g_1352)) && (**l_1907)), (***g_1352))) , 0x80F88718L));
    return l_2000;
}



static int32_t * func_48(int32_t ** p_49, int8_t * const  p_50, int32_t ** p_51)
{ 
    struct S0 *l_1577 = &g_1578;
    int32_t l_1590 = (-1L);
    int32_t l_1614 = 0L;
    int32_t l_1615 = 0x74DA9352L;
    uint8_t *l_1695[3];
    int32_t *l_1715 = &g_10;
    uint32_t ***l_1717 = &g_1636;
    int32_t *l_1727 = &l_1614;
    uint16_t **l_1754 = &g_549;
    union U3 l_1761[2][1][1] = {{{{0xBE165930L}}},{{{0xBE165930L}}}};
    const int64_t *l_1769 = &g_1578.f5;
    const int64_t * const *l_1768[5];
    struct S0 **l_1784[2][3] = {{&g_474,&g_474,&g_474},{&l_1577,&l_1577,&l_1577}};
    uint64_t **l_1847 = (void*)0;
    int32_t l_1893[5][4] = {{0x6054542AL,(-1L),0xF48079F7L,(-1L)},{(-1L),(-1L),0xF48079F7L,0xF48079F7L},{0x6054542AL,0x6054542AL,(-1L),0xF48079F7L},{8L,(-1L),8L,(-1L)},{8L,(-1L),(-1L),8L}};
    int8_t l_1900 = (-1L);
    uint32_t l_1903 = 0x5DE978F9L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1695[i] = &g_1586;
    for (i = 0; i < 5; i++)
        l_1768[i] = &l_1769;
    return &g_142[0];
}



static int8_t * func_54(int64_t  p_55, int32_t  p_56, union U3  p_57, int8_t  p_58, int32_t ** p_59)
{ 
    int16_t l_1517[1];
    int8_t l_1520[4] = {0x7BL,0x7BL,0x7BL,0x7BL};
    int64_t *l_1530 = &g_118;
    const struct S0 l_1531 = {0L,0x7B351A0A83AE2D5ALL,6UL,4294967286UL,5UL,0L,9L};
    const union U1 *l_1535 = &g_275;
    const union U1 **l_1534 = &l_1535;
    int32_t *l_1541[5][4][7] = {{{(void*)0,&g_13,&g_142[0],&g_13,(void*)0,&g_639[0][3][4],(void*)0},{(void*)0,(void*)0,&g_142[0],&g_13,&g_185.f0,&g_795.f1,(void*)0},{&g_185.f0,&g_13,&g_142[0],(void*)0,(void*)0,&g_795.f1,&g_795.f1},{(void*)0,&g_13,&g_142[0],&g_13,(void*)0,&g_639[0][3][4],(void*)0}},{{(void*)0,(void*)0,&g_142[0],&g_13,&g_185.f0,&g_795.f1,(void*)0},{&g_185.f0,&g_13,&g_142[0],(void*)0,(void*)0,&g_795.f1,&g_795.f1},{(void*)0,&g_13,&g_142[0],&g_13,(void*)0,&g_639[0][3][4],(void*)0},{(void*)0,(void*)0,&g_142[0],&g_13,&g_185.f0,&g_795.f1,(void*)0}},{{&g_185.f0,&g_13,&g_142[0],(void*)0,(void*)0,&g_795.f1,&g_795.f1},{(void*)0,&g_13,&g_142[0],&g_13,(void*)0,&g_639[0][3][4],(void*)0},{(void*)0,(void*)0,&g_142[0],&g_13,&g_185.f0,&g_795.f1,(void*)0},{&g_185.f0,&g_13,&g_142[0],(void*)0,(void*)0,&g_795.f1,&g_795.f1}},{{(void*)0,&g_13,&g_142[0],&g_13,(void*)0,&g_639[0][3][4],(void*)0},{(void*)0,(void*)0,&g_142[0],&g_13,&g_185.f0,&g_795.f1,(void*)0},{&g_185.f0,&g_13,&g_142[0],(void*)0,(void*)0,&g_795.f1,&g_795.f1},{&g_795.f1,&g_142[0],&g_473.f6,&g_142[0],&g_795.f1,&g_142[0],&g_142[0]}},{{&g_795.f1,&g_185.f0,(void*)0,&g_142[0],&g_639[0][3][4],&g_142[0],&g_142[0]},{&g_639[0][3][4],&g_142[0],(void*)0,&g_185.f0,&g_795.f1,&g_142[0],&g_142[0]},{&g_795.f1,&g_142[0],&g_473.f6,&g_142[0],&g_795.f1,&g_142[0],&g_142[0]},{&g_795.f1,&g_185.f0,(void*)0,&g_142[0],&g_639[0][3][4],&g_142[0],&g_142[0]}}};
    int64_t *l_1559 = &g_228.f1;
    int64_t *l_1560 = &g_168.f0;
    union U3 **l_1566 = &g_894;
    union U3 ***l_1565[4];
    int64_t *l_1569 = &g_171;
    uint64_t l_1570 = 0x3452EF9DC7C69D45LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1517[i] = 0xF99DL;
    for (i = 0; i < 4; i++)
        l_1565[i] = &l_1566;
    (**p_59) = (safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((0UL | ((((l_1517[0] && ((***g_669) & (safe_lshift_func_uint8_t_u_s((**g_502), 3)))) <= ((*g_549) < ((void*)0 != &g_187))) , 1L) != l_1520[1])))), 11))));
    (*p_59) = (*p_59);
    if (((l_1517[0] >= (safe_mul_func_int16_t_s_s(l_1517[0], (safe_div_func_int16_t_s_s(0x88A1L, (+(safe_lshift_func_uint16_t_u_s(((p_57 , (5L != p_57.f0)) != ((((*l_1530) = (safe_lshift_func_uint16_t_u_u(0x1097L, p_56))) , l_1531) , l_1531.f1)), 6)))))))) != l_1531.f3))
    { 
        (**p_59) = (safe_rshift_func_int16_t_s_s((&g_1122 == l_1534), (((((void*)0 == &g_1053) == (((!(safe_rshift_func_uint16_t_u_s(p_58, 2))) > (safe_sub_func_int16_t_s_s((((void*)0 != &l_1531) & 4294967287UL), l_1531.f4))) == g_185.f2)) | p_55) <= l_1531.f3)));
        if (g_209)
            goto lbl_1571;
        (*p_59) = l_1541[1][0][2];
    }
    else
    { 
        const int32_t *l_1543[5];
        const int32_t **l_1542[2];
        int i;
        for (i = 0; i < 5; i++)
            l_1543[i] = &g_412.f6;
        for (i = 0; i < 2; i++)
            l_1542[i] = &l_1543[0];
        g_1544[6][0] = &g_46;
        for (g_168.f0 = 0; g_168.f0 < 4; g_168.f0 += 1)
        {
            for (g_228.f2 = 0; g_228.f2 < 2; g_228.f2 += 1)
            {
                for (g_708 = 0; g_708 < 2; g_708 += 1)
                {
                    g_693[g_168.f0][g_228.f2][g_708] = &l_1517[0];
                }
            }
        }
    }
lbl_1571:
    l_1570 = ((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((**g_502), (safe_unary_minus_func_int64_t_s(((*l_1569) = (safe_sub_func_uint32_t_u_u(((*g_1122) , ((((**g_692) |= (((*l_1560) = ((*l_1559) = ((*l_1530) = (safe_add_func_uint32_t_u_u(0xA18E5EB3L, (safe_unary_minus_func_int8_t_s((-1L)))))))) & (safe_sub_func_int8_t_s_s(p_55, (((p_57.f0 ^ ((l_1565[2] = (void*)0) == g_1567[3])) && 255UL) , (**g_502)))))) | 0x1644L) || 1L)), p_57.f0))))))), (**g_670))), p_57.f0)), g_806[0])) & p_58);
    (*l_1566) = (void*)0;
    return (**g_669);
}



static int64_t  func_62(struct S0  p_63, int32_t * p_64)
{ 
    uint32_t l_960 = 9UL;
    int32_t l_961[5] = {0x34A8655CL,0x34A8655CL,0x34A8655CL,0x34A8655CL,0x34A8655CL};
    const uint8_t l_966 = 255UL;
    union U3 l_968 = {0xB2DF3FD8L};
    int32_t l_986 = 0xE83B51F0L;
    const uint64_t *l_1006[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_1063 = (-9L);
    union U2 l_1099 = {0x97C89AA4L};
    int64_t *l_1102 = (void*)0;
    union U1 l_1117 = {0xF87582FB0D93F016LL};
    int32_t *l_1128 = &g_185.f6;
    uint8_t l_1134 = 0x2DL;
    int16_t *l_1163 = &g_76;
    int32_t *l_1218 = (void*)0;
    int32_t *l_1219 = &g_473.f6;
    int32_t *l_1220 = &g_185.f0;
    int32_t *l_1221 = &g_185.f6;
    int32_t *l_1222 = &g_72.f1;
    int32_t *l_1223 = &l_961[4];
    int32_t *l_1224 = &l_961[0];
    int32_t *l_1225 = &g_185.f0;
    int32_t *l_1226 = &l_1099.f0;
    int32_t *l_1227 = (void*)0;
    int32_t *l_1228 = &l_1099.f1;
    int32_t *l_1229 = &l_1063;
    int32_t *l_1230 = &g_72.f1;
    int32_t *l_1231 = (void*)0;
    int32_t *l_1232[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1233[5][1][5] = {{{0xD30F732FL,0L,0x821D7BA4L,0L,0xD30F732FL}},{{0x1373CAC2L,0L,0x1373CAC2L,0x1373CAC2L,0L}},{{0xD30F732FL,0x4A3524FFL,1L,0L,1L}},{{0L,0L,0x041F4018L,0L,0L}},{{1L,0L,1L,0x4A3524FFL,0xD30F732FL}}};
    int32_t l_1234 = (-1L);
    int64_t l_1235 = 0x4898927311DE9F9ALL;
    int32_t l_1236 = 1L;
    int32_t l_1237[7];
    int64_t l_1238 = 0x4F4D46FC8ECF1198LL;
    int32_t l_1239[5] = {4L,4L,4L,4L,4L};
    int32_t l_1240 = (-9L);
    uint16_t l_1242 = 0x4BF3L;
    struct S0 *l_1263 = &g_185;
    const int64_t *l_1383 = &g_473.f5;
    const int64_t **l_1382[3][1][1];
    const int64_t ** const * const l_1381 = &l_1382[0][0][0];
    union U4 l_1384[1] = {{0xF18F8D15A6AD8A02LL}};
    struct S0 ***l_1419 = &g_1418;
    uint32_t l_1439 = 0xBC4697ABL;
    uint8_t l_1441[3];
    int8_t l_1442[1][7];
    uint64_t l_1472 = 0xDB19872CFF2AAB62LL;
    uint64_t l_1474 = 0xDF8A44D124D5B102LL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1237[i] = (-1L);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1382[i][j][k] = &l_1383;
        }
    }
    for (i = 0; i < 3; i++)
        l_1441[i] = 255UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_1442[i][j] = 1L;
    }
    l_961[4] |= ((*g_671) > (l_960 && l_960));
    if ((0xF13BL | 1L))
    { 
        uint64_t *l_967 = &g_708;
        int32_t *l_970 = &g_10;
        int32_t * const *l_969 = &l_970;
        int32_t l_973 = 0x30EE5A38L;
        int32_t l_974 = 0xFBD53DC2L;
        int32_t l_981[5][6] = {{0x60F66F3CL,0x55736965L,0x55736965L,0x60F66F3CL,0x55736965L,0x55736965L},{0x60F66F3CL,0x55736965L,0x55736965L,0x60F66F3CL,0x55736965L,0x55736965L},{0x60F66F3CL,0x55736965L,0x55736965L,0x60F66F3CL,0x55736965L,0x55736965L},{0x60F66F3CL,0x55736965L,0x55736965L,0x60F66F3CL,0x55736965L,0x55736965L},{0x60F66F3CL,0x55736965L,0x55736965L,0x60F66F3CL,0x55736965L,0x55736965L}};
        int32_t l_985 = 0x39EA6E15L;
        int64_t l_987 = 0xDEAC7FE4AF2944B3LL;
        uint32_t l_988 = 0UL;
        union U3 **l_995 = (void*)0;
        union U3 **l_997 = &g_894;
        const int8_t *l_999 = &g_795.f2;
        const int8_t **l_998 = &l_999;
        const union U2 *l_1013[7][3][7] = {{{&g_72,&g_72,&g_72,&g_795,&g_72,(void*)0,&g_72},{&g_72,&g_795,&g_795,&g_795,&g_72,(void*)0,&g_795},{(void*)0,(void*)0,&g_795,&g_795,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,&g_795,&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0,&g_795,&g_72,&g_72,&g_72},{&g_795,&g_72,&g_72,&g_795,(void*)0,&g_72,&g_795}},{{&g_72,(void*)0,(void*)0,(void*)0,&g_72,(void*)0,&g_72},{&g_72,&g_72,&g_72,&g_72,&g_72,&g_795,&g_795},{(void*)0,&g_72,&g_795,&g_72,(void*)0,&g_72,&g_72}},{{&g_72,(void*)0,&g_795,&g_72,&g_795,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72,&g_72,&g_795,(void*)0},{&g_72,&g_72,&g_72,&g_72,&g_72,(void*)0,(void*)0}},{{(void*)0,&g_72,&g_795,(void*)0,&g_72,&g_72,(void*)0},{&g_72,&g_795,&g_72,&g_72,(void*)0,&g_72,&g_795},{&g_795,&g_72,&g_72,&g_795,(void*)0,&g_72,&g_795}},{{&g_72,(void*)0,&g_795,(void*)0,&g_795,&g_72,&g_795},{&g_72,&g_795,&g_795,&g_72,&g_72,&g_72,&g_72},{&g_795,&g_72,(void*)0,&g_72,&g_72,(void*)0,&g_72}},{{&g_72,&g_795,&g_72,&g_72,&g_795,&g_72,&g_795},{&g_72,&g_795,&g_72,&g_795,(void*)0,(void*)0,&g_795},{&g_72,&g_72,(void*)0,&g_72,(void*)0,&g_795,&g_795}}};
        int64_t l_1028 = 8L;
        int8_t ****l_1030 = &g_669;
        const int64_t *l_1056 = (void*)0;
        const int64_t **l_1055 = &l_1056;
        int i, j, k;
        (*g_317) = (safe_add_func_uint16_t_u_u(p_63.f3, ((safe_div_func_int16_t_s_s(l_966, p_63.f6)) < ((*l_967) = ((**g_548) >= (((*g_549) | l_966) > l_960))))));
        if ((l_968 , (l_969 != (void*)0)))
        { 
            int32_t l_975 = 0xE2B82461L;
            int32_t l_976 = 0L;
            int32_t l_977 = 0L;
            int32_t l_978 = 8L;
            int32_t l_979 = 0x07A53C2EL;
            int32_t l_980 = (-8L);
            int32_t l_982[7][5] = {{0x8034B8A2L,0L,0xE5D94995L,0L,0x8034B8A2L},{(-1L),0xFDF42A60L,(-1L),0L,0L},{0xA4CD4C55L,0L,0xA4CD4C55L,(-8L),0xA4CD4C55L},{(-1L),0L,0xFDF42A60L,0xFDF42A60L,0L},{0x8034B8A2L,(-8L),0xE5D94995L,(-8L),0x8034B8A2L},{0L,0xFDF42A60L,0xFDF42A60L,0L,(-1L)},{0xA4CD4C55L,(-8L),0xA4CD4C55L,0L,0xA4CD4C55L}};
            const uint64_t **l_1007 = &l_1006[0][4];
            const int8_t *l_1010[1][5][7] = {{{(void*)0,(void*)0,&g_795.f2,&g_72.f2,&g_795.f2,(void*)0,(void*)0},{(void*)0,&g_795.f2,&g_72.f2,&g_795.f2,(void*)0,(void*)0,&g_795.f2},{&g_72.f2,&g_275.f1,&g_72.f2,&g_795.f2,&g_795.f2,&g_72.f2,&g_275.f1},{&g_795.f2,&g_275.f1,&g_72.f2,&g_72.f2,&g_275.f1,&g_795.f2,&g_275.f1},{&g_72.f2,&g_795.f2,&g_795.f2,&g_72.f2,&g_275.f1,&g_72.f2,&g_795.f2}}};
            union U4 l_1029 = {0xD60A982CD9939004LL};
            const union U2 * const *l_1037 = &l_1013[0][2][4];
            uint16_t l_1044 = 65535UL;
            int i, j, k;
            for (g_228.f1 = 0; (g_228.f1 <= 0); g_228.f1 += 1)
            { 
                int32_t **l_971 = &g_317;
                int32_t *l_972[2];
                int32_t l_984 = (-3L);
                int i;
                for (i = 0; i < 2; i++)
                    l_972[i] = &g_795.f0;
                (*l_971) = l_970;
                --l_988;
            }
            for (g_185.f1 = 3; (g_185.f1 >= 0); g_185.f1 -= 1)
            { 
                int16_t l_1003 = 8L;
                for (l_978 = 0; (l_978 <= 3); l_978 += 1)
                { 
                    union U3 ***l_996 = &l_995;
                    l_981[2][5] ^= ((*g_317) ^= (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((((*l_996) = l_995) != l_997), ((((g_185 , (void*)0) != (g_1000 = (p_63 , l_998))) || p_63.f2) != 0x95L))), 0x786DBC4EL)));
                    if ((*p_64))
                        continue;
                }
                if (l_1003)
                    break;
            }
            if ((((safe_lshift_func_int16_t_s_s((((((l_981[3][3] = l_981[1][1]) , &g_170[4][2][2]) != ((*l_1007) = l_1006[0][4])) >= l_985) || (l_968.f0 >= ((**g_692) = l_980))), (((((safe_lshift_func_int8_t_s_s(((*g_670) != l_1010[0][4][0]), l_978)) != (*p_64)) < (*g_549)) == 0xC5L) , 0x2DABL))) & l_966) & g_10))
            { 
                int16_t l_1031 = 0x4367L;
                uint32_t *l_1040 = &g_473.f4;
                for (l_977 = (-4); (l_977 < (-8)); --l_977)
                { 
                    const union U2 **l_1014 = &l_1013[0][2][4];
                    int32_t *l_1015 = (void*)0;
                    int32_t **l_1016 = &g_317;
                    int32_t *l_1032 = &l_976;
                    (*l_1014) = l_1013[0][2][4];
                    (*l_1016) = l_1015;
                    p_63.f6 = (((g_1017 , g_168.f0) , g_929) != g_929);
                    if ((*p_64))
                        continue;
                    (*l_1032) &= ((p_63.f3 != ((safe_sub_func_int16_t_s_s(((1L > (safe_mul_func_uint16_t_u_u(((**g_548) ^= 0UL), (safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((0x40DEL ^ l_981[3][3]) < ((((safe_mod_func_int32_t_s_s(l_1028, l_986)) , l_1029) , &g_669) != l_1030)), 65535UL)), l_1029.f0))))) < l_1031), l_1031)) ^ 0L)) | 4294967295UL);
                }
                g_228.f6 = (safe_mul_func_uint8_t_u_u(((((((safe_mul_func_int16_t_s_s(p_63.f6, (((g_412 , &l_1013[5][2][3]) == l_1037) , (((0xF61E5DE7D6EE6D08LL >= (safe_sub_func_uint16_t_u_u((l_981[3][3] ^= p_63.f2), (**g_548)))) , 0x97L) >= l_961[0])))) >= 4L) , l_1040) != &g_806[0]) , 0x0FD4813EL) < p_63.f5), p_63.f4));
            }
            else
            { 
                int32_t *l_1041 = &g_142[0];
                int32_t *l_1042 = &l_977;
                int32_t *l_1043[7];
                uint64_t ***l_1054 = &g_1053;
                int i;
                for (i = 0; i < 7; i++)
                    l_1043[i] = &l_981[3][3];
                ++l_1044;
                p_63.f0 |= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(g_228.f0, p_63.f5)), (8L | ((((*l_1054) = g_1053) == &l_967) | ((l_1055 != &l_1056) == (*g_549))))));
                return p_63.f1;
            }
        }
        else
        { 
            int32_t *l_1057 = &g_228.f6;
            int32_t *l_1058 = &l_974;
            int32_t *l_1059 = &g_185.f6;
            int32_t *l_1060 = &g_228.f6;
            int32_t *l_1061 = (void*)0;
            int32_t *l_1062[7] = {&g_795.f1,&g_13,&g_795.f1,&g_795.f1,&g_13,&g_795.f1,&g_795.f1};
            int32_t l_1064 = (-1L);
            int i;
            --g_1065;
            return g_1065;
        }
    }
    else
    { 
        union U1 **l_1068 = (void*)0;
        union U1 *l_1070 = &g_275;
        union U1 **l_1069 = &l_1070;
        uint64_t l_1085[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int32_t l_1105 = 1L;
        int16_t l_1127[4][3] = {{0xBC7FL,0x6A49L,0x6A49L},{0x6A49L,(-6L),0x789BL},{0xBC7FL,(-6L),0xBC7FL},{(-1L),0x6A49L,0x789BL}};
        int32_t l_1131[6][4] = {{0x396C9EE6L,0x396C9EE6L,0L,0L},{0x396C9EE6L,0x396C9EE6L,0L,0L},{0x396C9EE6L,0x396C9EE6L,0L,0L},{0x396C9EE6L,0x396C9EE6L,0L,0L},{0x396C9EE6L,0x396C9EE6L,0L,0L},{0x396C9EE6L,0x396C9EE6L,0L,0L}};
        union U2 l_1153 = {0x7A584BC1L};
        union U2 *l_1161[7] = {&l_1153,&l_1153,(void*)0,(void*)0,(void*)0,&l_1153,(void*)0};
        int16_t l_1201[7] = {0x11A7L,0L,0L,0x11A7L,0L,0L,0x11A7L};
        uint32_t *l_1214 = &g_473.f4;
        int i, j;
lbl_1106:
        (*l_1069) = &g_275;
        for (g_958 = 0; (g_958 == 24); ++g_958)
        { 
            uint64_t l_1090 = 18446744073709551607UL;
            const int64_t *l_1103 = &g_412.f5;
            int32_t **l_1129 = &l_1128;
            int32_t *l_1130[3][7] = {{&g_228.f0,&g_185.f0,&g_228.f0,&g_228.f0,&g_185.f0,&g_228.f0,&g_228.f0},{&l_961[2],&l_961[2],&l_1099.f1,&l_961[2],&l_961[2],&l_1099.f1,&l_961[2]},{&g_185.f0,&g_228.f0,&g_228.f0,&g_185.f0,&g_228.f0,&g_228.f0,&g_185.f0}};
            int16_t l_1132[1];
            int32_t l_1133 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1132[i] = 1L;
            for (l_968.f0 = 0; (l_968.f0 <= 2); l_968.f0 += 1)
            { 
                int8_t *l_1084 = &g_275.f1;
                union U2 *l_1100 = &l_1099;
                int32_t *l_1101 = &l_986;
                int32_t l_1104 = 6L;
                (*g_317) ^= (!((safe_lshift_func_int8_t_s_u((g_473.f0 | (safe_add_func_uint8_t_u_u((**g_502), ((***g_669) && p_63.f3)))), p_63.f3)) && ((l_1085[2] = ((0x4656A5E1A15FED60LL == ((safe_rshift_func_int8_t_s_s(((*l_1084) = (safe_lshift_func_int8_t_s_s(p_63.f6, p_63.f3))), 6)) | p_63.f2)) , 5L)) > (**g_502))));
                l_1105 = (safe_add_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((l_1090 <= (+(((**g_548) = l_961[4]) >= ((safe_mod_func_uint16_t_u_u((l_1063 = ((((p_63.f0 == (((safe_sub_func_int32_t_s_s((((g_228.f1 = ((((*l_1101) &= (safe_unary_minus_func_int16_t_s((safe_mul_func_uint16_t_u_u(p_63.f6, ((&g_1000 != (((*l_1100) = l_1099) , (void*)0)) ^ p_63.f2)))))) , p_63.f0) || (*g_317))) <= p_63.f3) < l_1063), (*p_64))) , l_1102) != l_1103)) , l_986) || 0x5870L) == p_63.f5)), p_63.f4)) | l_1085[0])))) ^ p_63.f0), p_63.f0)) && l_1090) ^ l_1104), 0xCC30L));
                for (l_1099.f0 = 0; (l_1099.f0 <= 2); l_1099.f0 += 1)
                { 
                    int i, j, k;
                    if (p_63.f6)
                        goto lbl_1106;
                    (*g_317) = (((safe_lshift_func_int16_t_s_s(g_170[(l_1099.f0 + 2)][l_968.f0][l_1099.f0], (**g_692))) == p_63.f5) == 0L);
                    (*g_317) = l_1090;
                    (*g_317) = (safe_add_func_int32_t_s_s(((-1L) | (g_118 | (safe_mul_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((*g_317) < 0xC08E36CBL), l_1105)) <= (safe_div_func_uint32_t_u_u(0x300A23F7L, ((g_76 < p_63.f2) && 0x39819B09E0B65803LL)))), g_170[(l_1099.f0 + 2)][l_968.f0][l_1099.f0])))), g_170[(l_1099.f0 + 2)][l_968.f0][l_1099.f0]));
                    (*g_317) = (((l_1117 , ((safe_lshift_func_int8_t_s_s((((((safe_add_func_int8_t_s_s(((*l_1084) ^= (***g_669)), (g_1122 == &g_1123))) | (65535UL > (g_185.f5 && (safe_lshift_func_uint16_t_u_s(0x5C2CL, 7))))) >= g_412.f2) < g_1126) < 0x88L), 7)) , l_1127[3][1])) <= (*g_317)) ^ (-1L));
                }
            }
            (*l_1129) = l_1128;
            l_1134++;
        }
        for (g_92 = 20; (g_92 >= 31); ++g_92)
        { 
            uint8_t l_1145 = 255UL;
            uint16_t l_1146[3][6][6] = {{{0x8802L,65534UL,0x8802L,1UL,1UL,1UL},{1UL,0xD44DL,0UL,0x2F8BL,0xA3E7L,0x986DL},{0xD44DL,1UL,65527UL,0x2F8BL,0xEA92L,1UL},{1UL,0xBFA6L,65534UL,1UL,1UL,65534UL},{0x8802L,0x8802L,0xACFBL,0xE324L,0x4A9CL,0xD44DL},{65527UL,0UL,0x4A9CL,65534UL,0x2CEDL,0xACFBL}},{{0xBFA6L,65527UL,0x4A9CL,65534UL,0x8802L,0xD44DL},{0x1E73L,65534UL,0xACFBL,0xA3E7L,0xACFBL,65534UL},{0xA3E7L,0xACFBL,65534UL,0x1E73L,65535UL,1UL},{65534UL,0x4A9CL,65527UL,0xBFA6L,65534UL,0x986DL},{65534UL,0x4A9CL,0UL,65527UL,65535UL,1UL},{0xE324L,0xACFBL,0x8802L,0x8802L,0xACFBL,0xE324L}},{{1UL,65534UL,0xBFA6L,1UL,0x8802L,0x1E73L},{0x2F8BL,65527UL,1UL,0xD44DL,0x2CEDL,0UL},{0x2F8BL,0UL,0xD44DL,1UL,0x4A9CL,0x2CEDL},{1UL,0x8802L,65534UL,0x8802L,1UL,1UL},{0xE324L,0xBFA6L,0x986DL,65527UL,0xEA92L,0x2BA5L},{65534UL,1UL,0x8973L,0xBFA6L,0xA3E7L,0x2BA5L}}};
            int i, j, k;
            (*l_1128) = ((safe_sub_func_uint64_t_u_u(((((g_209 , (*l_1128)) < (safe_mod_func_uint64_t_u_u((1UL < (-7L)), (safe_rshift_func_int16_t_s_s(((l_1145 || ((**g_502) = l_1146[0][4][0])) , (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((l_1153 , 0x938BC09077EF948ELL) && 0x6859FD1AC3EB3EA4LL), p_63.f2)) <= 0xABEAL), 5L)), (-3L)))), (**g_692)))))) , l_1153.f3) ^ l_1145), g_170[4][2][2])) && p_63.f1);
        }
        (*g_317) |= ((7L & p_63.f1) , (safe_sub_func_int64_t_s_s(((!(safe_div_func_uint32_t_u_u((((&l_1099 == (l_1161[1] = &l_1153)) < (**g_1000)) || (safe_unary_minus_func_uint64_t_u(((void*)0 != l_1163)))), 4294967295UL))) >= 0L), l_1153.f3)));
        for (g_72.f2 = 27; (g_72.f2 == 23); --g_72.f2)
        { 
            uint8_t l_1176 = 1UL;
            int32_t l_1181 = 0x73433E81L;
            union U2 l_1187[1][7] = {{{1L},{0x93844141L},{1L},{1L},{0x93844141L},{1L},{1L}}};
            union U1 * const l_1189 = &g_275;
            int32_t l_1196 = 0x80FCA831L;
            int32_t l_1199[2][3] = {{0x92AED33AL,0x92AED33AL,(-1L)},{0x92AED33AL,0x92AED33AL,(-1L)}};
            int64_t *l_1209[7] = {&g_1017.f0,&g_1017.f0,&g_1017.f0,&g_1017.f0,&g_1017.f0,&g_1017.f0,&g_1017.f0};
            int i, j;
            for (g_708 = 0; (g_708 != 10); g_708 = safe_add_func_int32_t_s_s(g_708, 2))
            { 
                int32_t *l_1168 = &g_185.f6;
                int32_t *l_1169 = &g_795.f0;
                int32_t *l_1170 = &l_1131[2][1];
                int32_t *l_1171 = &l_1105;
                int32_t *l_1172 = (void*)0;
                int32_t *l_1173 = &l_1153.f0;
                int32_t *l_1174 = &l_1153.f1;
                int32_t *l_1175[7][4] = {{(void*)0,&g_639[0][3][2],&g_639[0][3][2],(void*)0},{&g_639[0][3][2],(void*)0,&g_639[0][3][2],&g_639[0][3][2]},{(void*)0,(void*)0,&g_473.f0,(void*)0},{(void*)0,&g_639[0][3][2],&g_639[0][3][2],(void*)0},{&g_639[0][3][2],(void*)0,&g_639[0][3][2],&g_639[0][3][2]},{(void*)0,(void*)0,&g_473.f0,(void*)0},{(void*)0,&g_639[0][3][2],&g_639[0][3][2],(void*)0}};
                int32_t l_1191 = (-1L);
                uint16_t l_1202 = 0x5381L;
                int i, j;
                ++l_1176;
                for (l_1153.f0 = 22; (l_1153.f0 >= (-4)); l_1153.f0 = safe_sub_func_uint32_t_u_u(l_1153.f0, 4))
                { 
                    int8_t *l_1184 = &l_1117.f1;
                    union U1 **l_1190 = &l_1070;
                    int32_t l_1192 = 0xFC71BBAAL;
                    int32_t l_1194 = 0x203F2E07L;
                    int32_t l_1195 = 0xB4CF1568L;
                    int32_t l_1197 = 0x90AF9399L;
                    int32_t l_1198 = 0x892A924BL;
                    int32_t l_1200[1][4] = {{0L,0L,0L,0L}};
                    int i, j;
                    p_64 = (void*)0;
                    (*l_1171) &= ((*l_1128) == (((l_1181 = p_63.f3) && (safe_mul_func_int16_t_s_s(0xB2E9L, (l_1184 != (void*)0)))) , (safe_div_func_int64_t_s_s((p_63.f6 , (*l_1169)), g_209))));
                    (*g_317) = (0x578EL > (l_1187[0][2] , (+((*l_1128) = (*g_317)))));
                    (*l_1190) = l_1189;
                    l_1202++;
                }
            }
            for (g_473.f2 = 0; (g_473.f2 == 27); ++g_473.f2)
            { 
                p_64 = p_64;
            }
            l_1153.f1 |= (safe_mul_func_uint8_t_u_u(((g_168.f0 = p_63.f1) | p_63.f1), ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((((l_1214 != (void*)0) , (!(safe_mod_func_int64_t_s_s(((*l_1128) != ((((l_1105 , (void*)0) != (void*)0) ^ (*l_1128)) && (*l_1128))), p_63.f6)))) & (-2L)) & (*l_1128)), 5)), 7)) & (*g_317))));
            (*g_317) |= p_63.f4;
            if ((*g_317))
                break;
        }
    }
    ++l_1242;
    for (g_1193 = 0; (g_1193 == (-3)); g_1193 = safe_sub_func_int16_t_s_s(g_1193, 8))
    { 
        union U1 *l_1250 = &g_275;
        union U1 **l_1249 = &l_1250;
        int32_t l_1251 = 0x360671F2L;
        int16_t *l_1255 = &g_983[5][0];
        union U3 l_1268 = {0L};
        uint8_t * const *l_1288 = &g_503[2];
        uint8_t * const **l_1287[1][2][4] = {{{&l_1288,&l_1288,&l_1288,&l_1288},{&l_1288,&l_1288,&l_1288,&l_1288}}};
        uint64_t *l_1315 = &g_170[4][2][2];
        union U2 *l_1325 = &g_795;
        union U2 **l_1324 = &l_1325;
        union U4 l_1340 = {0xB80950184CD2428DLL};
        uint32_t l_1342 = 18446744073709551615UL;
        int64_t l_1343 = 0x874A300BF47FF4CDLL;
        int32_t l_1447 = (-1L);
        int32_t l_1449 = 1L;
        int32_t l_1450 = 0L;
        int32_t l_1451 = 6L;
        int32_t *l_1467 = &l_1268.f0;
        uint64_t l_1473[6][4] = {{18446744073709551606UL,6UL,18446744073709551606UL,18446744073709551606UL},{6UL,6UL,0x0C0BBED0C3CD58B4LL,6UL},{6UL,18446744073709551606UL,18446744073709551606UL,6UL},{18446744073709551606UL,6UL,18446744073709551606UL,18446744073709551606UL},{6UL,6UL,0x0C0BBED0C3CD58B4LL,6UL},{6UL,18446744073709551606UL,18446744073709551606UL,6UL}};
        uint32_t l_1475[2][1][3] = {{{0x3E6AEF7CL,0x3E6AEF7CL,0x3E6AEF7CL}},{{4294967287UL,4294967287UL,4294967287UL}}};
        uint32_t l_1500 = 4UL;
        int i, j, k;
        for (l_1099.f3 = 0; (l_1099.f3 <= 1); l_1099.f3 += 1)
        { 
            return p_63.f3;
        }
        (*l_1249) = ((g_92--) , (l_1099 , &g_275));
    }
    (*l_1226) = g_185.f2;
    return g_473.f6;
}



static int32_t  func_66(union U2  p_67, int32_t  p_68, int8_t * p_69, int32_t * p_70, int8_t * p_71)
{ 
    uint64_t *l_91 = &g_92;
    uint64_t *l_99 = &g_92;
    uint8_t *l_100 = (void*)0;
    uint8_t *l_101 = &g_102[0];
    int32_t l_103 = 0xDBF905AFL;
    int32_t l_148 = 1L;
    int32_t l_257 = (-8L);
    int32_t l_259 = (-10L);
    int32_t l_295 = (-4L);
    uint32_t l_326 = 0x16B20811L;
    uint32_t l_329[1];
    struct S0 *l_381[7][6] = {{&g_228,&g_228,&g_228,&g_228,&g_228,&g_228},{&g_185,&g_228,&g_185,&g_228,&g_185,&g_228},{&g_228,&g_228,&g_228,&g_228,&g_228,&g_228},{&g_185,&g_228,&g_185,&g_228,&g_185,&g_228},{&g_228,&g_228,&g_228,&g_228,&g_228,&g_228},{&g_185,&g_228,&g_185,&g_228,&g_185,&g_228},{&g_228,&g_228,&g_228,&g_228,&g_228,&g_228}};
    struct S0 **l_380[4] = {&l_381[6][4],&l_381[6][4],&l_381[6][4],&l_381[6][4]};
    struct S0 ***l_379 = &l_380[2];
    const struct S0 *l_413[5];
    union U3 l_414 = {-10L};
    uint8_t l_418 = 255UL;
    const union U4 l_428 = {8L};
    int16_t *l_456 = &g_76;
    union U1 *l_478 = (void*)0;
    uint32_t *l_495 = &g_185.f4;
    int64_t l_516 = 6L;
    int32_t l_526 = 1L;
    int32_t l_527 = 0xADD28D2FL;
    int32_t l_532 = (-4L);
    int32_t l_534 = 0x7B9D6157L;
    int32_t l_537 = 0x9A9C3939L;
    uint16_t *l_547 = &g_209;
    uint16_t **l_546[3][7];
    int32_t l_551[5][3] = {{(-1L),(-1L),0x590D8F60L},{(-1L),(-1L),0x590D8F60L},{(-1L),(-1L),0x590D8F60L},{(-1L),(-1L),0x590D8F60L},{(-1L),(-1L),0x590D8F60L}};
    uint32_t l_552 = 1UL;
    int32_t **l_566 = (void*)0;
    union U1 *l_630 = &g_275;
    const uint16_t l_631 = 1UL;
    uint32_t l_673 = 0x2A7634B1L;
    uint32_t l_711 = 4294967291UL;
    int16_t * const *l_718 = &g_693[1][1][0];
    int16_t * const **l_717 = &l_718;
    int16_t * const ***l_719 = &l_717;
    int16_t * const **l_720 = &l_718;
    int16_t ***l_721 = &g_692;
    int16_t ****l_722 = &l_721;
    uint32_t *l_733[7][3] = {{&g_163,&g_163,&l_711},{&g_163,&g_163,&l_711},{&g_163,&g_163,&l_711},{&g_163,&g_163,&l_711},{&g_163,&g_163,&l_711},{&g_163,&g_163,&l_711},{&g_163,&g_163,&l_711}};
    const int8_t * const l_768[1] = {&g_72.f2};
    const int8_t * const *l_767[4][3] = {{&l_768[0],&l_768[0],(void*)0},{&l_768[0],(void*)0,(void*)0},{(void*)0,&l_768[0],&l_768[0]},{&l_768[0],&l_768[0],&l_768[0]}};
    const int8_t * const * const *l_766 = &l_767[3][2];
    const int8_t * const * const **l_765 = &l_766;
    int8_t l_772 = 1L;
    const uint8_t * const **l_793 = (void*)0;
    union U3 *l_810 = &l_414;
    union U2 l_832 = {0xE20C4A90L};
    const union U2 *l_931 = &g_795;
    const union U2 **l_930 = &l_931;
    int i, j;
    for (i = 0; i < 1; i++)
        l_329[i] = 1UL;
    for (i = 0; i < 5; i++)
        l_413[i] = (void*)0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_546[i][j] = &l_547;
    }
    if ((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((0x8CD6C332E49D2A59LL == (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((p_68 == (--(*l_91))), p_67.f0)), 15)) && (safe_div_func_uint8_t_u_u(0x22L, ((*l_101) &= (safe_lshift_func_int16_t_s_u(((((l_91 = l_91) != l_99) != 0xA0A54AE8BCD06DB2LL) , g_46), 3)))))), (*p_71))), 3))) & l_103), (-1L))), 0x31C0487CC540EDC1LL)))
    { 
        uint8_t l_134 = 0x09L;
        int32_t l_149 = 0x7919BB5CL;
        uint32_t *l_162[1][4][6] = {{{&g_163,&g_163,&g_163,&g_163,&g_163,&g_163},{&g_163,&g_163,&g_163,&g_163,&g_163,&g_163},{&g_163,&g_163,&g_163,&g_163,&g_163,&g_163},{&g_163,&g_163,&g_163,&g_163,&g_163,&g_163}}};
        uint64_t *l_169[1];
        int32_t l_172 = 8L;
        int32_t *l_188[3][2] = {{&g_187.f0,(void*)0},{&g_187.f0,&g_187.f0},{(void*)0,&g_187.f0}};
        int64_t *l_189 = &g_118;
        int32_t *l_190 = &l_103;
        int32_t *l_191 = &g_185.f6;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_169[i] = &g_170[4][2][2];
        for (p_67.f3 = 0; (p_67.f3 >= 10); p_67.f3++)
        { 
            uint64_t *l_135 = &g_92;
            int32_t l_136 = 0xA80D1701L;
            uint8_t *l_139 = &g_102[0];
            uint8_t **l_140 = &l_139;
            uint8_t **l_141 = &l_100;
            int32_t *l_147[1];
            int i;
            for (i = 0; i < 1; i++)
                l_147[i] = (void*)0;
            for (p_68 = 19; (p_68 == 18); --p_68)
            { 
                int32_t *l_108 = &g_72.f1;
                int64_t *l_117 = &g_118;
                int32_t *l_119 = &l_103;
                int32_t **l_126 = &l_108;
                (*l_108) &= 7L;
                for (g_10 = 0; (g_10 <= 0); g_10 += 1)
                { 
                    int i;
                    (*l_108) |= g_102[g_10];
                }
                (*l_119) = ((safe_lshift_func_uint8_t_u_s((p_68 , (((*l_117) = (g_72 , (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((((*l_108) = 0x6EC073B9F6D4B686LL) != ((safe_rshift_func_uint8_t_u_s(g_76, (l_103 > ((void*)0 != &l_108)))) > p_67.f2)) == p_67.f1), 0x47L)), 7L)))) > g_92)), 5)) & (-4L));
                l_136 &= (((safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((((*l_117) = p_67.f2) || ((((*l_126) = &g_13) == (((safe_mod_func_uint64_t_u_u(0x7028AD0AF0966AB1LL, (safe_div_func_int8_t_s_s((&g_13 != (void*)0), (~p_67.f3))))) >= (safe_rshift_func_uint8_t_u_u(((*l_119) , p_67.f1), g_72.f0))) , p_70)) <= 1UL)))), 0xA95F2429L)))) ^ 0UL), l_134)) , (void*)0) == l_135);
            }
            g_72.f0 = (l_148 &= (0L <= (18446744073709551607UL ^ ((((safe_mod_func_uint16_t_u_u(g_10, ((((*l_140) = l_139) != ((*l_141) = &g_102[0])) & ((g_142[0] = ((*l_135) = 1UL)) && ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(p_67.f3, 8)), p_68)) & 255UL))))) == g_30) == l_103) ^ g_102[0]))));
            l_149 ^= l_134;
            l_103 = (*p_70);
        }
        l_172 = (((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((g_171 &= (((*l_91) |= 0x7329A4BB29D6AE76LL) < (g_170[2][0][2] = (l_149 &= (l_103 = (g_72.f0 > (safe_rshift_func_int16_t_s_s(((void*)0 != p_69), ((safe_sub_func_uint32_t_u_u((((*p_70) >= (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((((((g_163--) > (p_70 != ((safe_add_func_uint32_t_u_u(g_13, 0x05669B83L)) , p_70))) <= 0x4E11L) ^ 0xC68AB63100998834LL) , g_168) , g_142[0]) , p_67.f0), l_103)), g_118))) & g_10), g_76)) | g_118))))))))), l_148)), g_13)) | 0xE0L) , (-6L));
        (*l_191) = ((+(safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((*p_71), 5)), ((!g_163) > (safe_sub_func_int32_t_s_s(((*l_190) |= (((((safe_unary_minus_func_uint16_t_u(((((((((!(g_185 , ((*l_189) = (!(((p_68 = (((g_187 , l_148) > l_148) < 0xF300D2E18EF8D76BLL)) , g_187.f0) >= l_134))))) >= p_67.f2) == l_134) < 0xABBEE46DF66AD19DLL) < 0x4E67889039BF0741LL) > 65528UL) , 0xD296L) >= l_134))) ^ p_67.f1) ^ 0L) > 0xC0FF1A9AL) | g_185.f6)), g_185.f5))))), g_30))) || g_142[0]);
    }
    else
    { 
        struct S0 *l_227 = &g_228;
        int32_t l_248 = (-9L);
        int32_t l_250 = 0xBA933876L;
        int32_t l_251 = (-2L);
        int32_t l_253 = (-1L);
        int32_t l_256 = 1L;
        int32_t l_260[6] = {0xDF2B7E3AL,0xDF2B7E3AL,0xDF2B7E3AL,0xDF2B7E3AL,0xDF2B7E3AL,0xDF2B7E3AL};
        uint8_t l_316 = 0x3EL;
        int16_t l_318 = (-1L);
        int i;
        for (g_30 = 14; (g_30 > 15); g_30++)
        { 
            uint32_t l_202 = 2UL;
            int8_t *l_204 = &g_72.f2;
            int8_t **l_203 = &l_204;
            int32_t *l_205 = &g_72.f0;
            uint16_t *l_208 = &g_209;
            struct S0 *l_225 = &g_185;
            int32_t l_246[6];
            int32_t l_247 = 0x30AA8D3FL;
            int32_t l_252 = 0xDE73A24DL;
            int32_t l_254 = 0x0339F7C0L;
            int32_t l_255 = (-5L);
            int32_t l_258 = 0L;
            int32_t l_261 = 0L;
            union U1 l_271 = {1UL};
            uint32_t l_288[3];
            int32_t l_291[3][7][1] = {{{(-5L)},{0x6BB74C77L},{0xE636EABFL},{(-1L)},{0xE636EABFL},{0x6BB74C77L},{(-5L)}},{{0x54F3F770L},{1L},{0x54F3F770L},{(-5L)},{0x6BB74C77L},{0xE636EABFL},{(-1L)}},{{0xE636EABFL},{0x6BB74C77L},{(-5L)},{0x54F3F770L},{1L},{0x54F3F770L},{(-1L)}}};
            uint32_t l_323 = 18446744073709551609UL;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_246[i] = 0x71DAA681L;
            for (i = 0; i < 3; i++)
                l_288[i] = 0UL;
            for (g_163 = 0; g_163 < 1; g_163 += 1)
            {
                g_142[g_163] = 1L;
            }
            if ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((*l_99) ^= (safe_sub_func_int16_t_s_s(l_202, (0xF51EDEC6L <= (p_67.f1 = ((*l_205) = (((*l_203) = p_69) != &g_30))))))) < g_170[1][2][0]), ((safe_lshift_func_uint8_t_u_s((((*l_208)--) , 0xFDL), 1)) & ((void*)0 != l_205)))), 0)), 9)))
            { 
                int64_t **l_212 = (void*)0;
                int64_t *l_213 = &g_171;
                int32_t l_224[6] = {1L,1L,1L,1L,1L,1L};
                int i;
                if ((((l_213 = l_99) == &g_171) >= (safe_sub_func_uint16_t_u_u(p_67.f2, (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_u(((((1UL & (((((*l_204) = g_168.f0) == (safe_div_func_uint64_t_u_u(((*p_70) , ((((!(p_67.f2 , 65535UL)) , 0xCCC2L) && g_185.f0) < g_185.f6)), g_142[0]))) ^ g_13) < g_170[1][2][0])) & g_185.f6) <= p_68) & l_224[5]), p_67.f0)) & p_67.f1)))))))
                { 
                    struct S0 **l_226 = &l_225;
                    int32_t *l_229 = &l_224[5];
                    int32_t *l_230 = &l_103;
                    int32_t *l_231 = (void*)0;
                    int32_t *l_232 = (void*)0;
                    int32_t *l_233 = &g_228.f0;
                    int32_t *l_234 = (void*)0;
                    int32_t *l_235 = &l_148;
                    int32_t *l_236 = &l_224[5];
                    int32_t l_237 = 0x0BCB4418L;
                    int32_t *l_238 = &g_142[0];
                    int32_t *l_239 = &g_142[0];
                    int32_t *l_240 = &l_103;
                    int32_t *l_241 = &g_185.f6;
                    int32_t *l_242 = &l_237;
                    int32_t *l_243 = &l_103;
                    int32_t *l_244 = (void*)0;
                    int32_t *l_245[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_249 = 0xE3CAC089L;
                    uint32_t l_262 = 4294967289UL;
                    int32_t **l_265 = &l_230;
                    int i;
                    l_227 = ((*l_226) = l_225);
                    (*l_205) = (*p_70);
                    l_262++;
                    (*l_265) = p_70;
                }
                else
                { 
                    union U2 *l_267 = (void*)0;
                    union U2 **l_266 = &l_267;
                    (*l_266) = &p_67;
                }
            }
            else
            { 
                int32_t **l_268 = &l_205;
                int64_t *l_276 = (void*)0;
                int64_t *l_277 = &g_118;
                int32_t l_320 = 0x1A6C845EL;
                int32_t l_321 = 0L;
                int32_t l_322 = 0x62646C3EL;
                (*l_268) = p_70;
                if ((p_67.f1 = (((safe_lshift_func_int16_t_s_u(((((l_271 , (**l_268)) == (safe_mod_func_int64_t_s_s((l_251 = ((*l_277) = (safe_unary_minus_func_int32_t_s((g_275 , (*l_205)))))), (p_67.f0 ^ (safe_rshift_func_int16_t_s_s(((-8L) && 246UL), 8)))))) == (**l_268)) < p_67.f1), g_228.f0)) , g_10) >= (*l_205))))
                { 
                    uint64_t l_284 = 18446744073709551615UL;
                    uint32_t *l_307 = &l_202;
                    int64_t *l_310 = &g_171;
                    int16_t *l_311 = &g_76;
                    int32_t *l_312 = &l_254;
                    p_67.f0 = (safe_div_func_int32_t_s_s(((g_185.f3 , ((p_67.f2 <= (safe_lshift_func_int16_t_s_u(1L, 13))) || (l_284 |= g_228.f5))) , (g_228.f0 ^ (l_148 < ((~(((*l_101) ^= (g_228 , l_288[2])) >= (*p_71))) >= g_185.f5)))), (*p_70)));
                    l_257 = ((safe_mod_func_uint64_t_u_u((6L | (l_291[2][5][0] > (safe_add_func_int64_t_s_s(g_185.f4, (p_67.f2 && ((((((p_67.f3 , l_259) & ((~l_295) , l_259)) & l_248) || (*p_70)) , (-2L)) ^ p_68)))))), g_228.f1)) | p_68);
                    if ((*p_70))
                        continue;
                    (*l_312) = ((((*l_311) = (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(p_67.f0, ((safe_div_func_uint32_t_u_u((l_257 | (safe_sub_func_uint8_t_u_u((((**l_268) || (safe_mul_func_int8_t_s_s(((**l_268) != (g_228.f6 >= (-8L))), (+((*l_310) |= ((*l_277) &= ((((*l_307)++) , ((*l_203) = p_69)) == l_100))))))) < 0x82D4L), g_275.f0))), 6L)) , 0L))) & (*l_205)), p_67.f0))) <= g_228.f1) , g_30);
                    if ((*p_70))
                        continue;
                }
                else
                { 
                    int16_t *l_315[4][5];
                    int32_t *l_319[7] = {&l_247,&l_250,&l_247,&l_247,&l_250,&l_247,&l_247};
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_315[i][j] = &g_76;
                    }
                    p_67.f0 |= (safe_sub_func_int16_t_s_s(((g_209 || 0xC8DCL) , (l_103 |= (g_76 |= l_250))), ((((void*)0 == l_315[3][4]) == l_316) != (*p_69))));
                    (*l_268) = g_317;
                    l_323--;
                    l_326++;
                    return l_260[2];
                }
                if (l_251)
                    continue;
            }
        }
        (*g_317) = (l_329[0] | l_248);
    }
    for (g_76 = 0; (g_76 <= (-2)); --g_76)
    { 
        uint32_t l_348 = 6UL;
        union U4 l_376 = {-1L};
        struct S0 ***l_382 = &l_380[3];
        struct S0 l_406 = {0xE1A47D0EL,0L,255UL,7UL,4294967287UL,1L,-3L};
        const struct S0 *l_411 = &g_412;
        const struct S0 **l_410[2];
        int8_t l_429 = 0xB0L;
        union U2 *l_437 = &g_72;
        int16_t **l_463 = (void*)0;
        union U1 **l_479[1];
        int i;
        for (i = 0; i < 2; i++)
            l_410[i] = &l_411;
        for (i = 0; i < 1; i++)
            l_479[i] = &l_478;
    }
    g_185.f6 = ((*g_317) = ((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((safe_div_func_uint32_t_u_u(p_67.f0, (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_76, g_228.f1)), ((*p_69) = (safe_mul_func_uint8_t_u_u((((!((*l_495) = 0x883D7D97L)) <= (((p_67 , (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_275.f1, (safe_sub_func_uint32_t_u_u(p_68, l_329[0])))), g_473.f5))) , (void*)0) == l_456)) || p_67.f3), g_473.f2))))))) , (void*)0) != (void*)0), l_329[0])) > p_67.f2), 0x6011L)), l_414.f0)) > p_68));
    for (g_275.f1 = 2; (g_275.f1 >= 0); g_275.f1 -= 1)
    { 
        uint8_t ***l_504 = (void*)0;
        uint8_t **l_506 = (void*)0;
        uint8_t ***l_505 = &l_506;
        int32_t l_519 = 0xFB4D8419L;
        int32_t l_520 = 0x71565102L;
        int32_t l_521 = 1L;
        int32_t l_525 = 0xDD4C9171L;
        int32_t l_528 = 0xE6BB47D9L;
        int32_t l_530 = (-3L);
        int32_t l_531 = 0L;
        int32_t l_533 = (-7L);
        int32_t l_535 = 0x9A16191BL;
        int32_t l_538[6] = {1L,1L,0xCBC3D279L,1L,1L,0xCBC3D279L};
        int32_t **l_564 = &g_317;
        union U2 l_588[2][4] = {{{0xFBF90672L},{0xFBF90672L},{0xFBF90672L},{0xFBF90672L}},{{0xFBF90672L},{0xFBF90672L},{0xFBF90672L},{0xFBF90672L}}};
        uint32_t l_608 = 0UL;
        union U3 l_629[3] = {{0xE75E5504L},{0xE75E5504L},{0xE75E5504L}};
        int16_t l_633 = 0L;
        int i, j;
    }
    if ((((l_720 = ((*l_719) = l_717)) != ((*l_722) = l_721)) & (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((((l_551[2][0] = ((*l_495) = (safe_sub_func_uint32_t_u_u(((((**g_692) < ((safe_mul_func_int16_t_s_s((((0x622FL & l_329[0]) , &g_548) == &g_548), 65534UL)) >= (-7L))) , l_428) , p_68), l_527)))) , p_67.f3) , l_673) == g_163), (**g_692))) || p_67.f1), p_67.f0)) < 5L), (**g_548)))))
    { 
        uint16_t l_735 = 0x26AFL;
        union U4 l_739 = {-3L};
        union U1 l_746 = {18446744073709551610UL};
        union U3 l_761 = {4L};
        uint8_t l_796 = 246UL;
        struct S0 l_802 = {0xED01F737L,0x24FCA4A1008952FALL,0UL,0UL,0UL,-8L,0xD866D383L};
        int32_t l_807 = 0xADBC0F21L;
        (*g_317) = (&l_566 != &l_566);
        (*g_317) = (*p_70);
        if ((*g_317))
        { 
            uint64_t l_738 = 0x842754C2362A7393LL;
            int16_t ****l_744 = &l_721;
            uint64_t l_771 = 0x523DD2FB973533F7LL;
            const uint8_t * const l_792 = &g_185.f2;
            const uint8_t * const *l_791 = &l_792;
            const uint8_t * const **l_790 = &l_791;
            union U3 *l_808 = &l_761;
            for (g_275.f1 = 0; (g_275.f1 <= 2); g_275.f1 += 1)
            { 
                int32_t *l_734[2][6][3] = {{{&g_639[0][0][0],&l_534,&l_537},{(void*)0,(void*)0,&l_551[0][0]},{&g_473.f6,&g_185.f0,&g_185.f0},{(void*)0,&l_526,&l_534},{(void*)0,&l_534,(void*)0},{&g_473.f6,&l_103,&l_103}},{{(void*)0,&g_639[0][0][0],(void*)0},{&g_639[0][0][0],&l_103,&g_228.f6},{(void*)0,&l_534,(void*)0},{&l_103,&l_526,(void*)0},{&l_551[0][0],&g_185.f0,&g_228.f6},{&g_228.f6,(void*)0,(void*)0}}};
                int32_t l_753[7][4][7] = {{{(-1L),1L,0xB7C65492L,(-1L),(-9L),1L,(-9L)},{0L,(-1L),(-1L),0L,(-1L),(-1L),(-10L)},{0x78BAC27CL,0x46C0A0FAL,0xB7C65492L,7L,7L,0xB7C65492L,0x46C0A0FAL},{(-1L),(-1L),0x1B94AFD6L,0xCC098B1AL,(-1L),(-10L),(-10L)}},{{1L,0x78BAC27CL,7L,0x78BAC27CL,1L,1L,(-9L)},{1L,(-1L),(-1L),0xCC098B1AL,0xD59E1471L,0xCC098B1AL,(-1L)},{(-9L),(-9L),(-1L),7L,0x46C0A0FAL,0xD1CCBADAL,0xB7C65492L},{1L,0xCC098B1AL,0L,0L,0xCC098B1AL,1L,0xD59E1471L}},{{1L,(-1L),0x78BAC27CL,(-1L),0x46C0A0FAL,0x46C0A0FAL,(-1L)},{(-1L),0x9106C21CL,(-1L),(-10L),0xD59E1471L,0x1B94AFD6L,1L},{0x78BAC27CL,(-1L),1L,0xD1CCBADAL,1L,(-1L),0x78BAC27CL},{0L,0xCC098B1AL,1L,0xD59E1471L,(-1L),0x1B94AFD6L,(-1L)}},{{(-1L),(-9L),(-9L),(-1L),7L,0x46C0A0FAL,0xD1CCBADAL},{(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L)},{7L,0x78BAC27CL,1L,1L,(-9L),0xD1CCBADAL,0xD1CCBADAL},{0x1B94AFD6L,(-1L),(-1L),(-1L),0x1B94AFD6L,0xCC098B1AL,(-1L)}},{{0xB7C65492L,0x46C0A0FAL,0x78BAC27CL,1L,(-1L),1L,0x78BAC27CL},{(-1L),(-10L),(-1L),0xCC098B1AL,0x1B94AFD6L,(-1L),(-1L)},{7L,(-1L),(-9L),(-9L),(-1L),7L,0x46C0A0FAL},{1L,(-1L),0x9106C21CL,(-1L),0x1B94AFD6L,0x1B94AFD6L,(-1L)}},{{1L,(-1L),1L,0x78BAC27CL,0x46C0A0FAL,0xB7C65492L,7L},{0x9106C21CL,(-1L),1L,(-1L),1L,(-1L),0x9106C21CL},{(-9L),(-1L),7L,0x46C0A0FAL,0xD1CCBADAL,0xB7C65492L,0xD1CCBADAL},{(-1L),(-10L),(-10L),(-1L),0xCC098B1AL,0x1B94AFD6L,(-1L)}},{{1L,1L,7L,1L,1L,7L,1L},{0xCC098B1AL,0x9106C21CL,1L,0L,(-10L),(-1L),(-1L)},{0xB7C65492L,1L,1L,1L,0xB7C65492L,(-1L),0xD1CCBADAL},{(-1L),0x1B94AFD6L,0x9106C21CL,0L,(-1L),0L,0x9106C21CL}}};
                union U3 l_759 = {-1L};
                int i, j, k;
                --l_735;
                for (g_10 = 0; (g_10 <= 2); g_10 += 1)
                { 
                    int16_t ****l_745[2][2][2];
                    int32_t l_756 = 2L;
                    int32_t l_760[1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_745[i][j][k] = &l_721;
                        }
                    }
                    for (i = 0; i < 1; i++)
                        l_760[i] = 0x7945B65BL;
                    if (l_738)
                        break;
                    (*g_317) = (0xA4C7EEE3A9865521LL == (g_639[0][4][1] || (l_739 , ((safe_div_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((g_275 , (((l_744 == l_745[0][1][1]) | ((l_746 , 0x4035DB4CL) <= (*p_70))) ^ (*p_70))), p_67.f3)) < 0x3D8B95ABL), 18446744073709551607UL)) | p_67.f1))));
                    (*g_317) &= l_738;
                    l_760[0] &= (safe_div_func_int16_t_s_s(1L, (safe_rshift_func_uint16_t_u_u(((*g_317) > ((safe_div_func_uint8_t_u_u(((**g_502)--), (-1L))) <= (((l_756 > ((*p_71) |= ((safe_div_func_uint16_t_u_u(((g_72 , (((((l_759 , (8UL || p_67.f0)) ^ g_228.f2) | (**g_670)) & l_756) > 0UL)) > l_738), 9UL)) & 0x24L))) || p_67.f2) , p_67.f2))), 13))));
                }
            }
            if ((l_761 , (+(safe_mod_func_uint32_t_u_u((g_228.f6 > ((void*)0 != l_765)), (safe_sub_func_uint8_t_u_u(l_771, ((**g_502) = ((*l_101) = l_772)))))))))
            { 
                uint64_t l_783 = 18446744073709551615UL;
                int32_t l_784 = 0L;
                int32_t *l_785 = &l_784;
                (*l_785) = ((*g_317) = (1L <= ((***l_744) != ((safe_add_func_uint16_t_u_u((((*l_101) |= p_67.f2) | (safe_mul_func_uint8_t_u_u(p_67.f1, ((**g_502) &= ((safe_mod_func_uint16_t_u_u((*g_549), (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_783 = 0x2115L), 9)), l_784)))) == 4294967292UL))))), l_739.f0)) , (*g_692)))));
                return (*p_70);
            }
            else
            { 
                const uint8_t * const ***l_794 = &l_790;
                int32_t l_805 = (-5L);
                if ((((*p_71) = (safe_mod_func_uint8_t_u_u(1UL, ((***g_669) = 0x0CL)))) | (((((*l_794) = (l_793 = l_790)) != &g_502) < (((g_412 , (((0x2EL > (g_795 , (-4L))) == g_185.f2) , l_746.f1)) , l_796) <= p_67.f1)) , p_67.f1)))
                { 
                    l_807 |= (+((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(((l_802 , (*p_71)) & ((safe_mod_func_int64_t_s_s(g_473.f3, (((***l_721) = l_805) && ((void*)0 != (*g_692))))) & (p_69 == p_71))), p_67.f3)), p_67.f3)) & g_806[0]));
                }
                else
                { 
                    union U3 **l_809 = (void*)0;
                    l_810 = l_808;
                    return l_761.f0;
                }
                if (l_805)
                { 
                    return (*g_317);
                }
                else
                { 
                    return (*g_317);
                }
            }
        }
        else
        { 
            int32_t l_825[4][5] = {{0x20A2346BL,0x2F2A30C8L,0x20A2346BL,0x2F2A30C8L,0x20A2346BL},{4L,4L,0x60754DF0L,0x60754DF0L,4L},{0xC195A995L,0x2F2A30C8L,0xC195A995L,0x2F2A30C8L,0xC195A995L},{4L,0x60754DF0L,0x60754DF0L,4L,4L}};
            int i, j;
            l_825[2][1] = (2L & (p_67.f0 == (safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(p_67.f0, (safe_lshift_func_uint16_t_u_u(65530UL, (safe_add_func_int16_t_s_s(p_67.f3, (safe_mul_func_uint16_t_u_u(p_67.f0, (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*p_70), l_802.f3)), (-3L))))))))))) && p_67.f3), 6))));
            return l_825[1][2];
        }
    }
    else
    { 
        uint32_t l_840 = 0x49CB24DFL;
        int32_t l_887 = 0xC090CDB6L;
        int32_t l_888 = 0xB55217ABL;
        int8_t **l_892 = &g_671;
        uint8_t l_928 = 0x16L;
        const struct S0 l_945 = {9L,0xC66A1B5165446C63LL,250UL,0x4B86A000L,0xFD6673DBL,0xBD67C8C89A2D4E3BLL,0L};
        for (g_228.f2 = 16; (g_228.f2 > 33); g_228.f2 = safe_add_func_int64_t_s_s(g_228.f2, 3))
        { 
            int32_t *l_829 = (void*)0;
            int32_t **l_828 = &l_829;
            int32_t l_833 = (-7L);
            int32_t l_839 = (-5L);
            struct S0 *l_944 = &g_473;
            union U2 * const *l_955 = (void*)0;
            uint32_t l_959 = 0x576D9FBCL;
            p_70 = p_70;
        }
    }
    return (*g_317);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_102[i], "g_102[i]", print_hash_value);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_142[i], "g_142[i]", print_hash_value);

    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_168.f0, "g_168.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_170[i][j][k], "g_170[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_185.f0, "g_185.f0", print_hash_value);
    transparent_crc(g_185.f1, "g_185.f1", print_hash_value);
    transparent_crc(g_185.f2, "g_185.f2", print_hash_value);
    transparent_crc(g_185.f3, "g_185.f3", print_hash_value);
    transparent_crc(g_185.f4, "g_185.f4", print_hash_value);
    transparent_crc(g_185.f5, "g_185.f5", print_hash_value);
    transparent_crc(g_185.f6, "g_185.f6", print_hash_value);
    transparent_crc(g_187.f0, "g_187.f0", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_228.f1, "g_228.f1", print_hash_value);
    transparent_crc(g_228.f2, "g_228.f2", print_hash_value);
    transparent_crc(g_228.f3, "g_228.f3", print_hash_value);
    transparent_crc(g_228.f4, "g_228.f4", print_hash_value);
    transparent_crc(g_228.f5, "g_228.f5", print_hash_value);
    transparent_crc(g_228.f6, "g_228.f6", print_hash_value);
    transparent_crc(g_275.f0, "g_275.f0", print_hash_value);
    transparent_crc(g_275.f1, "g_275.f1", print_hash_value);
    transparent_crc(g_412.f0, "g_412.f0", print_hash_value);
    transparent_crc(g_412.f1, "g_412.f1", print_hash_value);
    transparent_crc(g_412.f2, "g_412.f2", print_hash_value);
    transparent_crc(g_412.f3, "g_412.f3", print_hash_value);
    transparent_crc(g_412.f4, "g_412.f4", print_hash_value);
    transparent_crc(g_412.f5, "g_412.f5", print_hash_value);
    transparent_crc(g_412.f6, "g_412.f6", print_hash_value);
    transparent_crc(g_473.f0, "g_473.f0", print_hash_value);
    transparent_crc(g_473.f1, "g_473.f1", print_hash_value);
    transparent_crc(g_473.f2, "g_473.f2", print_hash_value);
    transparent_crc(g_473.f3, "g_473.f3", print_hash_value);
    transparent_crc(g_473.f4, "g_473.f4", print_hash_value);
    transparent_crc(g_473.f5, "g_473.f5", print_hash_value);
    transparent_crc(g_473.f6, "g_473.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_639[i][j][k], "g_639[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_795.f0, "g_795.f0", print_hash_value);
    transparent_crc(g_795.f1, "g_795.f1", print_hash_value);
    transparent_crc(g_795.f2, "g_795.f2", print_hash_value);
    transparent_crc(g_795.f3, "g_795.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_806[i], "g_806[i]", print_hash_value);

    }
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_958, "g_958", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_983[i][j], "g_983[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1017.f0, "g_1017.f0", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1123.f0, "g_1123.f0", print_hash_value);
    transparent_crc(g_1123.f1, "g_1123.f1", print_hash_value);
    transparent_crc(g_1126, "g_1126", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1258, "g_1258", print_hash_value);
    transparent_crc(g_1578.f0, "g_1578.f0", print_hash_value);
    transparent_crc(g_1578.f1, "g_1578.f1", print_hash_value);
    transparent_crc(g_1578.f2, "g_1578.f2", print_hash_value);
    transparent_crc(g_1578.f3, "g_1578.f3", print_hash_value);
    transparent_crc(g_1578.f4, "g_1578.f4", print_hash_value);
    transparent_crc(g_1578.f5, "g_1578.f5", print_hash_value);
    transparent_crc(g_1578.f6, "g_1578.f6", print_hash_value);
    transparent_crc(g_1586, "g_1586", print_hash_value);
    transparent_crc(g_1662.f0, "g_1662.f0", print_hash_value);
    transparent_crc(g_1662.f1, "g_1662.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1824[i][j][k].f0, "g_1824[i][j][k].f0", print_hash_value);
                transparent_crc(g_1824[i][j][k].f1, "g_1824[i][j][k].f1", print_hash_value);
                transparent_crc(g_1824[i][j][k].f2, "g_1824[i][j][k].f2", print_hash_value);
                transparent_crc(g_1824[i][j][k].f3, "g_1824[i][j][k].f3", print_hash_value);
                transparent_crc(g_1824[i][j][k].f4, "g_1824[i][j][k].f4", print_hash_value);
                transparent_crc(g_1824[i][j][k].f5, "g_1824[i][j][k].f5", print_hash_value);
                transparent_crc(g_1824[i][j][k].f6, "g_1824[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(g_1946, "g_1946", print_hash_value);
    transparent_crc(g_2025, "g_2025", print_hash_value);
    transparent_crc(g_2106, "g_2106", print_hash_value);
    transparent_crc(g_2139, "g_2139", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
