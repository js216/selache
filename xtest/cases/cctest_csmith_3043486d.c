// SPDX-License-Identifier: MIT
// cctest_csmith_3043486d.c --- cctest case csmith_3043486d (csmith seed 809715821)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf4fd053e */

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

// Options:   -s 809715821 -o /tmp/csmith_gen_x0ay2x1u/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   uint64_t  f1;
   uint8_t  f2;
   uint64_t  f3;
   uint8_t  f4;
   const int32_t  f5;
};
#pragma pack(pop)

struct S1 {
   int8_t  f0;
   uint16_t  f1;
   int8_t  f2;
   uint32_t  f3;
   struct S0  f4;
};

struct S2 {
   int32_t  f0;
   int64_t  f1;
   uint16_t  f2;
};

union U3 {
   uint64_t  f0;
   uint64_t  f1;
};

union U5 {
   uint64_t  f0;
};

union U6 {
   int32_t  f0;
   uint32_t  f1;
};


static struct S2 g_5[1] = {{0xE6A3735BL,-1L,65530UL}};
static uint32_t g_21 = 0UL;
static union U3 g_22 = {9UL};
static uint8_t g_57[3] = {0x73L,0x73L,0x73L};
static int32_t g_71[5] = {0x0369C31BL,0x0369C31BL,0x0369C31BL,0x0369C31BL,0x0369C31BL};
static union U6 g_76 = {-1L};
static int16_t g_80 = 0xA6FAL;
static int32_t g_82 = 0x6FDD6905L;
static uint16_t g_84 = 65535UL;
static int64_t g_110[2] = {0xA657C725C80B88CCLL,0xA657C725C80B88CCLL};
static int32_t g_118 = (-1L);
static int32_t g_121[5][4][3] = {{{0L,0L,1L},{0x8E35C639L,0xC7E2165FL,0xC7E2165FL},{1L,(-10L),0xA104C7A4L},{1L,0x8E35C639L,0x1985D36CL}},{{1L,5L,(-4L)},{0x8E35C639L,1L,0xE36A8F31L},{0L,5L,0L},{0xC7E2165FL,0x8E35C639L,0x9C8BEE33L}},{{(-1L),(-10L),0L},{0x9C8BEE33L,0xC7E2165FL,0xE36A8F31L},{0x2E4BCF31L,0L,(-4L)},{0x9C8BEE33L,0x9C8BEE33L,0x9C8BEE33L}},{{0L,0L,(-4L)},{1L,0L,1L},{0x2E4BCF31L,(-10L),0xF280801EL},{0xC7E2165FL,1L,1L}},{{0xF280801EL,1L,(-4L)},{0xE36A8F31L,0xC7E2165FL,0x9C8BEE33L},{0xF280801EL,(-1L),1L},{0xC7E2165FL,0xE36A8F31L,0x1985D36CL}}};
static uint32_t g_127 = 0x6BBF9829L;
static uint16_t g_132 = 0UL;
static int32_t g_140[4][5][5] = {{{0xE7DACA0BL,0xE7DACA0BL,0L,0xA0AE147BL,(-1L)},{0x93EAE953L,4L,9L,(-1L),0x726BC3EEL},{1L,(-1L),0xE7DACA0BL,(-4L),0x93513A33L},{(-4L),4L,0xB459AD7AL,0xB459AD7AL,4L},{0x726BC3EEL,0xE7DACA0BL,0x7CF91460L,0xB459AD7AL,0L}},{{0x9AE2E44FL,0L,(-1L),(-4L),(-1L)},{0xA0AE147BL,9L,0x93513A33L,(-1L),0x93EAE953L},{0x9AE2E44FL,0xA0AE147BL,0x93EAE953L,0xA0AE147BL,0x9AE2E44FL},{0x726BC3EEL,0x86691D7FL,0x93EAE953L,0x93513A33L,0xE7DACA0BL},{(-4L),0L,0x93513A33L,0x7CF91460L,1L}},{{1L,0x9AE2E44FL,(-1L),0x86691D7FL,0xE7DACA0BL},{0x93EAE953L,0x7CF91460L,0x7CF91460L,0x93EAE953L,0x9AE2E44FL},{0xE7DACA0BL,0x7CF91460L,0xB459AD7AL,0L,0x93EAE953L},{0x86691D7FL,0x9AE2E44FL,0xE7DACA0BL,(-1L),(-1L)},{0xB459AD7AL,0L,9L,0L,0L}},{{0L,0x86691D7FL,0L,0x93EAE953L,4L},{0L,0xA0AE147BL,(-1L),0x86691D7FL,0x93513A33L},{0xB459AD7AL,9L,0x9AE2E44FL,0x7CF91460L,0x726BC3EEL},{0x86691D7FL,0L,(-1L),0x93513A33L,(-1L)},{0xE7DACA0BL,0xE7DACA0BL,0L,0xA0AE147BL,(-1L)}}};
static struct S1 g_204 = {-1L,0xF7E5L,1L,0UL,{255UL,0xDC7BAFC14AF0A9B8LL,2UL,6UL,255UL,0L}};
static uint64_t g_223[5][2][3] = {{{9UL,0xB6209F6694535032LL,9UL},{0UL,1UL,0UL}},{{9UL,0xB6209F6694535032LL,9UL},{0UL,1UL,0UL}},{{9UL,0xB6209F6694535032LL,9UL},{0UL,1UL,0UL}},{{9UL,0xB6209F6694535032LL,9UL},{0UL,1UL,0UL}},{{9UL,0xB6209F6694535032LL,9UL},{0UL,1UL,0UL}}};



static const uint8_t  func_1(void);
static struct S2  func_2(int32_t  p_3, uint64_t  p_4);
static struct S2  func_6(uint32_t  p_7, struct S2  p_8, int32_t  p_9, uint16_t  p_10, union U3  p_11);
static union U6  func_28(uint64_t  p_29);




static const uint8_t  func_1(void)
{ 
    uint64_t l_14[3];
    int i;
    for (i = 0; i < 3; i++)
        l_14[i] = 0UL;
    g_5[0] = func_2(((g_5[0] , (func_6(((-1L) ^ (safe_rshift_func_int16_t_s_s((l_14[0] == (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_21 ^= ((safe_div_func_uint64_t_u_u(3UL, 18446744073709551613UL)) && l_14[1])), g_5[0].f1)), 0xDDL))), 9))), g_5[0], g_5[0].f1, g_5[0].f1, g_22) , l_14[0])) > g_5[0].f1), g_22.f1);
    return l_14[2];
}



static struct S2  func_2(int32_t  p_3, uint64_t  p_4)
{ 
    int32_t l_34 = 0x6BC97DE2L;
    int32_t l_131 = 0xFD1E69A0L;
    int32_t l_133 = 0L;
    struct S2 l_199 = {0x9D5C39C6L,-2L,0x32BEL};
    const union U3 l_214 = {0x2E78B22332C2AF84LL};
    union U5 l_236[4][3][5] = {{{{0xEBC11B85D3632D98LL},{18446744073709551615UL},{0xD52D59152CE2E4C4LL},{18446744073709551615UL},{0xEBC11B85D3632D98LL}},{{0xEBC11B85D3632D98LL},{18446744073709551615UL},{0xD52D59152CE2E4C4LL},{18446744073709551615UL},{0xEBC11B85D3632D98LL}},{{0xEBC11B85D3632D98LL},{18446744073709551615UL},{0xD52D59152CE2E4C4LL},{18446744073709551615UL},{0xEBC11B85D3632D98LL}}},{{{0xEBC11B85D3632D98LL},{18446744073709551615UL},{0xD52D59152CE2E4C4LL},{18446744073709551615UL},{0xEBC11B85D3632D98LL}},{{0xEBC11B85D3632D98LL},{18446744073709551615UL},{0xD52D59152CE2E4C4LL},{18446744073709551615UL},{0xEBC11B85D3632D98LL}},{{0xEBC11B85D3632D98LL},{18446744073709551615UL},{0xD52D59152CE2E4C4LL},{18446744073709551615UL},{0xEBC11B85D3632D98LL}}},{{{0xEBC11B85D3632D98LL},{18446744073709551615UL},{0xD52D59152CE2E4C4LL},{18446744073709551615UL},{0xEBC11B85D3632D98LL}},{{0xEBC11B85D3632D98LL},{0xF92E53F40911AC77LL},{1UL},{0xF92E53F40911AC77LL},{18446744073709551615UL}},{{18446744073709551615UL},{0xF92E53F40911AC77LL},{1UL},{0xF92E53F40911AC77LL},{18446744073709551615UL}}},{{{18446744073709551615UL},{0xF92E53F40911AC77LL},{1UL},{0xF92E53F40911AC77LL},{18446744073709551615UL}},{{18446744073709551615UL},{0xF92E53F40911AC77LL},{1UL},{0xF92E53F40911AC77LL},{18446744073709551615UL}},{{18446744073709551615UL},{0xF92E53F40911AC77LL},{1UL},{0xF92E53F40911AC77LL},{18446744073709551615UL}}}};
    int i, j, k;
    if (((l_133 ^= (0x68L ^ (g_132 |= ((func_28((safe_div_func_uint64_t_u_u((p_4 || 0UL), (l_34 = (safe_mod_func_uint8_t_u_u(1UL, p_4)))))) , 0L) ^ l_131)))) && (-6L)))
    { 
        int32_t l_153 = (-8L);
        int32_t l_154 = 0x40705B8FL;
        union U5 l_168 = {0UL};
        union U3 l_169[3][5][3] = {{{{18446744073709551615UL},{0xDEBA2DDD70F16229LL},{0x6A8CF68AE125AE72LL}},{{0x7C546E72F9FE98CDLL},{1UL},{0x85B45BF07671DAD4LL}},{{0xBDD419D48E565183LL},{0xDEBA2DDD70F16229LL},{0xBDD419D48E565183LL}},{{0xBDD419D48E565183LL},{0xF78F4EEAAD7C9149LL},{18446744073709551615UL}},{{0x7C546E72F9FE98CDLL},{0x6656B1269F6BAA5DLL},{0xBDD419D48E565183LL}}},{{{18446744073709551615UL},{0x6656B1269F6BAA5DLL},{0x85B45BF07671DAD4LL}},{{18446744073709551607UL},{0xF78F4EEAAD7C9149LL},{0x6A8CF68AE125AE72LL}},{{18446744073709551615UL},{0xDEBA2DDD70F16229LL},{0x6A8CF68AE125AE72LL}},{{0x7C546E72F9FE98CDLL},{1UL},{0x85B45BF07671DAD4LL}},{{0xBDD419D48E565183LL},{0xDEBA2DDD70F16229LL},{0xBDD419D48E565183LL}}},{{{0xBDD419D48E565183LL},{0xF78F4EEAAD7C9149LL},{18446744073709551615UL}},{{0x7C546E72F9FE98CDLL},{0x6656B1269F6BAA5DLL},{0xBDD419D48E565183LL}},{{18446744073709551615UL},{0x6656B1269F6BAA5DLL},{0x85B45BF07671DAD4LL}},{{18446744073709551607UL},{0xF78F4EEAAD7C9149LL},{0x6A8CF68AE125AE72LL}},{{18446744073709551615UL},{0xDEBA2DDD70F16229LL},{0x6A8CF68AE125AE72LL}}}};
        uint32_t l_182 = 18446744073709551615UL;
        int32_t l_195 = 4L;
        struct S2 l_198 = {-2L,0x36AF559A891246E7LL,0xF7EBL};
        int i, j, k;
        if ((p_4 <= 0x60L))
        { 
            uint32_t l_137 = 0x5F92870EL;
            l_133 = ((((!0x0850C123E8B2B7EFLL) <= (safe_sub_func_uint16_t_u_u(g_57[1], l_137))) < (p_3 > p_3)) <= p_4);
            l_133 &= (safe_mod_func_int16_t_s_s(0xA009L, g_140[1][1][3]));
        }
        else
        { 
            int8_t l_152[1][3][4] = {{{0xA6L,1L,0xA6L,0xA6L},{1L,1L,(-1L),1L},{1L,0xA6L,0xA6L,1L}}};
            struct S0 l_158 = {255UL,0x4BE705B1A2021D83LL,248UL,18446744073709551615UL,247UL,0xC3996D64L};
            struct S2 l_165[4][3] = {{{0x202E23DBL,0x8D7CBB44D923BADFLL,0UL},{0x202E23DBL,0x8D7CBB44D923BADFLL,0UL},{0x202E23DBL,0x8D7CBB44D923BADFLL,0UL}},{{5L,0x2184012F00CAAA61LL,0x1277L},{0xC231147FL,3L,0UL},{5L,0x2184012F00CAAA61LL,0x1277L}},{{0x202E23DBL,0x8D7CBB44D923BADFLL,0UL},{0x202E23DBL,0x8D7CBB44D923BADFLL,0UL},{0x202E23DBL,0x8D7CBB44D923BADFLL,0UL}},{{5L,0x2184012F00CAAA61LL,0x1277L},{0xC231147FL,3L,0UL},{5L,0x2184012F00CAAA61LL,0x1277L}}};
            int32_t l_166[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_166[i] = 0L;
            l_154 ^= (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((p_3 | p_4) < (safe_add_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((l_153 = (p_3 != ((l_133 = ((safe_unary_minus_func_int64_t_s(l_152[0][1][1])) || 4294967290UL)) <= l_131))) != l_34), 0x2A51B156L)) | g_76.f0) != p_3), p_4))), p_3)), p_3));
            if ((l_166[0] = (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((l_158 , (l_158.f2 >= ((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((l_165[2][1] , (l_133 = l_133)), g_22.f1)) ^ p_3), 255UL)), g_132)) && g_84))))), 0x36L))))
            { 
                l_166[1] = (((func_6(l_152[0][1][1], func_6((+p_4), g_5[0], (l_168 , p_3), g_140[3][0][1], g_22), g_84, l_158.f0, l_169[2][1][0]) , p_3) & 0x89A4F5C6L) || 5L);
            }
            else
            { 
                l_166[2] = (g_118 = (safe_add_func_int64_t_s_s((l_34 > 0x86CDL), (((safe_lshift_func_int16_t_s_u(p_3, (safe_add_func_int64_t_s_s(p_3, (-8L))))) ^ 1UL) != p_4))));
                g_118 ^= g_22.f1;
            }
            l_133 = (safe_lshift_func_int8_t_s_s(g_71[3], ((safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(l_182, ((safe_lshift_func_uint16_t_u_s((++g_5[0].f2), 0)) <= 0UL))) >= (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((p_4--) > l_34), p_3)) > 0xABL), p_3)), 9))), p_3)) != g_140[1][1][3])));
        }
        l_199 = ((g_22 = l_169[1][1][2]) , l_198);
    }
    else
    { 
        uint8_t l_205 = 0UL;
        uint8_t l_206 = 0xCFL;
        uint8_t l_207 = 1UL;
        int32_t l_208 = 0x8468CDD6L;
        union U5 l_235 = {0xE6961723A1A1DB09LL};
        for (l_131 = 19; (l_131 >= (-12)); l_131 = safe_sub_func_int64_t_s_s(l_131, 2))
        { 
            union U6 l_202[1] = {{0xA74B1B2CL}};
            struct S1 l_203 = {0xF1L,0x954AL,-1L,0xD2DEE4CFL,{255UL,0x1DA1D933A2BCBE6FLL,1UL,0xF1B1ED08982D4E45LL,1UL,7L}};
            int32_t l_215 = 0xB418909AL;
            int i;
            l_208 ^= (l_202[0] , (l_203 , (func_6((l_206 = ((g_204 , (l_205 = 0x70L)) > 1L)), l_199, p_4, g_204.f1, g_22) , l_207)));
            l_215 = (safe_rshift_func_int8_t_s_u(p_3, (((!(((safe_div_func_uint64_t_u_u((p_4 & (l_214 , 0UL)), l_214.f1)) | l_203.f1) < 18446744073709551613UL)) , 0L) <= 0xBC28L)));
        }
        for (l_131 = 0; (l_131 <= 2); l_131 += 1)
        { 
            uint8_t l_222 = 2UL;
            for (g_80 = 0; (g_80 <= 2); g_80 += 1)
            { 
                l_133 &= ((safe_add_func_int32_t_s_s(((((((safe_rshift_func_int8_t_s_s((-5L), ((0xD1L & (safe_add_func_uint8_t_u_u(g_121[1][3][0], (g_132 ^ g_110[0])))) & l_222))) ^ (-1L)) & 18446744073709551615UL) , 65535UL) && g_204.f0) != 2UL), 0x5213202DL)) , p_4);
                g_118 = 0x5C75313EL;
            }
            for (g_82 = 0; (g_82 <= 2); g_82 += 1)
            { 
                --g_223[4][0][1];
            }
            for (g_80 = 0; (g_80 <= 2); g_80 += 1)
            { 
                union U5 l_237 = {0UL};
                int i;
                l_208 = ((+g_71[0]) <= (safe_mul_func_int8_t_s_s((((safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(g_22.f0, ((((safe_unary_minus_func_uint8_t_u((g_57[l_131] = ((g_76 , (l_235 = (l_237 = (l_236[0][1][3] = l_235)))) , 1UL)))) <= 0x1ADDDA18L) || g_110[0]) | g_204.f1))), g_204.f3)))) != 0x38L) < p_3), 0x69L)));
            }
        }
    }
    return l_199;
}



static struct S2  func_6(uint32_t  p_7, struct S2  p_8, int32_t  p_9, uint16_t  p_10, union U3  p_11)
{ 
    uint32_t l_24 = 0UL;
    for (p_8.f2 = 0; (p_8.f2 <= 0); p_8.f2 += 1)
    { 
        int8_t l_27 = 0x87L;
        l_27 = (safe_unary_minus_func_uint16_t_u((--l_24)));
    }
    return p_8;
}



static union U6  func_28(uint64_t  p_29)
{ 
    uint64_t l_40 = 18446744073709551611UL;
    int32_t l_56 = (-8L);
    int32_t l_75 = 6L;
    int32_t l_120 = 1L;
    union U6 l_130 = {0x0F9FDB8FL};
    for (p_29 = (-23); (p_29 <= 51); ++p_29)
    { 
        struct S2 l_39 = {0x5EAC84C9L,0x3F2B6367AFFF16CELL,65530UL};
        for (g_21 = 19; (g_21 != 60); g_21++)
        { 
            g_5[0] = l_39;
            if (p_29)
                break;
        }
    }
    if (((g_57[1] = (l_40 && (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((p_29 <= ((safe_add_func_int64_t_s_s((g_22.f1 & (safe_add_func_uint32_t_u_u((((((l_56 = ((safe_lshift_func_int16_t_s_s((!(g_22.f1 != l_40)), g_21)) > p_29)) == p_29) & l_40) , l_40) && p_29), 5UL))), p_29)) > 0L)), l_40)), l_40)), 0x279C83BDL)), 0xAA79L)))) == l_40))
    { 
        uint16_t l_66[5][5][1];
        int32_t l_67 = 1L;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_66[i][j][k] = 65534UL;
            }
        }
        l_56 ^= 0x7CE1BF9DL;
        l_67 &= (safe_mod_func_uint64_t_u_u(((((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((p_29 == (((((l_56 = (safe_lshift_func_uint16_t_u_u((4294967295UL ^ g_5[0].f2), p_29))) && 1L) , p_29) == p_29) >= g_57[1])), g_22.f0)), p_29)) , g_5[0].f1) , l_66[0][2][0]) > g_5[0].f2), 0xE70C497A14F82999LL));
        for (l_56 = 0; (l_56 <= 0); l_56 += 1)
        { 
            uint32_t l_70[5][4] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551614UL,0xA36ED293L},{0xA36ED293L,18446744073709551613UL,18446744073709551614UL,18446744073709551613UL},{18446744073709551615UL,0x85175EF5L,0xFDC0328AL,18446744073709551614UL},{18446744073709551613UL,0x85175EF5L,0x85175EF5L,18446744073709551613UL},{0x85175EF5L,18446744073709551613UL,18446744073709551615UL,0xA36ED293L}};
            int32_t l_74 = 1L;
            int i, j;
            if (l_40)
            { 
                int i;
                g_71[0] = ((g_5[l_56] , (safe_sub_func_uint64_t_u_u(l_70[2][2], p_29))) >= 4294967295UL);
            }
            else
            { 
                l_75 |= (safe_mod_func_int16_t_s_s(p_29, (l_74 ^= g_5[0].f0)));
                return g_76;
            }
        }
    }
    else
    { 
        union U5 l_96[4] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
        int32_t l_123 = 5L;
        int32_t l_126 = 0L;
        int i;
        l_56 &= p_29;
        for (p_29 = 0; (p_29 == 6); p_29 = safe_add_func_uint64_t_u_u(p_29, 3))
        { 
            int32_t l_79 = 0xD61439ABL;
            int32_t l_81 = 0xD2E77923L;
            int32_t l_83 = (-6L);
            g_84++;
            l_56 &= (safe_lshift_func_int8_t_s_s((((safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(p_29, 0)) == (!(safe_lshift_func_uint8_t_u_s(g_76.f0, l_83)))), (l_96[1] , p_29))) || g_5[0].f0) & 0x2939A49A9C08A916LL), p_29));
            g_5[0] = g_5[0];
        }
        for (l_56 = 3; (l_56 >= 0); l_56 -= 1)
        { 
            int32_t l_115 = 1L;
            int32_t l_124 = (-1L);
            int32_t l_125 = 0L;
            for (g_80 = 1; (g_80 <= 4); g_80 += 1)
            { 
                int32_t l_109 = (-1L);
                int i;
                g_110[0] = (((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((l_109 = ((((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((g_71[g_80] && ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(255UL, (0x20E2L || (p_29 == p_29)))), l_56)) & 0x0BL)), 15)), 0x3BL)) <= g_57[2]) >= p_29) && p_29)) <= 65535UL) , g_82), 2)), 0xB6L)) != 0x3DDFAC931259C1DBLL) && p_29);
            }
            for (l_40 = 0; (l_40 <= 4); l_40 += 1)
            { 
                int32_t l_119 = 0L;
                int32_t l_122 = 7L;
                l_119 &= (safe_sub_func_uint32_t_u_u((--g_76.f1), (l_96[1].f0 > ((l_115 | g_110[1]) < (safe_rshift_func_int8_t_s_u((g_118 = (0L == 0x64L)), 0))))));
                g_127++;
                return g_76;
            }
        }
    }
    return l_130;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i].f0, "g_5[i].f0", print_hash_value);
        transparent_crc(g_5[i].f1, "g_5[i].f1", print_hash_value);
        transparent_crc(g_5[i].f2, "g_5[i].f2", print_hash_value);

    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_57[i], "g_57[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);

    }
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_121[i][j][k], "g_121[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_140[i][j][k], "g_140[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_204.f1, "g_204.f1", print_hash_value);
    transparent_crc(g_204.f2, "g_204.f2", print_hash_value);
    transparent_crc(g_204.f3, "g_204.f3", print_hash_value);
    transparent_crc(g_204.f4.f0, "g_204.f4.f0", print_hash_value);
    transparent_crc(g_204.f4.f1, "g_204.f4.f1", print_hash_value);
    transparent_crc(g_204.f4.f2, "g_204.f4.f2", print_hash_value);
    transparent_crc(g_204.f4.f3, "g_204.f4.f3", print_hash_value);
    transparent_crc(g_204.f4.f4, "g_204.f4.f4", print_hash_value);
    transparent_crc(g_204.f4.f5, "g_204.f4.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_223[i][j][k], "g_223[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
