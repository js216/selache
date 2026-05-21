// SPDX-License-Identifier: MIT
// cctest_csmith_201b7e9e.c --- cctest case csmith_201b7e9e (csmith seed 538672798)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x680b234c */

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

// Options:   -s 538672798 -o /tmp/csmith_gen_9i6hstws/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint16_t  f3;
   int64_t  f4;
   uint32_t  f5;
   const int32_t  f6;
   int16_t  f7;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
};
#pragma pack(pop)

union U2 {
   struct S1  f0;
   struct S1  f1;
   int8_t  f2;
   int32_t  f3;
   uint32_t  f4;
};


static int32_t g_5 = 0x60693009L;
static uint16_t g_9 = 5UL;
static int32_t g_10 = 0x746A1C17L;
static int64_t g_22 = (-1L);
static int16_t g_32 = (-1L);
static int32_t g_35 = 0xFE8E60A2L;
static uint32_t g_39 = 6UL;
static int32_t *g_55[2] = {&g_5,&g_5};
static int32_t **g_54 = &g_55[1];
static struct S0 g_112 = {0x547CL,-1L,0L,0xA080L,0x470BB3AF78C483DFLL,0UL,0x19F56D68L,-1L};
static int32_t g_114[2] = {0x00A21925L,0x00A21925L};
static const int16_t g_126 = 0x4881L;
static const int16_t *g_125 = &g_126;
static uint16_t *g_132 = (void*)0;
static uint16_t **g_131 = &g_132;
static int8_t g_158 = (-1L);
static int32_t g_164 = 0x78BE3BCDL;
static struct S1 g_201 = {0x1AB3L};
static uint16_t g_216 = 0x48C4L;
static union U2 g_241[7] = {{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}}};
static int16_t *g_249[3] = {&g_201.f0,&g_201.f0,&g_201.f0};
static uint16_t g_296 = 65535UL;
static uint32_t g_413[2] = {0UL,0UL};
static int32_t **g_436 = &g_55[1];
static uint64_t g_486[5] = {0UL,0UL,0UL,0UL,0UL};
static int64_t g_504 = 0x37C0D1A7ABF06D18LL;
static int32_t g_514 = (-1L);
static struct S1 g_523[6][3][7] = {{{{0xF1B1L},{1L},{0x3BEAL},{-1L},{0xDF1AL},{7L},{0x2894L}},{{0xD8E1L},{0xFAB0L},{-1L},{-1L},{-1L},{-1L},{0xFAB0L}},{{6L},{2L},{0x3BEAL},{0xCCE2L},{0x053FL},{-1L},{-4L}}},{{{1L},{-1L},{4L},{1L},{0x928CL},{1L},{-1L}},{{0x2894L},{-1L},{0x78DAL},{2L},{0xC520L},{1L},{0x2894L}},{{4L},{-1L},{-1L},{1L},{0x6B32L},{0x6B32L},{1L}}},{{{-4L},{7L},{-4L},{-1L},{0xC520L},{-2L},{0x5FB4L}},{{1L},{0x928CL},{0xFAB0L},{1L},{0x928CL},{0xD8E1L},{0x928CL}},{{0x3BEAL},{-1L},{0xE56AL},{0L},{0x5FB4L},{-2L},{0xC520L}}},{{{0x6B32L},{4L},{-1L},{-1L},{1L},{0x6B32L},{0x6B32L}},{{0x2894L},{-4L},{-4L},{-4L},{0x2894L},{1L},{0xC520L}},{{0x0274L},{9L},{1L},{1L},{-1L},{1L},{0x928CL}}},{{{0xE56AL},{7L},{0x0B2FL},{0xAB68L},{0xF1B1L},{-1L},{0x5FB4L}},{{0x0274L},{1L},{0xD8E1L},{0x0274L},{0x928CL},{0x2053L},{1L}},{{0x2894L},{0x14ACL},{0xE56AL},{2L},{0xE56AL},{0x14ACL},{0x2894L}}},{{{0x6B32L},{1L},{-1L},{-1L},{4L},{0x6B32L},{-1L}},{{0x3BEAL},{7L},{-6L},{-4L},{0xC520L},{0xCCE2L},{0xF1B1L}},{{1L},{9L},{-1L},{1L},{9L},{-1L},{0x928CL}}}};
static uint8_t g_543 = 248UL;
static const int32_t g_620[5][2] = {{0x46FF5605L,0xB1AE32F5L},{0xB1AE32F5L,0x46FF5605L},{0xB1AE32F5L,0xB1AE32F5L},{0x46FF5605L,0xB1AE32F5L},{0xB1AE32F5L,0x46FF5605L}};
static const int32_t *g_619 = &g_620[2][1];
static int32_t g_621 = 0x0DA9B1AEL;
static uint16_t g_622 = 0x6C09L;
static struct S0 *g_634 = (void*)0;
static struct S0 * const *g_633 = &g_634;
static uint8_t g_708 = 0x46L;
static struct S1 *g_851[7] = {&g_523[5][2][3],&g_523[5][2][3],&g_523[5][2][3],&g_523[5][2][3],&g_523[5][2][3],&g_523[5][2][3],&g_523[5][2][3]};
static struct S1 **g_850 = &g_851[2];
static uint16_t **g_854 = &g_132;
static struct S1 ***g_859 = &g_850;
static uint8_t g_892 = 0xD8L;
static int8_t *g_942 = &g_158;
static uint32_t g_966 = 0x1BE222C9L;
static int32_t *g_972 = (void*)0;
static int64_t g_975 = 0x62D226AB55B5C6D2LL;
static uint32_t *g_1042 = &g_413[0];
static uint32_t **g_1041 = &g_1042;
static uint8_t g_1157[4] = {0x78L,0x78L,0x78L,0x78L};
static union U2 g_1179 = {{0x936DL}};
static union U2 *g_1185 = &g_241[4];
static union U2 **g_1184 = &g_1185;



static union U2  func_1(void);
static int32_t * func_42(uint32_t  p_43, uint8_t  p_44, int8_t  p_45, int16_t  p_46, int32_t  p_47);
static uint16_t  func_51(int32_t ** p_52, int32_t * const * p_53);
static int32_t * const * func_56(int32_t ** const  p_57, int32_t  p_58, const uint8_t  p_59, int64_t * p_60);
static int32_t ** func_61(uint32_t  p_62, const uint16_t * p_63, int64_t * p_64, int16_t * p_65, int32_t * p_66);
static uint16_t  func_87(int32_t  p_88);
static int32_t ** func_93(int32_t ** p_94, int64_t * p_95, int32_t ** p_96);
static int64_t * func_98(int64_t * p_99, int32_t ** p_100, int32_t  p_101, struct S0  p_102, int32_t  p_103);




static union U2  func_1(void)
{ 
    int32_t **l_2 = (void*)0;
    int32_t *l_4 = &g_5;
    int32_t **l_3 = &l_4;
    uint16_t *l_8 = &g_9;
    int16_t l_11[2][6];
    int32_t *l_12 = &g_5;
    int64_t *l_711 = &g_22;
    uint64_t l_981 = 1UL;
    int32_t l_986 = 0xC8031445L;
    int32_t l_988 = 0x7F461E4CL;
    uint16_t l_996 = 65534UL;
    uint32_t l_997 = 1UL;
    uint8_t *l_1022 = &g_708;
    int8_t l_1044 = 0L;
    int32_t l_1057 = 4L;
    int16_t **l_1093 = &g_249[2];
    int16_t ***l_1092 = &l_1093;
    uint16_t l_1095 = 65531UL;
    struct S1 l_1123 = {0L};
    int64_t l_1124 = 8L;
    uint16_t l_1136 = 0x5586L;
    union U2 l_1246 = {{1L}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_11[i][j] = 0L;
    }
    (*l_3) = (void*)0;
    (*l_12) = (safe_rshift_func_uint16_t_u_s((g_10 = ((*l_8) = (&g_5 != (*l_3)))), l_11[1][0]));
    for (g_9 = 0; (g_9 != 38); g_9 = safe_add_func_int8_t_s_s(g_9, 1))
    { 
        uint32_t l_19 = 0xAE4F78D7L;
        int32_t l_38 = 0xF4B9EFECL;
        const int32_t l_710 = 0L;
        int32_t l_991 = (-1L);
        int64_t l_1007 = 0xFC7F0849A8E0B6F5LL;
        struct S0 * const **l_1011 = (void*)0;
        struct S0 ***l_1012 = (void*)0;
        struct S1 *l_1017 = &g_523[3][0][6];
        union U2 l_1031 = {{0x1D4AL}};
        uint32_t l_1043 = 1UL;
        const int64_t l_1077[6][2] = {{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)}};
        int32_t l_1220 = 0L;
        int i, j;
    }
    return l_1246;
}



static int32_t * func_42(uint32_t  p_43, uint8_t  p_44, int8_t  p_45, int16_t  p_46, int32_t  p_47)
{ 
    int32_t *l_976[1];
    int32_t l_977[7] = {0x72150EE4L,0xFDF15B38L,0x72150EE4L,0x72150EE4L,0xFDF15B38L,0x72150EE4L,0x72150EE4L};
    int32_t ** const *l_980 = &g_54;
    int32_t ** const **l_979[6][1][6];
    int32_t ** const ***l_978 = &l_979[3][0][0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_976[i] = &g_112.f2;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_979[i][j][k] = &l_980;
        }
    }
    (*l_978) = ((l_977[2] = p_46) , (void*)0);
    p_47 ^= p_46;
    return &g_5;
}



static uint16_t  func_51(int32_t ** p_52, int32_t * const * p_53)
{ 
    int32_t l_973 = 0x59A45BA3L;
    return l_973;
}



static int32_t * const * func_56(int32_t ** const  p_57, int32_t  p_58, const uint8_t  p_59, int64_t * p_60)
{ 
    const uint8_t *l_714 = &g_708;
    int32_t l_721 = 0x9AB32E34L;
    int32_t l_722 = (-8L);
    int32_t *l_723 = &g_621;
    struct S1 l_724[6] = {{-2L},{-2L},{-2L},{-2L},{-2L},{-2L}};
    uint32_t l_735 = 18446744073709551607UL;
    uint64_t *l_749 = &g_486[3];
    struct S0 l_781 = {0x2596L,0xB4L,0L,0x9BE9L,9L,1UL,0xDE35F60DL,0L};
    uint16_t *l_812[6];
    struct S1 **l_845 = (void*)0;
    const int32_t *l_852 = &g_114[1];
    const uint16_t *l_856 = &l_781.f3;
    const uint16_t **l_855[1];
    int32_t * const l_861 = (void*)0;
    int32_t l_879 = 0x26626CF1L;
    uint16_t l_909 = 1UL;
    const int32_t l_943[5][5][6] = {{{0xF024A51DL,0xF024A51DL,0x2D16AF21L,0xF024A51DL,0xF024A51DL,0x2D16AF21L},{0xF024A51DL,0xF024A51DL,0x2D16AF21L,0xF024A51DL,0xF024A51DL,0x2D16AF21L},{0xF024A51DL,0xF024A51DL,0x2D16AF21L,0xF024A51DL,0xF024A51DL,0x2D16AF21L},{0xF024A51DL,0xF024A51DL,0x2D16AF21L,0xF024A51DL,0xF024A51DL,0x2D16AF21L},{0xF024A51DL,0xF024A51DL,0x2D16AF21L,0xF024A51DL,0xF024A51DL,0x2D16AF21L}},{{0xF024A51DL,0xF024A51DL,0x2D16AF21L,0xF024A51DL,0xF024A51DL,0x2D16AF21L},{0xF024A51DL,0xF024A51DL,0x2D16AF21L,0xF024A51DL,0xF024A51DL,0x2D16AF21L},{0xF024A51DL,0xF024A51DL,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL}},{{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL}},{{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL}},{{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL},{0L,0L,0xF024A51DL,0L,0L,0xF024A51DL}}};
    uint16_t l_946 = 0xDE3BL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_812[i] = &g_9;
    for (i = 0; i < 1; i++)
        l_855[i] = &l_856;
    (*l_723) = (l_722 |= ((*g_619) , (safe_div_func_uint8_t_u_u(252UL, ((l_714 != &g_708) ^ ((safe_lshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s((p_59 != (safe_lshift_func_uint8_t_u_s((9UL | ((((g_158 > p_58) && l_721) >= 0x55F5E5C0BBAB8C15LL) ^ 0L)), 5))), 0L)) , p_58) & (-1L)), g_543)) , 0x99CFFF84L))))));
    l_724[0] = g_241[2].f1;
    (*g_54) = &l_721;
    for (g_112.f7 = 2; (g_112.f7 >= 0); g_112.f7 -= 1)
    { 
        int64_t l_742[2][2] = {{(-7L),(-7L)},{(-7L),(-7L)}};
        uint64_t *l_748[7] = {&g_486[3],&g_486[3],&g_486[3],&g_486[3],&g_486[3],&g_486[3],&g_486[3]};
        int32_t * const *l_773 = &g_55[1];
        int64_t l_806 = 0xBBDCDFC3F24732FELL;
        uint16_t *l_811 = (void*)0;
        int8_t l_819 = 0L;
        union U2 l_826 = {{0xB12EL}};
        int32_t l_863[3];
        uint8_t l_864 = 0UL;
        uint16_t l_891 = 0UL;
        uint32_t **l_914 = (void*)0;
        union U2 l_921[7] = {{{3L}},{{3L}},{{3L}},{{3L}},{{3L}},{{3L}},{{3L}}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_863[i] = 3L;
    }
    return &g_55[1];
}



static int32_t ** func_61(uint32_t  p_62, const uint16_t * p_63, int64_t * p_64, int16_t * p_65, int32_t * p_66)
{ 
    int8_t l_69 = 0x3EL;
    int32_t *l_70 = &g_35;
    int32_t *l_71 = &g_35;
    int32_t *l_72 = &g_35;
    int32_t *l_73 = (void*)0;
    int32_t *l_74[1];
    int32_t l_75[2];
    uint16_t l_76 = 8UL;
    int32_t l_79[6];
    uint32_t l_80[5];
    uint32_t l_85 = 7UL;
    uint32_t l_86 = 0x91FC229EL;
    int32_t **l_97[7][3][5] = {{{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,(void*)0,&l_70,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,(void*)0,&l_70,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,(void*)0,&l_70,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,(void*)0,&l_70,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_70,(void*)0,(void*)0},{(void*)0,&l_70,&l_74[0],&l_70,(void*)0},{(void*)0,&l_70,&l_74[0],&l_70,(void*)0}},{{(void*)0,&l_70,&l_74[0],&l_70,(void*)0},{(void*)0,&l_70,&l_74[0],&l_70,(void*)0},{(void*)0,&l_70,&l_74[0],&l_70,(void*)0}},{{(void*)0,&l_70,&l_74[0],&l_70,(void*)0},{(void*)0,&l_70,&l_74[0],&l_70,(void*)0},{(void*)0,&l_70,&l_74[0],&l_70,(void*)0}}};
    uint16_t *l_111 = (void*)0;
    uint16_t **l_110 = &l_111;
    int32_t ***l_435[1][3];
    int8_t *l_709 = &g_158;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_74[i] = &g_35;
    for (i = 0; i < 2; i++)
        l_75[i] = 0x775ED142L;
    for (i = 0; i < 6; i++)
        l_79[i] = 0xD756AA3FL;
    for (i = 0; i < 5; i++)
        l_80[i] = 0xEC30626FL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_435[i][j] = &l_97[4][0][1];
    }
    ++l_76;
    l_80[0]++;
    g_621 |= (((*l_709) = ((safe_mod_func_int32_t_s_s((l_86 = ((*l_70) = (g_22 < l_85))), 9L)) >= (func_87((safe_mod_func_uint64_t_u_u((g_22 >= (safe_div_func_uint32_t_u_u(((g_436 = func_93((l_97[3][1][4] = &l_72), func_98(((((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((((*l_110) = &l_76) != (void*)0), g_5)) != p_62), p_62)), p_62)) , 0xB1L) && p_62) , &g_22), &l_70, (*p_66), g_112, (*p_66)), &l_74[0])) == &p_66), p_62))), p_62))) & 0x6267L))) != p_62);
    p_66 = p_66;
    return &g_55[0];
}



static uint16_t  func_87(int32_t  p_88)
{ 
    int64_t l_446 = 0xD31300BD5B639A69LL;
    int32_t l_447 = 0x06A79BC5L;
    int32_t l_448 = (-10L);
    int32_t l_449[7] = {4L,4L,(-1L),4L,4L,(-1L),4L};
    int32_t l_450[5];
    struct S1 l_520 = {0L};
    union U2 *l_595 = &g_241[2];
    const union U2 *l_596 = (void*)0;
    int32_t l_643[5];
    uint32_t l_647 = 4294967295UL;
    int32_t *l_678[7][3][7] = {{{&l_448,&l_450[3],&l_448,&l_643[0],&l_448,&l_450[3],&l_448},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_448,&l_643[0],&l_643[0],&l_448,&g_10,&g_621,&g_10}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_447,&g_514,&l_448,&l_450[3],&g_10,(void*)0,&g_10},{&l_643[0],(void*)0,&l_447,(void*)0,(void*)0,&l_447,(void*)0}},{{&g_10,&l_450[3],&l_447,&g_514,&l_448,&l_450[3],&g_10},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_514,&l_643[0],&g_514,(void*)0,&g_621,&l_448}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_447,&l_643[0],&g_10,&l_450[3],&l_448,&l_450[3],&g_10},{(void*)0,(void*)0,&l_447,(void*)0,&l_643[0],&l_447,&l_643[0]}},{{(void*)0,&l_450[3],&g_10,&l_448,&l_448,(void*)0,(void*)0},{(void*)0,&l_643[0],(void*)0,(void*)0,&l_643[0],(void*)0,(void*)0},{&g_10,&l_448,&l_643[0],&l_643[0],&l_448,&g_621,(void*)0}},{{&l_643[0],(void*)0,(void*)0,&l_643[0],(void*)0,(void*)0,&l_643[0]},{&l_447,&l_448,&l_447,&l_450[3],(void*)0,&l_450[3],&g_10},{(void*)0,&l_643[0],&l_447,&l_643[0],(void*)0,&l_447,(void*)0}},{{&l_448,&l_450[3],&l_448,&l_643[0],&l_448,&l_450[3],&l_448},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_448,&l_643[0],&l_643[0],&l_448,&g_10,&l_643[0],&l_448}}};
    const int16_t l_687 = (-7L);
    int8_t *l_692 = &g_112.f1;
    uint16_t *l_701 = &g_112.f3;
    uint16_t *l_704 = &g_622;
    int8_t *l_705 = &g_158;
    uint32_t l_706 = 0x32223EF9L;
    uint64_t *l_707[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_450[i] = 0x4A926932L;
    for (i = 0; i < 5; i++)
        l_643[i] = 4L;
    for (g_296 = 19; (g_296 < 45); g_296 = safe_add_func_uint8_t_u_u(g_296, 6))
    { 
        uint16_t l_439 = 0x2FC2L;
        int32_t *l_440 = &g_241[2].f3;
        int32_t *l_441 = &g_164;
        int32_t *l_442 = &g_241[2].f3;
        int32_t *l_443 = &g_164;
        int32_t *l_444 = &g_241[2].f3;
        int32_t *l_445[3];
        uint8_t l_451 = 1UL;
        uint64_t l_494 = 18446744073709551615UL;
        uint32_t l_515 = 1UL;
        struct S1 *l_545[3];
        int32_t ***l_629 = &g_436;
        int32_t ****l_628 = &l_629;
        int16_t **l_667[7][5] = {{&g_249[0],&g_249[0],&g_249[0],&g_249[0],&g_249[0]},{&g_249[2],&g_249[2],&g_249[2],&g_249[2],&g_249[2]},{&g_249[0],&g_249[0],&g_249[0],&g_249[0],&g_249[0]},{&g_249[2],&g_249[2],&g_249[2],&g_249[2],&g_249[2]},{&g_249[0],&g_249[0],&g_249[0],&g_249[0],&g_249[0]},{&g_249[2],&g_249[2],&g_249[2],&g_249[2],&g_249[2]},{&g_249[0],&g_249[0],&g_249[0],&g_249[0],&g_249[0]}};
        const int32_t *l_674 = &l_448;
        int i, j;
        for (i = 0; i < 3; i++)
            l_445[i] = &g_114[0];
        for (i = 0; i < 3; i++)
            l_545[i] = &g_201;
        if (l_439)
            break;
        l_451++;
        if (((safe_rshift_func_int16_t_s_s((-1L), (safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_88, (((*l_443) = ((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((1UL >= (!p_88)), l_446)), l_450[2])) != (safe_mul_func_int16_t_s_s(p_88, 0UL)))) , p_88))), p_88)))) <= l_447))
        { 
            int32_t *l_467 = &l_447;
            int32_t **l_468 = &l_443;
            int32_t l_507[3][1][4] = {{{0xA636E1EAL,0xA636E1EAL,0x181CA3D1L,0xA636E1EAL}},{{0xA636E1EAL,1L,1L,0xA636E1EAL}},{{1L,0xA636E1EAL,1L,1L}}};
            int32_t l_511 = (-10L);
            int32_t l_512 = 8L;
            int32_t l_513[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_513[i] = 0x5851779CL;
            (*l_468) = ((*g_54) = l_467);
            if (((*l_444) = l_450[1]))
            { 
                int32_t *l_469 = &l_448;
                l_469 = ((*l_468) = ((*g_54) = &p_88));
                if (p_88)
                    continue;
            }
            else
            { 
                (**l_468) |= 0x5C13308FL;
            }
            if ((0x3838L | ((safe_div_func_uint32_t_u_u(g_112.f5, 0xFB8FE609L)) > (**l_468))))
            { 
                struct S1 l_474 = {0xD146L};
                int32_t l_487 = 0x838971F7L;
                int32_t *l_495 = &l_450[0];
                int32_t l_508 = 0xAC7B7A6BL;
                int32_t l_509 = 0xBC6F05A3L;
                int32_t l_510[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_510[i][j] = (-1L);
                }
                for (g_112.f3 = 1; (g_112.f3 <= 6); g_112.f3 += 1)
                { 
                    struct S1 *l_472 = &g_241[2].f0;
                    struct S1 *l_473 = &g_241[2].f0;
                    uint64_t *l_485[6];
                    int8_t *l_491 = &g_158;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_485[i] = &g_486[3];
                    l_474 = g_241[2].f1;
                    (*l_467) &= (safe_mul_func_int8_t_s_s(0L, ((p_88 < (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((1UL == ((g_486[3]--) >= ((~255UL) , ((((*l_491) ^= p_88) && p_88) && (safe_lshift_func_int16_t_s_s(l_474.f0, 2)))))), l_494)) == p_88), g_112.f2)) , g_112.f1), 8L)), 7L))) , g_296)));
                    l_495 = (*g_54);
                    if ((*l_495))
                        break;
                }
                for (g_32 = 1; (g_32 >= 0); g_32 -= 1)
                { 
                    int i;
                    (*l_443) = (safe_add_func_int32_t_s_s(((0x22565CB262160BC1LL != (g_486[(g_32 + 1)] = ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((g_413[g_32] <= ((((l_449[4] , g_413[g_32]) , &g_39) != (void*)0) < p_88)), 4)) | (*l_495)), 3UL)), p_88)) >= 0x42L))) , g_504), g_216));
                    if (p_88)
                        break;
                }
                for (g_201.f0 = 0; (g_201.f0 > (-3)); g_201.f0--)
                { 
                    return p_88;
                }
                --l_515;
                (*g_54) = ((*l_468) = l_445[0]);
            }
            else
            { 
                uint32_t l_534 = 3UL;
                int32_t l_565 = 9L;
                struct S1 l_568[6] = {{0xE69BL},{0xE69BL},{0xE69BL},{0xE69BL},{0xE69BL},{0xE69BL}};
                int i;
                for (g_201.f0 = 29; (g_201.f0 > (-27)); g_201.f0 = safe_sub_func_int64_t_s_s(g_201.f0, 5))
                { 
                    struct S1 *l_521 = (void*)0;
                    struct S1 *l_522 = &g_241[2].f0;
                    int32_t l_533 = 0x091FC230L;
                    uint8_t *l_541 = &l_451;
                    uint8_t *l_542 = &g_543;
                    int32_t l_544 = 1L;
                    struct S1 **l_546 = (void*)0;
                    struct S1 **l_547 = &l_521;
                    (*l_444) = (-6L);
                    g_523[3][0][6] = ((*l_522) = l_520);
                    l_544 |= (safe_mul_func_uint16_t_u_u((!(safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_533, (((0L || p_88) | ((((((*l_542) = (g_413[0] != (l_534 & (((safe_rshift_func_uint8_t_u_s(((*l_541) = (safe_rshift_func_uint8_t_u_s(((g_514 < (safe_lshift_func_uint8_t_u_s(l_534, 3))) && 0x3A9A45B5L), g_112.f0))), 6)) | 0UL) , 0x4E83L)))) < 4UL) > (**l_468)) == (*l_467)) & p_88)) , l_533))), l_533)), p_88))), 7L));
                    (*l_547) = l_545[2];
                }
                for (g_112.f7 = 0; (g_112.f7 == 22); g_112.f7 = safe_add_func_uint64_t_u_u(g_112.f7, 7))
                { 
                    uint8_t l_558 = 0x41L;
                    uint64_t *l_562 = &g_486[3];
                    int8_t *l_563 = (void*)0;
                    int8_t *l_564[5][5][3] = {{{&g_112.f1,&g_112.f1,&g_241[2].f2},{&g_112.f1,&g_158,&g_158},{&g_241[2].f2,(void*)0,&g_158},{&g_158,&g_112.f1,&g_241[2].f2},{&g_241[2].f2,&g_241[2].f2,&g_158}},{{&g_158,&g_112.f1,&g_158},{&g_241[2].f2,&g_112.f1,&g_241[2].f2},{&g_112.f1,&g_112.f1,&g_241[2].f2},{&g_241[2].f2,&g_112.f1,&g_112.f1},{&g_112.f1,&g_241[2].f2,&g_112.f1}},{{&g_112.f1,&g_112.f1,&g_241[2].f2},{&g_112.f1,(void*)0,&g_112.f1},{&g_241[2].f2,&g_158,&g_158},{&g_112.f1,&g_112.f1,&g_158},{&g_241[2].f2,&g_112.f1,&g_112.f1}},{{&g_158,&g_241[2].f2,&g_241[2].f2},{&g_241[2].f2,&g_241[2].f2,&g_112.f1},{&g_158,&g_241[2].f2,&g_112.f1},{&g_241[2].f2,&g_112.f1,&g_241[2].f2},{&g_112.f1,&g_112.f1,&g_241[2].f2}},{{&g_112.f1,&g_158,&g_158},{&g_241[2].f2,(void*)0,&g_158},{&g_158,&g_112.f1,&g_241[2].f2},{&g_241[2].f2,&g_241[2].f2,&g_158},{&g_158,&g_112.f1,&g_158}}};
                    int i, j, k;
                    l_565 |= ((safe_add_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s(((*l_442) = ((safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*l_441) |= p_88), p_88)) >= (((*l_562) = ((l_558 ^ (safe_unary_minus_func_int32_t_s(((g_413[0] || ((safe_rshift_func_uint8_t_u_u(0xF8L, l_558)) != (0x66L >= 246UL))) == l_558)))) , 3UL)) < 0L)), 0x6E02L)) >= 255UL)), 5)) , 0xF03928848F7620ABLL), 18446744073709551609UL)) ^ l_558);
                    (*l_443) = (253UL || g_164);
                    if (p_88)
                        break;
                    (*l_442) = p_88;
                }
                for (g_158 = 0; (g_158 <= 14); g_158++)
                { 
                    const int32_t *l_569 = &g_112.f2;
                    l_568[2] = g_201;
                    (*l_443) ^= (-4L);
                    if ((**g_54))
                        break;
                    (**l_468) = (g_55[0] != l_569);
                    if (l_447)
                        continue;
                }
                for (p_88 = 27; (p_88 != 13); p_88--)
                { 
                    (*l_467) ^= 5L;
                }
                (*l_441) = p_88;
            }
            if ((**g_54))
                continue;
            return p_88;
        }
        else
        { 
            int8_t *l_574 = &g_158;
            int32_t l_586 = 0xD5B9AFFAL;
            union U2 *l_590 = &g_241[2];
            int8_t l_632 = 0xA2L;
            int32_t l_641 = (-9L);
            struct S1 l_672 = {-1L};
            uint8_t l_675 = 255UL;
            (*l_441) &= (safe_sub_func_int16_t_s_s((((*l_574) = g_114[1]) | 1L), p_88));
            for (g_112.f5 = 0; (g_112.f5 <= 2); g_112.f5 += 1)
            { 
                struct S0 *l_576 = &g_112;
                struct S0 ** const l_575 = &l_576;
                uint8_t *l_585[3][5][3] = {{{(void*)0,&g_543,&g_543},{(void*)0,(void*)0,&g_543},{&g_543,(void*)0,&g_543},{&g_543,&g_543,&g_543},{(void*)0,(void*)0,&g_543}},{{&g_543,&g_543,&g_543},{(void*)0,&g_543,&g_543},{(void*)0,(void*)0,&g_543},{&g_543,(void*)0,&g_543},{&g_543,&g_543,&g_543}},{{(void*)0,(void*)0,&g_543},{&g_543,&g_543,&g_543},{(void*)0,&g_543,&g_543},{(void*)0,(void*)0,&g_543},{&g_543,(void*)0,&g_543}}};
                int16_t *l_587 = (void*)0;
                int16_t *l_588 = &g_112.f7;
                int32_t l_589 = (-4L);
                struct S0 * const **l_635[4][7] = {{&g_633,&g_633,&g_633,&g_633,&g_633,&g_633,&g_633},{&g_633,&g_633,&g_633,(void*)0,&g_633,&g_633,(void*)0},{&g_633,&g_633,&g_633,(void*)0,(void*)0,&g_633,&g_633},{(void*)0,&g_633,&g_633,&g_633,&g_633,(void*)0,&g_633}};
                int32_t l_646 = 0x76E3C4B3L;
                int32_t *l_669 = &g_621;
                const int32_t *l_673[4][4] = {{&l_646,&l_641,&l_641,&l_646},{&g_620[3][1],&l_641,&g_621,&l_641},{&l_641,&g_10,&g_621,&g_621},{&g_620[3][1],&g_620[3][1],&l_641,&g_621}};
                int i, j, k;
                if (p_88)
                    break;
            }
            l_675--;
            if (l_450[4])
                break;
        }
    }
    l_678[6][2][4] = &l_643[0];
    g_708 ^= ((safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((g_486[3] ^= (safe_lshift_func_uint16_t_u_s((p_88 & (1UL <= (((safe_rshift_func_uint8_t_u_u((l_687 <= (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((*l_692) = g_296), 4)), (4294967289UL > (safe_div_func_int16_t_s_s((((*l_705) = ((255UL ^ (safe_add_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((((((safe_mod_func_uint64_t_u_u((((((*l_704) = (++(*l_701))) != p_88) <= 0x18359A36L) > 1L), g_241[2].f2)) || p_88) && (**g_54)) <= (-6L)) ^ 0xD5D0L), 7)) >= 0x0CL) || p_88), 246UL))) , 0x2DL)) != p_88), 0x3688L)))))), 5)) == l_706) , 4294967291UL))), p_88))), g_216)), p_88)) , (**g_54));
    return g_10;
}



static int32_t ** func_93(int32_t ** p_94, int64_t * p_95, int32_t ** p_96)
{ 
    int32_t l_190 = 0L;
    int32_t l_192 = 1L;
    int32_t l_193[5] = {1L,1L,1L,1L,1L};
    int8_t l_195 = 0x62L;
    int32_t *l_202 = &l_193[2];
    int16_t *l_213[2];
    int16_t * const *l_212 = &l_213[0];
    struct S0 l_231 = {7L,0x7DL,-2L,0x4AEBL,0xD1E02F020D750CEALL,0xF115D831L,0x1C496369L,0x72CEL};
    const struct S1 *l_232 = &g_201;
    struct S1 *l_233[5][6] = {{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201}};
    int32_t ***l_244[5] = {&g_54,&g_54,&g_54,&g_54,&g_54};
    struct S1 *l_269 = &g_241[2].f0;
    int16_t l_319 = 0x12F3L;
    uint32_t l_321 = 0x871B06F6L;
    uint64_t l_404 = 0xDC7552A58FA71835LL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_213[i] = (void*)0;
    for (g_32 = 0; (g_32 > 1); ++g_32)
    { 
        struct S1 l_186 = {0L};
        struct S1 *l_187 = &l_186;
        int32_t *l_188 = &g_114[1];
        int32_t *l_189 = &g_114[0];
        int32_t *l_191[5][3] = {{(void*)0,&g_114[1],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_114[1],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_114[1],(void*)0}};
        int32_t l_194 = 8L;
        uint16_t l_196 = 2UL;
        int i, j;
        (*l_187) = l_186;
        l_196--;
        (*l_188) = ((((safe_mod_func_int64_t_s_s(7L, g_22)) & 5L) , &g_22) == (g_201 , (void*)0));
    }
    (*l_202) ^= (**g_54);
    for (g_112.f4 = 0; (g_112.f4 <= 1); g_112.f4 += 1)
    { 
        int i;
        l_202 = &g_114[g_112.f4];
        if (g_114[g_112.f4])
            break;
        for (g_158 = 1; (g_158 >= 0); g_158 -= 1)
        { 
            int8_t *l_205 = &g_112.f1;
            int32_t *l_217 = &l_193[1];
            int i;
            (*l_217) |= (((((*l_205) = (0x93B70FBFL != (safe_lshift_func_uint16_t_u_u(g_114[g_112.f4], g_114[g_112.f4])))) != ((g_216 = (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((l_212 != &l_213[0]), (safe_sub_func_int32_t_s_s(g_114[g_112.f4], g_114[g_112.f4])))), 0x7EL)), g_114[g_112.f4]))) != 0x85L)) & (*l_202)) , (-8L));
        }
    }
    if (((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((*l_202) = ((*g_125) | 1L)) >= ((!(safe_rshift_func_int8_t_s_s(((l_231 , l_232) != (l_233[0][3] = &g_201)), ((((*g_125) < ((l_231.f7 ^ g_32) && g_112.f2)) >= l_231.f6) || (*g_125))))) != l_231.f0)), 0x26L)), 6L)), (*g_125))), 0x2CL)) , (*l_202)))
    { 
        int16_t l_240 = (-1L);
        union U2 *l_242 = &g_241[5];
        int64_t *l_243 = &g_112.f4;
        int32_t **l_247 = &g_55[1];
        int16_t **l_248[5][4][7] = {{{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]}},{{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]}},{{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]}},{{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0],&l_213[0]},{&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[0],&l_213[1],&l_213[0]},{&l_213[1],&l_213[1],&l_213[0],&l_213[1],&l_213[0],&l_213[1],&l_213[0]}},{{&l_213[1],&l_213[1],&l_213[0],&l_213[1],&l_213[0],&l_213[1],&l_213[0]},{&l_213[1],&l_213[1],&l_213[0],&l_213[1],&l_213[0],&l_213[1],&l_213[0]},{&l_213[1],&l_213[1],&l_213[0],&l_213[1],&l_213[0],&l_213[1],&l_213[0]},{&l_213[1],&l_213[1],&l_213[0],&l_213[1],&l_213[0],&l_213[1],&l_213[0]}}};
        int8_t *l_262 = &g_158;
        int32_t **l_270 = (void*)0;
        int32_t l_286 = 0xB5D8C7EBL;
        int32_t l_303[5];
        int16_t l_312 = 1L;
        int32_t l_318[3];
        int16_t l_353 = 1L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_303[i] = 3L;
        for (i = 0; i < 3; i++)
            l_318[i] = 1L;
        (*l_202) = (1L && (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((((((((safe_mod_func_int32_t_s_s(((l_240 <= (((l_240 < ((((l_240 && g_112.f2) & ((*l_243) = ((*l_202) , (((*l_242) = g_241[2]) , (*p_95))))) || (*l_202)) <= 252UL)) != 0x9B1C9B85L) | l_240)) >= 4294967295UL), 1L)) , &g_54) != l_244[1]) & 0xCB463609L) > (*g_125)) >= 0x689CL) == 0xA4L), 1UL)), l_240)));
        for (l_240 = 1; (l_240 > (-5)); l_240--)
        { 
            (*l_202) ^= (**g_54);
            if ((**g_54))
                continue;
            return l_247;
        }
        (*l_202) = (((((&g_32 != (g_249[2] = l_213[0])) || ((safe_rshift_func_uint16_t_u_u(0x3E42L, 12)) & (safe_div_func_uint32_t_u_u((&g_158 != (((((safe_rshift_func_uint16_t_u_s((**l_247), (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((**l_247), 0xEAL)), (-2L))), (*l_202))))) != (**l_247)) <= g_9) | g_32) , l_262)), 0x75F0600AL)))) >= (**l_247)) , 5UL) <= 0xABBBL);
        for (l_192 = 6; (l_192 >= 1); l_192 -= 1)
        { 
            int16_t l_264 = 4L;
            int32_t l_282 = 0x5C511FBBL;
            uint8_t l_306 = 0x27L;
            int32_t l_309 = 0x3BD1DED9L;
            int32_t l_310 = 0x5F9869B0L;
            int32_t l_311 = 0x4A285664L;
            int32_t l_313 = 0x5FB38F79L;
            int32_t l_314 = 3L;
            int32_t l_315 = 0x2E7B6411L;
            int32_t l_316[3][6][1] = {{{0x4B756C93L},{0x4B756C93L},{0x2BC97B4CL},{0xE45F899AL},{(-1L)},{0xE45F899AL}},{{0x2BC97B4CL},{0x4B756C93L},{0x4B756C93L},{0x2BC97B4CL},{0xE45F899AL},{(-1L)}},{{0xE45F899AL},{0x2BC97B4CL},{0x4B756C93L},{0x4B756C93L},{0x2BC97B4CL},{0xE45F899AL}}};
            int8_t l_317 = 0x1AL;
            int32_t l_320 = 0xD34ED326L;
            int16_t l_361 = 0xC7F8L;
            int i, j, k;
            if ((**g_54))
                break;
            if ((((+(0xDDBAFD6F986E3EFCLL & ((((((g_201 , p_96) != (p_94 = &g_55[1])) != (g_241[2].f0 , (((((**l_247) , ((*l_202) = 0x397DB686L)) >= l_264) < (**l_247)) < l_264))) | 0xC16E9F44L) ^ (**l_247)) && 1UL))) == (-3L)) , (**p_94)))
            { 
                uint16_t **l_265 = (void*)0;
                for (g_201.f0 = 5; (g_201.f0 >= 0); g_201.f0 -= 1)
                { 
                    uint16_t ***l_266 = &g_131;
                    struct S1 **l_267 = (void*)0;
                    struct S1 **l_268[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_268[i] = &l_233[0][3];
                    (*l_202) = (-2L);
                    (*l_266) = l_265;
                    l_269 = (l_233[0][3] = &g_201);
                }
                return l_270;
            }
            else
            { 
                int64_t l_271 = (-1L);
                int32_t *l_272[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int i, j;
                for (l_195 = 6; (l_195 >= 2); l_195 -= 1)
                { 
                    (*g_54) = (*g_54);
                    if (l_271)
                        continue;
                    (*l_202) = (**l_247);
                    return p_96;
                }
                if ((**p_94))
                { 
                    const int32_t l_279 = (-1L);
                    int32_t l_287 = 0L;
                    uint16_t **l_290 = &g_132;
                    uint16_t ***l_291 = &g_131;
                    uint64_t *l_295[3][1];
                    uint32_t *l_299[3];
                    int32_t l_302 = 0xB35D6010L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_295[i][j] = (void*)0;
                    }
                    for (i = 0; i < 3; i++)
                        l_299[i] = &g_39;
                    l_272[2][1] = (*g_54);
                    l_282 &= ((safe_div_func_int8_t_s_s(g_112.f5, ((safe_add_func_uint16_t_u_u(l_264, (((*l_262) ^= (safe_mod_func_int16_t_s_s(l_279, (((safe_sub_func_int8_t_s_s(g_164, 0xE1L)) ^ ((**p_94) >= (**p_94))) ^ 0xA0L)))) && 1L))) , l_279))) ^ g_114[1]);
                    (*l_202) = (~(safe_mul_func_int16_t_s_s((l_287 = l_286), (g_112 , (((l_290 == ((*l_291) = &g_132)) == ((+(**l_247)) != (safe_lshift_func_int16_t_s_u(((g_296 = 0xDE48FC2743BC8FD9LL) >= ((g_216 = ((((safe_sub_func_int16_t_s_s(((l_302 = (g_112.f5++)) , (l_303[4] = 0xAD90L)), 1UL)) <= g_112.f6) | 0x505324F0L) > (**g_54))) , 0xEB56BE9B4C8C2C44LL)), l_279)))) && l_264)))));
                }
                else
                { 
                    struct S1 l_304 = {0L};
                    int32_t l_305 = 1L;
                    l_304 = g_241[2].f1;
                    l_306--;
                }
                g_201 = (*l_269);
            }
            ++l_321;
            for (l_315 = 3; (l_315 >= 1); l_315 -= 1)
            { 
                uint16_t l_324[2];
                uint16_t l_335[7][3] = {{0x6419L,65535UL,0x6419L},{0UL,3UL,0UL},{0x6419L,65535UL,0x6419L},{0UL,3UL,0UL},{0x6419L,65535UL,0x6419L},{0UL,3UL,0UL},{0x6419L,65535UL,0x6419L}};
                struct S0 *l_338 = (void*)0;
                int32_t l_339 = 5L;
                int32_t l_340 = 0L;
                int32_t l_342 = (-1L);
                int32_t l_343 = 0L;
                uint8_t l_344[1];
                int32_t ****l_347 = &l_244[1];
                int16_t l_348 = 9L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_324[i] = 0x9FCEL;
                for (i = 0; i < 1; i++)
                    l_344[i] = 0x34L;
                l_324[1]++;
            }
        }
    }
    else
    { 
        uint32_t l_371 = 0xD7531D81L;
        int32_t l_374[4];
        int32_t l_375 = 2L;
        struct S1 l_376 = {0x8982L};
        int32_t *l_377 = &g_114[1];
        int32_t l_422 = 0x19268616L;
        uint64_t l_428 = 18446744073709551609UL;
        int i;
        for (i = 0; i < 4; i++)
            l_374[i] = 0x362AA514L;
        g_201 = g_241[2].f0;
        if (((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(g_126, ((((safe_rshift_func_int8_t_s_u(g_158, (*l_202))) == ((safe_lshift_func_int16_t_s_s(((l_371 , g_112) , (l_375 = (l_374[1] |= (safe_mul_func_uint8_t_u_u((((((*l_269) = (g_201 = g_241[2].f1)) , (g_241[2].f1 , 1UL)) || g_9) & l_371), (*l_202)))))), l_371)) < g_112.f0)) > l_371) <= 253UL))), 0x7AF6B748L)) ^ (**g_54)))
        { 
            l_374[1] ^= (*l_202);
        }
        else
        { 
            g_201 = ((*l_269) = l_376);
        }
        (*p_96) = l_377;
        for (l_231.f0 = 3; (l_231.f0 < (-5)); l_231.f0 = safe_sub_func_int32_t_s_s(l_231.f0, 6))
        { 
            int32_t *l_384[4][7][4] = {{{&g_10,&l_192,&g_10,&l_374[1]},{&l_192,&l_192,&g_114[1],&l_192},{&l_192,&l_374[1],&g_10,&l_192},{&g_10,&l_192,&g_10,&l_374[1]},{&l_192,&l_192,&g_114[1],&l_192},{&l_192,&l_374[1],&g_10,&l_192},{&g_10,&l_192,&g_10,&l_374[1]}},{{&l_192,&l_192,&g_114[1],&l_192},{&l_192,&l_374[1],&g_10,&l_192},{&g_10,&l_192,&g_10,&l_374[1]},{&l_192,&l_192,&g_114[1],&l_192},{&l_192,&l_374[1],&g_10,&l_192},{&g_10,&l_192,&g_10,&l_374[1]},{&l_192,&l_192,&g_114[1],&l_192}},{{&l_192,&l_374[1],&g_10,&l_192},{&g_10,&l_192,&g_10,&l_374[1]},{&l_192,&l_192,&g_114[1],&l_192},{&l_192,&l_374[1],&g_10,&l_192},{&g_10,&l_192,&g_10,&l_374[1]},{&l_192,&l_192,&g_114[1],&l_192},{&l_192,&l_374[1],&g_10,&l_192}},{{&g_10,&l_192,&g_10,&l_374[1]},{&l_192,&l_192,&g_114[1],&l_192},{&l_192,&l_374[1],&g_10,&l_192},{&g_10,&l_192,&g_10,&l_374[1]},{&l_192,&l_192,&g_114[1],&l_192},{&l_192,&l_374[1],&g_10,&l_374[1]},{&g_114[1],&l_374[1],&g_114[1],&g_5}}};
            struct S0 l_386 = {4L,1L,0x137729A0L,1UL,0x7D7A3125EEDEFE17LL,0x6FF31C4AL,0xA317FB29L,0xF52BL};
            uint8_t l_416 = 0xA6L;
            int32_t l_434 = 0L;
            int i, j, k;
        }
    }
    return p_94;
}



static int64_t * func_98(int64_t * p_99, int32_t ** p_100, int32_t  p_101, struct S0  p_102, int32_t  p_103)
{ 
    int32_t *l_113 = &g_114[1];
    int32_t l_115 = 0x1B381EAFL;
    int32_t l_116 = 0x5417E047L;
    int32_t *l_117 = &l_115;
    int32_t *l_118 = &g_114[1];
    int32_t *l_119[1][1];
    uint32_t l_120 = 0x98F8DB1BL;
    const int16_t *l_123 = &g_32;
    const int16_t **l_124[3];
    uint16_t **l_127 = (void*)0;
    uint16_t *l_130[5][1][3] = {{{&g_112.f3,(void*)0,&g_9}},{{&g_9,&g_112.f3,&g_9}},{{&g_9,&g_112.f3,&g_112.f3}},{{&g_112.f3,&g_9,&g_9}},{{&g_112.f3,&g_9,&g_9}}};
    uint16_t **l_129 = &l_130[1][0][1];
    uint16_t ***l_128[2][7][3] = {{{&l_129,&l_129,&l_127},{&l_129,&l_129,&l_129},{&l_127,&l_129,&l_127},{&l_127,&l_127,&l_129},{&l_129,&l_129,&l_129},{&l_129,&l_129,&l_127},{&l_129,&l_129,&l_129}},{{&l_127,&l_129,&l_127},{&l_127,&l_127,&l_129},{&l_129,&l_129,&l_129},{&l_129,&l_129,&l_127},{&l_129,&l_129,&l_129},{&l_127,&l_129,&l_127},{&l_127,&l_127,&l_129}}};
    int16_t l_169 = 1L;
    uint16_t l_181 = 65535UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_119[i][j] = &g_114[1];
    }
    for (i = 0; i < 3; i++)
        l_124[i] = &l_123;
    l_120++;
    if ((g_112.f5 & (((g_125 = l_123) != &g_32) >= (l_127 != (g_131 = l_127)))))
    { 
        int32_t l_133 = 0x5C3721EAL;
        int32_t l_134 = 0x18FD7A1EL;
        int32_t l_135[5];
        uint8_t l_136 = 1UL;
        int i;
        for (i = 0; i < 5; i++)
            l_135[i] = 0xE8C6B87BL;
        l_136++;
        for (g_112.f4 = 25; (g_112.f4 > (-16)); g_112.f4--)
        { 
            const int8_t l_155 = 0L;
            int32_t l_166[1][2];
            uint32_t l_170 = 0x333FCD0CL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_166[i][j] = 2L;
            }
            (*l_118) = (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((1UL | p_103), l_135[4])) , (p_102.f5 != p_102.f3)), 0));
        }
    }
    else
    { 
        uint16_t **l_175 = &l_130[1][0][1];
        int32_t l_179 = 0xBD901D54L;
        int32_t l_180 = 0xD27FB237L;
        for (g_112.f7 = 0; (g_112.f7 >= (-4)); --g_112.f7)
        { 
            int32_t ***l_176 = (void*)0;
            int32_t **l_178[5][6][6] = {{{&l_118,(void*)0,&g_55[0],&l_118,&l_119[0][0],&l_113},{(void*)0,&l_117,&l_113,(void*)0,&l_119[0][0],&l_119[0][0]},{&g_55[1],(void*)0,&l_119[0][0],&g_55[1],&l_119[0][0],&l_119[0][0]},{&l_119[0][0],&l_119[0][0],&l_118,&g_55[1],(void*)0,(void*)0},{&l_119[0][0],(void*)0,&l_113,&l_119[0][0],&l_119[0][0],&g_55[1]},{(void*)0,&l_113,&l_118,&l_113,(void*)0,&l_119[0][0]}},{{&l_119[0][0],(void*)0,(void*)0,&l_119[0][0],&l_117,&l_119[0][0]},{(void*)0,&l_119[0][0],&l_117,(void*)0,&l_113,&l_119[0][0]},{(void*)0,&l_118,(void*)0,&l_118,&l_119[0][0],&l_119[0][0]},{&l_113,&l_119[0][0],&l_118,&g_55[1],&l_119[0][0],&g_55[1]},{&g_55[0],&g_55[0],&l_113,(void*)0,(void*)0,(void*)0},{&g_55[1],&g_55[0],&l_118,(void*)0,&l_113,&l_119[0][0]}},{{&l_119[0][0],(void*)0,&l_119[0][0],&l_118,(void*)0,&l_119[0][0]},{&l_119[0][0],&l_113,&l_113,&l_119[0][0],&l_118,&l_113},{&l_117,(void*)0,&g_55[0],&l_118,&l_117,&l_119[0][0]},{&l_119[0][0],&l_113,&g_55[1],&l_119[0][0],&l_113,&l_119[0][0]},{(void*)0,&l_117,&l_118,&l_117,&l_119[0][0],&l_119[0][0]},{(void*)0,&l_119[0][0],&l_119[0][0],(void*)0,&g_55[1],&l_118}},{{&l_118,&l_119[0][0],(void*)0,&l_119[0][0],&l_117,&g_55[1]},{&l_118,&l_119[0][0],&l_119[0][0],&l_119[0][0],&l_117,(void*)0},{&g_55[1],&l_119[0][0],&l_119[0][0],&l_113,&g_55[1],(void*)0},{&g_55[1],&l_119[0][0],&l_119[0][0],&g_55[0],&l_119[0][0],(void*)0},{&l_119[0][0],&l_118,&l_117,&l_117,(void*)0,&l_119[0][0]},{&l_119[0][0],&l_119[0][0],&l_119[0][0],&g_55[0],&g_55[1],&l_113}},{{(void*)0,(void*)0,&l_119[0][0],&l_118,&l_113,&l_118},{(void*)0,&g_55[1],(void*)0,&l_113,&l_118,(void*)0},{&l_113,&l_118,&l_117,&l_119[0][0],&g_55[0],(void*)0},{(void*)0,&l_117,&l_119[0][0],(void*)0,&l_117,(void*)0},{(void*)0,(void*)0,&l_119[0][0],&l_118,(void*)0,&l_118},{&l_119[0][0],&l_113,&l_119[0][0],(void*)0,(void*)0,&l_119[0][0]}}};
            int32_t ***l_177 = &l_178[3][4][3];
            int i, j, k;
            (*l_117) = (&g_132 == l_175);
            (*l_117) |= (p_100 != ((*l_177) = p_100));
            l_181++;
        }
    }
    return p_99;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_112.f3, "g_112.f3", print_hash_value);
    transparent_crc(g_112.f4, "g_112.f4", print_hash_value);
    transparent_crc(g_112.f5, "g_112.f5", print_hash_value);
    transparent_crc(g_112.f6, "g_112.f6", print_hash_value);
    transparent_crc(g_112.f7, "g_112.f7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_114[i], "g_114[i]", print_hash_value);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_241[i].f0.f0, "g_241[i].f0.f0", print_hash_value);
        transparent_crc(g_241[i].f1.f0, "g_241[i].f1.f0", print_hash_value);
        transparent_crc(g_241[i].f2, "g_241[i].f2", print_hash_value);

    }
    transparent_crc(g_296, "g_296", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_413[i], "g_413[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_486[i], "g_486[i]", print_hash_value);

    }
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_523[i][j][k].f0, "g_523[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_543, "g_543", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_620[i][j], "g_620[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_966, "g_966", print_hash_value);
    transparent_crc(g_975, "g_975", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1157[i], "g_1157[i]", print_hash_value);

    }
    transparent_crc(g_1179.f0.f0, "g_1179.f0.f0", print_hash_value);
    transparent_crc(g_1179.f1.f0, "g_1179.f1.f0", print_hash_value);
    transparent_crc(g_1179.f2, "g_1179.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
