// SPDX-License-Identifier: MIT
// cctest_csmith_cb0338ec.c --- cctest case csmith_cb0338ec (csmith seed 3405986028)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6d64340c */

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

// Options:   -s 3405986028 -o /tmp/csmith_gen_5glx9uyv/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const int8_t  f1;
   const int64_t  f2;
   uint32_t  f3;
   int32_t  f4;
   uint64_t  f5;
   int16_t  f6;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   const uint16_t  f1;
   struct S0  f2;
   struct S0  f3;
};


static uint32_t g_8 = 0xEDEDB5CAL;
static int32_t g_9 = 0x37400631L;
static int32_t g_19[2][1] = {{3L},{3L}};
static int32_t *g_18 = &g_19[1][0];
static int8_t g_27 = 0x70L;
static int8_t g_35 = (-3L);
static int8_t *g_34 = &g_35;
static int32_t *g_51 = &g_19[0][0];
static uint8_t g_57 = 7UL;
static uint8_t g_59 = 0x72L;
static union U1 g_61 = {4294967295UL};
static int64_t g_87 = 0L;
static uint8_t **g_92 = (void*)0;
static int64_t *g_105[2] = {&g_87,&g_87};
static uint8_t *g_129 = &g_59;
static int16_t g_148 = 0x6D7AL;
static uint16_t g_193 = 1UL;
static int32_t g_194 = 0x00671E2BL;
static int8_t g_246 = 0L;
static int16_t g_276 = (-1L);
static uint8_t ***g_300 = &g_92;
static uint8_t ****g_299 = &g_300;
static int32_t g_319 = 0x09FE0713L;
static int32_t g_336[6] = {1L,1L,1L,1L,1L,1L};
static const union U1 g_406 = {0xBF9E9B86L};
static const union U1 g_408 = {4294967287UL};
static const union U1 *g_407 = &g_408;
static union U1 g_410 = {0xFED1F277L};
static struct S0 *g_412 = (void*)0;
static struct S0 **g_411 = &g_412;
static uint64_t g_433 = 0x496602CED354EF3FLL;
static struct S0 g_461 = {0x545FCD38L,5L,0L,18446744073709551610UL,-2L,0xFB1C6D6E9268ECCALL,0xD5D5L};
static int16_t g_498 = (-6L);
static int32_t g_552[5][2][1] = {{{0xE7364225L},{7L}},{{0x94E310CEL},{0x94E310CEL}},{{7L},{0xE7364225L}},{{7L},{0x94E310CEL}},{{0x94E310CEL},{7L}}};
static int64_t g_562 = 0x3BF57C5B8ABC3AD1LL;
static uint64_t g_695 = 1UL;
static uint64_t *g_806 = (void*)0;
static uint64_t **g_805 = &g_806;
static int32_t g_820 = 0x3BAF9AB5L;
static uint8_t g_846 = 0UL;
static union U1 *g_864 = &g_61;
static union U1 **g_863 = &g_864;
static union U1 **g_875 = &g_864;
static uint32_t *g_932 = (void*)0;
static uint32_t **g_931 = &g_932;
static union U1 g_1008[1][7][5] = {{{{0x58675125L},{1UL},{1UL},{0x58675125L},{0x8723D5F9L}},{{4294967286UL},{0x58675125L},{1UL},{0x58675125L},{4294967286UL}},{{1UL},{0xFA73B0B8L},{1UL},{0x8723D5F9L},{0xFA73B0B8L}},{{4294967286UL},{1UL},{1UL},{4294967286UL},{0x8723D5F9L}},{{0x58675125L},{4294967286UL},{1UL},{0xFA73B0B8L},{0xFA73B0B8L}},{{1UL},{1UL},{0xD95A0ECFL},{4294967295UL},{1UL}},{{1UL},{1UL},{4294967295UL},{1UL},{4294967295UL}}}};
static int64_t g_1121 = 0xAED39FCDB31A98B2LL;
static uint32_t ***g_1159 = &g_931;
static int16_t *g_1169 = &g_461.f6;
static int16_t **g_1168[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 ***g_1392[4][4][7] = {{{&g_863,&g_863,&g_863,&g_863,&g_863,&g_875,&g_875},{(void*)0,&g_875,&g_863,&g_875,(void*)0,&g_875,&g_875},{&g_863,&g_863,&g_863,&g_863,&g_863,&g_875,(void*)0},{&g_863,&g_863,&g_863,&g_875,(void*)0,(void*)0,&g_863}},{{&g_863,&g_863,&g_863,&g_863,&g_863,&g_863,&g_863},{(void*)0,(void*)0,&g_863,&g_863,&g_875,(void*)0,&g_875},{&g_863,&g_863,&g_875,&g_863,&g_863,&g_875,&g_863},{(void*)0,&g_875,&g_863,&g_863,(void*)0,&g_875,(void*)0}},{{&g_863,&g_863,&g_863,&g_863,&g_875,&g_875,(void*)0},{&g_875,&g_875,&g_863,&g_875,(void*)0,&g_875,&g_863},{&g_863,&g_863,&g_875,&g_863,&g_863,&g_875,(void*)0},{(void*)0,(void*)0,&g_863,&g_875,&g_863,(void*)0,(void*)0}},{{&g_875,&g_863,&g_875,&g_863,&g_863,&g_875,&g_863},{(void*)0,&g_863,&g_863,&g_863,(void*)0,&g_863,&g_875},{&g_863,&g_863,&g_875,&g_863,&g_875,&g_875,&g_863},{&g_863,&g_875,&g_863,(void*)0,(void*)0,&g_875,&g_863}}};
static union U1 ****g_1391 = &g_1392[1][3][5];
static union U1 g_1396 = {7UL};
static union U1 * const *g_1397[7][5] = {{&g_864,&g_864,&g_864,&g_864,&g_864},{&g_864,&g_864,&g_864,&g_864,&g_864},{&g_864,&g_864,&g_864,&g_864,(void*)0},{&g_864,&g_864,&g_864,&g_864,&g_864},{&g_864,&g_864,&g_864,&g_864,&g_864},{&g_864,&g_864,&g_864,&g_864,(void*)0},{&g_864,&g_864,&g_864,&g_864,&g_864}};
static int32_t ***g_1424 = (void*)0;
static int16_t g_1461 = (-1L);
static uint16_t *g_1464 = (void*)0;
static uint16_t **g_1463 = &g_1464;
static const uint8_t g_1494[2][4][5] = {{{0UL,0x8FL,0x8FL,0UL,255UL},{0x6CL,0x00L,0x00L,0x6CL,1UL},{0UL,0x8FL,0x8FL,0UL,255UL},{0x6CL,0x00L,0x00L,0x6CL,1UL}},{{0UL,0x8FL,0x8FL,0UL,255UL},{0x6CL,0x00L,0x00L,0x6CL,1UL},{0x26L,0UL,0UL,0x26L,0x29L},{0UL,0x6CL,0x6CL,0UL,0x28L}}};
static const uint8_t *g_1493 = &g_1494[0][3][4];
static const uint8_t **g_1492 = &g_1493;
static const uint8_t ***g_1491 = &g_1492;
static int16_t ****g_1525 = (void*)0;
static int16_t *****g_1524 = &g_1525;
static int32_t g_1699 = 0x1C5D660EL;
static int32_t g_1709[3][4] = {{0xE3D64B6AL,0xE3D64B6AL,0xC14AA8CFL,0xE3D64B6AL},{0xE3D64B6AL,0x0C9C7638L,0x0C9C7638L,0xE3D64B6AL},{0x0C9C7638L,0xE3D64B6AL,0x0C9C7638L,0x0C9C7638L}};
static uint32_t g_1713 = 4294967292UL;
static union U1 g_1727 = {0xCC9A5F1EL};
static int32_t g_1878 = 0x465AE84FL;
static const int32_t *g_1890[2] = {&g_19[1][0],&g_19[1][0]};
static struct S0 * const *g_1938 = &g_412;
static struct S0 * const **g_1937 = &g_1938;
static struct S0 * const ***g_1936 = &g_1937;
static struct S0 ***g_1940 = &g_411;
static struct S0 ****g_1939 = &g_1940;
static uint16_t g_1980 = 0x6E2CL;
static const int8_t g_2026 = 9L;
static const int8_t *g_2025 = &g_2026;
static const int64_t *g_2063 = &g_87;
static const int64_t **g_2062 = &g_2063;
static const int64_t ***g_2061[6] = {&g_2062,(void*)0,&g_2062,&g_2062,(void*)0,&g_2062};
static int32_t g_2083 = 3L;
static const uint32_t **g_2159 = (void*)0;
static const uint32_t ***g_2158 = &g_2159;
static const uint32_t *** const *g_2157 = &g_2158;
static const uint32_t *** const **g_2156 = &g_2157;
static uint16_t g_2230 = 3UL;
static int8_t g_2284 = 0x04L;
static uint64_t g_2310 = 0x9C278213085C7284LL;
static uint8_t g_2386 = 6UL;
static int16_t g_2509 = 0xB320L;
static int64_t g_2675 = 0xD00372C19AC641B2LL;
static int64_t **g_2687[1] = {&g_105[0]};
static int64_t ***g_2686 = &g_2687[0];
static int64_t ****g_2685 = &g_2686;
static int32_t g_2722[7][5][5] = {{{(-2L),(-2L),(-9L),3L,1L},{(-9L),0L,0x9173888DL,1L,1L},{0x8F1EA939L,1L,(-1L),(-1L),1L},{1L,0L,(-9L),0xE6C0732DL,0xAA93FC1CL},{0x220A93CBL,(-2L),0x220A93CBL,(-1L),1L}},{{0xEB5874D3L,1L,1L,0L,0x561BA316L},{0x20305447L,0x8F1EA939L,0xA70EB9C4L,3L,(-2L)},{0x0BBBC70DL,(-1L),1L,5L,1L},{0x8F1EA939L,0x220A93CBL,0x220A93CBL,0x8F1EA939L,0xFF7B5F74L},{0xF0B4812FL,0x768F4ABDL,(-9L),0xC460345FL,0xEB5874D3L}},{{0xFF7B5F74L,0x20305447L,(-1L),0x537FC14EL,1L},{0xBCC1B5D5L,0x5E2887FAL,0x9173888DL,0xC460345FL,1L},{3L,0x8F1EA939L,(-9L),0x8F1EA939L,3L},{0x9173888DL,0L,0x0BBBC70DL,5L,1L},{(-2L),0xFF7B5F74L,0x537FC14EL,3L,0x2D025F33L}},{{0xF0B4812FL,0L,0xC0421BF4L,0L,1L},{0x2BC18062L,3L,(-1L),(-1L),3L},{1L,0x6FB6A3C0L,1L,0xE6C0732DL,1L},{0x20305447L,(-2L),0xD3B30CA3L,(-1L),1L},{0x561BA316L,0L,1L,1L,0xEB5874D3L}},{{0x20305447L,0x2BC18062L,0xFF7B5F74L,3L,0xFF7B5F74L},{1L,(-1L),0xCB1B15CFL,0x768F4ABDL,1L},{0x2BC18062L,0x20305447L,0x220A93CBL,0x2BC18062L,(-2L)},{0xF0B4812FL,5L,1L,0xC460345FL,0x561BA316L},{(-2L),0x20305447L,0x2B59397DL,1L,1L}},{{0x9173888DL,(-1L),0x9173888DL,0x6EAA0600L,0xAA93FC1CL},{3L,0x2BC18062L,0x537FC14EL,0x8F1EA939L,1L},{0xBCC1B5D5L,0L,0x02678F5CL,0x768F4ABDL,1L},{0xFF7B5F74L,(-2L),0x537FC14EL,1L,1L},{0xF0B4812FL,0x6FB6A3C0L,0x9173888DL,0L,0x0BBBC70DL}},{{0x8F1EA939L,3L,0x2B59397DL,(-1L),3L},{0x0BBBC70DL,0L,1L,(-4L),0x0BBBC70DL},{1L,0xE6A75B48L,0xF355137CL,0x537FC14EL,0xA70EB9C4L},{1L,0x6FB6A3C0L,1L,0x6FB6A3C0L,1L},{0xF355137CL,0x220A93CBL,0xE6A75B48L,0x2B59397DL,0x2D025F33L}}};
static int16_t *****g_2770[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static uint8_t g_2778 = 0x72L;
static int32_t g_2899[2][3] = {{0xC5947542L,5L,5L},{0xC5947542L,5L,5L}};
static uint32_t g_2905 = 0x529D2556L;
static union U1 ****g_2987 = &g_1392[1][3][5];



static const uint8_t  func_1(void);
static int32_t * func_2(int32_t  p_3, union U1  p_4, int64_t  p_5, int8_t  p_6, const int32_t * p_7);
static int32_t  func_14(int32_t * p_15, int32_t * p_16, int32_t * p_17);
static int32_t * func_20(int16_t  p_21);
static uint32_t  func_22(int8_t  p_23, int32_t * p_24, uint32_t  p_25);
static int32_t * func_28(int8_t * p_29, int64_t  p_30, int8_t * p_31, uint8_t  p_32, int8_t * const  p_33);
static int8_t * func_36(union U1  p_37, int32_t  p_38, int16_t  p_39, uint32_t  p_40);
static union U1  func_41(int32_t  p_42, const int8_t  p_43, int8_t * p_44);




static const uint8_t  func_1(void)
{ 
    int32_t *l_1877[6][3] = {{&g_1878,&g_1878,&g_1878},{&g_1878,&g_1878,(void*)0},{&g_1878,&g_1878,&g_1878},{&g_1878,(void*)0,(void*)0},{&g_1878,&g_1878,&g_1878},{&g_1878,&g_1878,(void*)0}};
    uint64_t l_2635 = 18446744073709551615UL;
    uint32_t l_2636 = 4294967295UL;
    int16_t l_2637 = 0xE100L;
    int32_t l_2638 = 0L;
    int32_t **l_2645 = &g_51;
    int32_t **l_2646 = &l_1877[5][2];
    struct S0 l_2665 = {0xEE3C2E9CL,0xDDL,0L,0x137E3093L,1L,0x219CBC30FD7CD2C4LL,-1L};
    const int32_t l_2671 = 0x234F4C2AL;
    int32_t l_2673 = 0xEEEE03CBL;
    uint8_t l_2674 = 1UL;
    int64_t ****l_2688 = &g_2686;
    int64_t ** const *l_2690 = &g_2687[0];
    int64_t ** const **l_2689[7][5][2] = {{{&l_2690,&l_2690},{(void*)0,(void*)0},{&l_2690,(void*)0},{(void*)0,&l_2690},{&l_2690,&l_2690}},{{(void*)0,(void*)0},{&l_2690,(void*)0},{(void*)0,&l_2690},{&l_2690,&l_2690},{(void*)0,(void*)0}},{{&l_2690,(void*)0},{(void*)0,&l_2690},{&l_2690,&l_2690},{(void*)0,(void*)0},{&l_2690,(void*)0}},{{(void*)0,&l_2690},{&l_2690,&l_2690},{(void*)0,(void*)0},{&l_2690,(void*)0},{(void*)0,&l_2690}},{{&l_2690,&l_2690},{(void*)0,(void*)0},{&l_2690,(void*)0},{(void*)0,&l_2690},{&l_2690,&l_2690}},{{(void*)0,(void*)0},{&l_2690,(void*)0},{(void*)0,&l_2690},{&l_2690,&l_2690},{(void*)0,(void*)0}},{{&l_2690,(void*)0},{(void*)0,&l_2690},{&l_2690,&l_2690},{(void*)0,(void*)0},{&l_2690,(void*)0}}};
    struct S0 *****l_2702 = &g_1939;
    uint16_t l_2762 = 0x4D6AL;
    int16_t ***l_2780 = &g_1168[0];
    int16_t **** const l_2779 = &l_2780;
    int16_t l_2798 = 1L;
    uint8_t *****l_2799 = &g_299;
    int64_t l_2828 = (-9L);
    uint16_t l_2836[5];
    int64_t l_2839 = (-1L);
    uint32_t l_2877 = 0x6E1A18BFL;
    int64_t l_2898 = 0xB7A07038AEFE28DBLL;
    int16_t l_2902 = 0x3205L;
    int32_t l_2942[3][6][5] = {{{0x84A10121L,0x1A5159C2L,0x84A10121L,0x84A10121L,0x1A5159C2L},{0x75FF8ED9L,0xD7878E57L,0xD7878E57L,0x75FF8ED9L,0xD7878E57L},{0x1A5159C2L,0x1A5159C2L,1L,0x1A5159C2L,0x1A5159C2L},{0xD7878E57L,0x75FF8ED9L,0xD7878E57L,0xD7878E57L,0x75FF8ED9L},{0x1A5159C2L,0x84A10121L,0x84A10121L,0x1A5159C2L,0x84A10121L},{0x75FF8ED9L,0x75FF8ED9L,0x3C71978EL,0x75FF8ED9L,0x75FF8ED9L}},{{0x84A10121L,0x1A5159C2L,0x84A10121L,0x84A10121L,0x1A5159C2L},{0x75FF8ED9L,0xD7878E57L,0xD7878E57L,0x75FF8ED9L,0xD7878E57L},{0x1A5159C2L,0x1A5159C2L,1L,0x1A5159C2L,0x1A5159C2L},{0xD7878E57L,0x75FF8ED9L,0xD7878E57L,0xD7878E57L,0x75FF8ED9L},{0x1A5159C2L,0x84A10121L,0x84A10121L,0x1A5159C2L,0x84A10121L},{0x75FF8ED9L,0x75FF8ED9L,0x3C71978EL,0x75FF8ED9L,0x75FF8ED9L}},{{0x84A10121L,0x1A5159C2L,0x84A10121L,0x84A10121L,0x1A5159C2L},{0x75FF8ED9L,0xD7878E57L,0xD7878E57L,0x75FF8ED9L,0xD7878E57L},{0x1A5159C2L,0x1A5159C2L,1L,0x1A5159C2L,0x1A5159C2L},{0x3C71978EL,0xD7878E57L,0x3C71978EL,0x3C71978EL,0xD7878E57L},{0x84A10121L,1L,1L,0x84A10121L,1L},{0xD7878E57L,0xD7878E57L,0x75FF8ED9L,0xD7878E57L,0xD7878E57L}}};
    int16_t l_2964[7];
    int8_t l_2965[5];
    union U1 l_2982 = {0x460B3A42L};
    union U1 ****l_2988[3][5] = {{&g_1392[1][2][1],&g_1392[3][3][6],&g_1392[1][2][1],&g_1392[1][2][1],&g_1392[3][3][6]},{&g_1392[3][3][6],&g_1392[1][2][1],&g_1392[1][2][1],&g_1392[3][3][6],&g_1392[1][2][1]},{&g_1392[3][3][6],&g_1392[3][3][6],&g_1392[3][2][2],&g_1392[3][3][6],&g_1392[3][3][6]}};
    const uint16_t l_2989 = 0x887AL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_2836[i] = 4UL;
    for (i = 0; i < 7; i++)
        l_2964[i] = (-1L);
    for (i = 0; i < 5; i++)
        l_2965[i] = 0x54L;
    return (**l_2645);
}



static int32_t * func_2(int32_t  p_3, union U1  p_4, int64_t  p_5, int8_t  p_6, const int32_t * p_7)
{ 
    int32_t *l_2639 = (void*)0;
    int32_t *l_2640[1][1];
    int64_t l_2641 = (-3L);
    uint64_t l_2642[2][6][2];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2640[i][j] = &g_19[1][0];
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
                l_2642[i][j][k] = 0UL;
        }
    }
    ++l_2642[1][5][0];
    return l_2639;
}



static int32_t  func_14(int32_t * p_15, int32_t * p_16, int32_t * p_17)
{ 
    int8_t l_1881 = (-5L);
    int64_t *l_1884 = &g_1121;
    struct S0 l_1887 = {18446744073709551611UL,0x0BL,0L,0x34F60A4DL,-7L,0xBA4FBF224555370DLL,2L};
    int32_t *l_1891 = &g_552[0][1][0];
    int32_t l_1924[2][5][3] = {{{0L,0L,0L},{6L,8L,6L},{0L,0L,0L},{6L,8L,6L},{0L,0L,0L}},{{6L,8L,6L},{0L,0L,0L},{6L,8L,6L},{0L,0L,0L},{6L,8L,6L}}};
    int64_t **l_2060 = &l_1884;
    int64_t ***l_2059 = &l_2060;
    uint32_t * const *l_2128[4];
    const struct S0 l_2174 = {0UL,4L,0x54384DDEA95AA983LL,0x1F14AD55L,1L,0x7AD84FDBDDEFD28ALL,0x6664L};
    uint8_t ****l_2175 = &g_300;
    union U1 l_2189 = {0UL};
    int8_t l_2270[2][1];
    int32_t l_2285 = 4L;
    int8_t *l_2340 = &g_35;
    int16_t l_2365[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_2372 = 0xCCA8746FL;
    const uint32_t l_2440 = 0x8113C6DCL;
    const uint32_t l_2442 = 4294967294UL;
    uint16_t l_2452 = 0xCC99L;
    int32_t l_2474 = 0x93E1D839L;
    uint8_t l_2475 = 1UL;
    uint64_t l_2535 = 0xF4750AC79F115524LL;
    int8_t l_2604 = 0x8AL;
    int32_t l_2618[5][3];
    int32_t *l_2625 = &g_552[0][1][0];
    int32_t *l_2626 = &g_19[0][0];
    int32_t *l_2627 = &g_1878;
    int32_t *l_2628 = &l_2474;
    int32_t *l_2629[4];
    int32_t l_2630 = 0x3242EA80L;
    int32_t l_2631 = (-5L);
    uint8_t l_2632[2];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2128[i] = (void*)0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_2270[i][j] = (-9L);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_2618[i][j] = (-1L);
    }
    for (i = 0; i < 4; i++)
        l_2629[i] = &g_2083;
    for (i = 0; i < 2; i++)
        l_2632[i] = 1UL;
    if (((((0x0B17L && (safe_mul_func_uint8_t_u_u(l_1881, ((((safe_add_func_int32_t_s_s(((0x995F9DD2L >= (0UL == ((&g_562 != l_1884) >= (((*g_1169) = (safe_mod_func_int64_t_s_s((((l_1887 , (*g_805)) != (void*)0) , 0x51051DDF3831D1EDLL), l_1887.f2))) ^ l_1887.f2)))) ^ 0L), 0xE1BC2E72L)) || l_1887.f6) >= 0x57554348L) >= (*p_16))))) != l_1887.f4) || 1L) != 0x17L))
    { 
        const int32_t *l_1888[7][4][6] = {{{&g_552[2][1][0],&g_820,&g_820,&g_820,&g_820,&g_1878},{&g_19[1][0],(void*)0,&g_19[1][0],&g_820,&g_552[0][1][0],&g_19[1][0]},{&g_820,&g_552[0][1][0],&g_820,&g_552[0][1][0],(void*)0,&g_820},{(void*)0,&g_820,&g_19[0][0],&g_19[1][0],&g_552[0][1][0],&g_552[0][1][0]}},{{&g_1878,&g_1878,&g_1878,&g_1878,&g_552[0][1][0],&g_19[1][0]},{&g_19[1][0],&g_820,(void*)0,(void*)0,&g_820,&g_19[1][0]},{(void*)0,&g_19[1][0],&g_19[1][0],&g_1878,&g_820,(void*)0},{&g_1878,&g_820,&g_19[0][0],&g_552[0][1][0],&g_552[0][1][0],(void*)0}},{{&g_19[1][0],&g_1878,&g_1878,&g_552[0][1][0],&g_552[0][1][0],&g_19[1][0]},{&g_820,&g_820,&g_552[0][1][0],&g_19[1][0],(void*)0,&g_19[1][0]},{&g_552[2][1][0],&g_552[0][1][0],&g_552[2][1][0],&g_19[1][0],&g_552[0][1][0],(void*)0},{(void*)0,(void*)0,&g_1878,&g_19[0][0],&g_820,&g_19[1][0]}},{{&g_820,&g_820,&g_820,&g_19[0][0],(void*)0,&g_19[1][0]},{(void*)0,&g_820,&g_1878,&g_19[1][0],&g_19[1][0],(void*)0},{&g_552[2][1][0],(void*)0,&g_820,&g_19[1][0],&g_552[0][1][0],&g_1878},{&g_820,&g_820,&g_19[1][0],&g_552[0][1][0],&g_552[0][1][0],&g_19[1][0]}},{{&g_19[1][0],&g_19[1][0],&g_552[0][1][0],&g_552[0][1][0],&g_820,&g_19[1][0]},{&g_1878,&g_552[0][1][0],&g_19[0][0],&g_1878,&g_1878,&g_552[0][1][0]},{(void*)0,&g_1878,&g_19[0][0],(void*)0,&g_19[1][0],&g_19[1][0]},{&g_19[1][0],(void*)0,&g_552[0][1][0],&g_1878,(void*)0,&g_19[1][0]}},{{&g_1878,(void*)0,&g_19[1][0],&g_19[1][0],&g_820,&g_1878},{&g_820,&g_1878,&g_1878,&g_552[0][1][0],&g_1878,&g_1878},{&g_1878,&g_19[1][0],&g_1878,&g_552[0][1][0],&g_19[1][0],(void*)0},{&g_820,&g_1878,&g_552[0][1][0],&g_19[1][0],(void*)0,&g_19[1][0]}},{{&g_552[0][1][0],&g_1878,&g_19[1][0],&g_820,&g_19[1][0],&g_19[0][0]},{&g_19[0][0],&g_19[1][0],&g_552[0][1][0],&g_552[2][1][0],&g_1878,&g_1878},{&g_19[1][0],&g_1878,&g_820,&g_820,&g_19[1][0],&g_552[0][1][0]},{&g_552[2][1][0],&g_19[1][0],&g_1878,&g_1878,&g_19[1][0],&g_552[2][1][0]}}};
        const int32_t **l_1889[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        g_1890[1] = l_1888[6][2][4];
        l_1891 = p_16;
    }
    else
    { 
        int8_t l_1892 = 1L;
        int32_t l_1917 = (-1L);
        int32_t l_1921 = (-1L);
        int32_t l_1923[1][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
        uint8_t **l_1930 = &g_129;
        struct S0 l_1933 = {0xA2244260L,0L,0xB74767495E07A4C6LL,0x97272A64L,5L,0x62813E89A3932C04LL,0x6976L};
        union U1 l_2024 = {4294967294UL};
        int32_t *l_2027 = &l_1924[1][1][1];
        int64_t ***l_2037 = (void*)0;
        int8_t **l_2081 = &g_34;
        int16_t l_2135 = 4L;
        uint16_t l_2138 = 65535UL;
        int i, j;
        if ((*l_1891))
        { 
            int64_t l_1897[5] = {0xECE25D4157EEF227LL,0xECE25D4157EEF227LL,0xECE25D4157EEF227LL,0xECE25D4157EEF227LL,0xECE25D4157EEF227LL};
            const uint8_t *l_1911 = &g_1494[0][3][4];
            uint32_t ****l_1913 = &g_1159;
            int32_t l_1922[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1922[i] = 0L;
            if (l_1892)
            { 
                union U1 l_1906 = {4294967293UL};
                int32_t *l_1912[7] = {&g_820,&g_820,&g_820,&g_820,&g_820,&g_820,&g_820};
                int i;
                (*l_1891) = (safe_sub_func_int64_t_s_s(((*l_1891) && (safe_lshift_func_uint8_t_u_u((l_1892 ^ 0x5CE938E436599721LL), 4))), ((l_1897[0] <= (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(0x3702L, (safe_sub_func_uint16_t_u_u(l_1897[1], ((l_1906 , l_1897[0]) ^ (*l_1891)))))), (*l_1891))), 0xFC31126B0A64016FLL))) , l_1906.f0)));
                g_820 |= ((*g_18) = ((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(l_1906.f1, (((*l_1891) &= (&g_412 == (void*)0)) && (l_1906.f1 <= ((void*)0 != l_1911))))), l_1906.f0)) && l_1897[0]));
                (*g_18) ^= (&g_34 != (void*)0);
            }
            else
            { 
                uint32_t *****l_1914 = &l_1913;
                int32_t l_1920[6] = {0x795E4840L,0x795E4840L,0x795E4840L,0x795E4840L,0x795E4840L,0x795E4840L};
                uint32_t l_1925 = 0UL;
                int i;
                (*l_1914) = l_1913;
                for (g_410.f0 = 0; (g_410.f0 <= 27); ++g_410.f0)
                { 
                    int32_t *l_1918 = (void*)0;
                    int32_t *l_1919[5] = {&g_1878,&g_1878,&g_1878,&g_1878,&g_1878};
                    int32_t **l_1928 = &g_18;
                    int32_t **l_1929 = &l_1919[1];
                    int i;
                    if (l_1897[1])
                        break;
                    l_1925--;
                    (*l_1929) = ((*l_1928) = p_16);
                }
            }
            l_1922[0] &= ((*g_300) == (l_1930 = (void*)0));
        }
        else
        { 
            const int32_t l_1942 = 0x53BFC60CL;
            int32_t l_1972 = 0x922D651BL;
            int32_t l_2004 = 1L;
            for (g_61.f3.f0 = 0; (g_61.f3.f0 < 35); ++g_61.f3.f0)
            { 
                struct S0 *****l_1941 = &g_1939;
                (*p_16) = (l_1933 , (((safe_lshift_func_int8_t_s_s((-8L), 3)) , g_1936) == ((*l_1941) = g_1939)));
                if (l_1942)
                    continue;
            }
            (*g_411) = (**g_1940);
            (*g_18) = ((void*)0 != (**g_1939));
            for (g_1727.f0 = 0; (g_1727.f0 <= 2); g_1727.f0 += 1)
            { 
                uint64_t l_1945 = 0x139EC36CC533057DLL;
                struct S0 **l_1951[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_2005[3][3][4] = {{{&l_1924[1][0][1],&g_19[1][0],&g_1878,&l_1924[1][0][1]},{&g_820,&g_1878,&l_1924[0][0][2],&g_19[1][0]},{&g_1878,(void*)0,&l_1924[0][0][2],&l_1924[0][0][2]}},{{&g_820,&g_820,&g_1878,&l_1923[0][2]},{&l_1924[1][0][1],&l_1924[0][2][0],(void*)0,&g_19[1][0]},{(void*)0,&g_19[1][0],&g_1878,(void*)0}},{{&g_820,&g_19[1][0],&g_552[1][0][0],&g_19[1][0]},{&g_19[1][0],&l_1924[0][2][0],&l_1924[0][0][2],&l_1923[0][2]},{&g_820,&g_820,&g_1878,&l_1924[0][0][2]}}};
                uint32_t l_2006 = 0xE22F41BEL;
                int i, j, k;
                if ((safe_lshift_func_int16_t_s_s(l_1945, 11)))
                { 
                    int8_t *l_1950 = &g_27;
                    struct S0 **l_1952[3][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_1959 = 0xF84E3EF3L;
                    int i, j;
                    (*p_15) ^= (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((*l_1891), ((((*l_1950) = ((*g_34) = (*l_1891))) == (l_1951[4] == l_1952[0][3])) , (safe_div_func_uint16_t_u_u(((0xE56DL < ((safe_add_func_uint64_t_u_u(l_1945, (((safe_sub_func_uint32_t_u_u((0x55L && l_1945), 0x9AF5F01BL)) | l_1959) < l_1921))) > 0x7BL)) == 0x1383EF28L), l_1959))))), l_1945));
                    return l_1942;
                }
                else
                { 
                    int32_t l_1971 = 0xE89010B4L;
                    union U1 l_1973 = {1UL};
                    uint16_t *l_1978 = &g_193;
                    uint16_t *l_1979[4][1] = {{&g_1980},{&g_1980},{&g_1980},{&g_1980}};
                    int32_t l_1981 = 0xEA40A116L;
                    uint64_t *l_1982 = &g_433;
                    int32_t l_1983[4] = {0x4B7EFB70L,0x4B7EFB70L,0x4B7EFB70L,0x4B7EFB70L};
                    const int32_t *l_1985 = &l_1921;
                    const int32_t **l_1984 = &l_1985;
                    int i, j;
                    (*l_1984) = (g_1890[0] = ((0x70E3L == ((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((l_1983[1] = (safe_div_func_uint32_t_u_u(((l_1923[0][2] , ((*l_1884) ^= 0x49A3C56545C70EB7LL)) | ((*l_1982) = (+(safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((l_1972 = l_1971), 6)), ((*g_407) , (l_1973 , (l_1981 = ((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_1980 = ((*l_1978) = 65535UL)), l_1971)), l_1973.f1)) | l_1973.f1))))))))), l_1942))), l_1933.f4)), l_1945)) >= l_1971)) , (void*)0));
                    (*l_1984) = p_17;
                    (*p_15) = ((*p_16) <= (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((*l_1978) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(0UL, (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(((*g_34) = (safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((**g_863) , ((safe_sub_func_uint8_t_u_u((7UL >= (((&g_34 == &g_34) & (((l_1917 <= l_1945) , (*l_1891)) && l_1972)) | l_1921)), l_2004)) & (*l_1891))), 18446744073709551606UL)) != l_1933.f6), l_1923[0][2]))), 3)), 0xCFCE8F5C70E0941BLL)))), 8))) < l_1945), 14)), (*l_1891))));
                    if ((*g_18))
                        break;
                }
                if ((*p_15))
                    continue;
                --l_2006;
                for (g_562 = 2; (g_562 >= 0); g_562 -= 1)
                { 
                    int i, j;
                    l_1923[0][4] = (safe_unary_minus_func_uint64_t_u(g_1709[g_1727.f0][g_1727.f0]));
                }
            }
        }
        (*l_1891) = (safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u(((*g_129) = ((((void*)0 == &g_300) , l_1887) , 0x31L)), l_1933.f2)) <= (*l_1891)), 1));
        for (l_1933.f4 = 0; (l_1933.f4 <= 4); l_1933.f4 += 1)
        { 
            struct S0 l_2021 = {0xADF8B1DEL,0x3FL,0x73BE679FC3A66B14LL,18446744073709551608UL,1L,3UL,2L};
            uint32_t *l_2032 = &g_410.f0;
            int32_t *l_2036[6][1] = {{&l_1923[0][0]},{&l_1921},{&l_1921},{&l_1923[0][0]},{&l_1921},{&l_1921}};
            int i, j;
            for (g_410.f2.f5 = 0; (g_410.f2.f5 <= 4); g_410.f2.f5 += 1)
            { 
                const int32_t **l_2014 = &g_1890[1];
                if ((*p_15))
                    break;
                (*l_2014) = (void*)0;
                for (g_820 = 0; (g_820 <= 0); g_820 += 1)
                { 
                    int i, j;
                    (*l_2014) = &g_19[(g_820 + 1)][g_820];
                    (*l_2014) = &g_19[g_820][g_820];
                    if (g_1709[(g_820 + 1)][g_820])
                        continue;
                    (*l_2014) = &g_19[g_820][g_820];
                }
                if (l_1892)
                    continue;
                for (g_1396.f0 = 0; (g_1396.f0 <= 0); g_1396.f0 += 1)
                { 
                    int i, j;
                    l_1923[g_1396.f0][(g_1396.f0 + 2)] = ((safe_lshift_func_uint16_t_u_u(g_1709[(g_1396.f0 + 1)][(g_1396.f0 + 1)], 15)) > (((((*g_34) = g_19[g_1396.f0][g_1396.f0]) > (((((g_19[g_1396.f0][g_1396.f0] == (safe_mul_func_int8_t_s_s((((*l_1891) = (safe_div_func_int8_t_s_s((l_2021 , g_1709[(g_1396.f0 + 1)][(g_1396.f0 + 1)]), (safe_mul_func_uint16_t_u_u((&g_246 != (g_2025 = func_36(l_2024, g_19[g_1396.f0][g_1396.f0], l_2021.f2, l_1933.f1))), g_19[g_1396.f0][g_1396.f0]))))) != l_1933.f5), g_1709[(g_1396.f0 + 1)][(g_1396.f0 + 1)]))) <= l_2021.f2) || g_19[g_1396.f0][g_1396.f0]) & l_2021.f3) , 0xF5L)) & l_2021.f4) >= g_1709[(g_1396.f0 + 1)][(g_1396.f0 + 1)]));
                }
                for (g_87 = 0; (g_87 <= 3); g_87 += 1)
                { 
                    return (*p_15);
                }
            }
            l_2027 = (void*)0;
            l_1921 &= (((*g_34) > (((*l_1891) = ((*l_2032) &= (safe_add_func_int16_t_s_s((9UL > ((*g_1169) = (safe_div_func_int16_t_s_s((*l_1891), l_2021.f5)))), l_2021.f3)))) ^ (!(l_2021.f6 <= ((safe_add_func_int32_t_s_s((l_1917 |= (*p_15)), l_1923[0][5])) == 0xDBL))))) || 0x4349L);
            for (g_410.f2.f3 = 0; (g_410.f2.f3 <= 0); g_410.f2.f3 += 1)
            { 
                return (*p_16);
            }
        }
        (*g_18) = ((*g_1493) & 0x3AL);
        for (l_1921 = 1; (l_1921 >= 0); l_1921 -= 1)
        { 
            int64_t ****l_2038 = &l_2037;
            int32_t l_2051 = 0xEF8D10A0L;
            int16_t * const *l_2052 = (void*)0;
            int32_t l_2055 = 0x688D858CL;
            uint64_t l_2056 = 0UL;
            uint64_t l_2095 = 0x5051DF89BAE9D81ALL;
            uint32_t **l_2127 = &g_932;
            uint64_t *l_2141[7][6][2] = {{{(void*)0,&l_2095},{(void*)0,&g_433},{&l_2095,&l_2095},{(void*)0,&l_2095},{&l_2095,&g_433},{(void*)0,&l_2095}},{{(void*)0,(void*)0},{&l_2095,&g_433},{&l_2095,(void*)0},{(void*)0,&l_2095},{(void*)0,&g_433},{&l_2095,&l_2095}},{{(void*)0,&l_2095},{&l_2095,&g_433},{(void*)0,&l_2095},{(void*)0,(void*)0},{&l_2095,&g_433},{&l_2095,(void*)0}},{{(void*)0,&l_2095},{(void*)0,&g_433},{(void*)0,(void*)0},{&g_695,(void*)0},{(void*)0,(void*)0},{&g_433,&g_461.f5}},{{&g_695,&g_433},{&g_461.f5,(void*)0},{&g_461.f5,&g_433},{&g_695,&g_461.f5},{&g_433,(void*)0},{(void*)0,(void*)0}},{{&g_695,(void*)0},{(void*)0,(void*)0},{&g_433,&g_461.f5},{&g_695,&g_433},{&g_461.f5,(void*)0},{&g_461.f5,&g_433}},{{&g_695,&g_461.f5},{&g_433,(void*)0},{(void*)0,(void*)0},{&g_695,(void*)0},{(void*)0,(void*)0},{&g_433,&g_461.f5}}};
            int i, j, k;
            (*l_2038) = l_2037;
            for (g_1461 = 0; (g_1461 >= 0); g_1461 -= 1)
            { 
                int16_t **l_2053 = &g_1169;
                uint64_t l_2054[2][3];
                int32_t l_2082 = 0xC4C5A576L;
                int32_t *l_2084 = &l_1924[0][0][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_2054[i][j] = 18446744073709551615UL;
                }
                l_2055 &= (((safe_lshift_func_int8_t_s_u(l_1923[g_1461][(l_1921 + 1)], 5)) != (((((safe_mul_func_int16_t_s_s((*l_1891), l_1923[g_1461][(l_1921 + 1)])) == (!(safe_lshift_func_uint16_t_u_s(0UL, (((g_1709[0][1] , ((((safe_mod_func_uint8_t_u_u((+((safe_mod_func_uint8_t_u_u((((*l_1884) = l_2051) & (l_2052 != l_2053)), l_1923[0][2])) < 0x8DA6L)), (*l_1891))) < l_2054[0][1]) == (-1L)) , (*l_1891))) , l_2051) && (*g_18)))))) >= (*l_1891)) <= l_2051) > l_2051)) , (*p_16));
                --l_2056;
                (*l_2084) ^= ((l_2059 == g_2061[1]) | (5UL | (safe_div_func_int64_t_s_s(((((*l_1891) = ((safe_mul_func_uint16_t_u_u(((+(l_2054[1][2] , (safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((((&g_34 != ((safe_sub_func_int32_t_s_s((*p_16), (safe_add_func_int64_t_s_s((l_2051 >= 1L), 0x3676A68896F57358LL)))) , l_2081)) < l_2082) , 0x7FL), 1UL)), 14)) <= (**g_1492)) , (*g_2025)) ^ 0L), 0L)), (*l_1891))))) && 0xDF49L), (-9L))) && 0x478F6690L)) <= (*p_15)) && (*g_34)), g_2083))));
                if ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((*l_1891), (l_1923[g_1461][(l_1921 + 4)] ^= ((*l_2084) && (0UL && ((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(((*g_34) = (0xB796L == (*l_1891))), (safe_mod_func_uint16_t_u_u(((**g_1492) || (*g_2025)), 1UL)))), 18446744073709551609UL)) || 0L)))))), l_2095)))
                { 
                    return (*p_15);
                }
                else
                { 
                    int16_t l_2100 = 0x6B55L;
                    uint16_t *l_2115 = &g_193;
                    uint16_t *l_2121[6][6][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1980,&g_1980},{&g_1980,(void*)0,&g_1980},{&g_1980,&g_1980,&g_1980},{&g_1980,(void*)0,(void*)0},{(void*)0,&g_1980,&g_1980}},{{&g_1980,(void*)0,(void*)0},{(void*)0,&g_1980,&g_1980},{(void*)0,(void*)0,&g_1980},{&g_1980,(void*)0,(void*)0},{&g_1980,&g_1980,(void*)0},{&g_1980,&g_1980,(void*)0}},{{&g_1980,&g_1980,&g_1980},{(void*)0,(void*)0,&g_1980},{(void*)0,&g_1980,&g_1980},{&g_1980,&g_1980,&g_1980},{(void*)0,&g_1980,(void*)0},{&g_1980,&g_1980,&g_1980}},{{&g_1980,&g_1980,&g_1980},{&g_1980,&g_1980,&g_1980},{(void*)0,&g_1980,&g_1980},{(void*)0,&g_1980,(void*)0},{&g_1980,&g_1980,(void*)0},{&g_1980,&g_1980,(void*)0}},{{&g_1980,&g_1980,&g_1980},{&g_1980,&g_1980,&g_1980},{(void*)0,&g_1980,(void*)0},{&g_1980,&g_1980,&g_1980},{&g_1980,&g_1980,(void*)0},{&g_1980,&g_1980,&g_1980}},{{&g_1980,&g_1980,&g_1980},{&g_1980,&g_1980,&g_1980},{(void*)0,(void*)0,(void*)0},{&g_1980,&g_1980,&g_1980},{&g_1980,&g_1980,&g_1980},{&g_1980,&g_1980,&g_1980}}};
                    uint64_t *l_2122 = &g_1396.f3.f5;
                    int32_t l_2129 = (-1L);
                    const int16_t l_2134[7] = {0x1A9AL,0x1A9AL,0x1A9AL,0x1A9AL,0x1A9AL,0x1A9AL,0x1A9AL};
                    int i, j, k;
                    (*p_16) = (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((((**l_2060) = (((l_2100 > ((safe_mul_func_int16_t_s_s(((*l_2084) ^ ((safe_add_func_int64_t_s_s((((*l_2122) = ((safe_mod_func_uint16_t_u_u(l_2055, (safe_mul_func_uint16_t_u_u((*l_2084), (*g_1169))))) & (g_1980 = (safe_div_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*l_2115) = l_2100), (safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u((!(6L >= l_2100)), 0x72BADB0B89671A6ALL)), l_2056)))), 2)) != (*l_1891)) && (**g_2062)), 0xE8L))))) == l_2095), l_2100)) != 18446744073709551615UL)), 0x1DA3L)) && 6UL)) != 1L) , 1L)) != 0x6E820C050E552FE7LL), (*g_34))) > (*l_1891)), l_2056));
                    (*l_2084) = (((((((safe_lshift_func_int16_t_s_s((g_1461 , (((*l_1891) = (l_2129 |= (((*g_1159) = l_2127) == (l_2024 , l_2128[2])))) > (safe_mul_func_uint16_t_u_u(0x20ECL, (0L & (safe_lshift_func_int16_t_s_s(((func_41(l_2100, l_2134[0], &l_1881) , (*l_2084)) > l_2095), (*l_2084)))))))), (*g_1169))) <= l_2024.f0) ^ (**g_2062)) & l_2055) & (*g_34)) | l_2051) != (*g_34));
                    if ((*p_15))
                        break;
                    (*p_15) = ((*l_1891) = (0x65B8CEA47A974A18LL || (l_2135 > ((((void*)0 == l_2081) ^ (l_2100 , (-6L))) != (safe_sub_func_int8_t_s_s((*g_2025), l_2138))))));
                }
            }
            l_2051 ^= (safe_mul_func_uint64_t_u_u(((*l_1891) &= (&l_2138 == (*g_1463))), (0x2674L <= l_2055)));
            (*p_16) = ((*g_34) ^ l_2051);
        }
    }
lbl_2241:
    for (g_1727.f3.f5 = 0; g_1727.f3.f5 < 2; g_1727.f3.f5 += 1)
    {
        g_105[g_1727.f3.f5] = &g_87;
    }
    if ((*l_1891))
    { 
        int16_t l_2142 = 0xD0CDL;
        int32_t **l_2143 = &l_1891;
        int8_t *l_2198 = (void*)0;
        uint16_t l_2211 = 0xD255L;
        int32_t l_2228[3];
        int16_t l_2262 = 1L;
        int32_t l_2268[3];
        int32_t l_2286[5][1][3] = {{{(-1L),(-1L),1L}},{{0xD6D4BB3AL,0xD6D4BB3AL,0x6266F9ECL}},{{(-1L),(-1L),1L}},{{0xD6D4BB3AL,0xD6D4BB3AL,0x6266F9ECL}},{{(-1L),(-1L),1L}}};
        uint32_t ****l_2319 = &g_1159;
        uint32_t *****l_2318 = &l_2319;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2228[i] = 0L;
        for (i = 0; i < 3; i++)
            l_2268[i] = 0x5EFF85A0L;
        l_2142 = 0x8151205CL;
        (*l_2143) = p_15;
        for (g_1727.f2.f5 = 0; (g_1727.f2.f5 <= 4); g_1727.f2.f5 += 1)
        { 
            int32_t l_2148 = 8L;
            union U1 l_2168 = {5UL};
            int32_t l_2170 = (-1L);
            uint8_t l_2197[5] = {0x1FL,0x1FL,0x1FL,0x1FL,0x1FL};
            int32_t l_2227 = (-1L);
            int32_t l_2229 = 2L;
            uint8_t ***l_2239 = &g_92;
            int32_t l_2269[7];
            int8_t *l_2277 = &g_246;
            uint32_t *****l_2320 = &l_2319;
            int64_t **l_2324 = (void*)0;
            struct S0 l_2326 = {0x3AB43E13L,0x64L,0xAC58A1BA6F03AABBLL,0x4A270C91L,-1L,0x6FA01AF70EB5F428LL,2L};
            int i;
            for (i = 0; i < 7; i++)
                l_2269[i] = (-1L);
            for (g_1396.f3.f3 = 0; (g_1396.f3.f3 <= 4); g_1396.f3.f3 += 1)
            { 
                uint32_t ** const **l_2155 = (void*)0;
                uint32_t ** const ***l_2154 = &l_2155;
                const uint32_t *** const **l_2160 = &g_2157;
                int32_t l_2169 = 6L;
                int32_t *l_2171 = &l_1924[0][0][2];
                int32_t *l_2172[6][1][4] = {{{&l_2168.f3.f4,&l_2168.f3.f4,&g_1709[1][2],&g_1709[0][2]}},{{&g_461.f4,&g_194,&g_461.f4,&g_1709[1][2]}},{{&g_461.f4,&g_1709[1][2],&g_1709[1][2],&g_1709[0][2]}},{{&g_1709[1][2],&g_461.f4,&g_194,&g_461.f4}},{{&g_461.f4,&l_2168.f3.f4,&g_194,&g_194}},{{&g_1709[1][2],&g_1709[1][2],&g_461.f4,&g_194}}};
                int32_t *l_2173 = &g_820;
                union U1 l_2180 = {0xF7340D56L};
                int i, j, k;
            }
            for (l_2170 = 0; (l_2170 <= 4); l_2170 += 1)
            { 
                int32_t *l_2212 = &g_2083;
                int32_t *l_2213 = &g_2083;
                int32_t *l_2214 = &g_820;
                int32_t *l_2215 = &l_2148;
                int32_t *l_2216 = &g_1878;
                int32_t *l_2217 = (void*)0;
                int32_t *l_2218 = &l_1924[1][1][1];
                int32_t *l_2219 = &g_1878;
                int32_t *l_2220 = (void*)0;
                int32_t *l_2221 = &g_820;
                int32_t *l_2222 = &l_2148;
                int32_t *l_2223 = &l_1924[1][3][2];
                int32_t *l_2224 = &l_2148;
                int32_t *l_2225 = (void*)0;
                int32_t *l_2226[1][2][6] = {{{&g_19[1][0],&g_2083,&g_19[1][0],(void*)0,(void*)0,&g_19[1][0]},{(void*)0,(void*)0,(void*)0,&g_820,(void*)0,(void*)0}}};
                const uint8_t ***l_2238 = &g_1492;
                uint16_t l_2263 = 1UL;
                const uint32_t l_2264 = 0x731F4F81L;
                int32_t l_2265 = 0x825CA2BFL;
                int8_t **l_2279 = (void*)0;
                int8_t ***l_2278 = &l_2279;
                int64_t l_2283 = 0x0B57F07C66225F41LL;
                uint32_t ** const *l_2323 = (void*)0;
                uint32_t ** const **l_2322 = &l_2323;
                uint32_t ** const ***l_2321 = &l_2322;
                int64_t **l_2325 = &l_1884;
                uint64_t l_2327 = 18446744073709551614UL;
                int i, j, k;
                (*p_15) &= (-6L);
                g_2230++;
                if ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((*g_129), l_2197[3])), ((*g_34) = (safe_unary_minus_func_int16_t_s((l_2238 == l_2239)))))))
                { 
                    int64_t l_2240 = 0x1C27F07FE6A799F2LL;
                    g_2156 = &g_2157;
                    return l_2240;
                }
                else
                { 
                    uint64_t l_2246 = 0xD51FF5AF1ED250DELL;
                    int32_t l_2261 = 1L;
                    int32_t l_2266 = 0L;
                    int32_t l_2267[6][1][1] = {{{6L}},{{(-1L)}},{{(-1L)}},{{6L}},{{(-1L)}},{{(-1L)}}};
                    int8_t l_2271[7] = {0xB7L,0x66L,0xB7L,0xB7L,0x66L,0xB7L,0xB7L};
                    uint64_t l_2272 = 0x767A3BE24AF6D022LL;
                    int i, j, k;
                    if (g_61.f0)
                        goto lbl_2241;
                    (*l_2219) = (((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((l_2246 != (safe_div_func_int64_t_s_s((safe_div_func_int16_t_s_s((((l_2261 = (safe_div_func_uint64_t_u_u((((**g_2062) != (safe_lshift_func_int8_t_s_u(((*g_34) = (-1L)), 1))) , (((void*)0 == &g_1525) && ((safe_sub_func_int16_t_s_s(((*g_1169) = (safe_lshift_func_int8_t_s_u((**l_2143), 4))), (((safe_lshift_func_int8_t_s_s((*g_34), l_2197[0])) & l_2246) > 250UL))) <= l_2148))), (*l_1891)))) < l_2262) < g_461.f3), l_2246)), (*l_1891)))), (*l_2218))), l_2263)) != g_193) <= l_2264);
                    l_2272--;
                    l_2261 = l_2272;
                }
                if ((safe_rshift_func_int16_t_s_s((((*p_16) ^= ((l_2174 , &l_2269[0]) != p_15)) , l_2168.f1), 14)))
                { 
                    int8_t l_2282 = (-4L);
                    uint64_t l_2287 = 18446744073709551615UL;
                    int16_t l_2311 = (-1L);
                    (*l_2212) |= l_2282;
                    (*l_2224) ^= l_2269[4];
                    ++l_2287;
                    (*l_2213) |= (((safe_add_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((*l_1891), (safe_unary_minus_func_int16_t_s((safe_mul_func_int16_t_s_s((0xD3F4L ^ l_2197[3]), ((((*g_34) = (*g_34)) > ((*l_1891) & (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0x34739FD5L, (~((safe_sub_func_int16_t_s_s((*l_2219), l_2227)) & 1UL)))), 0x647EL)))) < (*g_2063)))))))), (*l_1891))), l_2282)), (**g_1492))) <= g_2310) == l_2287), (-3L))) < l_2311) || (*g_129));
                }
                else
                { 
                    (*l_2223) = (safe_rshift_func_uint8_t_u_s((8L < 6L), 3));
                }
                for (g_246 = 0; (g_246 <= 1); g_246 += 1)
                { 
                    uint16_t *l_2334 = &g_193;
                    int32_t l_2339 = 0x0EB90ACBL;
                    int i;
                    (*l_2215) = ((safe_rshift_func_int8_t_s_u(((func_41((((l_2320 = l_2318) == l_2321) >= (l_2324 != l_2325)), (*g_34), func_36(l_2189, (l_2326 , l_2327), (*l_1891), (**l_2143))) , (*p_16)) == (*g_18)), 1)) , 0xB4E54927L);
                    (*l_2212) = (*p_15);
                    g_1890[g_246] = &g_1878;
                    if ((*p_15))
                        break;
                }
            }
        }
        (*l_2143) = (*l_2143);
    }
    else
    { 
        uint32_t l_2343 = 0xB27AC2C4L;
        int64_t ***l_2355 = &l_2060;
        int32_t l_2385[4] = {0L,0L,0L,0L};
        uint16_t ***l_2398 = &g_1463;
        uint32_t l_2407[5];
        struct S0 ***l_2408 = (void*)0;
        struct S0 *****l_2423 = &g_1939;
        int16_t l_2441[2];
        int16_t *** const l_2611 = (void*)0;
        int i;
        for (i = 0; i < 5; i++)
            l_2407[i] = 0xB8BDBB94L;
        for (i = 0; i < 2; i++)
            l_2441[i] = 2L;
        for (l_2189.f3.f6 = 0; (l_2189.f3.f6 > (-24)); --l_2189.f3.f6)
        { 
            return l_2343;
        }
lbl_2443:
        for (g_61.f3.f3 = 0; (g_61.f3.f3 <= 5); g_61.f3.f3 += 1)
        { 
            uint32_t l_2346 = 0xDA46A6C4L;
            if (((*l_1891) >= 253UL))
            { 
                int32_t *l_2344 = &l_1924[0][0][2];
                (*l_2344) ^= ((*p_16) = (*p_15));
                return (*l_1891);
            }
            else
            { 
                int32_t *l_2345[6][1][4] = {{{&g_1878,&g_1878,&g_1878,&g_1878}},{{&g_1878,&g_1878,&g_1878,&g_1878}},{{&g_1878,&g_1878,&g_1878,&g_1878}},{{&g_1878,&g_1878,&g_1878,&g_1878}},{{&g_1878,&g_1878,&g_1878,&g_1878}},{{&g_1878,&g_1878,&g_1878,&g_1878}}};
                int i, j, k;
                l_2346++;
                return (*g_18);
            }
        }
        for (g_61.f2.f4 = 0; (g_61.f2.f4 <= (-11)); g_61.f2.f4 = safe_sub_func_uint32_t_u_u(g_61.f2.f4, 8))
        { 
            uint32_t l_2356 = 0x42400407L;
            int32_t l_2384 = (-1L);
            const uint16_t *l_2397 = &g_61.f1;
            const uint16_t ** const l_2396 = &l_2397;
            const uint16_t ** const * const l_2395 = &l_2396;
            int32_t l_2406 = 0xC7E432CEL;
            uint16_t l_2416 = 9UL;
            int32_t l_2451 = (-4L);
            int32_t l_2455 = (-6L);
            int32_t l_2458 = 0x52CD1FFFL;
            int32_t l_2461 = 0xD462A0D8L;
            int32_t l_2462 = 7L;
            int32_t l_2470 = 0x7D847DFCL;
            int32_t l_2471 = 8L;
            int32_t l_2472 = 0x73E15F19L;
            int32_t l_2473[7][3] = {{1L,(-1L),0L},{1L,1L,(-1L)},{1L,(-1L),(-1L)},{(-1L),0L,0L},{1L,0L,1L},{1L,(-1L),0L},{1L,1L,(-1L)}};
            int32_t *l_2510 = &l_2385[0];
            struct S0 *l_2544 = &g_461;
            uint8_t l_2564 = 0xF8L;
            uint64_t *l_2578 = &g_1727.f3.f5;
            int16_t l_2579[2][4] = {{0xADCBL,0xDDBEL,0xDDBEL,0xADCBL},{0xDDBEL,0xADCBL,0xDDBEL,0xDDBEL}};
            union U1 ** const *l_2596 = &g_875;
            int8_t l_2617[7] = {7L,7L,7L,7L,7L,7L,7L};
            int i, j;
            g_2083 ^= (safe_mul_func_int16_t_s_s((((safe_mod_func_int64_t_s_s(((l_2355 != ((&g_246 != &g_2284) , &l_2060)) , ((l_2356 | ((*l_1891) , (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_2343, 3)), (*g_34))), l_2365[1])), (**g_2062))))) , l_2343)), 0x94AD86DD0FD29ABELL)) & l_2343) >= l_2356), l_2356));
            for (g_194 = 0; (g_194 >= 0); g_194 -= 1)
            { 
                uint64_t l_2375 = 0x718FD89655006195LL;
                int32_t l_2414 = (-10L);
                int32_t l_2415 = (-7L);
                uint16_t ***l_2438 = &g_1463;
                int16_t l_2450 = 0xA037L;
                int32_t l_2456 = 0L;
                int16_t l_2457 = (-1L);
                int32_t l_2459 = (-6L);
                int32_t l_2460[1];
                int64_t l_2463 = 0x1088FB9B7DB8FE69LL;
                const uint32_t l_2467 = 0x0541F724L;
                int32_t l_2469[2][4] = {{0x11DA5C2CL,0x11DA5C2CL,0x11DA5C2CL,0x11DA5C2CL},{0x11DA5C2CL,0x11DA5C2CL,0x11DA5C2CL,0x11DA5C2CL}};
                int32_t *l_2482 = &l_2285;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_2460[i] = 1L;
                if (((((*l_1891) & (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((l_2356 , (l_2343 ^ l_2372)) < (safe_sub_func_uint16_t_u_u(l_2375, 0xAA23L))), (l_2356 <= l_2375))) , l_2356), 2)), 5))) && 0x70L) , l_2356))
                { 
                    int32_t *l_2376 = &g_552[3][0][0];
                    int32_t *l_2377 = &g_1878;
                    int32_t *l_2378 = &g_19[1][0];
                    int32_t *l_2379 = &g_2083;
                    int32_t *l_2380 = &l_2372;
                    int32_t *l_2381 = &l_2372;
                    int32_t *l_2382 = &g_19[1][0];
                    int32_t *l_2383[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2383[i] = &l_2285;
                    (*l_1891) = ((void*)0 != p_15);
                    if ((*l_1891))
                        break;
                    g_2386--;
                    return l_2385[0];
                }
                else
                { 
                    uint64_t l_2389 = 0xB960CAB300E6E42ALL;
                    int32_t l_2391[7][5] = {{0x334FE16FL,0x334FE16FL,0xBEC3CB9FL,0x334FE16FL,0x334FE16FL},{0L,0x334FE16FL,0L,0L,0x334FE16FL},{0x334FE16FL,0L,0L,0x334FE16FL,0L},{0x334FE16FL,0x334FE16FL,0xBEC3CB9FL,0x334FE16FL,0x334FE16FL},{0L,0x334FE16FL,0L,0L,0x334FE16FL},{0x334FE16FL,0L,0L,0x334FE16FL,0L},{0x334FE16FL,0x334FE16FL,0xBEC3CB9FL,0x334FE16FL,0x334FE16FL}};
                    uint64_t *l_2405 = (void*)0;
                    int i, j;
                    (*p_15) = (((l_1887 , l_2389) , l_2389) | ((*g_34) &= (2L || (!(--(*g_129))))));
                    l_2406 = ((*g_18) = (((!0xB0FF158EL) && (l_2391[3][3] = ((l_2395 == l_2398) && (safe_mul_func_int8_t_s_s(((*l_2340) = 0xC7L), (2L < (((l_2385[0] = ((safe_div_func_int64_t_s_s((*g_2063), l_2356)) == l_2385[0])) >= l_2384) != (**g_1492)))))))) || (*l_1891)));
                    (*g_18) &= (l_2343 ^ (l_2407[2] && 0x04L));
                }
                if (((*p_16) = ((l_2408 != (void*)0) & 0xED83L)))
                { 
                    int32_t *l_2409 = (void*)0;
                    int32_t *l_2410 = &g_2083;
                    int32_t *l_2411 = &g_2083;
                    int32_t *l_2412 = &g_552[0][1][0];
                    int32_t *l_2413[4] = {&g_19[1][0],&g_19[1][0],&g_19[1][0],&g_19[1][0]};
                    uint8_t *l_2436 = &g_2386;
                    uint16_t ***l_2439 = (void*)0;
                    int i;
                    ++l_2416;
                    (*l_2412) = (safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((l_2415 ^= (l_2423 != (void*)0)), 3)) , (((safe_lshift_func_uint8_t_u_s(4UL, 5)) >= ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((((((++(*g_129)) ^ ((safe_mul_func_uint8_t_u_u(((*l_2436) ^= ((safe_add_func_uint16_t_u_u(0x73E2L, 0xC945L)) && g_2230)), ((func_41((+(((l_2438 != l_2439) <= g_461.f6) == l_2416)), l_2440, l_2436) , l_2441[1]) != 0x29A7L))) == l_2441[1])) && l_2375) , 0x9DABB632D4346611LL) , 0UL) & 0x62D21972L) , 0xD7F4L), l_2442)), 13)) ^ 1UL)) && (*l_1891))) ^ 0x0DL), 0x96E0L));
                    if (g_1396.f0)
                        goto lbl_2443;
                    if (l_1887.f6)
                        goto lbl_2241;
                    if (l_2406)
                        break;
                }
                else
                { 
                    int32_t *l_2444 = &l_1924[0][0][2];
                    int32_t *l_2445 = &l_2385[0];
                    int32_t *l_2446 = &l_1924[0][0][2];
                    int32_t *l_2447 = &g_552[4][0][0];
                    int32_t *l_2448 = &g_820;
                    int32_t *l_2449[7];
                    uint16_t l_2464 = 0xA1FBL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_2449[i] = &g_19[1][0];
                    l_2452--;
                    ++l_2464;
                }
                if (l_2467)
                    continue;
                for (l_2189.f0 = 0; (l_2189.f0 <= 0); l_2189.f0 += 1)
                { 
                    int32_t *l_2468[6] = {&g_2083,&g_2083,&g_2083,&g_2083,&g_2083,&g_2083};
                    int i, j, k;
                    if (g_552[(l_2189.f0 + 3)][g_194][g_194])
                        break;
                    --l_2475;
                }
                (*l_2482) ^= ((l_2470 || ((0x3F78986AL || ((+0x2C44E408F22E052DLL) & l_2356)) && (((safe_unary_minus_func_int32_t_s(((*g_18) &= (safe_div_func_int16_t_s_s(l_2356, ((*g_129) & (*g_34))))))) < 0x669404FB00BE1069LL) , 0x7CL))) ^ l_2473[3][0]);
                for (g_410.f2.f5 = 1; (g_410.f2.f5 <= 5); g_410.f2.f5 += 1)
                { 
                    int i, j, k;
                    if (g_1727.f0)
                        goto lbl_2443;
                    if (g_552[(g_194 + 2)][(g_194 + 1)][g_194])
                        continue;
                }
            }
            for (l_2474 = 0; (l_2474 >= (-21)); l_2474 = safe_sub_func_int32_t_s_s(l_2474, 4))
            { 
                uint16_t l_2488 = 65535UL;
                int32_t l_2489[1][5];
                uint16_t l_2499[3];
                union U1 ****l_2534 = &g_1392[1][3][5];
                uint32_t l_2541 = 18446744073709551607UL;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_2489[i][j] = 0x6C76ABF6L;
                }
                for (i = 0; i < 3; i++)
                    l_2499[i] = 0x67D8L;
                (*l_1891) = (safe_sub_func_uint16_t_u_u((((*l_1891) < (!(l_2489[0][1] = (l_1924[1][4][1] = l_2488)))) & ((*l_1891) == (--g_1980))), 0x271CL));
            }
            for (g_319 = (-25); (g_319 < 28); g_319 = safe_add_func_int16_t_s_s(g_319, 1))
            { 
                union U1 ***** const l_2550 = &g_1391;
                int32_t l_2559 = 0x768309D5L;
                int32_t l_2560 = 0xDBD92E97L;
                int32_t l_2561 = 0x0A74E29AL;
                union U1 **l_2566 = &g_864;
                union U1 ***l_2567 = &l_2566;
                (*p_16) = ((((*l_1891) , (safe_unary_minus_func_int32_t_s((((safe_sub_func_int32_t_s_s((((void*)0 == l_2550) <= (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((l_2564 = (g_1713--)), (((!(((*l_2510) ^= 0xCD81F5BAL) ^ (((((*l_2567) = l_2566) == (void*)0) , (*l_1891)) < 4294967295UL))) & (-1L)) , 0xBF6C1856L))), (*g_2025))), (*p_15))), 255UL))), l_2407[1])) , 1UL) , (*p_15))))) > 0L) , (*g_18));
            }
            if ((l_2343 ^ ((l_2385[2] = (*l_1891)) , (safe_rshift_func_uint16_t_u_s(0x750FL, ((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((((*l_2578) = (safe_mod_func_uint8_t_u_u((*l_2510), ((*g_1493) , (*l_2510))))) <= 1UL), l_2579[0][3])) == 18446744073709551613UL) ^ (*l_2510)), (*l_2510))), 6)) & (*l_2510)))))))
            { 
                uint8_t l_2583 = 4UL;
                for (g_1396.f0 = 1; (g_1396.f0 <= 5); g_1396.f0 += 1)
                { 
                    int32_t *l_2580 = &l_2471;
                    int32_t *l_2581 = &g_2083;
                    int32_t *l_2582[6][7] = {{(void*)0,&l_2461,&l_2472,&g_19[0][0],&l_2372,(void*)0,&l_2473[3][0]},{&g_552[0][1][0],&l_2471,&l_2461,(void*)0,&l_2473[3][0],&l_2473[3][0],&l_2472},{&g_19[0][0],&l_2372,&g_19[0][0],&g_19[0][0],&l_2372,&g_19[0][0],&g_552[0][1][0]},{&l_2461,&l_2472,&g_19[0][0],&l_2372,(void*)0,&l_2473[3][0],&l_2372},{&l_2473[3][0],&l_2473[3][0],&l_2461,&g_19[0][0],&l_2451,&l_2372,&l_2451},{(void*)0,&l_2461,&l_2461,&l_2471,&l_2285,(void*)0,&g_552[0][1][0]}};
                    int32_t **l_2586 = (void*)0;
                    const int32_t **l_2587 = &g_1890[0];
                    int i, j;
                    l_2583--;
                    (*l_2587) = (void*)0;
                    (*p_16) ^= (-1L);
                }
                if (((safe_sub_func_int64_t_s_s(0L, (l_2407[2] ^ (((void*)0 == &l_2441[1]) < ((safe_div_func_int16_t_s_s((-6L), (0xA9BE3D45L && (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((*l_2510) , (*g_1169)) ^ 0x71E3L), l_2583)), (*l_2510)))))) , 0x8788L))))) & 0L))
                { 
                    l_2596 = l_2596;
                    return (*p_15);
                }
                else
                { 
                    uint32_t l_2601 = 5UL;
                    int32_t l_2602 = 0x7F2FD880L;
                    l_2602 ^= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((*l_1891), (l_2385[0] > l_2601))), (*l_2510)));
                    return (*p_15);
                }
            }
            else
            { 
                uint64_t l_2603 = 3UL;
                int32_t l_2616[4] = {0x49810746L,0x49810746L,0x49810746L,0x49810746L};
                union U1 l_2622 = {0xAC13BB4FL};
                int i;
                (*p_15) = (*p_15);
                if ((l_2603 || (0xFA5EL == ((*l_2510) = (((--g_1396.f0) && (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(6L, (g_1980 = ((void*)0 == l_2611)))), 0x37L))) != 6L)))))
                { 
                    int64_t l_2612 = 0x7E1442F06601EDA3LL;
                    int32_t *l_2613 = &l_2470;
                    int32_t *l_2614 = &l_2462;
                    int32_t *l_2615[4];
                    uint32_t l_2619 = 0xEF004AE9L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2615[i] = &l_2462;
                    --l_2619;
                    (*p_16) |= (l_2622 , ((*g_2025) , ((*l_2510) |= (safe_rshift_func_int16_t_s_u(1L, 2)))));
                    (*l_1891) = (*g_18);
                }
                else
                { 
                    if ((*l_2510))
                        break;
                }
            }
        }
    }
    l_2632[1]++;
    return (*p_15);
}



static int32_t * func_20(int16_t  p_21)
{ 
    int8_t *l_26 = &g_27;
    int32_t *l_49 = &g_19[0][0];
    int32_t **l_48[5][6][6] = {{{&l_49,(void*)0,&l_49,&g_18,(void*)0,&l_49},{&g_18,&l_49,(void*)0,&g_18,(void*)0,&l_49},{(void*)0,&g_18,&l_49,(void*)0,&l_49,&l_49},{(void*)0,(void*)0,&l_49,&g_18,(void*)0,(void*)0},{&g_18,(void*)0,&g_18,&g_18,&l_49,&l_49},{&l_49,&g_18,&g_18,&l_49,(void*)0,(void*)0}},{{&g_18,&l_49,&l_49,&l_49,(void*)0,&l_49},{&l_49,(void*)0,&l_49,&g_18,(void*)0,&l_49},{&g_18,&l_49,(void*)0,&g_18,(void*)0,&l_49},{(void*)0,&g_18,&l_49,(void*)0,&l_49,&l_49},{(void*)0,(void*)0,&l_49,&g_18,(void*)0,(void*)0},{&g_18,(void*)0,&g_18,&g_18,&l_49,&l_49}},{{&l_49,&g_18,&g_18,&l_49,(void*)0,(void*)0},{&g_18,&l_49,&l_49,&l_49,(void*)0,&l_49},{&l_49,(void*)0,&l_49,&g_18,(void*)0,&l_49},{&g_18,&l_49,(void*)0,&g_18,(void*)0,&l_49},{(void*)0,&g_18,&l_49,(void*)0,&l_49,&l_49},{(void*)0,(void*)0,&l_49,&g_18,(void*)0,(void*)0}},{{&g_18,(void*)0,&g_18,&g_18,&l_49,&l_49},{&l_49,&g_18,&g_18,&l_49,(void*)0,(void*)0},{&g_18,&l_49,&l_49,&l_49,(void*)0,&l_49},{&l_49,(void*)0,&l_49,&g_18,(void*)0,&l_49},{&g_18,&l_49,(void*)0,&g_18,(void*)0,&l_49},{(void*)0,&g_18,&l_49,(void*)0,&l_49,&l_49}},{{(void*)0,(void*)0,&l_49,&g_18,(void*)0,(void*)0},{&g_18,(void*)0,&g_18,&g_18,&l_49,&l_49},{&l_49,&g_18,&g_18,&l_49,(void*)0,(void*)0},{&g_18,&l_49,&l_49,&l_49,(void*)0,&l_49},{&l_49,(void*)0,&l_49,&g_18,(void*)0,&l_49},{&g_18,&l_49,(void*)0,&g_18,(void*)0,&l_49}}};
    int32_t *l_50 = &g_19[1][0];
    uint8_t *l_56 = &g_57;
    uint8_t *l_58 = &g_59;
    int8_t *l_60 = &g_35;
    uint32_t *l_1456 = &g_1396.f0;
    int32_t l_1483 = 1L;
    uint8_t ***l_1486 = &g_92;
    uint32_t l_1518 = 2UL;
    struct S0 ***l_1532 = &g_411;
    uint32_t l_1549 = 1UL;
    uint64_t ***l_1580 = &g_805;
    int16_t *l_1620 = &g_498;
    int64_t **l_1628 = &g_105[0];
    uint16_t l_1714[1][6][4] = {{{0x29D7L,0UL,0xE6DBL,9UL},{0xE6DBL,9UL,0xE6DBL,0UL},{0x1C93L,9UL,0x29D7L,9UL},{0x1C93L,0UL,0xE6DBL,9UL},{0xE6DBL,9UL,0xE6DBL,0UL},{0x1C93L,9UL,0x29D7L,9UL}}};
    int16_t l_1751 = 0x033EL;
    struct S0 l_1772 = {0UL,-3L,1L,0UL,1L,3UL,-1L};
    uint32_t l_1779 = 0x6E7563C1L;
    union U1 l_1836[1][4] = {{{0x6D464797L},{0x6D464797L},{0x6D464797L},{0x6D464797L}}};
    uint16_t ** const *l_1854 = &g_1463;
    uint8_t l_1874 = 255UL;
    int i, j, k;
    if ((((*l_1456) = func_22(((*l_26) |= 5L), func_28(g_34, p_21, func_36(func_41((safe_div_func_int32_t_s_s(((p_21 > (~((g_51 = (l_50 = (void*)0)) == &g_19[1][0]))) < (((*l_58) = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((*l_56) |= g_19[0][0]) , (-1L)), 1)), p_21)) || p_21)) > p_21)), (-1L))), p_21, l_60), p_21, p_21, g_8), (*l_49), &g_35), p_21)) > p_21))
    { 
        int32_t l_1459 = 0L;
        int32_t *l_1471 = (void*)0;
        const uint8_t *l_1489[1][3][4] = {{{(void*)0,(void*)0,&g_59,&g_59},{&g_846,&g_846,&g_846,&g_59},{&g_846,&g_59,&g_59,&g_846}}};
        const uint8_t **l_1488 = &l_1489[0][1][2];
        const uint8_t ***l_1487 = &l_1488;
        union U1 l_1531[4] = {{0UL},{0UL},{0UL},{0UL}};
        int32_t l_1543 = 1L;
        int16_t *l_1544 = &g_461.f6;
        uint64_t ***l_1579 = (void*)0;
        int32_t l_1595 = 0x2D9CF959L;
        int32_t l_1596 = (-1L);
        int32_t l_1597 = (-1L);
        int32_t l_1646 = 0L;
        int32_t l_1648[1];
        int16_t l_1649 = 1L;
        int64_t l_1701 = (-9L);
        int32_t l_1716 = 0x42E40E83L;
        union U1 *l_1726 = &g_1727;
        uint8_t l_1730 = 250UL;
        int16_t *****l_1753[3];
        int16_t l_1773[5][4][5] = {{{0L,0x6F24L,0L,0x6F24L,0L},{0x88DCL,0L,0x8E7AL,0x88DCL,(-2L)},{1L,1L,(-9L),0x6F24L,(-9L)},{(-2L),(-2L),1L,0L,(-2L)}},{{0x686BL,0x6F24L,0x686BL,1L,0L},{(-2L),0x8E7AL,0x8E7AL,(-2L),0x88DCL},{1L,0x6F24L,0xD3C0L,0x6F24L,1L},{0x88DCL,(-2L),0x8E7AL,0x8E7AL,(-2L)}},{{0L,1L,0x686BL,0x6F24L,0x686BL},{(-2L),0L,1L,(-2L),(-2L)},{(-9L),0x6F24L,(-9L),1L,1L},{(-2L),0x88DCL,0x8E7AL,0L,0x88DCL}},{{0L,0x6F24L,0L,0x6F24L,0L},{0x88DCL,0L,0x8E7AL,0x88DCL,(-2L)},{1L,1L,(-9L),0x6F24L,(-9L)},{(-2L),(-2L),1L,0L,(-2L)}},{{0x686BL,0x6F24L,0x686BL,1L,0L},{(-2L),0x8E7AL,0x8E7AL,(-2L),0x88DCL},{1L,0x6F24L,0xD3C0L,0x6F24L,1L},{0x88DCL,(-2L),0x8E7AL,0x8E7AL,(-2L)}}};
        uint16_t **l_1777[3];
        struct S0 l_1778 = {18446744073709551614UL,0xD1L,0L,18446744073709551607UL,0x8BB9B849L,3UL,0x9F42L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1648[i] = 0x48028E96L;
        for (i = 0; i < 3; i++)
            l_1753[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_1777[i] = &g_1464;
lbl_1517:
        (*l_49) |= (-5L);
        for (g_1396.f2.f3 = 0; (g_1396.f2.f3 != 60); g_1396.f2.f3 = safe_add_func_uint16_t_u_u(g_1396.f2.f3, 4))
        { 
            const int32_t l_1460[6][1][4] = {{{0xF8DE347BL,0x2C97AA69L,0x461AF21AL,0x461AF21AL}},{{0L,0L,0xF8DE347BL,0x461AF21AL}},{{0x27818545L,0x2C97AA69L,0x27818545L,0xF8DE347BL}},{{0x27818545L,0xF8DE347BL,0xF8DE347BL,0x27818545L}},{{0L,0xF8DE347BL,0x461AF21AL,0xF8DE347BL}},{{0xF8DE347BL,0x2C97AA69L,0x461AF21AL,0x461AF21AL}}};
            int8_t * const l_1470 = &g_246;
            uint8_t ****l_1503 = &l_1486;
            int64_t l_1515 = 0L;
            struct S0 ****l_1533 = (void*)0;
            struct S0 ****l_1534 = &l_1532;
            int32_t l_1547 = 0xD0FD4160L;
            int32_t l_1548[4] = {3L,3L,3L,3L};
            int32_t *l_1594[6][5] = {{(void*)0,&g_552[0][1][0],(void*)0,&g_552[0][1][0],(void*)0},{&g_552[0][1][0],&l_1548[2],&l_1548[2],&g_552[0][1][0],&g_552[0][1][0]},{&g_552[4][0][0],&g_552[0][1][0],&g_552[4][0][0],&g_552[0][1][0],&g_552[4][0][0]},{&g_552[0][1][0],&g_552[0][1][0],&l_1548[2],&l_1548[2],&g_552[0][1][0]},{(void*)0,&g_552[0][1][0],(void*)0,&g_552[0][1][0],(void*)0},{&g_552[0][1][0],&l_1548[2],&l_1548[2],&g_552[0][1][0],&g_552[0][1][0]}};
            int64_t l_1598 = 0x7B59E703D66B0333LL;
            int16_t *l_1617 = (void*)0;
            uint64_t l_1629 = 0x7DF80937E0EDE0C1LL;
            uint16_t l_1650 = 1UL;
            int64_t l_1666 = 0x8FAE499AE5D75218LL;
            int32_t l_1708 = 0xEE4530A0L;
            uint32_t l_1715 = 4294967288UL;
            int i, j, k;
            if (l_1459)
            { 
                uint64_t *l_1462 = &g_61.f2.f5;
                uint16_t ***l_1465 = (void*)0;
                uint16_t ***l_1466 = &g_1463;
                uint16_t **l_1468[1][7] = {{&g_1464,&g_1464,&g_1464,&g_1464,&g_1464,&g_1464,&g_1464}};
                uint16_t ***l_1467 = &l_1468[0][2];
                int32_t l_1469 = 0x3607FCA4L;
                int i, j;
                if (p_21)
                    break;
                if (p_21)
                    break;
                l_1471 = &g_19[1][0];
            }
            else
            { 
                const uint8_t ****l_1490 = &l_1487;
                int8_t *l_1495 = &g_27;
                int32_t l_1496 = 0x41F3FF44L;
                (*l_49) = ((8L == (safe_add_func_uint64_t_u_u(18446744073709551615UL, (+(((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_1483, ((safe_add_func_uint64_t_u_u((l_1486 == (g_1491 = ((*l_1490) = l_1487))), ((l_1460[4][0][3] , l_1495) != (void*)0))) , (-1L)))), l_1496)), l_1459)), 0xAD38L)) , 0xF2214DF829983938LL) || p_21))))) || 0xAD6476A1F383806BLL);
            }
            for (g_410.f2.f5 = (-2); (g_410.f2.f5 >= 30); ++g_410.f2.f5)
            { 
                int32_t * const l_1501 = &g_552[0][1][0];
                uint64_t l_1516 = 1UL;
                int32_t *l_1526 = &g_19[1][0];
                for (g_461.f5 = 0; (g_461.f5 > 8); ++g_461.f5)
                { 
                    int32_t **l_1502 = &l_50;
                    uint8_t *****l_1504 = &g_299;
                    (*l_1502) = l_1501;
                    (*l_1504) = l_1503;
                    (*l_1501) ^= p_21;
                    (*l_49) ^= ((*l_1502) != (void*)0);
                }
                for (g_461.f4 = 4; (g_461.f4 >= 1); g_461.f4 -= 1)
                { 
                    int16_t ***l_1523 = &g_1168[2];
                    int16_t ****l_1522 = &l_1523;
                    int16_t *****l_1521 = &l_1522;
                    (*l_49) = ((((p_21 == ((*l_1501) ^ p_21)) != (*g_34)) > ((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((*g_34) < (safe_lshift_func_uint16_t_u_u(((g_820 , ((((safe_mul_func_uint16_t_u_u((g_193 ^= (0xBBB56521L > 1L)), (*l_49))) >= l_1515) | (*g_129)) == l_1516)) == 0xBC590BEFB0C86DEDLL), 13))), (*g_18))), 0x77L)) < g_410.f0)) > p_21);
                    if (g_61.f0)
                        goto lbl_1517;
                    l_1518--;
                    g_1524 = l_1521;
                }
                l_1526 = &l_1459;
                g_51 = l_1526;
            }
            if ((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0x77L, (l_1531[2] , ((&g_411 != ((*l_1534) = l_1532)) == ((((safe_div_func_int8_t_s_s((((*g_18) ^= l_1515) <= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((p_21 || (safe_sub_func_int32_t_s_s(p_21, p_21))) , l_1543) & p_21), 7)), p_21))), l_1515)) , l_1544) != &p_21) , (*g_34)))))), (*g_34))))
            { 
                for (l_1518 = 0; (l_1518 < 4); l_1518 = safe_add_func_uint32_t_u_u(l_1518, 8))
                { 
                    ++l_1549;
                }
            }
            else
            { 
                int16_t l_1565 = 1L;
                uint16_t *l_1566 = &g_193;
                int32_t l_1581 = 0x31E66370L;
                union U1 l_1587 = {5UL};
                (*l_49) = (*g_18);
                if (((+(safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((*g_34), (safe_rshift_func_uint8_t_u_s(((0L ^ (++(*l_58))) != ((safe_mul_func_uint16_t_u_u(((((*l_1534) = (void*)0) != (((*l_1566)++) , &g_411)) & ((((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u((*l_49), (((p_21 && (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(0xEE02L, p_21)) , p_21), l_1565)), p_21))) < l_1460[5][0][2]) , 65535UL))), (-4L))) & p_21) && p_21) >= 0x782F4C0040DB2677LL)), p_21)) | 0x64L)), 0)))), p_21)), p_21))) ^ p_21))
                { 
                    l_1580 = l_1579;
                }
                else
                { 
                    uint64_t l_1582 = 0xE4A03880A01ED460LL;
                    l_1582--;
                }
                for (g_193 = 0; (g_193 <= 5); g_193 = safe_add_func_uint32_t_u_u(g_193, 9))
                { 
                    uint16_t l_1588 = 8UL;
                    int64_t *l_1589 = &g_87;
                    (*g_18) = ((*g_18) != (l_1587 , (-3L)));
                    g_51 = &g_19[1][0];
                    (*g_51) ^= ((p_21 > ((*l_1589) ^= l_1588)) == p_21);
                }
            }
            for (g_61.f2.f5 = 0; (g_61.f2.f5 < 8); g_61.f2.f5 = safe_add_func_int16_t_s_s(g_61.f2.f5, 5))
            { 
                uint32_t l_1602 = 4294967294UL;
                int16_t *l_1619[1][1][6] = {{{&g_498,&g_498,(void*)0,&g_498,&g_498,(void*)0}}};
                int64_t **l_1627 = (void*)0;
                int32_t l_1641 = 9L;
                int32_t l_1643 = 0L;
                int32_t l_1644 = 0x1E7BC238L;
                int32_t l_1645[6] = {(-1L),(-1L),0xEF119E0EL,(-1L),(-1L),0xEF119E0EL};
                int32_t l_1664 = 1L;
                int8_t l_1665 = 0xA6L;
                uint8_t l_1700[3];
                int16_t l_1720 = (-1L);
                uint8_t l_1721 = 0x25L;
                union U1 *l_1729 = &g_1727;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1700[i] = 254UL;
                for (l_1459 = 22; (l_1459 < 4); --l_1459)
                { 
                    uint32_t l_1599 = 18446744073709551615UL;
                    uint64_t *l_1614 = (void*)0;
                    uint64_t *l_1615 = &g_410.f2.f5;
                    uint64_t *l_1616 = &g_461.f5;
                    int16_t **l_1618 = &l_1544;
                    l_1594[3][3] = &l_1459;
                    if ((*g_18))
                        break;
                    --l_1599;
                    l_1602 = (*g_18);
                    (*g_18) = (((safe_mod_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((+(18446744073709551615UL & (((*l_1616) |= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_1602, 11)), 0x877AL))) & ((p_21 , ((*l_1618) = l_1617)) == (l_1620 = l_1619[0][0][0]))))), p_21)), 18446744073709551613UL)) == l_1599), p_21)) < (**g_1492)) | l_1602);
                }
                if (p_21)
                { 
                    if (p_21)
                        break;
                }
                else
                { 
                    uint32_t *l_1640 = &l_1531[2].f0;
                    int32_t l_1642 = 1L;
                    int32_t l_1647[2][4] = {{0x78CEC308L,0x78CEC308L,0L,0x78CEC308L},{0x78CEC308L,0x1B2B3BB8L,0x1B2B3BB8L,0x78CEC308L}};
                    uint64_t l_1667 = 0x3FE93B2A966918C1LL;
                    int i, j;
                    g_51 = ((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((((l_1627 != l_1628) == (0x08DB8C17L != (((**l_1628) = (l_1629 >= ((safe_div_func_uint64_t_u_u(1UL, (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((*l_1640) = (safe_mod_func_uint32_t_u_u(g_406.f0, p_21))), p_21)), 1L)), p_21)))) ^ p_21))) , 4294967295UL))) < 0x9DL) , p_21), (**g_1492))) != p_21), p_21)), 0x48L)) , l_1640);
                    l_1650++;
                    (*l_49) &= 0x5BEAC54BL;
                    (*g_51) |= ((*g_18) &= (~(p_21 <= (((safe_mul_func_int8_t_s_s((*g_34), (-10L))) < ((((((safe_mul_func_uint8_t_u_u((((((*g_1169) , (safe_mul_func_uint8_t_u_u(0x63L, (((safe_sub_func_uint64_t_u_u((6UL ^ ((safe_div_func_int32_t_s_s((-7L), p_21)) , (*g_1493))), l_1664)) , l_1665) >= (*g_1493))))) , l_1664) <= 7UL) & p_21), l_1666)) == 0x0D55L) ^ 251UL) == p_21) >= p_21) | l_1667)) > l_1667))));
                }
                if (p_21)
                { 
                    uint64_t l_1680[6][5] = {{0UL,18446744073709551610UL,18446744073709551610UL,0UL,0UL},{0x0F56FF05BB781D85LL,0x0A64EC18857223B3LL,0x0F56FF05BB781D85LL,0x0A64EC18857223B3LL,0x0F56FF05BB781D85LL},{0UL,0UL,18446744073709551610UL,18446744073709551610UL,0UL},{1UL,0x0A64EC18857223B3LL,1UL,0x0A64EC18857223B3LL,1UL},{0UL,18446744073709551610UL,18446744073709551610UL,0UL,0UL},{0x0F56FF05BB781D85LL,0x0A64EC18857223B3LL,0x0F56FF05BB781D85LL,0x0A64EC18857223B3LL,0x0F56FF05BB781D85LL}};
                    uint32_t *l_1681 = &l_1531[2].f0;
                    uint16_t *l_1686 = &g_193;
                    int i, j;
                    l_1596 ^= (safe_sub_func_uint64_t_u_u((0x1B4931E8B0564F6CLL | (safe_sub_func_uint32_t_u_u(((*l_1681) = ((safe_mul_func_int8_t_s_s(((*g_34) = (1L & (safe_sub_func_uint64_t_u_u((*l_49), (safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s(p_21, ((0x5D1AD681L != p_21) && l_1680[4][1]))), p_21)))))), p_21)) ^ l_1595)), (*l_49)))), p_21));
                    l_1645[0] |= ((((*g_34) && (safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(((*l_1686) &= (&g_1525 == &g_1525)), (((l_1680[4][1] , (safe_mul_func_int8_t_s_s(p_21, (safe_sub_func_uint16_t_u_u(((((safe_unary_minus_func_uint64_t_u(((((safe_lshift_func_int16_t_s_u(l_1680[4][1], 9)) && ((((~(safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(((g_1699 | l_1700[2]) > (*l_49)), 0x5B7FF60428D364A2LL)), p_21))) >= (*l_49)) | 6UL) <= (*g_34))) > 1UL) > p_21))) , 0x51A646B1L) & 0x6D1EB087L) == p_21), p_21))))) != l_1665) , l_1701))) && 0x6C46L), 0x82446C0DL))) <= 1L) == l_1680[4][1]);
                }
                else
                { 
                    int32_t l_1712 = (-9L);
                    (*g_18) ^= ((((safe_add_func_int8_t_s_s(((*l_26) = ((safe_add_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((g_1709[0][2] |= (1UL | (((void*)0 == l_1619[0][0][0]) > l_1708))), 3)) | (p_21 | (safe_sub_func_uint32_t_u_u(((((l_1712 , ((0L & g_1713) == l_1714[0][5][3])) < l_1712) , l_1712) < 0xAF177480B5D30194LL), p_21)))) ^ p_21), p_21)) < l_1715)), l_1712)) == 0x29L) > 0L) <= l_1716);
                    return &g_820;
                }
                for (l_1547 = 0; (l_1547 >= 26); ++l_1547)
                { 
                    int64_t l_1719 = 0x3885CB74EADE60B9LL;
                    ++l_1721;
                    if (l_1719)
                        continue;
                }
                for (g_410.f2.f0 = (-29); (g_410.f2.f0 == 35); g_410.f2.f0 = safe_add_func_uint64_t_u_u(g_410.f2.f0, 1))
                { 
                    int64_t l_1728 = 1L;
                    l_1726 = ((*g_863) = (*g_863));
                    if (l_1728)
                        break;
                    (*g_863) = l_1729;
                    (*g_18) ^= 3L;
                    (*l_49) = (p_21 <= p_21);
                }
            }
            l_1730++;
        }
        for (g_61.f2.f3 = (-23); (g_61.f2.f3 == 8); g_61.f2.f3++)
        { 
            struct S0 * const l_1749 = (void*)0;
            struct S0 * const *l_1748[7][5] = {{(void*)0,(void*)0,&l_1749,&l_1749,&l_1749},{(void*)0,&l_1749,&l_1749,&l_1749,(void*)0},{&l_1749,&l_1749,&l_1749,(void*)0,(void*)0},{&l_1749,&l_1749,&l_1749,&l_1749,&l_1749},{&l_1749,(void*)0,&l_1749,&l_1749,(void*)0},{(void*)0,&l_1749,&l_1749,&l_1749,(void*)0},{(void*)0,&l_1749,&l_1749,(void*)0,&l_1749}};
            struct S0 * const **l_1747 = &l_1748[3][0];
            const uint8_t ****l_1750 = &l_1487;
            uint16_t *l_1752[3][1][4];
            const int32_t l_1754 = 0xA5AF4D92L;
            uint8_t l_1774[5];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_1752[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 5; i++)
                l_1774[i] = 1UL;
            (*l_49) = ((0L > (0UL > (safe_mul_func_int16_t_s_s(((*g_1169) = ((((safe_mul_func_int16_t_s_s(p_21, (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((((l_1595 = (safe_mod_func_uint64_t_u_u((((*l_1747) = (void*)0) == (p_21 , &g_412)), (((l_1750 == &g_1491) , l_1751) & (*l_49))))) , l_1753[1]) != (void*)0) || l_1754), l_1754)), g_148)))) | l_1754) && (-1L)) < l_1754)), p_21)))) ^ (*g_18));
            g_552[0][1][0] |= ((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((g_193 = p_21), p_21)), (((safe_div_func_int64_t_s_s((((safe_mod_func_uint64_t_u_u((0xC2C15575L >= (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((*l_56) = ((safe_mod_func_uint64_t_u_u(p_21, l_1648[0])) , (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s(((*l_49) >= ((((*l_60) = (l_1772 , l_1754)) == 250UL) != p_21)))), 2)))) || l_1773[3][0][4]), 4UL)), (*g_1493)))), p_21)) < (*g_18)) >= 0xD964915626D30F4FLL), (-7L))) & l_1754) <= l_1774[3]))) , 0L);
        }
        (*g_18) &= ((p_21 = ((void*)0 != &l_1471)) <= ((2UL || ((safe_mul_func_uint8_t_u_u(((void*)0 == l_1777[2]), ((*g_34) = (*g_34)))) > (l_1778 , l_1779))) || l_1649));
    }
    else
    { 
        int32_t *l_1782 = &g_552[0][1][0];
        int32_t l_1812[5][3];
        uint32_t l_1814[3][6];
        uint16_t **l_1832 = (void*)0;
        uint8_t ***l_1860 = (void*)0;
        uint8_t **l_1862 = &l_56;
        uint8_t ***l_1861 = &l_1862;
        uint32_t l_1868 = 3UL;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
                l_1812[i][j] = 0x7CADE385L;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
                l_1814[i][j] = 0x399C2FFCL;
        }
lbl_1855:
        for (g_820 = (-13); (g_820 > (-10)); g_820 = safe_add_func_int64_t_s_s(g_820, 8))
        { 
            return l_1782;
        }
        if ((safe_add_func_int16_t_s_s(((+(*g_18)) ^ (p_21 ^ 1L)), p_21)))
        { 
            uint8_t l_1786 = 1UL;
            int32_t l_1787 = 0xFCC111B1L;
            const uint8_t ****l_1791[7][7] = {{&g_1491,(void*)0,(void*)0,&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491},{(void*)0,&g_1491,&g_1491,&g_1491,(void*)0,(void*)0,&g_1491},{&g_1491,(void*)0,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491,&g_1491}};
            const uint8_t *****l_1790 = &l_1791[2][1];
            int i, j;
            l_1787 = ((*l_1782) = (0x08B4BEC7L < ((*l_1782) <= l_1786)));
            (*l_1782) ^= (safe_div_func_uint16_t_u_u((((*l_1790) = &g_1491) != &l_1486), (*l_49)));
        }
        else
        { 
            const int32_t l_1801 = 0xD48E7D03L;
            int32_t l_1811 = 0x375E9D73L;
            int8_t *l_1817 = &g_35;
            struct S0 l_1831[5] = {{0x76E438F9L,0x7CL,1L,0x8F0F84E8L,5L,1UL,0L},{0x76E438F9L,0x7CL,1L,0x8F0F84E8L,5L,1UL,0L},{0x76E438F9L,0x7CL,1L,0x8F0F84E8L,5L,1UL,0L},{0x76E438F9L,0x7CL,1L,0x8F0F84E8L,5L,1UL,0L},{0x76E438F9L,0x7CL,1L,0x8F0F84E8L,5L,1UL,0L}};
            int i;
            if (((*l_49) = (((((*g_129) = (safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((0xADEE7A33L < ((*g_129) & (safe_mod_func_int8_t_s_s((*g_34), (*g_1493))))) != (*l_1782)), (*g_34))), (((*l_1620) |= (!(safe_add_func_uint32_t_u_u((((void*)0 == (**l_1532)) , p_21), 1UL)))) && p_21)))) , 0UL) != p_21) , 0xC08E2F19L)))
            { 
                uint8_t l_1808 = 255UL;
                int32_t l_1809 = (-5L);
                union U1 ** const *l_1810 = &g_863;
                int32_t l_1842 = 0L;
            }
            else
            { 
                int8_t l_1849 = 1L;
                (*l_49) = (((((safe_div_func_int16_t_s_s(((*l_1620) ^= ((!(0UL < (safe_sub_func_int64_t_s_s((-3L), l_1849)))) & ((((safe_lshift_func_int8_t_s_s((l_1849 && ((l_1831[1] , ((safe_lshift_func_int16_t_s_u((*g_1169), p_21)) , p_21)) , l_1831[0].f5)), 3)) <= 0x8C89CDA2898DEBCBLL) & p_21) ^ p_21))), p_21)) <= 0x1ECC993650648D6CLL) > p_21) , (void*)0) != l_1854);
                if (g_148)
                    goto lbl_1855;
            }
        }
        for (l_1549 = (-4); (l_1549 != 37); l_1549 = safe_add_func_int8_t_s_s(l_1549, 1))
        { 
            return &g_19[0][0];
        }
        (*l_49) |= (((safe_mul_func_uint8_t_u_u(0x82L, ((*l_1782) <= p_21))) , (**g_299)) != ((*l_1861) = (**g_299)));
        for (g_61.f2.f0 = 0; (g_61.f2.f0 == 28); g_61.f2.f0 = safe_add_func_uint16_t_u_u(g_61.f2.f0, 5))
        { 
            int32_t *l_1865[5][1][6] = {{{&l_1812[1][1],&g_820,(void*)0,(void*)0,(void*)0,&g_820}},{{&l_1812[1][1],&g_820,(void*)0,(void*)0,(void*)0,&g_820}},{{&l_1812[1][1],&g_820,(void*)0,(void*)0,(void*)0,&g_820}},{{&l_1812[1][1],&g_820,(void*)0,(void*)0,(void*)0,&g_820}},{{&l_1812[1][1],&g_820,(void*)0,(void*)0,(void*)0,&g_820}}};
            int32_t *l_1866 = &l_1812[1][1];
            int32_t l_1867 = (-8L);
            int i, j, k;
            l_1865[0][0][0] = l_1865[0][0][0];
            l_1866 = l_1866;
            ++l_1868;
            (*l_1782) = (!(safe_mod_func_uint32_t_u_u(p_21, 0xAA37292BL)));
        }
    }
    l_1874++;
    return &g_820;
}



static uint32_t  func_22(int8_t  p_23, int32_t * p_24, uint32_t  p_25)
{ 
    uint32_t l_1453 = 18446744073709551615UL;
    (*g_18) &= (p_23 >= l_1453);
    for (g_461.f4 = (-7); (g_461.f4 < 26); ++g_461.f4)
    { 
        if (l_1453)
            break;
    }
    return l_1453;
}



static int32_t * func_28(int8_t * p_29, int64_t  p_30, int8_t * p_31, uint8_t  p_32, int8_t * const  p_33)
{ 
    int32_t *l_471 = &g_19[1][0];
    int32_t **l_472 = &l_471;
    uint16_t *l_473 = (void*)0;
    int32_t l_474 = 0L;
    uint32_t l_481 = 0x7F4098CCL;
    uint32_t l_495 = 18446744073709551615UL;
    uint8_t ***l_496[7] = {&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92};
    const union U1 l_513[2] = {{4294967293UL},{4294967293UL}};
    uint64_t l_539 = 0x8DA7586316DA471BLL;
    uint8_t ****l_542 = &l_496[2];
    struct S0 l_548[4][2] = {{{18446744073709551609UL,0x46L,0x05E8F6FAFF094920LL,18446744073709551615UL,0L,0x056EC75AE30386C4LL,0xF34AL},{18446744073709551609UL,0x46L,0x05E8F6FAFF094920LL,18446744073709551615UL,0L,0x056EC75AE30386C4LL,0xF34AL}},{{18446744073709551609UL,0x46L,0x05E8F6FAFF094920LL,18446744073709551615UL,0L,0x056EC75AE30386C4LL,0xF34AL},{18446744073709551609UL,0x46L,0x05E8F6FAFF094920LL,18446744073709551615UL,0L,0x056EC75AE30386C4LL,0xF34AL}},{{18446744073709551609UL,0x46L,0x05E8F6FAFF094920LL,18446744073709551615UL,0L,0x056EC75AE30386C4LL,0xF34AL},{18446744073709551609UL,0x46L,0x05E8F6FAFF094920LL,18446744073709551615UL,0L,0x056EC75AE30386C4LL,0xF34AL}},{{18446744073709551609UL,0x46L,0x05E8F6FAFF094920LL,18446744073709551615UL,0L,0x056EC75AE30386C4LL,0xF34AL},{18446744073709551609UL,0x46L,0x05E8F6FAFF094920LL,18446744073709551615UL,0L,0x056EC75AE30386C4LL,0xF34AL}}};
    union U1 ** const l_586 = (void*)0;
    int32_t l_729[5] = {0x32580720L,0x32580720L,0x32580720L,0x32580720L,0x32580720L};
    int16_t *l_740 = &g_410.f2.f6;
    const int32_t l_749 = 0x603C42A6L;
    uint64_t l_750[2][6] = {{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL}};
    int64_t *l_773 = (void*)0;
    const struct S0 *l_855[5];
    const struct S0 **l_854 = &l_855[1];
    const struct S0 ***l_853[3][3] = {{&l_854,&l_854,&l_854},{&l_854,&l_854,&l_854},{&l_854,&l_854,&l_854}};
    union U1 **l_867 = (void*)0;
    int16_t l_870 = 7L;
    uint64_t l_974 = 1UL;
    int16_t *l_998 = (void*)0;
    uint64_t l_1057 = 0x9507B007650A6E0BLL;
    int8_t l_1091 = 0x56L;
    uint8_t l_1122 = 255UL;
    int16_t l_1140 = (-5L);
    int16_t l_1246 = 1L;
    uint8_t l_1249[5][3] = {{0x43L,0xD7L,0x43L},{0x43L,0xD7L,0x43L},{0x43L,0xD7L,0x43L},{0x43L,0xD7L,0x43L},{0x43L,0xD7L,0x43L}};
    uint16_t l_1353[5] = {0xC21DL,0xC21DL,0xC21DL,0xC21DL,0xC21DL};
    uint32_t l_1372 = 0x1E9274C9L;
    uint16_t l_1382 = 0xE7D6L;
    union U1 ***l_1388 = (void*)0;
    union U1 ****l_1387[4][6][4] = {{{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0}},{{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0}},{{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0}},{{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0},{(void*)0,&l_1388,&l_1388,(void*)0}}};
    uint64_t l_1403[6][4][5] = {{{18446744073709551615UL,1UL,0x7FAAF216DFB88E88LL,6UL,9UL},{18446744073709551614UL,0UL,0UL,1UL,0x86DE9F42035D866BLL},{18446744073709551615UL,0x83600D61CD940186LL,0x7B580C4A3E63D9E4LL,9UL,0xE7096A27105B9366LL},{0x9AAA76F3EAF375F9LL,0x5EBE162554B98AD3LL,0x5EBE162554B98AD3LL,0x9AAA76F3EAF375F9LL,0xD30890118842B476LL}},{{18446744073709551615UL,0x8D54A04F5274AB8FLL,0xAD998C4DD86142D2LL,0x83600D61CD940186LL,0x913273D5C55204B4LL},{0x8DA9392143886316LL,0x86DE9F42035D866BLL,18446744073709551615UL,0xD30890118842B476LL,18446744073709551614UL},{0x913273D5C55204B4LL,0x7B580C4A3E63D9E4LL,0xA346DD48C3B4D600LL,0x83600D61CD940186LL,9UL},{0x5639A42A16289A71LL,0x8DA9392143886316LL,0x5639A42A16289A71LL,4UL,0x39B228CC0D5A8E11LL}},{{18446744073709551608UL,0xA346DD48C3B4D600LL,0x9F1B193C2A2FAA4ELL,0x9F1B193C2A2FAA4ELL,0xA346DD48C3B4D600LL},{18446744073709551611UL,0UL,0xCDED4AF8629B769FLL,0xD30890118842B476LL,0UL},{0x7B580C4A3E63D9E4LL,0xC1BBFA35EAA35D9CLL,0x913273D5C55204B4LL,9UL,1UL},{0xCDED4AF8629B769FLL,0x2A21BFE8C6AF6428LL,0UL,0UL,0x8DA9392143886316LL}},{{0x7B580C4A3E63D9E4LL,1UL,0x512ACA9C18C8AF23LL,0x7B580C4A3E63D9E4LL,18446744073709551615UL},{18446744073709551611UL,4UL,8UL,0x2A21BFE8C6AF6428LL,0x2A21BFE8C6AF6428LL},{18446744073709551608UL,0x72756159A6CBE7A5LL,18446744073709551608UL,18446744073709551615UL,0x7B580C4A3E63D9E4LL},{0x2A21BFE8C6AF6428LL,8UL,0UL,0x8DA9392143886316LL,0UL}},{{18446744073709551615UL,18446744073709551615UL,0xE7096A27105B9366LL,1UL,9UL},{0x342EA25A100CB8A3LL,0xD30890118842B476LL,0UL,0UL,0xD30890118842B476LL},{0xC1BBFA35EAA35D9CLL,0xAD998C4DD86142D2LL,18446744073709551608UL,0xA346DD48C3B4D600LL,0x9F1B193C2A2FAA4ELL},{4UL,0x39B228CC0D5A8E11LL,8UL,0x39B228CC0D5A8E11LL,4UL}},{{0UL,18446744073709551615UL,0x512ACA9C18C8AF23LL,0x9F1B193C2A2FAA4ELL,0x7FAAF216DFB88E88LL},{0x41B96D0FA7654124LL,8UL,0UL,0x41B96D0FA7654124LL,0UL},{0xA346DD48C3B4D600LL,0x7B580C4A3E63D9E4LL,0x913273D5C55204B4LL,18446744073709551615UL,0x7FAAF216DFB88E88LL},{0x342EA25A100CB8A3LL,0x41B96D0FA7654124LL,0xCDED4AF8629B769FLL,0UL,4UL}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_855[i] = &g_461;
    if ((((*g_18) = ((p_32 = (g_336[1] , (safe_mul_func_int16_t_s_s(0L, ((*p_31) > (*p_33)))))) || ((+((((*l_472) = l_471) == &g_19[1][0]) >= (l_473 != l_473))) & l_474))) > p_30))
    { 
        int16_t l_475 = 0xD841L;
        int32_t *l_476 = &l_474;
        int8_t l_497 = 0x4DL;
        int32_t l_499 = 0x03558630L;
        int8_t *l_514 = (void*)0;
        int8_t *l_515 = &l_497;
        (*l_476) ^= ((*g_18) = l_475);
        for (g_61.f2.f4 = 0; (g_61.f2.f4 <= 0); g_61.f2.f4 += 1)
        { 
            int32_t *l_477 = &g_19[1][0];
            int32_t *l_478 = (void*)0;
            int32_t *l_479 = &g_19[1][0];
            int32_t *l_480[7] = {&l_474,&l_474,&l_474,&l_474,&l_474,&l_474,&l_474};
            int i;
            ++l_481;
            if (p_30)
                break;
        }
        (*g_18) = (*g_18);
        if (((**l_472) = (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(4294967291UL, (*l_476))), 4)), (l_513[0] , (*g_34)))), 5)) || ((*g_129) ^= (((*l_515) = ((*p_31) ^= (g_276 , ((*p_29) = (*l_471))))) > ((((*l_476) , g_406.f0) != (-8L)) , p_32)))), 15))))
        { 
            uint64_t *l_517[6][7][6] = {{{&g_433,&g_461.f5,&g_461.f5,&g_433,&g_461.f5,&g_461.f5},{(void*)0,&g_461.f5,&g_433,&g_433,&g_461.f5,(void*)0},{&g_461.f5,&g_433,&g_461.f5,&g_433,&g_433,(void*)0},{&g_461.f5,&g_433,&g_433,(void*)0,(void*)0,&g_433},{&g_433,&g_433,(void*)0,&g_461.f5,&g_433,&g_433},{&g_433,&g_433,&g_433,&g_461.f5,&g_461.f5,&g_433},{&g_461.f5,&g_461.f5,&g_461.f5,(void*)0,&g_433,&g_433}},{{&g_433,&g_461.f5,&g_461.f5,&g_461.f5,&g_433,&g_461.f5},{&g_433,&g_433,&g_461.f5,&g_433,&g_461.f5,&g_433},{&g_461.f5,&g_433,&g_461.f5,&g_461.f5,(void*)0,&g_433},{&g_461.f5,(void*)0,&g_433,&g_461.f5,&g_433,&g_433},{&g_433,(void*)0,(void*)0,&g_461.f5,&g_433,&g_433},{&g_433,&g_461.f5,&g_433,(void*)0,(void*)0,(void*)0},{&g_461.f5,&g_433,&g_461.f5,&g_461.f5,&g_433,(void*)0}},{{(void*)0,&g_461.f5,&g_433,&g_461.f5,(void*)0,&g_461.f5},{&g_461.f5,&g_461.f5,&g_461.f5,&g_461.f5,&g_461.f5,&g_461.f5},{(void*)0,&g_433,&g_461.f5,&g_461.f5,&g_433,&g_461.f5},{&g_433,(void*)0,&g_461.f5,&g_461.f5,&g_461.f5,&g_433},{&g_461.f5,&g_461.f5,&g_433,&g_461.f5,&g_461.f5,(void*)0},{&g_433,&g_461.f5,&g_433,&g_433,(void*)0,(void*)0},{&g_461.f5,&g_461.f5,&g_461.f5,&g_461.f5,&g_433,&g_433}},{{(void*)0,&g_433,&g_461.f5,&g_461.f5,&g_461.f5,&g_433},{&g_461.f5,&g_461.f5,&g_433,(void*)0,&g_461.f5,&g_461.f5},{&g_461.f5,&g_433,(void*)0,&g_433,&g_433,&g_461.f5},{&g_433,&g_461.f5,&g_433,(void*)0,(void*)0,&g_461.f5},{&g_461.f5,&g_461.f5,(void*)0,&g_433,&g_461.f5,(void*)0},{&g_461.f5,&g_461.f5,&g_433,&g_433,&g_461.f5,(void*)0},{&g_433,(void*)0,&g_461.f5,(void*)0,&g_433,&g_433}},{{&g_461.f5,&g_433,&g_461.f5,&g_461.f5,&g_461.f5,&g_433},{&g_433,&g_461.f5,&g_461.f5,&g_433,&g_433,&g_433},{&g_461.f5,&g_461.f5,&g_461.f5,&g_433,&g_461.f5,&g_433},{&g_433,&g_461.f5,&g_461.f5,&g_461.f5,&g_433,(void*)0},{&g_433,(void*)0,&g_433,&g_433,&g_461.f5,(void*)0},{(void*)0,&g_433,(void*)0,(void*)0,&g_433,&g_461.f5},{&g_461.f5,&g_433,&g_433,&g_433,&g_433,&g_461.f5}},{{&g_461.f5,&g_461.f5,(void*)0,&g_461.f5,&g_433,&g_461.f5},{(void*)0,&g_461.f5,&g_433,&g_461.f5,(void*)0,&g_433},{(void*)0,&g_461.f5,&g_461.f5,&g_461.f5,&g_461.f5,&g_433},{&g_461.f5,&g_433,&g_461.f5,&g_433,(void*)0,(void*)0},{&g_461.f5,&g_461.f5,&g_433,(void*)0,&g_433,(void*)0},{(void*)0,&g_433,&g_433,&g_433,&g_433,&g_433},{&g_433,&g_461.f5,&g_461.f5,&g_461.f5,&g_461.f5,&g_461.f5}}};
            int32_t l_518 = 0xC05BFC92L;
            int i, j, k;
            (*g_18) = (safe_unary_minus_func_uint32_t_u(((l_518 = 0xA32CBFFB4B3FA38CLL) , (safe_lshift_func_uint16_t_u_u(g_461.f2, g_336[4])))));
        }
        else
        { 
            int32_t l_538 = 0x95FC4E59L;
            l_539 ^= ((((safe_lshift_func_uint16_t_u_s(65534UL, ((safe_mod_func_uint32_t_u_u(p_30, (safe_add_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((*p_31), 6)) ^ (p_30 < (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(0x95946995L, ((1L <= (((((*l_476) = ((*g_18) = ((~(g_336[1] , 0x01L)) ^ p_30))) < p_30) && (**l_472)) == p_32)) || (*p_31)))), (-10L))), p_30)), l_538)))) != p_30), 1L)))) , g_194))) > l_538) > l_538) >= (*g_34));
            return &g_19[1][0];
        }
    }
    else
    { 
        int16_t l_557 = 0x63EBL;
        const int32_t l_579 = 0x1223959DL;
        uint8_t l_617[2][1][7] = {{{1UL,0x33L,1UL,1UL,0x33L,1UL,1UL}},{{0x38L,0x38L,255UL,0x38L,0x38L,255UL,0x38L}}};
        int32_t l_622[1][4][7] = {{{(-5L),0xF5DE37E3L,0L,0xECA3DA52L,0L,0xF5DE37E3L,(-5L)},{0x21DBCC12L,0L,0x21DBCC12L,0x21DBCC12L,0L,0x21DBCC12L,0x21DBCC12L},{(-5L),0xECA3DA52L,(-3L),0xECA3DA52L,(-5L),(-9L),(-5L)},{0L,0x21DBCC12L,0x21DBCC12L,0x21DBCC12L,0x3C382A99L,0x3C382A99L,0x21DBCC12L}}};
        const uint8_t *l_649 = &l_617[0][0][6];
        const uint8_t **l_648 = &l_649;
        const uint8_t ** const *l_647[1][5] = {{&l_648,&l_648,&l_648,&l_648,&l_648}};
        const uint8_t ** const **l_646 = &l_647[0][4];
        int32_t l_675 = 0L;
        uint64_t *l_682 = &g_433;
        uint16_t *l_707 = (void*)0;
        int32_t *l_720 = &g_552[0][1][0];
        int32_t *l_721 = &l_622[0][1][0];
        int32_t *l_722 = &g_552[0][1][0];
        int32_t *l_723 = &g_552[4][0][0];
        int32_t *l_724 = (void*)0;
        int32_t *l_725 = &l_622[0][1][0];
        int32_t *l_726 = (void*)0;
        int32_t *l_727 = &l_675;
        int32_t *l_728[7] = {&g_552[1][0][0],&g_552[1][0][0],&g_552[1][0][0],&g_552[1][0][0],&g_552[1][0][0],&g_552[1][0][0],&g_552[1][0][0]};
        int64_t l_730 = 0xF90EEA8E05967D65LL;
        uint32_t l_731 = 8UL;
        int i, j, k;
        if ((*l_471))
        { 
            uint8_t ****l_543 = &g_300;
            int32_t l_549 = 0xFB278A55L;
            int32_t l_550 = 0x4555B17CL;
            int32_t *l_551[3][5] = {{&l_474,&l_474,&l_474,&l_474,&l_474},{&l_474,&l_474,&l_474,&l_474,&l_474},{&l_474,&l_474,&l_474,&l_474,&l_474}};
            int i, j;
            g_552[0][1][0] = (((((safe_rshift_func_int16_t_s_s(((l_542 = (void*)0) != l_543), g_433)) == (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((*l_471) &= (((l_548[2][0] , l_548[2][0]) , l_549) | (l_548[2][1] , p_32))), 4294967295UL)), l_550))) || 0xDEL) , l_550) , p_32);
        }
        else
        { 
            const uint16_t l_585 = 0xDBB8L;
            union U1 *l_588 = &g_410;
            union U1 * const *l_587[5][7] = {{&l_588,&l_588,&l_588,&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588,&l_588,&l_588,&l_588}};
            int32_t l_616 = 0xDDAE5411L;
            int64_t **l_645 = &g_105[0];
            int32_t l_651 = 0xB5DF2AC1L;
            int32_t l_672 = (-3L);
            uint32_t *l_701 = &g_61.f0;
            int i, j;
            for (g_148 = 0; (g_148 >= 5); ++g_148)
            { 
                uint16_t l_559 = 65535UL;
                for (l_481 = 0; (l_481 <= 1); l_481 += 1)
                { 
                    uint64_t *l_558[2][4] = {{(void*)0,&g_433,&g_433,(void*)0},{&g_433,(void*)0,&g_433,&g_433}};
                    int64_t *l_560 = &g_87;
                    int64_t *l_561 = &g_562;
                    int32_t l_584 = 0x4A4382E4L;
                    int i, j;
                    (**l_472) &= (safe_add_func_uint32_t_u_u(0UL, l_557));
                    (*g_18) &= ((l_559 = 0xDFB0633D215E4A77LL) | ((*l_561) ^= ((*l_560) = p_32)));
                    (*l_471) = (((p_30 , ((*g_129)--)) == (g_57 = (safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_30, ((((safe_sub_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((6L ^ l_579), 5)), g_461.f6)) ^ (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s(0xF6FDL, ((0x1C1FL && g_57) & l_584))) <= 0xBED267E1L) >= l_585), 7))), 1L)) , 0x44L) & l_559) >= (*l_471)))), l_584)), l_559)), (*l_471))))) || 65526UL);
                    if ((*g_18))
                        break;
                }
                (*g_299) = (*g_299);
            }
            if ((l_586 != l_587[3][5]))
            { 
                int8_t *l_608 = &g_35;
                int32_t l_615 = 0x9995F9EFL;
                for (g_9 = 0; (g_9 > 6); g_9 = safe_add_func_int64_t_s_s(g_9, 1))
                { 
                    uint16_t **l_599 = &l_473;
                    uint16_t *l_600 = &g_193;
                    int64_t *l_609 = &g_562;
                    int32_t *l_610 = (void*)0;
                    int32_t *l_611 = &g_552[0][1][0];
                    int32_t *l_612 = &l_474;
                    int32_t *l_613 = &g_552[2][0][0];
                    int32_t *l_614[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_614[i] = (void*)0;
                    (*l_471) &= p_30;
                    (*l_612) ^= ((*l_611) |= (safe_div_func_uint32_t_u_u(g_461.f2, (safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((*l_609) = (safe_unary_minus_func_int32_t_s((safe_unary_minus_func_int8_t_s((((void*)0 != (*g_299)) && ((func_41((((*l_599) = &g_193) == (p_32 , l_600)), ((+((safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((*l_471), p_30)) >= (**l_472)), 2)) | (-10L))) & 0UL), l_608) , g_61.f1) <= (-1L)))))))) , l_557), p_32)), g_406.f1)))));
                    l_617[0][0][6]++;
                    (*l_611) &= p_32;
                }
                for (g_61.f2.f0 = 15; (g_61.f2.f0 >= 18); g_61.f2.f0 = safe_add_func_uint16_t_u_u(g_61.f2.f0, 8))
                { 
                    l_622[0][1][0] |= 0xC1EE935DL;
                    if (l_615)
                        break;
                }
                (*l_472) = &g_19[1][0];
            }
            else
            { 
                int32_t l_650 = 0x4FC17B76L;
                int32_t l_676 = (-1L);
                uint64_t *l_681 = &g_461.f5;
                uint64_t *l_684 = &l_548[2][0].f5;
                for (l_481 = 0; (l_481 <= 5); l_481 += 1)
                { 
                    uint8_t l_626[5];
                    uint64_t *l_638 = &g_410.f3.f5;
                    uint32_t *l_670 = &g_410.f0;
                    int16_t l_671[5][1][5] = {{{0L,0xFE66L,(-2L),0xFE66L,0L}},{{0L,0xEEC6L,0L,0L,0xEEC6L}},{{0L,0x43D5L,0L,0xFE66L,0L}},{{0xEEC6L,0xEEC6L,0x5BF4L,0xEEC6L,0xEEC6L}},{{0L,0xFE66L,0L,0x43D5L,0L}}};
                    int32_t *l_673 = (void*)0;
                    int32_t *l_674[6] = {&g_19[1][0],&l_474,&l_474,&g_19[1][0],&l_474,&l_474};
                    uint64_t **l_683[6];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_626[i] = 0UL;
                    for (i = 0; i < 6; i++)
                        l_683[i] = &l_638;
                    (**l_472) = ((safe_mod_func_int8_t_s_s((*p_29), ((((l_651 &= (!(l_626[0] < ((((**l_645) = ((safe_sub_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((0x18L != ((*g_129) = (+(((((g_461.f2 , ((safe_rshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(((*g_34) <= ((g_433--) != (65534UL && (safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((p_32 & p_32), (**l_472))), g_57))))), g_319)) , l_645) != (void*)0), 12)) , l_646)) != (void*)0) > 0x1BD9DD89L) && g_461.f6) || l_650)))), p_32)), l_616)) > p_32), (*l_471))) == p_30)) , (*g_34)) == 1L)))) , (void*)0) != (void*)0) | p_32))) < 3UL);
                    l_675 ^= ((safe_add_func_uint16_t_u_u(g_61.f0, (l_626[0] < (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(0x6FL, ((safe_lshift_func_int8_t_s_u((((l_585 & (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(g_552[0][1][0], (((((((((((((*l_670) = (p_30 != (g_408.f1 == 0x6C4EFCDEL))) , l_671[2][0][4]) && (*g_34)) & p_30) , (*g_18)) | (**l_472)) > 0xD86AL) < l_671[2][0][4]) , (*g_34)) , 18446744073709551615UL) && l_622[0][3][4]) || l_557))), l_622[0][3][2])) >= (*g_18)) ^ p_32), 7)) , 0x1DL), p_30)) && p_32), g_461.f3)) < p_32) | g_35)) < l_672) > 0x005FL), p_30)) != 0x5EB180E8L))) < (*p_29)), (*g_34)))))) , 0x9EDD88C3L);
                    l_676 |= (*l_471);
                    g_552[0][1][0] &= (safe_lshift_func_uint16_t_u_u(0x6FA1L, (g_193 = (safe_mul_func_int16_t_s_s((p_30 ^ (l_681 == (l_684 = l_682))), (p_32 , (safe_lshift_func_uint8_t_u_u(0xBEL, ((((++(*l_682)) <= ((**l_472) != p_30)) , 1L) , 0x00L)))))))));
                }
                for (g_410.f3.f3 = 3; (g_410.f3.f3 > 46); g_410.f3.f3 = safe_add_func_uint64_t_u_u(g_410.f3.f3, 8))
                { 
                    uint32_t **l_702 = &l_701;
                    int32_t l_703 = 1L;
                    uint32_t *l_704 = (void*)0;
                    uint32_t *l_705 = &g_61.f0;
                    uint16_t *l_706[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_706[i] = &g_193;
                    l_651 = (safe_rshift_func_uint16_t_u_u((p_30 || g_695), ((safe_rshift_func_int8_t_s_u((((**l_472) = l_672) & (g_406.f0 < (l_703 = ((*l_705) = ((l_672 || (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(1UL)), (((*l_702) = l_701) != (void*)0)))) , l_703))))), p_30)) | l_676)));
                    (*g_18) |= (l_706[2] == (l_707 = l_707));
                }
                l_676 &= ((*l_471) = p_30);
            }
        }
        (*g_18) = (safe_rshift_func_int8_t_s_s((l_548[2][0] , ((**l_472) > (safe_mod_func_uint64_t_u_u(((*l_682) ^= ((g_193 = p_30) > ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((1L ^ ((((l_513[1] , (safe_rshift_func_int8_t_s_u(0xEEL, 3))) , (l_617[0][0][6] != (*l_471))) && (**l_472)) <= 0L)), (*l_471))), 7)), g_408.f0)) != p_30))), g_552[0][1][0])))), (*l_471)));
        ++l_731;
    }
    return &g_552[0][0][0];
}



static int8_t * func_36(union U1  p_37, int32_t  p_38, int16_t  p_39, uint32_t  p_40)
{ 
    uint8_t *l_62 = &g_57;
    const int32_t l_65[5][5] = {{(-9L),0x90942075L,0x792D8C20L,0x792D8C20L,0x90942075L},{1L,0x161DBFA2L,0x5E2E4BCBL,0x90942075L,0x3B61EA52L},{0x161DBFA2L,0x792D8C20L,0x5E2E4BCBL,1L,0x5E2E4BCBL},{0x3B61EA52L,0x3B61EA52L,0x792D8C20L,1L,0x7B1ECBC5L},{0x161DBFA2L,0x7B1ECBC5L,(-9L),1L,1L}};
    uint8_t **l_70 = &l_62;
    const uint32_t l_90 = 4294967286UL;
    int32_t l_146 = 3L;
    uint8_t ***l_157 = &l_70;
    uint32_t l_164 = 4294967290UL;
    uint32_t l_202 = 4294967294UL;
    int32_t l_203 = 1L;
    int32_t l_207 = 0x95E6A16AL;
    int32_t l_211 = 0x2A7B370AL;
    const int32_t *l_229[6] = {&l_203,&l_203,&l_203,&l_203,&l_203,&l_203};
    int32_t l_232 = 1L;
    int32_t l_233[3];
    union U1 l_310[2] = {{0x01241E3AL},{0x01241E3AL}};
    uint32_t l_330 = 0x2184E34EL;
    int64_t *l_368 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_233[i] = 2L;
    return l_62;
}



static union U1  func_41(int32_t  p_42, const int8_t  p_43, int8_t * p_44)
{ 
    return g_61;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_336[i], "g_336[i]", print_hash_value);

    }
    transparent_crc(g_406.f0, "g_406.f0", print_hash_value);
    transparent_crc(g_406.f1, "g_406.f1", print_hash_value);
    transparent_crc(g_408.f0, "g_408.f0", print_hash_value);
    transparent_crc(g_408.f1, "g_408.f1", print_hash_value);
    transparent_crc(g_410.f0, "g_410.f0", print_hash_value);
    transparent_crc(g_410.f1, "g_410.f1", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_461.f0, "g_461.f0", print_hash_value);
    transparent_crc(g_461.f1, "g_461.f1", print_hash_value);
    transparent_crc(g_461.f2, "g_461.f2", print_hash_value);
    transparent_crc(g_461.f3, "g_461.f3", print_hash_value);
    transparent_crc(g_461.f4, "g_461.f4", print_hash_value);
    transparent_crc(g_461.f5, "g_461.f5", print_hash_value);
    transparent_crc(g_461.f6, "g_461.f6", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_552[i][j][k], "g_552[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1008[i][j][k].f0, "g_1008[i][j][k].f0", print_hash_value);
                transparent_crc(g_1008[i][j][k].f1, "g_1008[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_1121, "g_1121", print_hash_value);
    transparent_crc(g_1396.f0, "g_1396.f0", print_hash_value);
    transparent_crc(g_1396.f1, "g_1396.f1", print_hash_value);
    transparent_crc(g_1461, "g_1461", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1494[i][j][k], "g_1494[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1699, "g_1699", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1709[i][j], "g_1709[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1713, "g_1713", print_hash_value);
    transparent_crc(g_1727.f0, "g_1727.f0", print_hash_value);
    transparent_crc(g_1727.f1, "g_1727.f1", print_hash_value);
    transparent_crc(g_1878, "g_1878", print_hash_value);
    transparent_crc(g_1980, "g_1980", print_hash_value);
    transparent_crc(g_2026, "g_2026", print_hash_value);
    transparent_crc(g_2083, "g_2083", print_hash_value);
    transparent_crc(g_2230, "g_2230", print_hash_value);
    transparent_crc(g_2284, "g_2284", print_hash_value);
    transparent_crc(g_2310, "g_2310", print_hash_value);
    transparent_crc(g_2386, "g_2386", print_hash_value);
    transparent_crc(g_2509, "g_2509", print_hash_value);
    transparent_crc(g_2675, "g_2675", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2722[i][j][k], "g_2722[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2778, "g_2778", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2899[i][j], "g_2899[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2905, "g_2905", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
