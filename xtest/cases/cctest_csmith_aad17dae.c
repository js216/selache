// SPDX-License-Identifier: MIT
// cctest_csmith_aad17dae.c --- cctest case csmith_aad17dae (csmith seed 2865855918)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x19e75a0b */

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

// Options:   -s 2865855918 -o /tmp/csmith_gen_s4wjfro6/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint16_t  f1;
   uint16_t  f2;
   uint8_t  f3;
   uint8_t  f4;
   uint32_t  f5;
   const int8_t  f6;
   uint64_t  f7;
};

union U1 {
   const int8_t * f0;
   int16_t  f1;
   int8_t * f2;
};

union U2 {
   uint32_t  f0;
};

union U3 {
   const int8_t  f0;
   int8_t * f1;
   uint8_t  f2;
};


static uint64_t g_3 = 0x4F545EE28FDEB772LL;
static uint32_t g_17 = 0xBC248910L;
static int8_t g_25 = 0x9DL;
static int32_t g_29 = 0xDB756FD8L;
static int16_t g_30 = 6L;
static int64_t g_31 = 4L;
static int64_t g_32[5][1] = {{0xA9B03BE46552DED1LL},{(-10L)},{0xA9B03BE46552DED1LL},{(-10L)},{0xA9B03BE46552DED1LL}};
static uint32_t g_33 = 18446744073709551615UL;
static union U2 g_38 = {0UL};
static struct S0 g_72 = {0x91A4L,3UL,0UL,0x0DL,0xA0L,0x037BAD6EL,0xF9L,0x2CE4CA00AF4084F7LL};
static uint64_t *g_81 = &g_72.f7;
static const union U1 g_84 = {0};
static const union U1 g_86 = {0};
static const union U1 *g_85[3] = {&g_86,&g_86,&g_86};
static int8_t g_97 = 0x17L;
static int32_t g_112 = 9L;
static uint8_t g_133 = 0x52L;
static int32_t *g_139 = &g_112;
static int32_t **g_138 = &g_139;
static int8_t *g_149 = (void*)0;
static int8_t g_153 = 0x27L;
static int8_t g_158 = 0L;
static int32_t g_160[6] = {0x945A8A01L,0x945A8A01L,0x945A8A01L,0x945A8A01L,0x945A8A01L,0x945A8A01L};
static uint64_t g_161[4][3][5] = {{{0x048D29CDFBC4F1BBLL,18446744073709551608UL,18446744073709551608UL,0x048D29CDFBC4F1BBLL,18446744073709551607UL},{2UL,0x048D29CDFBC4F1BBLL,18446744073709551615UL,0x6E4E2F553DE48FBBLL,0x90113F68E754454CLL},{2UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,2UL}},{{0x048D29CDFBC4F1BBLL,0x51DFD2E611AB6490LL,0xBE801A4E0C39D9FELL,0x6E4E2F553DE48FBBLL,18446744073709551608UL},{0xBE801A4E0C39D9FELL,0x51DFD2E611AB6490LL,0x048D29CDFBC4F1BBLL,0x048D29CDFBC4F1BBLL,0x51DFD2E611AB6490LL},{18446744073709551607UL,18446744073709551615UL,2UL,0x51DFD2E611AB6490LL,18446744073709551608UL}},{{18446744073709551615UL,0x048D29CDFBC4F1BBLL,0xBE801A4E0C39D9FELL,18446744073709551615UL,0xBE801A4E0C39D9FELL},{1UL,1UL,18446744073709551608UL,0x51DFD2E611AB6490LL,2UL},{0xAC17F9EEEF0C4AF5LL,2UL,18446744073709551607UL,0x51DFD2E611AB6490LL,0x51DFD2E611AB6490LL}},{{0x51DFD2E611AB6490LL,0x6E4E2F553DE48FBBLL,0x51DFD2E611AB6490LL,18446744073709551615UL,0x90113F68E754454CLL},{18446744073709551607UL,2UL,0xAC17F9EEEF0C4AF5LL,0x048D29CDFBC4F1BBLL,0x90113F68E754454CLL},{18446744073709551608UL,1UL,1UL,18446744073709551608UL,0x51DFD2E611AB6490LL}}};
static uint8_t g_178 = 1UL;
static union U3 g_185 = {-1L};
static union U3 *g_184 = &g_185;
static union U3 g_188 = {0xD8L};
static int64_t *g_208[1] = {&g_32[2][0]};
static union U3 g_236 = {-1L};
static union U3 g_237[1] = {{-4L}};
static union U3 g_238 = {0L};
static union U3 g_239 = {0xC3L};
static union U3 g_240 = {-4L};
static union U3 * const **g_261 = (void*)0;
static union U3 g_265 = {-1L};
static int8_t g_269 = 0x72L;
static uint64_t g_270 = 0x627A455B6F9C3CA2LL;
static int32_t g_273 = 0x848D0E2AL;
static uint16_t g_274 = 65535UL;
static uint8_t *g_281 = &g_265.f2;
static int16_t g_305 = 0L;
static int32_t g_307[4] = {(-5L),(-5L),(-5L),(-5L)};
static uint16_t g_316[5][1] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
static uint32_t g_319 = 18446744073709551615UL;
static uint8_t g_327 = 0x41L;
static uint32_t g_351 = 18446744073709551615UL;
static uint32_t g_363[3] = {0x674DE13DL,0x674DE13DL,0x674DE13DL};
static uint16_t g_365 = 65532UL;
static int16_t g_377 = 6L;
static uint16_t g_378 = 65535UL;
static union U3 **g_390 = &g_184;
static union U3 ***g_389[3][3] = {{&g_390,&g_390,&g_390},{&g_390,&g_390,&g_390},{&g_390,&g_390,&g_390}};
static const uint16_t g_410 = 65529UL;
static uint64_t * const *g_416 = &g_81;
static uint16_t *g_427[2][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static uint16_t **g_426 = &g_427[0][0][4];
static uint16_t **g_429 = &g_427[0][0][4];
static uint32_t g_473 = 0UL;
static int16_t g_484[3][3] = {{0x6A25L,0xC074L,0x6A25L},{0x6A25L,0xC074L,0x6A25L},{0x6A25L,0xC074L,0x6A25L}};
static int32_t g_485 = 0x895FE299L;
static uint32_t g_488 = 0x912B29C7L;
static struct S0 g_513 = {1UL,0xC75BL,65535UL,2UL,9UL,0x4210F982L,-5L,0x40E2B816CDF28EF2LL};
static uint16_t g_515 = 0UL;
static union U1 g_614 = {0};
static union U1 *g_613 = &g_614;
static int16_t *g_618 = &g_305;
static int16_t **g_617 = &g_618;
static int16_t ***g_616 = &g_617;
static int64_t **g_626 = &g_208[0];
static int32_t g_707 = (-8L);
static int8_t g_713 = 0x36L;
static uint64_t g_715 = 18446744073709551614UL;
static int8_t g_731 = (-9L);
static int32_t g_734 = (-1L);
static int32_t g_736 = (-7L);
static uint64_t g_737 = 18446744073709551606UL;
static uint32_t g_791 = 0x740E523DL;
static uint16_t g_825 = 0x8E64L;
static const int16_t *g_867 = &g_377;
static const int16_t **g_866 = &g_867;
static const int16_t ***g_865 = &g_866;
static uint64_t g_876 = 0xBA6B844F30542426LL;
static uint32_t g_882[5][7] = {{0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L},{0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L},{0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L},{0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L},{0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L,0xE7ED7736L}};
static uint16_t g_908 = 1UL;
static const uint16_t *g_922 = &g_410;
static const uint16_t **g_921 = &g_922;
static const uint16_t ***g_920 = &g_921;
static int32_t g_928 = (-1L);
static struct S0 * const g_948 = &g_513;
static struct S0 * const *g_947[4] = {&g_948,&g_948,&g_948,&g_948};
static uint32_t g_953 = 0xAC0F856CL;
static union U3 ** const *g_993 = &g_390;
static union U3 ** const **g_992 = &g_993;
static union U3 ** const ***g_991 = &g_992;



static int16_t  func_1(void);
static uint16_t  func_7(const uint64_t * const  p_8, int8_t * const  p_9, union U2  p_10, int8_t * const  p_11);
static int8_t * func_12(int8_t  p_13, union U2  p_14, uint64_t * p_15, int8_t * p_16);
static union U2  func_18(int8_t * p_19, uint64_t * p_20, union U2  p_21, uint64_t * p_22, int8_t  p_23);
static int16_t  func_39(uint32_t  p_40, uint32_t  p_41, uint32_t  p_42, uint8_t  p_43);
static int8_t  func_48(struct S0  p_49);
static struct S0  func_50(int32_t  p_51, const int16_t  p_52, uint32_t  p_53);
static int32_t  func_54(int32_t  p_55, const union U1  p_56, const uint8_t  p_57);




static int16_t  func_1(void)
{ 
    uint64_t *l_2 = &g_3;
    uint64_t l_4 = 0x0B5486B6FEB9E9D6LL;
    int8_t *l_24[3][2][5] = {{{&g_25,&g_25,&g_25,&g_25,&g_25},{&g_25,&g_25,&g_25,&g_25,&g_25}},{{&g_25,&g_25,&g_25,&g_25,&g_25},{&g_25,&g_25,&g_25,&g_25,&g_25}},{{&g_25,&g_25,&g_25,&g_25,&g_25},{&g_25,&g_25,&g_25,&g_25,&g_25}}};
    const union U1 l_26 = {0};
    union U2 l_27[7] = {{0xECCE35A1L},{1UL},{0xECCE35A1L},{0xECCE35A1L},{1UL},{0xECCE35A1L},{0xECCE35A1L}};
    int32_t l_897 = 0x01582B0FL;
    int32_t *l_898 = &g_29;
    int i, j, k;
    (*l_898) = ((((*l_2) = 0xCDEAD9BACC5D9B4ELL) <= (((l_897 = (l_4 | (safe_sub_func_uint16_t_u_u(func_7(&l_4, func_12(g_17, func_18(l_24[2][0][3], (l_4 , (l_26 , &l_4)), l_27[5], &l_4, g_25), &l_4, &g_25), l_27[3], l_24[1][1][1]), l_4)))) , (void*)0) != l_24[2][0][1])) & l_4);
    for (g_17 = (-17); (g_17 < 28); g_17 = safe_add_func_uint8_t_u_u(g_17, 9))
    { 
        const uint16_t ***l_918 = (void*)0;
        struct S0 *l_952[5][7] = {{(void*)0,&g_72,&g_513,(void*)0,&g_72,(void*)0,&g_72},{(void*)0,(void*)0,&g_72,&g_513,&g_72,(void*)0,(void*)0},{(void*)0,&g_72,&g_72,&g_72,(void*)0,(void*)0,&g_72},{(void*)0,&g_72,(void*)0,&g_72,&g_72,(void*)0,&g_72},{&g_72,&g_72,&g_72,&g_513,&g_72,&g_72,&g_72}};
        struct S0 **l_951 = &l_952[1][2];
        int32_t l_954 = 0x4A2A0614L;
        int32_t l_955 = 0x8DAE5462L;
        int i, j;
        for (g_274 = 21; (g_274 >= 60); g_274++)
        { 
            int32_t *l_903 = &g_734;
            int32_t *l_904 = &g_112;
            int32_t *l_905 = &g_734;
            int32_t *l_906 = (void*)0;
            int32_t *l_907[2][4][1] = {{{&l_897},{&g_29},{&l_897},{&g_29}},{{&l_897},{&g_29},{&l_897},{&g_29}}};
            struct S0 l_926 = {65535UL,0x6A19L,0UL,0xFAL,255UL,4294967290UL,0x28L,0xEF590383A2538941LL};
            uint16_t **l_940 = &g_427[0][1][2];
            struct S0 * const l_950 = (void*)0;
            struct S0 * const *l_949[3];
            union U1 l_964 = {0};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_949[i] = &l_950;
            (*l_898) = (*l_898);
            --g_908;
        }
        for (g_72.f1 = 0; (g_72.f1 < 18); g_72.f1 = safe_add_func_int64_t_s_s(g_72.f1, 5))
        { 
            int32_t *l_977 = &l_954;
            int32_t *l_978 = &l_954;
            int32_t *l_979 = &g_928;
            int32_t *l_980 = (void*)0;
            int32_t *l_981 = &g_112;
            int32_t *l_982 = &l_897;
            int32_t *l_983 = (void*)0;
            int32_t *l_984 = &g_29;
            int32_t *l_985 = (void*)0;
            int32_t *l_986 = &l_954;
            int32_t *l_987[3][5] = {{&g_734,&l_897,&l_897,&g_734,&l_897},{&g_734,&g_734,&g_734,&g_734,&g_734},{&l_897,&g_734,&l_897,&l_897,&g_734}};
            uint32_t l_988 = 1UL;
            union U3 ** const ***l_994 = &g_992;
            int i, j;
            ++l_988;
            l_994 = g_991;
        }
        for (g_731 = 0; (g_731 <= 6); ++g_731)
        { 
            if (l_955)
                break;
        }
    }
    return (*g_618);
}



static uint16_t  func_7(const uint64_t * const  p_8, int8_t * const  p_9, union U2  p_10, int8_t * const  p_11)
{ 
    int32_t *l_887 = (void*)0;
    int32_t *l_888[1][1];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_888[i][j] = (void*)0;
    }
lbl_893:
    g_112 = ((*g_139) = (-1L));
    for (g_31 = 0; (g_31 <= (-12)); g_31 = safe_sub_func_int64_t_s_s(g_31, 1))
    { 
        for (g_365 = (-18); (g_365 >= 15); ++g_365)
        { 
            if (g_365)
                goto lbl_893;
        }
    }
    for (g_72.f3 = 0; (g_72.f3 <= 0); g_72.f3 += 1)
    { 
        uint32_t l_894 = 0x6AEEA107L;
        --l_894;
    }
    return p_10.f0;
}



static int8_t * func_12(int8_t  p_13, union U2  p_14, uint64_t * p_15, int8_t * p_16)
{ 
    uint32_t l_58 = 0x3167647CL;
    const union U1 l_59 = {0};
    uint32_t l_636 = 0x17B319BFL;
    int32_t *l_643 = &g_29;
    uint32_t l_652 = 0x2C1C057FL;
    union U3 *l_680 = &g_239;
    int64_t l_702 = 0L;
    int32_t l_704 = 1L;
    int32_t l_710 = 0x0E2454DDL;
    int32_t l_732 = 0x40F579A9L;
    int32_t l_735 = 9L;
    uint64_t **l_748[4] = {&g_81,&g_81,&g_81,&g_81};
    uint64_t l_750 = 18446744073709551609UL;
    int16_t *l_753 = (void*)0;
    union U3 ***l_754 = &g_390;
    int32_t l_826[1];
    int8_t *l_886 = &g_158;
    int i;
    for (i = 0; i < 1; i++)
        l_826[i] = 1L;
    l_643 = ((*g_138) = ((func_39(g_33, ((g_30 == (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(func_48(func_50(func_54(l_58, l_59, (safe_mul_func_int8_t_s_s(((g_38.f0 == (((*p_16) = (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((0x3DA513E67DCAF6DDLL || (safe_rshift_func_int16_t_s_u(g_30, 14))) > p_13), g_30)), (*p_16)))) >= l_58)) > 0x1D1BA0576189EFA4LL), g_32[0][0]))), p_13, p_14.f0)), p_13)) == 0xD1L), p_13))) && l_58), l_58, l_636) , p_14) , l_643));
    (*l_643) = ((*l_643) || (safe_add_func_int8_t_s_s((*p_16), (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((void*)0 == &g_149) , ((*p_16) > (l_643 == ((*g_138) = (*g_138))))), 0)) > (*l_643)), 0xC8L)), l_652)))));
    for (g_513.f7 = 0; (g_513.f7 >= 21); g_513.f7 = safe_add_func_uint64_t_u_u(g_513.f7, 2))
    { 
        int32_t *l_655 = &g_29;
        int16_t l_667[7];
        union U3 *l_681 = &g_240;
        int16_t **l_696 = &g_618;
        int32_t l_711 = 0x120BC1B7L;
        int32_t l_714 = 0xFFA12804L;
        int32_t l_733[2][3] = {{0x5AA076D9L,(-6L),0x5AA076D9L},{0x5AA076D9L,(-6L),0x5AA076D9L}};
        uint64_t ***l_778 = (void*)0;
        union U1 **l_783 = &g_613;
        int64_t l_795[3][1][3];
        int64_t ***l_812[4][5][2] = {{{(void*)0,&g_626},{(void*)0,&g_626},{&g_626,&g_626},{&g_626,&g_626},{&g_626,(void*)0}},{{(void*)0,(void*)0},{&g_626,&g_626},{&g_626,&g_626},{&g_626,&g_626},{(void*)0,&g_626}},{{(void*)0,&g_626},{(void*)0,&g_626},{(void*)0,&g_626},{&g_626,&g_626},{&g_626,&g_626}},{{&g_626,(void*)0},{(void*)0,(void*)0},{&g_626,&g_626},{&g_626,&g_626},{&g_626,&g_626}}};
        union U2 l_846 = {0xF7925FD2L};
        struct S0 *l_851[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_72,&g_72},{&g_72,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        struct S0 **l_850 = &l_851[3][0];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_667[i] = (-8L);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_795[i][j][k] = (-10L);
            }
        }
        l_655 = l_655;
    }
    return l_886;
}



static union U2  func_18(int8_t * p_19, uint64_t * p_20, union U2  p_21, uint64_t * p_22, int8_t  p_23)
{ 
    int32_t *l_28[3];
    int i;
    for (i = 0; i < 3; i++)
        l_28[i] = &g_29;
    --g_33;
    for (g_30 = 10; (g_30 == 8); g_30 = safe_sub_func_int16_t_s_s(g_30, 4))
    { 
        return g_38;
    }
    return g_38;
}



static int16_t  func_39(uint32_t  p_40, uint32_t  p_41, uint32_t  p_42, uint8_t  p_43)
{ 
    uint32_t l_637 = 0xB29A57F1L;
    union U1 *l_638 = &g_614;
    uint16_t *l_639 = (void*)0;
    uint16_t *l_640 = (void*)0;
    int32_t l_641 = 0x52A2233DL;
    int32_t *l_642 = &g_112;
    (*l_642) = (p_42 >= (0UL == (((l_641 ^= (l_637 & (p_41 < (1UL | ((l_638 == l_638) != p_40))))) >= (*g_618)) == l_637)));
    return p_40;
}



static int8_t  func_48(struct S0  p_49)
{ 
    int32_t l_635 = (-1L);
    l_635 = p_49.f7;
    return l_635;
}



static struct S0  func_50(int32_t  p_51, const int16_t  p_52, uint32_t  p_53)
{ 
    uint64_t l_632 = 0xD417DDC2AC789325LL;
    int32_t *l_633 = &g_112;
    struct S0 l_634 = {65528UL,0xC196L,0xC56CL,0x08L,0x71L,4294967295UL,-1L,1UL};
    (*l_633) = (!l_632);
    return l_634;
}



static int32_t  func_54(int32_t  p_55, const union U1  p_56, const uint8_t  p_57)
{ 
    int32_t *l_77 = &g_29;
    uint64_t * const l_80 = &g_72.f7;
    int8_t *l_100 = (void*)0;
    struct S0 *l_123 = &g_72;
    const union U1 **l_126 = (void*)0;
    int32_t l_134 = (-5L);
    int32_t l_159 = (-2L);
    union U3 * const l_264 = &g_265;
    union U3 * const *l_263[2];
    union U3 * const **l_262 = &l_263[1];
    uint8_t l_266 = 0UL;
    int32_t l_306 = 0L;
    const int8_t l_364 = 0x7FL;
    const union U1 **l_371 = &g_85[0];
    int32_t *l_372 = &l_134;
    int32_t *l_373 = (void*)0;
    int32_t *l_374 = &g_112;
    int32_t *l_375 = &g_29;
    int32_t *l_376[7][4] = {{(void*)0,(void*)0,&l_134,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_159,&l_159},{&l_134,&l_134,&l_134,(void*)0},{&l_134,(void*)0,&l_159,&l_134},{(void*)0,(void*)0,(void*)0,&l_159},{(void*)0,(void*)0,&l_134,&l_134}};
    union U3 **l_388 = &g_184;
    union U3 ***l_387 = &l_388;
    const uint16_t *l_409 = &g_410;
    const int8_t *l_415[6][7] = {{&g_240.f0,&g_153,&g_153,&g_240.f0,&g_238.f0,&g_238.f0,&g_238.f0},{&g_240.f0,&g_153,&g_153,&g_240.f0,&g_238.f0,&g_238.f0,&g_238.f0},{&g_240.f0,&g_153,&g_153,&g_240.f0,&g_238.f0,&g_238.f0,&g_238.f0},{&g_240.f0,&g_153,&g_153,&g_240.f0,&g_238.f0,&g_238.f0,&g_238.f0},{&g_240.f0,&g_153,&g_153,&g_240.f0,&g_238.f0,&g_238.f0,&g_238.f0},{&g_240.f0,&g_153,&g_153,&g_240.f0,&g_238.f0,&g_238.f0,&g_238.f0}};
    uint16_t l_452 = 0x47FCL;
    const union U2 l_502[1] = {{4294967293UL}};
    int32_t *l_514 = &g_112;
    uint32_t l_582[2][6][4] = {{{0UL,7UL,7UL,0UL},{0x82363B6CL,0xDC1306B9L,0x4D5518B2L,5UL},{0x8CFBE9B8L,0xA86EC372L,5UL,1UL},{5UL,1UL,0x684E1554L,1UL},{7UL,0xA86EC372L,4294967295UL,5UL},{4294967294UL,0xDC1306B9L,1UL,0UL}},{{4294967295UL,7UL,0x16CDAF63L,0x16CDAF63L},{4294967295UL,4294967295UL,1UL,0x82363B6CL},{4294967294UL,0x16CDAF63L,1UL,0xA86EC372L},{0UL,0x82363B6CL,4294967294UL,1UL},{0x16CDAF63L,0x82363B6CL,0x16CDAF63L,0xA86EC372L},{0x82363B6CL,7UL,0x684E1554L,0xDC1306B9L}}};
    uint16_t l_630[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_263[i] = &l_264;
    for (i = 0; i < 2; i++)
        l_630[i] = 0x34F4L;
    for (g_31 = (-18); (g_31 != 4); g_31 = safe_add_func_uint64_t_u_u(g_31, 2))
    { 
        struct S0 *l_71 = &g_72;
        struct S0 **l_70 = &l_71;
        int32_t l_92 = 0xEA093EA4L;
        const int32_t l_131[4][7] = {{0x494F356FL,0x9D2B5444L,0x494F356FL,0x9D2B5444L,0x494F356FL,0x9D2B5444L,0x494F356FL},{0x08E2B083L,0x08E2B083L,0x08E2B083L,0x08E2B083L,0x08E2B083L,0x08E2B083L,0x08E2B083L},{0x494F356FL,0x9D2B5444L,0x494F356FL,0x9D2B5444L,0x494F356FL,0x9D2B5444L,0x494F356FL},{0x08E2B083L,0x08E2B083L,0x08E2B083L,0x08E2B083L,0x08E2B083L,0x08E2B083L,0x08E2B083L}};
        int32_t **l_137 = (void*)0;
        union U2 l_147 = {4294967291UL};
        uint32_t l_179 = 5UL;
        union U3 *l_187 = &g_188;
        const int64_t *l_199[6] = {&g_31,&g_31,(void*)0,&g_31,&g_31,(void*)0};
        const int8_t *l_260 = (void*)0;
        uint8_t *l_280 = &g_133;
        int32_t l_308 = 1L;
        int32_t l_326 = 0x895C0AACL;
        union U3 **l_331 = &l_187;
        union U3 ** const *l_330 = &l_331;
        union U1 l_358 = {0};
        int i, j;
        (*l_70) = (void*)0;
        if (((*l_77) = (safe_add_func_int32_t_s_s((g_72.f2 < ((void*)0 != l_77)), (safe_rshift_func_int16_t_s_u((l_80 != g_81), 8))))))
        { 
            const union U1 *l_83 = &g_84;
            const union U1 **l_82 = &l_83;
            (*l_82) = &p_56;
            g_85[2] = &g_84;
        }
        else
        { 
            uint32_t l_94 = 0x3D28B7FDL;
            int32_t l_107 = 7L;
            int32_t l_110 = (-1L);
            int32_t l_182 = 0x42D50701L;
            int64_t *l_205 = &g_31;
            uint32_t l_220 = 0UL;
            union U3 * const **l_332 = &l_263[1];
            union U3 * const ***l_333 = &l_262;
            int32_t *l_334 = (void*)0;
            int32_t *l_335 = &l_92;
            int32_t *l_336 = &l_107;
            int32_t *l_337 = &g_29;
            int32_t *l_338 = &g_29;
            int32_t *l_339 = &l_182;
            int32_t *l_340 = (void*)0;
            int32_t *l_341 = &l_306;
            int32_t *l_342 = &l_308;
            int32_t *l_343 = &g_112;
            int32_t *l_344 = &l_182;
            int32_t *l_345 = &l_159;
            int32_t *l_346 = &l_182;
            int32_t *l_347 = (void*)0;
            int32_t *l_348 = &l_182;
            int32_t *l_349 = &l_107;
            int32_t *l_350[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (g_38.f0 = 0; (g_38.f0 <= 2); g_38.f0 += 1)
            { 
                int32_t *l_91 = &g_29;
                uint64_t l_108 = 0xC0EDEAE2A06A03D0LL;
                struct S0 *l_130 = &g_72;
                int8_t *l_152 = &g_153;
                int8_t *l_180 = &g_153;
                int64_t *l_181[1][4] = {{&g_32[3][0],&g_32[3][0],&g_32[3][0],&g_32[3][0]}};
                int i, j;
                for (g_29 = 0; (g_29 <= 2); g_29 += 1)
                { 
                    uint64_t *l_93 = (void*)0;
                    int8_t *l_95 = &g_25;
                    int8_t *l_96 = &g_97;
                    int8_t **l_101 = (void*)0;
                    int8_t **l_102 = (void*)0;
                    int8_t **l_103 = &l_100;
                    uint16_t *l_104 = (void*)0;
                    uint16_t *l_105 = (void*)0;
                    uint16_t *l_106[3];
                    int16_t *l_109[1];
                    int32_t *l_111 = &g_112;
                    int64_t *l_129 = &g_32[2][0];
                    uint8_t *l_132[3];
                    int32_t **l_135 = &l_111;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_106[i] = &g_72.f1;
                    for (i = 0; i < 1; i++)
                        l_109[i] = (void*)0;
                    for (i = 0; i < 3; i++)
                        l_132[i] = &g_133;
                    (*l_111) &= (safe_sub_func_int16_t_s_s((l_110 ^= (safe_lshift_func_uint8_t_u_s(((l_107 = ((((l_91 != ((l_92 , (((*l_96) = (l_93 != (((*l_95) = l_94) , (void*)0))) , (safe_sub_func_uint64_t_u_u(0x4CD7C0820F6120E7LL, (((*l_103) = l_100) == &g_25))))) , &l_92)) || 1UL) >= l_94) & 0xB6C92F0D9F09F7ADLL)) > l_108), 2))), (-7L)));
                    if ((*l_91))
                        continue;
                    l_134 &= (safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(0x73B7L, ((g_133 &= (safe_add_func_uint32_t_u_u(((l_123 == (((((safe_rshift_func_uint8_t_u_u((&g_85[g_38.f0] != l_126), 1)) , ((1L && (((*l_129) = (safe_lshift_func_int8_t_s_s(((g_72 , ((*l_111) &= (l_94 & 1UL))) >= p_57), p_57))) == p_55)) | 1UL)) > g_33) ^ 0x87E9L) , l_130)) || 0x7E9ACA86L), l_131[3][5]))) , p_55))), g_33)), l_131[3][5])), p_55));
                    (*l_135) = &g_112;
                    l_110 ^= (+((((l_137 != &l_111) , (g_72.f0 , &g_29)) != &g_29) ^ (g_138 != (void*)0)));
                }
                (*g_138) = (*g_138);
                for (g_72.f7 = 0; (g_72.f7 <= 2); g_72.f7 += 1)
                { 
                    uint8_t l_140 = 6UL;
                    int8_t **l_148 = &l_100;
                    int8_t *l_151 = &g_97;
                    int8_t **l_150[1];
                    int32_t l_154[6][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
                    int32_t *l_155 = (void*)0;
                    int32_t *l_156 = (void*)0;
                    int32_t *l_157[2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_150[i] = &l_151;
                    for (i = 0; i < 2; i++)
                        l_157[i] = &g_29;
                    ++l_140;
                    (**g_138) = (((safe_sub_func_uint16_t_u_u((g_25 != (((((safe_add_func_uint32_t_u_u((g_97 ^ l_140), (((*l_148) = (l_147 , l_100)) != (l_152 = (g_149 = (void*)0))))) != l_110) > p_57) | (*l_77)) || p_55)), (-9L))) != p_57) | l_92);
                    ++g_161[3][2][1];
                    (*g_139) = (((*l_148) = (void*)0) == (void*)0);
                }
                (**g_138) ^= (safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((void*)0 != l_130), (safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((((p_55 == (safe_mul_func_uint8_t_u_u((250UL == (((p_55 == (g_32[1][0] = ((safe_div_func_uint8_t_u_u(p_55, ((*l_180) |= ((safe_add_func_uint32_t_u_u((g_178 > (*l_91)), (*l_77))) & l_179)))) || 4294967295UL))) , p_57) , (*l_77))), p_55))) != 0x65L) & 0x2C3DL), l_182)), (*l_77))))), 0UL));
                for (g_112 = 2; (g_112 >= 0); g_112 -= 1)
                { 
                    struct S0 l_183 = {65533UL,65535UL,0x4BF0L,0xF4L,6UL,0xCFFC910CL,-3L,18446744073709551610UL};
                    union U3 **l_186[7][1] = {{(void*)0},{&g_184},{&g_184},{(void*)0},{&g_184},{&g_184},{(void*)0}};
                    int i, j;
                    g_184 = (l_187 = (l_183 , g_184));
                }
            }
            if ((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(0xBE7C8CA683B8F37FLL, p_55)), 0x687BL)))
            { 
                int8_t l_215 = 1L;
                int32_t *l_219[7] = {&g_29,&g_29,&l_134,&g_29,&g_29,&l_134,&g_29};
                int i;
                for (l_94 = (-9); (l_94 < 35); l_94 = safe_add_func_int64_t_s_s(l_94, 6))
                { 
                    int32_t **l_195 = (void*)0;
                    int32_t **l_196 = &l_77;
                    int64_t l_200 = 0x0E80B645F29C22F7LL;
                    int32_t *l_201 = (void*)0;
                    int32_t *l_202 = &l_110;
                    int64_t *l_207[7] = {&l_200,&l_200,&l_200,&l_200,&l_200,&l_200,&l_200};
                    int64_t **l_206 = &l_207[2];
                    uint16_t *l_209 = &g_72.f1;
                    union U3 l_212 = {0x72L};
                    uint16_t l_216 = 65529UL;
                    int i;
                }
                for (g_17 = (-27); (g_17 != 15); ++g_17)
                { 
                    return l_182;
                }
                for (g_72.f7 = 0; (g_72.f7 <= 0); g_72.f7 += 1)
                { 
                    (*g_138) = l_219[0];
                    if (l_220)
                        continue;
                }
                for (l_159 = 7; (l_159 == (-3)); l_159 = safe_sub_func_int32_t_s_s(l_159, 5))
                { 
                    int32_t *l_223 = &l_92;
                    (*g_138) = (*g_138);
                    (*g_138) = (*g_138);
                    (*g_138) = l_223;
                }
                (*l_77) ^= p_57;
            }
            else
            { 
                uint64_t *l_244 = &g_161[3][2][1];
                const int32_t l_245 = 0x6ED50CF4L;
                int32_t l_268[1][3];
                uint32_t l_309 = 0x11AB2A09L;
                int32_t *l_325 = &l_182;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_268[i][j] = 0L;
                }
                for (g_17 = (-28); (g_17 >= 55); g_17 = safe_add_func_uint32_t_u_u(g_17, 5))
                { 
                    union U3 * const **l_232 = (void*)0;
                    union U3 * const l_235[3][5][5] = {{{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239}},{{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239}},{{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239},{&g_240,&g_237[0],&g_240,&g_239,&g_239}}};
                    union U3 * const *l_234[1];
                    union U3 * const **l_233 = &l_234[0];
                    int32_t l_246 = 0xB2E776E5L;
                    uint8_t *l_257 = &g_178;
                    union U3 l_259 = {-6L};
                    int32_t *l_267[6][6][1] = {{{&l_159},{&l_92},{&l_134},{&l_134},{&l_92},{&l_92}},{{&l_134},{&l_134},{&l_92},{&l_159},{&l_92},{&l_92}},{{&l_107},{&l_92},{&l_92},{&l_159},{&l_107},{&l_159}},{{&g_29},{&l_92},{&l_92},{&g_29},{&l_159},{&l_107}},{{&l_159},{&l_92},{&l_107},{(void*)0},{&l_107},{&l_92}},{{&l_159},{&l_107},{&l_159},{&g_29},{&l_92},{&l_92}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_234[i] = &l_235[0][0][2];
                    (**g_138) ^= (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((*l_233) = &g_184) != (void*)0), l_220)), ((l_94 || ((*g_184) , ((safe_unary_minus_func_uint32_t_u(((((((safe_sub_func_uint8_t_u_u(g_17, (l_244 != (void*)0))) , p_55) >= (*g_81)) & p_55) ^ 7L) == 253UL))) != l_245))) < l_246))), 0x96A6L));
                    (*g_139) = (safe_rshift_func_uint8_t_u_s(p_55, (((safe_div_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0x3CL, 3)), 3)) , ((((((*l_257) = 255UL) > ((~0x4EC9L) , (((l_259 , l_260) != ((((l_262 = g_261) != (void*)0) < p_57) , l_257)) <= 0x67E1L))) && 65526UL) && l_266) ^ 0xBB7CL)) <= 0xD3D46EF550133C60LL), 0x9EL)) , &g_133) != &g_133)));
                    g_270--;
                    ++g_274;
                }
                for (l_220 = (-26); (l_220 == 13); ++l_220)
                { 
                    int32_t l_292[6] = {(-1L),0L,(-1L),(-1L),0L,(-1L)};
                    int8_t *l_296 = &g_97;
                    uint8_t *l_303[6][1];
                    int32_t *l_304[7][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t *l_312 = &l_292[4];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_303[i][j] = (void*)0;
                    }
                }
                for (l_266 = 1; (l_266 > 19); ++l_266)
                { 
                    int32_t *l_315[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_315[i] = &l_182;
                    g_316[2][0]++;
                    g_319--;
                }
                for (l_220 = 6; (l_220 >= 25); l_220 = safe_add_func_uint64_t_u_u(l_220, 9))
                { 
                    int32_t *l_324[3][3] = {{&g_29,&g_29,&g_29},{&l_134,&l_134,&l_134},{&g_29,&g_29,&g_29}};
                    int i, j;
                    l_77 = l_324[1][2];
                    l_325 = ((*g_138) = &l_107);
                    --g_327;
                    if (p_55)
                        continue;
                }
            }
            (*g_138) = ((l_330 == ((*l_333) = l_332)) , &l_306);
            ++g_351;
        }
        (*l_77) = ((*g_139) = 0xF86DEA95L);
        (*l_77) = ((**g_138) = (safe_mul_func_int8_t_s_s(((g_365 &= ((&g_30 != &g_305) == (((*l_262) != &g_184) & (l_308 | (safe_div_func_int8_t_s_s((l_358 , (safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((((g_363[2] = (*l_77)) && l_131[2][0]) && 0x23BCL), (*g_139))) , (*l_77)), p_55))), l_364)))))) , (*l_77)), 0xB1L)));
        (*g_138) = (*g_138);
    }
    for (g_153 = 0; (g_153 >= (-13)); --g_153)
    { 
        uint16_t l_368[2][7] = {{65535UL,0UL,4UL,0x07FDL,0x07FDL,4UL,0UL},{65535UL,0UL,4UL,0x07FDL,0x07FDL,4UL,0UL}};
        int i, j;
        ++l_368[1][4];
        (*l_77) |= ((*g_139) = (1L || l_368[1][4]));
    }
    (*l_371) = &p_56;
    ++g_378;
    for (g_72.f3 = 24; (g_72.f3 >= 51); g_72.f3++)
    { 
        union U3 **l_385 = &g_184;
        union U3 ***l_384[3];
        union U3 ****l_386 = &l_384[2];
        int32_t l_401 = (-1L);
        const uint16_t *l_406 = (void*)0;
        const uint16_t **l_407 = (void*)0;
        const uint16_t **l_408[1];
        int32_t l_411 = 0x1B8D09D4L;
        int16_t *l_412 = &g_377;
        const int64_t l_413 = 1L;
        uint16_t *l_414 = &g_274;
        uint8_t l_458 = 0xB2L;
        int32_t l_483 = (-1L);
        struct S0 *l_512 = &g_513;
        const uint16_t **l_529 = &l_406;
        int8_t **l_570 = &g_149;
        int8_t ***l_569 = &l_570;
        union U1 l_581 = {0};
        int16_t ***l_620 = &g_617;
        int i;
        for (i = 0; i < 3; i++)
            l_384[i] = &l_385;
        for (i = 0; i < 1; i++)
            l_408[i] = &l_406;
    }
    return l_630[1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_72.f4, "g_72.f4", print_hash_value);
    transparent_crc(g_72.f5, "g_72.f5", print_hash_value);
    transparent_crc(g_72.f6, "g_72.f6", print_hash_value);
    transparent_crc(g_72.f7, "g_72.f7", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_161[i][j][k], "g_161[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_185.f0, "g_185.f0", print_hash_value);
    transparent_crc(g_185.f2, "g_185.f2", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_236.f2, "g_236.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_237[i].f0, "g_237[i].f0", print_hash_value);
        transparent_crc(g_237[i].f2, "g_237[i].f2", print_hash_value);

    }
    transparent_crc(g_238.f0, "g_238.f0", print_hash_value);
    transparent_crc(g_238.f2, "g_238.f2", print_hash_value);
    transparent_crc(g_239.f0, "g_239.f0", print_hash_value);
    transparent_crc(g_239.f2, "g_239.f2", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_240.f2, "g_240.f2", print_hash_value);
    transparent_crc(g_265.f0, "g_265.f0", print_hash_value);
    transparent_crc(g_265.f2, "g_265.f2", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_307[i], "g_307[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_316[i][j], "g_316[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_363[i], "g_363[i]", print_hash_value);

    }
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_484[i][j], "g_484[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_513.f0, "g_513.f0", print_hash_value);
    transparent_crc(g_513.f1, "g_513.f1", print_hash_value);
    transparent_crc(g_513.f2, "g_513.f2", print_hash_value);
    transparent_crc(g_513.f3, "g_513.f3", print_hash_value);
    transparent_crc(g_513.f4, "g_513.f4", print_hash_value);
    transparent_crc(g_513.f5, "g_513.f5", print_hash_value);
    transparent_crc(g_513.f6, "g_513.f6", print_hash_value);
    transparent_crc(g_513.f7, "g_513.f7", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_882[i][j], "g_882[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_953, "g_953", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
