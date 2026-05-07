// SPDX-License-Identifier: MIT
// cctest_csmith_1a269eb1.c --- cctest case csmith_1a269eb1 (csmith seed 438738609)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x178044ce */

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

// Options:   -s 438738609 -o /tmp/csmith_gen_j8i46evb/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
   uint32_t  f1;
   const unsigned f2 : 30;
   int32_t  f3;
   uint32_t  f4;
   int16_t  f5;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
   uint32_t  f1;
   int32_t  f2;
   const uint32_t  f3;
};

union U2 {
   int32_t  f0;
   uint8_t  f1;
   int32_t  f2;
};


static int32_t g_3[5][4][4] = {{{0x8DFBA22EL,0x95AAD853L,0x8DFBA22EL,0x8DFBA22EL},{0x95AAD853L,0x95AAD853L,(-7L),0x95AAD853L},{0x95AAD853L,0x8DFBA22EL,0x8DFBA22EL,0x95AAD853L},{0x8DFBA22EL,0x95AAD853L,0x8DFBA22EL,0x8DFBA22EL}},{{0x95AAD853L,0x95AAD853L,(-7L),0x95AAD853L},{0x95AAD853L,0x8DFBA22EL,0x8DFBA22EL,0x95AAD853L},{0x8DFBA22EL,0x95AAD853L,0x8DFBA22EL,0x8DFBA22EL},{0x95AAD853L,0x95AAD853L,(-7L),0x95AAD853L}},{{0x95AAD853L,0x8DFBA22EL,0x8DFBA22EL,0x95AAD853L},{0x8DFBA22EL,0x95AAD853L,0x8DFBA22EL,0x8DFBA22EL},{0x95AAD853L,0x95AAD853L,(-7L),0x95AAD853L},{0x95AAD853L,0x8DFBA22EL,(-7L),0x8DFBA22EL}},{{(-7L),0x8DFBA22EL,(-7L),(-7L)},{0x8DFBA22EL,0x8DFBA22EL,0x95AAD853L,0x8DFBA22EL},{0x8DFBA22EL,(-7L),(-7L),0x8DFBA22EL},{(-7L),0x8DFBA22EL,(-7L),(-7L)}},{{0x8DFBA22EL,0x8DFBA22EL,0x95AAD853L,0x8DFBA22EL},{0x8DFBA22EL,(-7L),(-7L),0x8DFBA22EL},{(-7L),0x8DFBA22EL,(-7L),(-7L)},{0x8DFBA22EL,0x8DFBA22EL,0x95AAD853L,0x8DFBA22EL}}};
static int32_t g_4 = 0L;
static int64_t g_13 = (-8L);
static int16_t g_19[2][6][2] = {{{(-1L),(-4L)},{(-1L),(-1L)},{(-4L),(-1L)},{(-1L),(-4L)},{(-1L),(-1L)},{(-4L),(-1L)}},{{(-1L),(-4L)},{(-1L),(-1L)},{(-4L),(-1L)},{(-1L),(-4L)},{(-1L),(-1L)},{(-4L),(-1L)}}};
static union U1 g_65 = {-1L};
static uint32_t g_69 = 0x1B23FE29L;
static const int16_t **g_73 = (void*)0;
static uint8_t g_83[7] = {5UL,5UL,5UL,5UL,5UL,5UL,5UL};
static uint64_t g_85 = 0xBB399D6DB78960BDLL;
static int8_t g_114 = 0L;
static int32_t g_152 = (-1L);
static int32_t g_174 = (-5L);
static int64_t g_175[7] = {1L,0xCAFE66B6A1353FB5LL,1L,1L,0xCAFE66B6A1353FB5LL,1L,1L};
static int32_t g_176 = 0xC54FA017L;
static int16_t g_177[6] = {6L,6L,0x3893L,6L,6L,0x3893L};
static uint8_t g_178 = 0xEDL;
static int32_t *g_231 = &g_152;
static int32_t **g_230 = &g_231;
static int32_t ***g_229 = &g_230;
static uint16_t g_234 = 65528UL;
static uint64_t g_256 = 1UL;
static int64_t g_259 = 0x56CEAAE59B509E70LL;
static int32_t g_260 = 9L;
static const int8_t g_268 = 0L;
static const int8_t *g_267 = &g_268;
static uint32_t g_280 = 0x8895823DL;
static int32_t g_291 = (-1L);
static int32_t g_293 = 0L;
static uint16_t **g_310 = (void*)0;
static int16_t ***g_316 = (void*)0;
static int32_t **g_321 = (void*)0;
static int32_t g_393 = (-1L);
static int8_t g_394 = (-5L);
static int32_t g_395[3] = {4L,4L,4L};
static uint16_t ***g_463[2][3] = {{&g_310,&g_310,&g_310},{&g_310,&g_310,&g_310}};
static uint16_t ****g_462[6] = {&g_463[1][1],&g_463[1][1],&g_463[0][2],&g_463[1][1],&g_463[1][1],&g_463[0][2]};
static int8_t **g_504 = (void*)0;
static int8_t ***g_503 = &g_504;
static uint64_t *g_513[7][1] = {{(void*)0},{(void*)0},{&g_256},{(void*)0},{(void*)0},{&g_256},{(void*)0}};
static int32_t g_553 = 0L;
static int16_t *****g_628 = (void*)0;
static const uint64_t *g_642[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_256,&g_256,&g_256,&g_256,&g_256}};
static const uint64_t * const *g_641 = &g_642[0][0];
static int16_t *g_669 = &g_19[0][3][0];
static uint32_t g_735[6][6][1] = {{{0x5D33FF2AL},{0x5D33FF2AL},{0x7CC9F53FL},{0xCD709D42L},{0x57C50DBBL},{0xCD709D42L}},{{0x7CC9F53FL},{0x5D33FF2AL},{0x5D33FF2AL},{0x7CC9F53FL},{0xCD709D42L},{0x57C50DBBL}},{{0xCD709D42L},{0x7CC9F53FL},{0x5D33FF2AL},{0x5D33FF2AL},{0x7CC9F53FL},{0xCD709D42L}},{{0x57C50DBBL},{0xCD709D42L},{0x7CC9F53FL},{0x5D33FF2AL},{0x5D33FF2AL},{0x7CC9F53FL}},{{0xCD709D42L},{0x57C50DBBL},{0xCD709D42L},{0x7CC9F53FL},{0x5D33FF2AL},{0x5D33FF2AL}},{{0x7CC9F53FL},{0xCD709D42L},{0x57C50DBBL},{0xCD709D42L},{0x7CC9F53FL},{0x5D33FF2AL}}};
static uint32_t g_736 = 0UL;
static uint32_t g_737 = 0x737DA299L;
static uint32_t g_738 = 18446744073709551609UL;
static uint32_t g_739 = 6UL;
static uint16_t g_775[3][2] = {{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL}};
static int32_t *g_907[7][4][3] = {{{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152},{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152}},{{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152},{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152}},{{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152},{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152}},{{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152},{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152}},{{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152},{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152}},{{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152},{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152}},{{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152},{(void*)0,(void*)0,(void*)0},{&g_152,&g_152,&g_152}}};
static uint32_t g_930 = 1UL;
static struct S0 g_935 = {-5L,4294967294UL,5256,0x52C78637L,4UL,0x161CL};
static union U2 g_952 = {0xAE6DCF51L};
static struct S0 *g_965 = &g_935;
static struct S0 **g_964 = &g_965;
static int64_t g_1012[6] = {1L,0x6A4D04F5C2DD5231LL,1L,1L,0x6A4D04F5C2DD5231LL,1L};
static union U1 *g_1198[5][7][2] = {{{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65}},{{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65}},{{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65}},{{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65}},{{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65},{&g_65,&g_65}}};
static union U1 **g_1197 = &g_1198[3][4][0];
static uint32_t *g_1214 = &g_735[4][0][0];
static uint32_t **g_1213 = &g_1214;
static uint32_t g_1218[6] = {0xDC2AA79FL,0xDC2AA79FL,0xDC2AA79FL,0xDC2AA79FL,0xDC2AA79FL,0xDC2AA79FL};
static uint32_t * const g_1217 = &g_1218[4];
static uint32_t * const *g_1216 = &g_1217;
static int32_t g_1251 = 0x15D14698L;
static const uint16_t ***g_1357 = (void*)0;
static const uint16_t ****g_1356[4][2][4] = {{{&g_1357,&g_1357,&g_1357,&g_1357},{&g_1357,&g_1357,(void*)0,(void*)0}},{{&g_1357,(void*)0,&g_1357,&g_1357},{&g_1357,(void*)0,&g_1357,&g_1357}},{{(void*)0,(void*)0,&g_1357,(void*)0},{(void*)0,&g_1357,&g_1357,&g_1357}},{{(void*)0,&g_1357,&g_1357,&g_1357},{&g_1357,&g_1357,&g_1357,&g_1357}}};
static uint16_t g_1404 = 0UL;
static uint32_t g_1466 = 0xEAFD4149L;
static union U2 **g_1489 = (void*)0;
static union U1 g_1675 = {-1L};
static uint8_t g_1679 = 255UL;
static uint8_t g_1689[2] = {0x80L,0x80L};
static uint32_t g_1784 = 3UL;
static int64_t *g_1947[3][7] = {{(void*)0,&g_175[6],(void*)0,&g_1012[4],&g_1012[4],(void*)0,&g_175[6]},{&g_1012[4],&g_175[6],&g_175[1],&g_175[1],&g_175[6],&g_1012[4],&g_175[6]},{(void*)0,&g_1012[4],&g_1012[4],(void*)0,&g_175[6],(void*)0,&g_1012[4]}};
static int64_t **g_1946 = &g_1947[0][5];
static int64_t g_1951 = (-8L);
static const uint64_t * const **g_1960 = &g_641;
static uint64_t g_1980 = 0x28A5A721AA1A7BC0LL;
static uint32_t g_2008 = 18446744073709551615UL;
static uint32_t *g_2026 = &g_280;
static uint32_t **g_2025 = &g_2026;
static const uint8_t g_2131 = 0x6AL;
static const struct S0 *g_2135 = &g_935;
static const struct S0 **g_2134 = &g_2135;
static int32_t g_2148 = 2L;
static int32_t g_2158 = 2L;
static int16_t ****g_2206 = &g_316;
static int16_t *****g_2205 = &g_2206;
static uint32_t ***g_2272 = &g_2025;
static uint32_t ****g_2271 = &g_2272;
static int16_t **g_2340[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U2 *g_2451 = &g_952;
static uint32_t g_2532 = 1UL;
static int64_t g_2669 = 5L;
static uint64_t **g_2707 = &g_513[6][0];
static uint64_t ***g_2706 = &g_2707;
static uint32_t g_2731 = 18446744073709551608UL;
static const union U1 *g_2762 = &g_1675;
static const union U1 **g_2761 = &g_2762;
static const union U1 ***g_2760 = &g_2761;
static const union U1 ****g_2759 = &g_2760;
static uint8_t *g_2813 = &g_1689[0];
static uint8_t **g_2812 = &g_2813;
static uint32_t g_2870[7] = {8UL,8UL,1UL,0x60ECCCB5L,0x60ECCCB5L,8UL,0x60ECCCB5L};
static int32_t g_2902[5] = {0x7306B71FL,0x7306B71FL,0x7306B71FL,0x7306B71FL,0x7306B71FL};
static uint32_t g_2984 = 0x204F4B96L;
static uint32_t g_3063 = 0x0CEE4E2FL;
static union U1 ***g_3079 = &g_1197;
static union U1 ****g_3078 = &g_3079;
static union U1 *****g_3077 = &g_3078;
static const uint32_t g_3122 = 6UL;
static const uint32_t *g_3121[4] = {&g_3122,&g_3122,&g_3122,&g_3122};
static int8_t g_3249 = (-4L);
static int32_t *g_3253 = &g_291;
static int32_t **g_3252 = &g_3253;
static int8_t g_3260 = 1L;
static uint8_t g_3364 = 0x56L;
static uint32_t g_3371 = 7UL;
static uint8_t g_3412 = 0UL;



static uint64_t  func_1(void);
static int8_t  func_7(uint32_t  p_8, int32_t  p_9);
static int16_t  func_25(int16_t * p_26, int64_t * p_27, uint32_t  p_28, int64_t * p_29);
static int16_t * func_30(int32_t  p_31, int32_t  p_32, int64_t * p_33, int16_t * p_34);
static const int8_t  func_37(int16_t * p_38, int32_t  p_39, int64_t * p_40, int32_t  p_41, uint8_t  p_42);
static const uint16_t  func_55(int32_t  p_56, int16_t * p_57, uint32_t  p_58, int32_t  p_59);
static int32_t  func_60(int64_t * p_61);
static int16_t  func_62(union U1  p_63, int64_t * p_64);




static uint64_t  func_1(void)
{ 
    int32_t l_2[1];
    uint32_t l_20 = 0x36A5B5CFL;
    struct S0 *l_2830 = &g_935;
    int16_t *l_2840 = &g_935.f5;
    int32_t l_2845 = (-9L);
    union U2 *l_2890 = &g_952;
    uint16_t l_2924 = 65531UL;
    uint8_t l_2931 = 255UL;
    int32_t l_2956 = 0x5CAAC037L;
    uint16_t * const *l_2977 = (void*)0;
    int16_t l_2978 = 3L;
    int32_t l_3102 = 0x3481403CL;
    uint32_t * const *l_3111 = &g_2026;
    int64_t *l_3141[7] = {&g_1951,&g_175[1],&g_175[1],&g_1951,&g_175[1],&g_175[1],&g_1951};
    const union U1 l_3182[4][6] = {{{0xADD80DD1FE89529BLL},{0x664EFC56437A5CFELL},{0xADD80DD1FE89529BLL},{0xADD80DD1FE89529BLL},{0x664EFC56437A5CFELL},{0xADD80DD1FE89529BLL}},{{0xADD80DD1FE89529BLL},{0x664EFC56437A5CFELL},{0xADD80DD1FE89529BLL},{0xADD80DD1FE89529BLL},{0x664EFC56437A5CFELL},{0xADD80DD1FE89529BLL}},{{0xADD80DD1FE89529BLL},{0x664EFC56437A5CFELL},{0xADD80DD1FE89529BLL},{0xADD80DD1FE89529BLL},{0x664EFC56437A5CFELL},{0xADD80DD1FE89529BLL}},{{0xADD80DD1FE89529BLL},{0x664EFC56437A5CFELL},{0xADD80DD1FE89529BLL},{0xADD80DD1FE89529BLL},{0x664EFC56437A5CFELL},{0xADD80DD1FE89529BLL}}};
    uint32_t ***l_3190 = &g_2025;
    uint64_t l_3196 = 1UL;
    int32_t l_3197 = 0x50FE0C51L;
    uint32_t ****l_3217 = &l_3190;
    uint8_t l_3255 = 1UL;
    int32_t *l_3259 = &l_2845;
    int32_t l_3267 = 0x27A5D791L;
    int8_t l_3285[6][2];
    int64_t l_3286[7][4];
    int16_t *****l_3311 = &g_2206;
    uint32_t l_3313 = 0x8E870444L;
    uint32_t l_3369 = 0xCC68F7FFL;
    int16_t *l_3375 = &g_177[3];
    uint8_t l_3389 = 0x78L;
    uint32_t l_3399 = 0x2E7D73EBL;
    int8_t l_3402 = 0xEDL;
    int32_t *l_3403 = &g_260;
    int32_t *l_3404 = &g_3[3][3][2];
    int32_t *l_3405 = &l_3267;
    int32_t *l_3406 = &l_2845;
    int32_t *l_3407 = (void*)0;
    int32_t *l_3408 = &g_174;
    int32_t *l_3409 = &g_393;
    int32_t *l_3410[1];
    int8_t l_3411 = 0xB0L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_2[i] = 0xEE41B66BL;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_3285[i][j] = 0xF3L;
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
            l_3286[i][j] = 0x685DE53AB7DEC91DLL;
    }
    for (i = 0; i < 1; i++)
        l_3410[i] = &g_393;
    for (g_3[0][0][0] = 0; (g_3[0][0][0] <= 0); g_3[0][0][0] += 1)
    { 
        uint8_t l_2823 = 0xDFL;
        int32_t l_2825 = 0xD16A0F4DL;
        int16_t *l_2841 = &g_177[4];
        int16_t l_2871[5];
        int32_t l_2910 = 0xD6898AFDL;
        int32_t l_2911 = (-2L);
        int32_t l_2913[6] = {0xDE5B2CDFL,(-2L),0xDE5B2CDFL,0xDE5B2CDFL,(-2L),0xDE5B2CDFL};
        int32_t l_2917 = 0xE17A027FL;
        int32_t l_2957 = 0x7E938DF6L;
        int64_t l_3050 = (-1L);
        uint32_t l_3064 = 2UL;
        uint16_t l_3065 = 65526UL;
        int8_t l_3066 = 0xCCL;
        union U2 *l_3118 = (void*)0;
        uint32_t l_3130 = 2UL;
        uint16_t l_3135 = 0UL;
        int i;
        for (i = 0; i < 5; i++)
            l_2871[i] = 0x8A24L;
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            int64_t *l_12 = &g_13;
            int16_t *l_18 = &g_19[1][3][0];
            uint64_t *l_2824 = &g_1980;
            int8_t *l_2826[5] = {&g_114,&g_114,&g_114,&g_114,&g_114};
            int32_t **l_2827 = &g_907[1][3][1];
            int32_t *l_2829 = &g_293;
            int32_t **l_2828 = &l_2829;
            int i;
        }
        for (g_280 = 0; (g_280 != 45); g_280 = safe_add_func_int32_t_s_s(g_280, 5))
        { 
            int16_t l_2872 = 8L;
            union U2 *l_2889 = &g_952;
            union U2 **l_2891 = (void*)0;
            union U2 **l_2892[6][5] = {{&l_2890,&l_2890,&l_2890,&l_2890,&l_2889},{&l_2890,&l_2890,&l_2890,&l_2890,&l_2889},{&l_2890,&l_2890,&l_2890,&l_2890,&l_2889},{&l_2890,&l_2890,&l_2890,&l_2890,&l_2889},{&l_2890,&l_2890,&l_2890,&l_2890,&l_2889},{&l_2890,&l_2890,&l_2890,&l_2890,&l_2889}};
            uint32_t *l_2901 = &g_2870[6];
            int32_t l_2908 = 8L;
            int32_t l_2909 = 1L;
            int32_t l_2912 = 0xECC6003FL;
            int32_t l_2914 = 1L;
            int32_t l_2915 = (-2L);
            int32_t l_2916 = (-1L);
            int32_t l_2918 = 0L;
            int32_t l_2919 = (-1L);
            int32_t l_2920 = 0L;
            int32_t l_2921 = 1L;
            int32_t l_2922 = 5L;
            int32_t l_2923 = 0x9A872335L;
            uint16_t *l_2975 = &l_2924;
            uint16_t **l_2974 = &l_2975;
            int8_t * const l_2999[5][2][2] = {{{&g_394,&g_394},{&g_114,&g_114}},{{&g_114,&g_394},{&g_394,(void*)0}},{{&g_394,(void*)0},{&g_394,&g_394}},{{&g_114,&g_114},{&g_114,&g_394}},{{&g_394,(void*)0},{&g_394,(void*)0}}};
            int i, j, k;
        }
    }
    for (g_2008 = 0; (g_2008 <= 1); g_2008 += 1)
    { 
        uint16_t l_3142[7];
        uint64_t *l_3149 = &g_1980;
        int16_t l_3152 = (-1L);
        int8_t l_3153[1];
        int64_t **l_3195 = (void*)0;
        int32_t l_3201 = 0xB6696A55L;
        uint16_t l_3222 = 0UL;
        uint32_t l_3229 = 0UL;
        uint32_t *l_3233 = &g_65.f1;
        int32_t l_3270 = 1L;
        int32_t l_3272 = 0xE1D3E159L;
        int32_t l_3273 = 0x1BD9D966L;
        int32_t l_3274 = 8L;
        int32_t l_3278 = (-1L);
        uint32_t l_3287 = 0UL;
        int32_t *l_3292 = &g_3[0][0][0];
        int32_t *l_3293 = &l_3278;
        int32_t *l_3294 = &g_395[1];
        int32_t *l_3295[4];
        uint8_t l_3296[1][7][4] = {{{0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L},{0xB2L,0xB2L,0xB2L,0xB2L}}};
        int32_t *l_3299 = &l_3197;
        union U2 l_3316 = {0x2A41EC55L};
        int16_t *l_3374 = &l_2978;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_3142[i] = 0x6689L;
        for (i = 0; i < 1; i++)
            l_3153[i] = 0xD1L;
        for (i = 0; i < 4; i++)
            l_3295[i] = &g_4;
    }
    g_3412++;
    (*l_3409) ^= 0x7A95F4ADL;
    return (*l_3408);
}



static int8_t  func_7(uint32_t  p_8, int32_t  p_9)
{ 
    int64_t l_21 = 0x4AB462A77B69C93ELL;
    int16_t *l_43[3];
    uint32_t l_1584[4][2] = {{4294967289UL,4294967289UL},{4294967289UL,4294967289UL},{4294967289UL,4294967289UL},{4294967289UL,4294967289UL}};
    int32_t l_1625 = 0xD58074B6L;
    uint8_t l_2546 = 0UL;
    int32_t l_2552 = 0x704BFAE0L;
    union U2 **l_2556 = &g_2451;
    int32_t l_2582 = 0L;
    int32_t l_2583 = 0x92F58000L;
    int32_t l_2584 = 0xAED80145L;
    int32_t l_2585 = 0x6C41B184L;
    int32_t l_2586 = 1L;
    int32_t l_2588 = 0L;
    int32_t l_2594[2];
    struct S0 * const l_2617 = &g_935;
    int32_t *l_2629 = &g_176;
    int32_t *l_2645 = &g_553;
    int64_t **l_2652 = (void*)0;
    int32_t l_2667 = 1L;
    int16_t l_2670[7] = {0x29A0L,0x29A0L,0x29A0L,0x29A0L,0x29A0L,0x29A0L,0x29A0L};
    union U1 l_2675[2] = {{0L},{0L}};
    int16_t l_2678 = 0xFFB5L;
    uint32_t l_2695 = 18446744073709551612UL;
    const uint8_t l_2697 = 0x8AL;
    uint16_t * const l_2749 = (void*)0;
    uint16_t * const *l_2748 = &l_2749;
    uint16_t * const **l_2747 = &l_2748;
    uint16_t * const ***l_2746[4][4][3] = {{{&l_2747,(void*)0,&l_2747},{(void*)0,&l_2747,(void*)0},{(void*)0,&l_2747,(void*)0},{(void*)0,&l_2747,&l_2747}},{{&l_2747,(void*)0,&l_2747},{&l_2747,&l_2747,&l_2747},{&l_2747,&l_2747,&l_2747},{(void*)0,(void*)0,&l_2747}},{{(void*)0,(void*)0,&l_2747},{(void*)0,&l_2747,(void*)0},{&l_2747,&l_2747,&l_2747},{&l_2747,(void*)0,(void*)0}},{{&l_2747,&l_2747,&l_2747},{&l_2747,&l_2747,&l_2747},{&l_2747,&l_2747,&l_2747},{&l_2747,&l_2747,(void*)0}}};
    union U1 ***l_2764 = &g_1197;
    union U1 ****l_2763 = &l_2764;
    uint32_t *** const *l_2775[1][7];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_43[i] = &g_19[1][3][0];
    for (i = 0; i < 2; i++)
        l_2594[i] = 0L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_2775[i][j] = &g_2272;
    }
    if ((l_21 , (-2L)))
    { 
        uint32_t l_52[2];
        int64_t *l_1626 = &g_1012[1];
        int64_t *l_2055[6][1][1] = {{{&g_1951}},{{&g_1951}},{{&g_175[1]}},{{&g_1951}},{{&g_1951}},{{&g_175[1]}}};
        int32_t l_2533 = 0x9B9A7E04L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_52[i] = 0x239F94ADL;
        l_2533 |= (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(func_25(func_30(((safe_rshift_func_int8_t_s_u(func_37(l_43[0], ((l_1625 = ((**g_1216) = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((--l_52[1]) | ((void*)0 != &l_21)), (func_55((g_19[1][3][0] , func_60(&g_13)), l_43[0], l_1584[0][0], l_1584[2][1]) || p_8))) , p_8), 2)) & 0UL), 1L)))) , (*g_231)), l_1626, g_256, g_4), 0)) > l_21), l_21, &l_21, l_43[0]), l_2055[1][0][0], l_1584[0][0], (*g_1946)))), 4));
        return (*g_267);
    }
    else
    { 
        uint64_t l_2542[7][4] = {{0xA689BF68E014A862LL,1UL,1UL,1UL},{1UL,18446744073709551608UL,1UL,1UL},{0xA689BF68E014A862LL,0xA689BF68E014A862LL,1UL,1UL},{18446744073709551615UL,18446744073709551608UL,18446744073709551615UL,1UL},{18446744073709551615UL,1UL,1UL,18446744073709551615UL},{0xA689BF68E014A862LL,1UL,1UL,1UL},{1UL,18446744073709551608UL,1UL,1UL}};
        const int16_t ***l_2545 = &g_73;
        const int16_t ****l_2544 = &l_2545;
        const int16_t *****l_2543 = &l_2544;
        int64_t l_2547 = (-9L);
        union U2 **l_2558[1];
        int32_t l_2562 = 0L;
        int32_t l_2581[1];
        int64_t l_2591[5];
        int8_t l_2596 = 0x3AL;
        int32_t l_2630[5][3][6] = {{{4L,(-3L),0L,4L,0x5F980AC6L,0x5F980AC6L},{(-1L),(-3L),(-3L),(-1L),0x5F980AC6L,0L},{0x070788C1L,(-3L),0x5F980AC6L,0x070788C1L,0x5F980AC6L,(-3L)}},{{4L,(-3L),0L,4L,0x5F980AC6L,0x5F980AC6L},{(-1L),(-3L),(-3L),(-1L),0x5F980AC6L,0L},{0x070788C1L,(-3L),0x5F980AC6L,0x070788C1L,0x5F980AC6L,(-3L)}},{{4L,(-3L),0L,4L,0x5F980AC6L,0x5F980AC6L},{(-1L),(-3L),(-3L),(-1L),0x5F980AC6L,0L},{0x070788C1L,(-3L),0x5F980AC6L,0x070788C1L,0x5F980AC6L,(-3L)}},{{4L,(-3L),0L,4L,0x5F980AC6L,0x5F980AC6L},{(-1L),(-3L),(-3L),(-1L),0x5F980AC6L,0L},{0x070788C1L,(-3L),0x5F980AC6L,0x070788C1L,0x5F980AC6L,(-3L)}},{{4L,(-3L),0L,4L,0x5F980AC6L,0x5F980AC6L},{(-1L),(-3L),(-3L),(-1L),0x5F980AC6L,0L},{0x070788C1L,(-3L),0x5F980AC6L,0x070788C1L,0x5F980AC6L,(-3L)}}};
        uint32_t **l_2689 = &g_1214;
        uint32_t * const *l_2698 = &g_1214;
        const union U1 ****l_2734 = (void*)0;
        const uint32_t l_2787 = 0xA5C90BF0L;
        uint16_t ** const l_2792 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2558[i] = &g_2451;
        for (i = 0; i < 1; i++)
            l_2581[i] = 0xDAAF45E1L;
        for (i = 0; i < 5; i++)
            l_2591[i] = 0x2896290C4CCBB0DELL;
        if (((((1UL >= ((l_1584[0][0] && g_19[1][3][0]) ^ p_9)) > (safe_sub_func_int32_t_s_s((((((safe_div_func_int16_t_s_s((((((((safe_div_func_int32_t_s_s((*g_231), p_9)) | (((safe_rshift_func_uint8_t_u_u(1UL, p_8)) != g_177[4]) | 3UL)) , l_2542[5][2]) , l_2543) == (void*)0) ^ 0x7A0422CCC34450B9LL) < l_2546), l_2547)) & 0x140EL) | l_2547) , l_2542[5][2]) == p_9), 1UL))) < g_1784) || l_2542[3][1]))
        { 
            uint32_t l_2553 = 0xE3DF74E8L;
            int32_t l_2566 = 0x4697E7A6L;
            int32_t l_2587 = 0xC9CADE45L;
            int32_t l_2589 = (-3L);
            int32_t l_2590 = 0x096045B5L;
            int32_t l_2592 = 0L;
            int32_t l_2595[2][3];
            int64_t l_2597 = (-1L);
            int16_t l_2613 = 0x4DAAL;
            union U2 l_2623 = {0xB3D75D2CL};
            uint8_t l_2643 = 0x92L;
            int64_t **l_2650 = &g_1947[0][6];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_2595[i][j] = 0x13C25BEEL;
            }
            (***g_229) ^= 0x380F5ECDL;
            if ((*g_231))
            { 
                int32_t *l_2548 = &g_952.f2;
                int32_t *l_2549 = &g_553;
                int32_t *l_2550 = (void*)0;
                int32_t *l_2551[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_2551[i] = (void*)0;
                l_2553--;
                for (g_2008 = 0; (g_2008 <= 1); g_2008 += 1)
                { 
                    (*l_2548) = (**g_230);
                }
            }
            else
            { 
                for (g_738 = 0; (g_738 <= 0); g_738 += 1)
                { 
                    union U2 ***l_2557 = (void*)0;
                    l_2558[0] = (l_2556 = &g_2451);
                }
            }
            for (g_935.f4 = 0; (g_935.f4 <= 3); g_935.f4 += 1)
            { 
                uint8_t l_2563 = 0UL;
                int32_t *l_2569 = &g_174;
                int32_t *l_2570 = &l_2552;
                int32_t *l_2571 = &g_395[0];
                int32_t *l_2572 = &l_2552;
                int32_t *l_2573 = &g_935.f3;
                int32_t *l_2574 = &l_1625;
                int32_t *l_2575 = &g_260;
                int32_t *l_2576 = &g_952.f2;
                int32_t *l_2577 = &g_260;
                int32_t *l_2578 = &l_2562;
                int32_t *l_2579 = &g_174;
                int32_t *l_2580[1][7];
                int32_t l_2593 = 0xD51EA805L;
                uint32_t l_2598[2][6][7] = {{{18446744073709551615UL,6UL,0UL,0UL,6UL,18446744073709551615UL,0x1E9E68F7L},{18446744073709551611UL,0x08E6182CL,0x79CAB940L,0xA13F9ECFL,0x092B7236L,0x092B7236L,0xA13F9ECFL},{0x19161322L,0xD7376442L,0x19161322L,0xD73707B3L,0x1E9E68F7L,0xFF83AB30L,18446744073709551615UL},{0x79CAB940L,0x08E6182CL,18446744073709551611UL,8UL,18446744073709551611UL,0x08E6182CL,0x79CAB940L},{0UL,6UL,18446744073709551615UL,0x1E9E68F7L,0UL,0xFF83AB30L,0UL},{0x08E6182CL,0UL,0UL,0x08E6182CL,0xF85561B8L,0x092B7236L,8UL}},{{0x9B086EDBL,0x3FFF13A0L,18446744073709551615UL,0x19161322L,0x19161322L,18446744073709551615UL,0x3FFF13A0L},{0xF85561B8L,0x79CAB940L,18446744073709551611UL,0UL,0UL,8UL,8UL},{0xFF83AB30L,0x9B086EDBL,0x19161322L,0x9B086EDBL,18446744073709551615UL,0UL,0xD73707B3L},{0xF85561B8L,18446744073709551611UL,0xAF0863EAL,0x08E6182CL,0x092B7236L,0x08E6182CL,0xAF0863EAL},{0xD73707B3L,0xD73707B3L,0UL,6UL,0xFF83AB30L,0x9B086EDBL,0x19161322L},{0xF85561B8L,0x08E6182CL,0UL,0UL,0x08E6182CL,0xF85561B8L,0x092B7236L}}};
                uint64_t *l_2601 = (void*)0;
                uint64_t *l_2602 = &l_2542[2][3];
                uint64_t *l_2605 = &g_1980;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_2580[i][j] = &l_2566;
                }
                for (g_2148 = 3; (g_2148 >= 0); g_2148 -= 1)
                { 
                    uint32_t l_2559 = 0x28AFD14CL;
                    int32_t *l_2567 = (void*)0;
                    int32_t *l_2568 = &g_553;
                    --l_2559;
                    l_2563++;
                    (*l_2568) = (l_2566 = (l_2553 > ((**g_230) = p_8)));
                    (**g_230) |= l_2547;
                }
                l_2598[0][2][0]--;
                (*l_2576) ^= ((((((*l_2605) = ((*l_2602)--)) || p_8) || ((l_2542[5][2] && (p_8 == (((((safe_add_func_uint8_t_u_u((((!(safe_mul_func_int8_t_s_s(p_9, (((safe_lshift_func_uint16_t_u_s(((g_1466 , (0xB29B2416L != (65532UL < p_8))) == l_2552), 3)) <= 0L) < l_2613)))) < (***g_229)) <= p_9), (*g_267))) == l_2581[0]) , p_8) , 0x21E7L) > 1L))) , (*g_231))) , (*l_2556)) == (void*)0);
                (*g_230) = l_2578;
                for (g_2532 = 0; (g_2532 <= 3); g_2532 += 1)
                { 
                    uint32_t l_2614 = 0xD86F12B3L;
                    struct S0 **l_2618 = &g_965;
                    ++l_2614;
                    if (p_9)
                        continue;
                    (*l_2618) = l_2617;
                }
            }
            for (l_2583 = (-26); (l_2583 >= (-2)); l_2583 = safe_add_func_uint8_t_u_u(l_2583, 2))
            { 
                int64_t l_2631 = (-3L);
                int32_t *l_2632 = (void*)0;
                int64_t ***l_2651[3];
                uint16_t *l_2664[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1404,&g_1404,&g_1404,&g_1404,&g_1404,&g_1404,&g_1404},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_2665 = 0x23C9576FL;
                int32_t l_2666 = (-1L);
                int32_t l_2668[2][7];
                uint16_t l_2671 = 0UL;
                int64_t l_2674 = 0x306B4D6962399C39LL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_2651[i] = &l_2650;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_2668[i][j] = 3L;
                }
            }
        }
        else
        { 
            uint32_t ***l_2688[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_2696 = 0x8743E9F3L;
            int64_t *l_2699 = &g_175[6];
            const union U2 l_2718 = {-9L};
            int32_t l_2732 = 0x90E5D7DAL;
            uint32_t ****l_2774 = (void*)0;
            union U1 * const l_2784[5][7][6] = {{{&g_1675,&l_2675[1],&g_65,&l_2675[1],&l_2675[1],&g_65},{(void*)0,(void*)0,&l_2675[1],&l_2675[0],&l_2675[1],&g_65},{&l_2675[1],&g_65,(void*)0,&l_2675[1],&g_65,&l_2675[1]},{&l_2675[1],&g_1675,&g_65,&g_65,&l_2675[1],&l_2675[1]},{&g_1675,&g_65,(void*)0,&l_2675[1],&l_2675[1],&l_2675[1]},{&l_2675[1],&l_2675[1],&l_2675[1],&l_2675[1],&l_2675[1],&l_2675[1]},{&l_2675[1],(void*)0,&l_2675[1],&g_1675,(void*)0,&g_1675}},{{&g_1675,(void*)0,&l_2675[1],&g_1675,&g_1675,&g_65},{&g_1675,&l_2675[1],&g_1675,&g_1675,(void*)0,&g_65},{&l_2675[1],(void*)0,&g_1675,&l_2675[1],&l_2675[1],&g_65},{&l_2675[1],&g_1675,&l_2675[0],&l_2675[1],&l_2675[1],&g_1675},{&g_1675,&l_2675[0],&l_2675[1],&g_65,&l_2675[1],&l_2675[1]},{&l_2675[1],&l_2675[1],(void*)0,&l_2675[1],(void*)0,&l_2675[1]},{&l_2675[1],(void*)0,&l_2675[1],&l_2675[0],(void*)0,&g_65}},{{(void*)0,(void*)0,&g_65,&l_2675[1],&l_2675[1],&g_65},{&g_1675,(void*)0,&g_65,&g_65,(void*)0,&l_2675[1]},{&g_65,(void*)0,&g_1675,(void*)0,(void*)0,&g_1675},{&g_65,&l_2675[1],(void*)0,&l_2675[1],&l_2675[1],&g_65},{&g_65,&l_2675[0],&g_1675,&l_2675[0],&l_2675[1],&g_1675},{&l_2675[1],&g_1675,&g_1675,&l_2675[1],&l_2675[1],&g_1675},{(void*)0,(void*)0,&l_2675[0],&g_1675,(void*)0,&l_2675[0]}},{{(void*)0,&l_2675[1],&l_2675[1],(void*)0,&g_1675,&l_2675[0]},{&g_65,(void*)0,&l_2675[1],(void*)0,(void*)0,&l_2675[0]},{&l_2675[1],&g_1675,&l_2675[1],&g_65,&g_1675,&l_2675[1]},{&g_65,&g_1675,&l_2675[1],&g_65,(void*)0,(void*)0},{&g_65,(void*)0,&l_2675[0],&g_65,&l_2675[1],&g_65},{&l_2675[1],&g_1675,&g_1675,&g_65,(void*)0,&g_65},{(void*)0,&g_65,(void*)0,&g_65,&g_1675,&g_1675}},{{&g_65,(void*)0,&g_65,&g_1675,&l_2675[1],&g_65},{&l_2675[1],&l_2675[1],&l_2675[0],&g_1675,&l_2675[1],&g_65},{&g_65,&g_1675,&l_2675[1],&g_65,&g_65,&g_1675},{(void*)0,&l_2675[1],&g_1675,&g_65,(void*)0,&g_1675},{&l_2675[1],&l_2675[1],&l_2675[1],&g_65,&g_65,&g_1675},{&g_65,&g_65,(void*)0,&g_65,&g_1675,&g_1675},{&g_65,&g_65,&g_65,&g_65,&l_2675[0],&g_65}}};
            uint8_t **l_2809 = (void*)0;
            int i, j, k;
            if (((safe_lshift_func_int16_t_s_u((~((*l_2699) |= (0x85L && (safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((p_8 <= ((l_2689 = &g_1214) == ((((~g_1675.f3) <= (safe_add_func_uint32_t_u_u(((((*l_2617) , (safe_lshift_func_uint16_t_u_s(l_2695, 0))) & l_2696) > l_2697), l_2696))) >= 0x611BD1179D6E5CB7LL) , l_2698))), 0)) >= p_8), p_9)) != (*l_2645)), (***g_2272)))))), 2)) != p_8))
            { 
                uint64_t ****l_2708 = (void*)0;
                uint64_t ****l_2709 = (void*)0;
                uint64_t ****l_2710[2][4][3] = {{{&g_2706,&g_2706,&g_2706},{(void*)0,(void*)0,&g_2706},{(void*)0,&g_2706,(void*)0},{(void*)0,&g_2706,&g_2706}},{{&g_2706,&g_2706,&g_2706},{(void*)0,(void*)0,&g_2706},{(void*)0,&g_2706,(void*)0},{(void*)0,&g_2706,&g_2706}}};
                int8_t *l_2711[6][1][5] = {{{&g_394,&g_114,&g_394,&g_394,&g_114}},{{&g_394,&g_114,&g_114,&g_394,&g_114}},{{&g_114,&g_114,&l_2596,&g_114,&g_114}},{{&g_114,&g_394,&g_114,&g_114,&g_394}},{{&g_114,&g_394,&g_394,&g_114,&g_394}},{{&g_394,&g_394,&g_114,&g_394,&g_394}}};
                int32_t l_2712 = 1L;
                uint8_t *l_2715 = &g_1679;
                int32_t l_2733 = (-1L);
                union U2 ***l_2740[5][4][7] = {{{&g_1489,(void*)0,(void*)0,&l_2558[0],&l_2558[0],&l_2558[0],&l_2558[0]},{&l_2558[0],&l_2558[0],&l_2556,&l_2558[0],(void*)0,&l_2558[0],&g_1489},{&l_2556,&g_1489,&g_1489,&l_2558[0],(void*)0,(void*)0,&l_2558[0]},{&l_2556,&g_1489,&l_2556,&l_2558[0],&l_2556,&g_1489,&l_2558[0]}},{{&l_2558[0],&l_2558[0],(void*)0,(void*)0,&g_1489,&g_1489,&l_2556},{&g_1489,&l_2558[0],&g_1489,&g_1489,&l_2558[0],&g_1489,&l_2558[0]},{&g_1489,&l_2558[0],&l_2558[0],&g_1489,&l_2558[0],(void*)0,&l_2558[0]},{&l_2558[0],&l_2556,&g_1489,&g_1489,&l_2556,&l_2558[0],&l_2556}},{{&l_2556,&l_2558[0],&g_1489,&g_1489,&g_1489,&l_2558[0],&l_2556},{&g_1489,&g_1489,&l_2558[0],&l_2558[0],&l_2558[0],(void*)0,(void*)0},{&g_1489,&g_1489,(void*)0,(void*)0,&l_2558[0],&l_2558[0],&l_2558[0]},{&l_2558[0],&g_1489,&l_2558[0],(void*)0,&l_2558[0],(void*)0,&l_2558[0]}},{{&l_2558[0],&l_2558[0],&l_2558[0],&l_2556,&l_2558[0],&l_2556,(void*)0},{(void*)0,&l_2558[0],(void*)0,&g_1489,&l_2558[0],&g_1489,&g_1489},{&l_2556,&l_2556,&l_2558[0],&l_2558[0],&l_2558[0],&l_2558[0],(void*)0},{&l_2558[0],(void*)0,&g_1489,&l_2558[0],&l_2558[0],&l_2556,&l_2556}},{{&l_2558[0],&l_2556,&g_1489,&l_2556,&l_2558[0],(void*)0,&l_2558[0]},{(void*)0,(void*)0,&l_2558[0],&g_1489,&l_2558[0],&g_1489,&g_1489},{&g_1489,&g_1489,(void*)0,(void*)0,&l_2558[0],(void*)0,&l_2556},{(void*)0,&g_1489,&l_2558[0],&l_2558[0],&g_1489,&l_2558[0],(void*)0}}};
                int i, j, k;
                (***g_229) = (((l_2712 ^= (g_394 ^= ((((((void*)0 != &p_9) ^ (safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((p_8 , (*l_2645)) <= p_9), (safe_sub_func_int32_t_s_s(((g_2706 = g_2706) == (void*)0), l_2696)))), 1L))) | (****g_2271)) , 0UL) || l_2581[0]))) , p_8) ^ p_8);
                if (((((safe_add_func_uint8_t_u_u(((*l_2715)++), ((l_2718 , (safe_rshift_func_uint8_t_u_s(l_2581[0], p_8))) == ((safe_mod_func_uint8_t_u_u(((0xEF612F231E079B01LL < (l_2712 |= ((safe_mul_func_uint8_t_u_u(g_69, (safe_sub_func_int64_t_s_s(((safe_div_func_uint16_t_u_u((g_2731 & ((*l_2645) >= l_2718.f2)), l_2718.f2)) >= 0L), (*l_2645))))) <= l_2718.f1))) && l_2712), l_2718.f2)) | l_2732)))) > 0xEB975445L) >= 0xF083L) >= l_2733))
                { 
                    const union U1 *****l_2735 = &l_2734;
                    (*l_2735) = l_2734;
                }
                else
                { 
                    return (*g_267);
                }
                l_2581[0] = (((*g_231) |= (((safe_sub_func_int64_t_s_s(p_9, ((safe_div_func_uint64_t_u_u(((l_2562 = ((g_1489 = &g_2451) == (l_2558[0] = l_2558[0]))) >= (((*l_2645) , (l_2718 , &g_1197)) == (void*)0)), l_2733)) , p_9))) ^ 2L) , (*l_2645))) < l_2542[5][2]);
            }
            else
            { 
                int64_t l_2757 = 0xB9D921401948BFCELL;
                int32_t l_2766 = (-1L);
                uint32_t *** const *l_2777 = (void*)0;
                uint32_t *l_2785 = &g_1784;
                int8_t *l_2797 = &l_2596;
                uint64_t *l_2803 = &l_2542[6][2];
                union U2 l_2810 = {0xAE21EDB1L};
                if ((((0xB3F9L ^ (g_394 == (l_2718.f1 > 1L))) || l_2562) <= l_2732))
                { 
                    int32_t *l_2743 = &l_2588;
                    uint16_t * const ****l_2750 = &l_2746[2][1][1];
                    uint8_t *l_2751 = &l_2546;
lbl_2754:
                    l_2743 = &l_1625;
                    (**g_230) = ((safe_mul_func_uint8_t_u_u((((*l_2750) = l_2746[1][2][2]) != (void*)0), ((*l_2751)--))) | (*g_267));
                    if (g_65.f2)
                        goto lbl_2754;
                }
                else
                { 
                    int8_t *l_2758 = &g_394;
                    union U1 *****l_2765 = &l_2763;
                    int64_t *l_2771 = &l_2757;
                    uint32_t *** const **l_2776[6][1];
                    int32_t l_2786 = 0xB3491336L;
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2776[i][j] = &l_2775[0][3];
                    }
                    l_2766 |= ((*l_2645) ^= (((((safe_add_func_uint8_t_u_u(g_175[5], (((*l_2758) = l_2757) < ((l_2630[3][1][0] = p_8) || (7L >= (g_2759 != ((*l_2765) = l_2763))))))) , 0UL) , 1L) && p_9) > p_9));
                    (*g_230) = (*g_230);
                    (*g_231) = ((safe_add_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(((((*g_2026) & (((*g_1946) = (*g_1946)) != l_2771)) == p_8) <= ((*l_2645) = p_8)), l_2732)) >= p_8), p_8)) | l_2718.f1);
                    (***g_229) = ((safe_mod_func_int8_t_s_s(((l_2774 == (l_2777 = (l_2775[0][3] = l_2775[0][3]))) == ((safe_lshift_func_uint16_t_u_u((((*l_2645) = (l_2786 = (safe_add_func_int8_t_s_s((((((safe_mod_func_int16_t_s_s((((p_9 ^ (((void*)0 == l_2784[1][1][4]) & ((***g_2272) ^ ((((void*)0 != l_2785) || p_9) >= 4UL)))) && 1L) , (*g_669)), l_2757)) | p_8) != (***g_229)) <= l_2786) >= 0x80B380F5L), 0x6EL)))) & p_8), l_2787)) < (***g_2272))), 0x53L)) == 0xD59DL);
                }
                if (((***g_229) = ((((****g_2759) , ((((safe_add_func_int16_t_s_s((*g_669), (safe_rshift_func_int8_t_s_u(p_8, (l_2792 == (void*)0))))) == ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(((*l_2797) = p_9), 6)) < ((safe_mod_func_int8_t_s_s((+((safe_mod_func_int16_t_s_s(((((*l_2803) = ((g_1675.f2 && g_175[6]) != p_8)) && p_9) == 0L), 65535UL)) >= p_8)), l_2766)) ^ (-3L))), l_2591[4])) > 0x2188L)) | 4UL) , l_2562)) ^ l_2591[2]) >= g_83[3])))
                { 
                    (***g_229) ^= 0x9664106CL;
                    (**g_230) = (((*g_1946) = (*g_1946)) != &g_175[1]);
                    (*g_231) = (0UL || 0xBF165ADEL);
                    return l_2718.f2;
                }
                else
                { 
                    int64_t l_2808[2][6][4] = {{{0x815DE5D0D9D96228LL,(-5L),0xF9AD18978B3FBFABLL,(-5L)},{(-1L),1L,2L,0xC2DF61CFCEFBEB51LL},{0xF9AD18978B3FBFABLL,4L,(-10L),0L},{0xC2DF61CFCEFBEB51LL,(-10L),0x815DE5D0D9D96228LL,2L},{0xC2DF61CFCEFBEB51LL,0L,(-10L),0xDB9062F410F1BC01LL},{0xF9AD18978B3FBFABLL,2L,2L,0xF9AD18978B3FBFABLL}},{{(-1L),2L,0xF9AD18978B3FBFABLL,5L},{0x815DE5D0D9D96228LL,0xDB9062F410F1BC01LL,(-7L),0xEF3B82416E6EAD8FLL},{(-1L),0L,1L,0xEF3B82416E6EAD8FLL},{2L,0xDB9062F410F1BC01LL,(-7L),5L},{0L,2L,0L,0xF9AD18978B3FBFABLL},{1L,2L,0xC2DF61CFCEFBEB51LL,0xDB9062F410F1BC01LL}}};
                    uint8_t *l_2811 = (void*)0;
                    int32_t l_2814 = 0x80C29B9BL;
                    int i, j, k;
                    (*g_231) ^= ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((l_2814 ^= (l_2718.f1 != ((l_2808[1][1][2] &= p_9) != ((l_2809 != ((((l_2810 , l_2811) == (void*)0) | ((*g_2451) , l_2810.f1)) , g_2812)) < (*l_2645))))) , p_9), l_2757)), p_8)) | p_8);
                }
            }
        }
    }
    return p_9;
}



static int16_t  func_25(int16_t * p_26, int64_t * p_27, uint32_t  p_28, int64_t * p_29)
{ 
    uint32_t ***l_2062 = &g_1213;
    uint32_t ***l_2064 = &g_1213;
    const int32_t l_2065 = 0x82CE7E70L;
    int32_t ****l_2092 = &g_229;
    int32_t *****l_2091 = &l_2092;
    int32_t l_2138 = 0xBFC1021AL;
    int32_t l_2139[4];
    int32_t l_2200 = 0xAABCDE15L;
    int16_t *****l_2207 = &g_2206;
    union U1 l_2250 = {0xA9B0E6724E73C6ABLL};
    int32_t *l_2259 = &g_2148;
    int32_t **l_2258 = &l_2259;
    uint16_t l_2286 = 0xDD93L;
    uint8_t *l_2294 = &g_1679;
    uint8_t l_2373 = 0x49L;
    int64_t l_2390 = (-9L);
    int32_t l_2403 = 0x15013F2CL;
    int16_t l_2461 = (-4L);
    int8_t l_2463 = (-5L);
    uint16_t l_2464 = 0x9F66L;
    int32_t l_2510 = 0x4EFE83E4L;
    uint64_t *l_2519 = &g_85;
    uint32_t ***l_2526 = &g_2025;
    uint64_t *l_2527[7][3][4] = {{{&g_1980,&g_256,&g_256,&g_256},{&g_256,(void*)0,&g_256,&g_256},{(void*)0,&g_256,&g_256,&g_256}},{{(void*)0,&g_1980,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_1980},{&g_1980,&g_256,&g_256,&g_256}},{{&g_256,&g_1980,&g_256,&g_256},{&g_256,&g_1980,&g_256,&g_256},{&g_1980,&g_256,&g_1980,&g_1980}},{{&g_1980,&g_256,(void*)0,&g_256},{&g_256,&g_1980,&g_1980,&g_256},{&g_256,&g_256,&g_1980,&g_256}},{{&g_256,(void*)0,(void*)0,&g_256},{&g_1980,&g_256,&g_1980,&g_256},{&g_1980,&g_256,&g_256,&g_256}},{{&g_256,(void*)0,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256},{&g_1980,&g_256,&g_256,&g_1980}},{{&g_256,&g_256,&g_1980,&g_256},{&g_256,(void*)0,&g_256,&g_256},{&g_256,(void*)0,&g_1980,&g_1980}}};
    uint32_t *l_2528 = &g_65.f1;
    int32_t *l_2529 = &g_174;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2139[i] = 7L;
    for (g_178 = (-25); (g_178 < 39); g_178 = safe_add_func_int8_t_s_s(g_178, 7))
    { 
        uint32_t ****l_2063 = &l_2062;
        int64_t l_2079 = 1L;
        int32_t *l_2080 = &g_393;
        uint16_t ****l_2098 = &g_463[1][0];
        int32_t l_2140[5];
        struct S0 l_2151[1] = {{0x0A5178D4L,1UL,32668,0x2E4AD233L,4UL,0x67A8L}};
        union U2 l_2233 = {0L};
        uint64_t **l_2240 = &g_513[6][0];
        union U2 **l_2311 = (void*)0;
        uint32_t ****l_2356 = (void*)0;
        int32_t * const *l_2492 = &l_2080;
        int32_t * const **l_2491 = &l_2492;
        int32_t ***l_2493 = &g_230;
        uint32_t l_2512[6][7] = {{0xE22C6D3FL,0x8E4A0112L,6UL,6UL,0x8E4A0112L,0xE22C6D3FL,18446744073709551614UL},{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551614UL,0x79E94900L,0x79E94900L,18446744073709551614UL},{18446744073709551615UL,0x99DC513AL,18446744073709551615UL,18446744073709551609UL,18446744073709551614UL,18446744073709551615UL,0xE22C6D3FL},{18446744073709551615UL,6UL,18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,6UL,18446744073709551615UL},{6UL,0x8E4A0112L,0xE22C6D3FL,18446744073709551614UL,1UL,18446744073709551615UL,1UL},{6UL,1UL,1UL,6UL,18446744073709551615UL,0x79E94900L,18446744073709551609UL}};
        const int16_t l_2513 = 0x6860L;
        int i, j;
        for (i = 0; i < 5; i++)
            l_2140[i] = (-4L);
        if ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((p_28 >= (((((*l_2063) = l_2062) != l_2064) & (l_2065 > (safe_mul_func_uint8_t_u_u((+(safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*l_2080) &= ((safe_rshift_func_uint8_t_u_s((0UL < (0x4BL > ((safe_mod_func_uint64_t_u_u(p_28, l_2079)) , 0x91L))), 6)) || 0xFF4454B7L)), p_28)), 0UL)) > g_177[0]), 0))), p_28)))) >= 1L)) < p_28), 0x75C5L)), g_234)))
        { 
            int32_t *l_2090 = &g_952.f2;
            int32_t *****l_2127 = (void*)0;
            int32_t l_2130 = 2L;
            struct S0 **l_2137[3][3][4] = {{{&g_965,&g_965,&g_965,&g_965},{&g_965,&g_965,&g_965,&g_965},{&g_965,&g_965,&g_965,&g_965}},{{&g_965,&g_965,&g_965,&g_965},{&g_965,&g_965,&g_965,&g_965},{&g_965,&g_965,&g_965,&g_965}},{{&g_965,&g_965,&g_965,&g_965},{&g_965,&g_965,&g_965,&g_965},{&g_965,&g_965,&g_965,&g_965}}};
            int32_t l_2142 = 8L;
            union U1 *l_2152 = &g_65;
            int32_t l_2155[4][5] = {{0xDBFDDEDEL,0xDBFDDEDEL,0xDBFDDEDEL,0xDBFDDEDEL,0xDBFDDEDEL},{0xAC0701F1L,0xAD1805FEL,0xAC0701F1L,0xAD1805FEL,0xAC0701F1L},{0xDBFDDEDEL,0xDBFDDEDEL,0xDBFDDEDEL,0xDBFDDEDEL,0xDBFDDEDEL},{0xAC0701F1L,0xAD1805FEL,0xAC0701F1L,0xAD1805FEL,0xAC0701F1L}};
            uint64_t l_2160 = 1UL;
            int32_t *l_2163 = &g_935.f3;
            int32_t l_2164 = 1L;
            int32_t *l_2165 = &l_2139[1];
            int32_t *l_2166 = &g_553;
            int32_t *l_2167 = (void*)0;
            int32_t *l_2168 = &l_2151[0].f3;
            int32_t *l_2169 = &g_395[2];
            int32_t *l_2170 = (void*)0;
            int32_t *l_2171 = &g_553;
            int32_t *l_2172 = (void*)0;
            int32_t *l_2173[1];
            uint32_t l_2174 = 1UL;
            uint8_t *l_2201 = &g_1679;
            uint8_t *l_2202 = &g_83[1];
            int16_t *l_2203 = &l_2151[0].f5;
            int8_t l_2204 = 0xB4L;
            int16_t *l_2208[3];
            uint64_t **l_2238 = (void*)0;
            int32_t l_2251[7][4] = {{(-1L),7L,6L,6L},{(-1L),(-1L),(-1L),(-9L)},{0x3E26FF88L,6L,(-1L),0xD4A67457L},{7L,0xD72737D9L,1L,(-1L)},{1L,0xD72737D9L,1L,0xD4A67457L},{0xD72737D9L,6L,0xFE6CE879L,(-9L)},{(-9L),(-1L),7L,6L}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2173[i] = &g_260;
            for (i = 0; i < 3; i++)
                l_2208[i] = &g_935.f5;
            if (l_2065)
                break;
            (*l_2090) = ((safe_lshift_func_uint16_t_u_s((((0UL | (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((*l_2080))), p_28))) & (*l_2080)) && (safe_rshift_func_uint8_t_u_s(((p_28 == ((*l_2080) = (2L > (((**g_2025) == p_28) & (-1L))))) == g_1784), 7))), 0)) <= p_28);
            for (g_65.f1 = 0; (g_65.f1 <= 2); g_65.f1 += 1)
            { 
                int8_t *l_2128[7][1] = {{&g_394},{&g_114},{&g_114},{&g_394},{&g_114},{&g_114},{&g_394}};
                int32_t *l_2129[7];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_2129[i] = &g_395[2];
                l_2091 = l_2091;
                if ((safe_add_func_int64_t_s_s((+(safe_mod_func_uint32_t_u_u((g_1012[(g_65.f1 + 3)] , p_28), ((l_2098 == (((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_2080) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((!((*p_27) = (((safe_mod_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(((*g_2026) = ((*l_2080) < (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((+(l_2130 &= ((g_114 = (((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((&l_2092 == ((p_28 , (((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_2080) != p_28), 0x3C6CL)), (*l_2090))) | 0x106BL) | (*g_669))) , l_2127)), p_28)) != p_28), 3)) , (void*)0) != (void*)0)) & 1UL))) > 0L), (*l_2080))) < (*g_267)), p_28)))), p_28)) == (*g_267)), 0x14C87AA3L)) >= p_28) && 0xECL))) , 4294967294UL) , p_28) || 0xCE84792CC9840705LL), g_2131)), 65535UL))), 9)) > g_176), 4)) , p_28), (*g_267))) > p_28) , (void*)0)) ^ 0L)))), (*l_2090))))
                { 
                    const struct S0 ***l_2136[6][5][7] = {{{&g_2134,(void*)0,&g_2134,&g_2134,&g_2134,&g_2134,(void*)0},{&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,(void*)0,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,(void*)0,(void*)0,&g_2134},{&g_2134,(void*)0,(void*)0,&g_2134,&g_2134,&g_2134,(void*)0},{(void*)0,&g_2134,&g_2134,(void*)0,(void*)0,&g_2134,&g_2134}},{{&g_2134,&g_2134,&g_2134,(void*)0,(void*)0,&g_2134,(void*)0},{&g_2134,&g_2134,&g_2134,(void*)0,&g_2134,&g_2134,&g_2134},{&g_2134,&g_2134,&g_2134,(void*)0,&g_2134,&g_2134,&g_2134},{&g_2134,&g_2134,(void*)0,(void*)0,(void*)0,&g_2134,&g_2134},{&g_2134,(void*)0,(void*)0,(void*)0,&g_2134,&g_2134,&g_2134}},{{&g_2134,(void*)0,&g_2134,(void*)0,&g_2134,(void*)0,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,(void*)0},{&g_2134,&g_2134,&g_2134,&g_2134,(void*)0,(void*)0,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,&g_2134,&g_2134,(void*)0,&g_2134,&g_2134,&g_2134}},{{&g_2134,&g_2134,(void*)0,&g_2134,&g_2134,&g_2134,&g_2134},{(void*)0,&g_2134,(void*)0,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,(void*)0,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,(void*)0,&g_2134,&g_2134,(void*)0,&g_2134,&g_2134}},{{(void*)0,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,(void*)0,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,(void*)0,&g_2134,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,(void*)0,(void*)0}},{{&g_2134,&g_2134,(void*)0,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,&g_2134,(void*)0,&g_2134,(void*)0,&g_2134,&g_2134},{&g_2134,(void*)0,(void*)0,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,(void*)0,(void*)0,&g_2134,&g_2134,&g_2134,&g_2134},{&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134,&g_2134}}};
                    int32_t l_2141 = 0x8A406DE0L;
                    int32_t l_2143 = 0xB18671D6L;
                    int32_t l_2144[3][7] = {{(-1L),8L,(-1L),8L,(-1L),8L,(-1L)},{0x1963712AL,0L,0L,0x1963712AL,0x1963712AL,0L,0L},{7L,8L,7L,8L,7L,8L,7L}};
                    uint64_t l_2145 = 18446744073709551608UL;
                    int i, j, k;
                    (*l_2090) ^= ((safe_mul_func_int8_t_s_s(8L, (p_28 ^ p_28))) > (1UL <= ((g_2134 = g_2134) != l_2137[2][0][1])));
                    --l_2145;
                    l_2140[2] &= ((*l_2090) &= (g_2148 ^ (((((&g_1689[1] != (void*)0) > (p_28 && p_28)) , ((safe_lshift_func_int16_t_s_u((l_2151[0] , ((*l_2080) = ((*g_669) = (*g_669)))), 2)) >= p_28)) < p_28) >= p_28)));
                }
                else
                { 
                    int16_t l_2153 = 0x4E59L;
                    int32_t l_2154 = 0x60CCA09DL;
                    int32_t l_2156 = 0L;
                    int32_t l_2157 = 0x826D405CL;
                    int32_t l_2159 = 0x080FCCD8L;
                    (*g_1197) = l_2152;
                    (*l_2090) ^= 0xA5ECAAE4L;
                    l_2160--;
                    if ((*l_2080))
                        break;
                }
                return (*l_2090);
            }
            l_2174++;
            if ((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((((*l_2080) >= ((*l_2166) ^= (safe_sub_func_uint32_t_u_u(p_28, ((l_2207 = ((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((*l_2080), ((*l_2168) = ((*g_669) = (*l_2080))))), (((safe_mul_func_int16_t_s_s(((*l_2203) &= (((safe_rshift_func_uint8_t_u_u(((*l_2202) ^= ((*l_2201) = ((safe_mul_func_uint8_t_u_u(0UL, ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(p_28, (+(0xCB5CL ^ p_28)))), l_2200)) < (*p_27)))) && 7L))), 0)) | 0xA0F23AAAL) == 0x1E3BL)), l_2204)) | 1UL) , 0x24L))), p_28)) , g_2205)) == (void*)0))))) && 0x9006L), p_28)), 3L)))
            { 
                union U1 *l_2213 = &g_1675;
                int32_t *l_2216 = &g_2158;
                const union U2 *l_2217 = &g_952;
                union U2 *l_2218 = &g_952;
                (*l_2168) = (((((safe_div_func_int64_t_s_s((((*g_2026) |= 9UL) >= (l_2213 == (void*)0)), (*p_27))) && ((**g_2025) = (safe_mul_func_uint8_t_u_u((p_28 == (*l_2080)), ((*l_2202) = (((*l_2216) = g_174) , 1UL)))))) , l_2217) == l_2218) | 1UL);
            }
            else
            { 
                uint64_t l_2226 = 18446744073709551615UL;
                uint64_t ***l_2239[2][4] = {{&l_2238,&l_2238,&l_2238,&l_2238},{&l_2238,&l_2238,&l_2238,&l_2238}};
                int32_t *l_2241 = &l_2155[1][0];
                int32_t l_2252 = 0x3845B144L;
                int i, j;
                for (g_174 = 0; (g_174 <= 3); g_174 += 1)
                { 
                    int i;
                    return g_83[(g_174 + 3)];
                }
                for (g_952.f1 = 6; (g_952.f1 >= 13); g_952.f1++)
                { 
                    uint32_t ***l_2222 = &g_2025;
                    uint32_t ****l_2221 = &l_2222;
                    uint32_t ****l_2223 = (void*)0;
                    uint32_t ***l_2225 = &g_2025;
                    uint32_t ****l_2224 = &l_2225;
                    if (p_28)
                        break;
                    (*l_2224) = ((*l_2221) = &g_2025);
                    (*l_2171) |= ((*l_2165) = (p_28 , (*l_2080)));
                    ++l_2226;
                }
                (*l_2080) = p_28;
                (*l_2080) = (safe_add_func_int8_t_s_s((((*p_27) = ((((0x26DAL & (-8L)) | l_2226) || (((safe_rshift_func_uint8_t_u_u(((((*g_669) &= (l_2226 < (l_2233 , (((((safe_lshift_func_int8_t_s_s(p_28, 5)) ^ (safe_add_func_uint32_t_u_u(((l_2240 = l_2238) == l_2238), p_28))) > p_28) == (*l_2080)) & p_28)))) & (*l_2080)) >= l_2226), (*l_2080))) >= 1L) >= 1L)) , (*l_2080))) < l_2226), 0xE7L));
                for (g_65.f1 = 0; (g_65.f1 <= 1); g_65.f1 += 1)
                { 
                    int32_t *l_2242 = (void*)0;
                    l_2242 = ((*g_230) = l_2241);
                    (*l_2171) = ((safe_unary_minus_func_uint8_t_u(0x76L)) && p_28);
                    if ((*l_2080))
                        continue;
                    l_2252 ^= ((safe_div_func_uint64_t_u_u(((((*l_2080) = 18446744073709551615UL) , p_28) , ((safe_lshift_func_int16_t_s_s((*l_2242), (safe_add_func_uint32_t_u_u(((*g_2026) = (*l_2080)), p_28)))) ^ (l_2250 , (((*p_27) |= (-3L)) >= p_28)))), l_2251[1][1])) || 0x52L);
                }
            }
        }
        else
        { 
            uint16_t l_2253 = 1UL;
            int8_t l_2270 = 0L;
            union U2 l_2324 = {0xAB8D2321L};
            (*l_2080) ^= l_2253;
            if ((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((void*)0 == l_2258), (l_2270 = ((*g_669) = ((safe_mod_func_uint16_t_u_u((((*l_2080) & (safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((safe_div_func_int64_t_s_s((((void*)0 != &g_1947[0][5]) && (safe_sub_func_uint32_t_u_u(((l_2139[1] = (((*l_2080) <= (7UL | (*l_2080))) ^ 0xC4L)) && p_28), 0x7E37B525L))), p_28)) & (*g_267)), 2L)) , p_28), g_178))) & 0UL), 0x5C33L)) && 1L))))), l_2253)) ^ p_28) <= 0x460B993C1C18EE2FLL))
            { 
                int8_t *l_2287 = (void*)0;
                int8_t *l_2288 = &l_2270;
                const int32_t l_2289 = (-1L);
                uint16_t l_2290 = 0x6F27L;
                int32_t l_2291 = (-1L);
                uint8_t *l_2296 = &g_83[1];
                uint8_t **l_2295 = &l_2296;
                uint16_t *l_2300 = (void*)0;
                uint16_t **l_2299 = &l_2300;
                uint16_t *l_2310 = &l_2253;
                int32_t *l_2312 = (void*)0;
                l_2291 = (l_2140[2] = (p_28 == ((g_65.f2 &= ((g_2271 == &g_2272) , ((safe_lshift_func_uint16_t_u_s((((((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u(4294967291UL, ((*l_2080) = (((l_2233 , ((((*l_2259) = ((+((safe_mod_func_int8_t_s_s(p_28, ((*l_2288) = (((((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((l_2286 < g_735[1][5][0]), 0xB24985DEDAE3ED04LL)), l_2270)) , 0xE7EB5CDAL) == (****g_2271)) , p_28) & 253UL)))) >= 0x93FC0921L)) ^ g_174)) , (*l_2080)) != l_2289)) > l_2290) || p_28)))), 0x9444C5D4L)) , (void*)0) != (void*)0) | (*p_27)) & 5L), (*g_669))) || 3UL))) , (*l_2080))));
                l_2291 ^= ((((((*l_2080) , (safe_rshift_func_int16_t_s_u(((l_2294 == ((*l_2295) = &g_1689[1])) , (safe_mul_func_int16_t_s_s(((void*)0 == l_2299), (safe_mod_func_int16_t_s_s((+(safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((((*l_2310) = 1UL) >= ((l_2311 != g_1489) & 0x8016F65766D6CF62LL)), (*g_267))), 14)), (-1L)))), p_28))))), p_28))) < p_28) , 0x48L) , 0UL) | l_2270);
            }
            else
            { 
                struct S0 l_2317[5][2][3] = {{{{-1L,0x77D3FC43L,13815,0x6A9925C6L,4294967291UL,0L},{0x25F62C0FL,4294967290UL,29489,0x9F2DBEF7L,0UL,0x5F70L},{0x962EE6D0L,0x8A835A23L,30462,5L,0UL,1L}},{{0xD3B3152CL,0x8FB770A7L,20311,-7L,0x8AFA2FAFL,-9L},{0xD3B3152CL,0x8FB770A7L,20311,-7L,0x8AFA2FAFL,-9L},{0x962EE6D0L,0x8A835A23L,30462,5L,0UL,1L}}},{{{0x25F62C0FL,4294967290UL,29489,0x9F2DBEF7L,0UL,0x5F70L},{-1L,0x77D3FC43L,13815,0x6A9925C6L,4294967291UL,0L},{0xEFF3DE03L,0x9BD697E7L,13912,-8L,4294967290UL,0L}},{{0x35B839B6L,0x325EB6BAL,13827,8L,0xF31F1566L,0xD036L},{0xD3B3152CL,0x8FB770A7L,20311,-7L,0x8AFA2FAFL,-9L},{0x35B839B6L,0x325EB6BAL,13827,8L,0xF31F1566L,0xD036L}}},{{{0x35B839B6L,0x325EB6BAL,13827,8L,0xF31F1566L,0xD036L},{0x25F62C0FL,4294967290UL,29489,0x9F2DBEF7L,0UL,0x5F70L},{0xD3B3152CL,0x8FB770A7L,20311,-7L,0x8AFA2FAFL,-9L}},{{0x25F62C0FL,4294967290UL,29489,0x9F2DBEF7L,0UL,0x5F70L},{0x35B839B6L,0x325EB6BAL,13827,8L,0xF31F1566L,0xD036L},{0x35B839B6L,0x325EB6BAL,13827,8L,0xF31F1566L,0xD036L}}},{{{0xD3B3152CL,0x8FB770A7L,20311,-7L,0x8AFA2FAFL,-9L},{0x35B839B6L,0x325EB6BAL,13827,8L,0xF31F1566L,0xD036L},{0xEFF3DE03L,0x9BD697E7L,13912,-8L,4294967290UL,0L}},{{-1L,0x77D3FC43L,13815,0x6A9925C6L,4294967291UL,0L},{0x25F62C0FL,4294967290UL,29489,0x9F2DBEF7L,0UL,0x5F70L},{0x962EE6D0L,0x8A835A23L,30462,5L,0UL,1L}}},{{{0xD3B3152CL,0x8FB770A7L,20311,-7L,0x8AFA2FAFL,-9L},{0xD3B3152CL,0x8FB770A7L,20311,-7L,0x8AFA2FAFL,-9L},{0x962EE6D0L,0x8A835A23L,30462,5L,0UL,1L}},{{0x25F62C0FL,4294967290UL,29489,0x9F2DBEF7L,0UL,0x5F70L},{-1L,0x77D3FC43L,13815,0x6A9925C6L,4294967291UL,0L},{0xEFF3DE03L,0x9BD697E7L,13912,-8L,4294967290UL,0L}}}};
                union U2 *l_2325 = (void*)0;
                union U2 *l_2326[7] = {&g_952,&g_952,&g_952,&g_952,&g_952,&g_952,&g_952};
                int32_t *l_2331 = &l_2139[1];
                int8_t *l_2332 = &l_2270;
                int32_t ***l_2348 = &g_321;
                uint32_t *l_2349 = &l_2151[0].f1;
                int i, j, k;
                (*l_2080) = (safe_add_func_int8_t_s_s(p_28, (((safe_lshift_func_int16_t_s_u((l_2317[3][1][2] , ((((*l_2294)++) || ((**g_2134) , ((l_2151[0] , (*l_2080)) == (5UL & (l_2270 == (*l_2080)))))) > p_28)), 1)) <= 0x19L) >= 255UL)));
                l_2138 |= (0L || ((*l_2080) = (safe_add_func_int16_t_s_s(((*g_669) = (safe_mul_func_uint8_t_u_u(((((l_2324 = l_2324) , ((*l_2331) = (safe_sub_func_int16_t_s_s(p_28, (((*l_2080) & (((*l_2332) ^= ((void*)0 != l_2331)) & ((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((*l_2331) > 0xA08552ADL) == l_2324.f1), 0xC7E7L)), l_2324.f2)) > 4L))) , p_28))))) , g_152) , 0xD3L), p_28))), l_2253))));
                l_2138 = (((*l_2332) |= (safe_sub_func_int32_t_s_s((18446744073709551610UL >= (~(g_2340[3] != ((+(****g_2271)) , (void*)0)))), (((*l_2259) &= (-6L)) , ((*l_2349) &= ((*p_27) , (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((((*g_669) = (safe_mul_func_uint16_t_u_u((((**l_2091) = (*l_2092)) == l_2348), (*l_2080)))) >= p_28), 1)) , (*l_2331)), g_2158)))))))) && p_28);
                return (*l_2080);
            }
        }
        if ((p_28 > ((safe_div_func_int64_t_s_s((*l_2080), ((*p_27) = (*p_27)))) && ((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((void*)0 == l_2356), (((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((((*l_2080) | 0x7E9EL) && (*l_2080)))), 5)), (*l_2080))) && (*p_27)) <= (*l_2080)))), 6)) , 8UL))))
        { 
            int8_t *l_2369[6][3] = {{&g_394,(void*)0,&g_394},{&g_114,&g_114,&g_394},{(void*)0,&g_394,&g_394},{&g_394,(void*)0,&g_394},{&g_114,&g_114,&g_394},{(void*)0,&g_394,&g_394}};
            uint16_t *l_2370[3][1];
            int32_t l_2371 = (-7L);
            const int32_t l_2372 = 0xEA71B313L;
            union U2 *l_2439 = &g_952;
            int32_t *l_2452 = &l_2371;
            int32_t *l_2453 = &g_935.f3;
            int32_t *l_2454 = &l_2403;
            int32_t *l_2455 = &g_174;
            int32_t *l_2456 = &g_174;
            int32_t *l_2457 = (void*)0;
            int32_t *l_2458 = (void*)0;
            int32_t *l_2459 = &l_2138;
            int32_t *l_2460[4];
            int8_t l_2462[5][5] = {{0x10L,0L,0x89L,0L,0x10L},{0x15L,0L,(-1L),0L,0L},{0x10L,(-1L),(-1L),0x10L,0L},{0L,0x10L,0x89L,0L,0L},{0x15L,0x10L,0x15L,0L,0x10L}};
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2370[i][j] = &g_775[2][1];
            }
            for (i = 0; i < 4; i++)
                l_2460[i] = &g_395[2];
            if ((4294967295UL < ((*l_2080) = (+(((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((*l_2080), p_28)) < (l_2371 = ((p_28 > (((void*)0 != (*g_2025)) ^ ((g_114 |= p_28) , 255UL))) >= (*g_2026)))), l_2372)), l_2373)) <= p_28) , l_2372)))))
            { 
                uint16_t l_2391 = 0xEC7FL;
                int32_t l_2392 = 2L;
                int16_t *l_2393 = &l_2151[0].f5;
                int16_t *l_2394 = &g_935.f5;
                int32_t *l_2395 = &g_260;
                int8_t l_2396 = 0xCDL;
                int32_t ****l_2417 = &g_229;
                const uint64_t **l_2422 = &g_642[0][0];
                const uint64_t ***l_2421 = &l_2422;
                uint16_t l_2435 = 1UL;
                union U2 l_2436 = {0L};
                (*l_2395) |= (safe_rshift_func_uint16_t_u_u((((l_2233.f2 &= (((*l_2394) = ((*l_2393) &= (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_2371 & 0xB544L), (p_28 > ((safe_mod_func_int16_t_s_s(((*g_669) &= (safe_sub_func_uint32_t_u_u((l_2390 | l_2372), (((p_28 < (l_2372 ^ l_2391)) || l_2392) <= 0UL)))), p_28)) , 2L)))), 0x4E9E2562L)), (*l_2080))), l_2392)), l_2392)))) > (*l_2080))) ^ 0x980DL) >= (*l_2080)), 11));
                if (l_2396)
                    break;
                for (g_65.f1 = (-20); (g_65.f1 <= 29); g_65.f1++)
                { 
                    uint64_t *l_2399 = &g_85;
                    uint64_t *l_2402 = &g_256;
                    uint32_t l_2418 = 0x4A57D0CFL;
                    l_2139[2] ^= (((*l_2402) |= ((*l_2399)++)) || (l_2403 > ((safe_div_func_int64_t_s_s(((((safe_sub_func_int16_t_s_s(0x2D80L, ((safe_add_func_uint8_t_u_u(((l_2372 ^ (safe_rshift_func_int16_t_s_s((!((((safe_sub_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((((l_2371 < ((void*)0 != l_2417)) || (g_1951 , (**g_2025))) | p_28), l_2371)) > l_2371) != 0xBF56540EL), p_28)) , (****g_2271)) <= l_2371) & l_2371)), (*l_2395)))) != (*p_27)), 0x16L)) & 18446744073709551608UL))) <= p_28) < p_28) && p_28), 18446744073709551615UL)) > l_2418)));
                    return p_28;
                }
                (*l_2395) |= (safe_add_func_int32_t_s_s(p_28, (((void*)0 != l_2421) > (((((safe_mod_func_uint32_t_u_u((((*p_27) >= l_2371) != (safe_lshift_func_int8_t_s_s(((((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(248UL, ((l_2435 | 0x03BCL) ^ l_2371))) > 6UL), 0x9FL)), p_28)) < (*p_27)) | (*l_2080)) , 1L), 1))), (*g_2026))) == l_2372) , l_2436) , p_28) >= 0UL))));
            }
            else
            { 
                int32_t *l_2437[1];
                uint16_t *****l_2438 = &g_462[5];
                uint64_t *l_2450 = &g_256;
                int i;
                for (i = 0; i < 1; i++)
                    l_2437[i] = &g_260;
                (*g_230) = l_2437[0];
                (*g_231) = (((((*l_2438) = &g_463[0][2]) != (l_2250 , &g_1357)) ^ (l_2439 == ((safe_add_func_uint16_t_u_u((*l_2080), (safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_28, (safe_lshift_func_int8_t_s_u((((*l_2450) = (safe_add_func_uint8_t_u_u(p_28, 0x82L))) || 0UL), 5)))), (*l_2080))))) , g_2451))) , (*l_2080));
            }
            l_2464++;
        }
        else
        { 
            int16_t **** const *l_2467[2][6] = {{&g_2206,(void*)0,(void*)0,&g_2206,(void*)0,(void*)0},{&g_2206,(void*)0,(void*)0,&g_2206,(void*)0,(void*)0}};
            uint64_t *l_2474[7];
            int32_t l_2475 = 0x6A57D192L;
            int32_t l_2476 = 0L;
            int32_t l_2477 = 0L;
            int32_t l_2478 = 0x42BEC652L;
            int32_t l_2479 = 0L;
            uint32_t l_2480 = 18446744073709551615UL;
            uint16_t *l_2483 = (void*)0;
            uint16_t *l_2484 = &l_2464;
            int32_t *l_2511[4] = {&g_152,&g_152,&g_152,&g_152};
            int i, j;
            for (i = 0; i < 7; i++)
                l_2474[i] = &g_1980;
            (*l_2080) |= (&g_2206 == l_2467[0][5]);
            l_2510 = (((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((l_2140[2] = (safe_add_func_int16_t_s_s(((***l_2491) = ((l_2475 = (--l_2480)) , ((*g_669) = (((((*l_2484) = l_2480) | (safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((l_2491 != ((**l_2091) = l_2493)) & (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((*l_2080), ((*l_2294) ^= (safe_sub_func_uint16_t_u_u(l_2476, (safe_rshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((**l_2492) , (safe_add_func_int8_t_s_s((((*l_2258) = &g_2158) == (void*)0), p_28))) && p_28), (***g_2272))), l_2479)) & 0x4F62FEAE699311DFLL), 2))))))), p_28)), l_2510))), l_2479)), 1)) <= (*p_27)) , 0x5CL), l_2475))) | l_2476) | 4294967287UL)))), 65535UL))) | p_28), l_2512[5][5])) == 7L), l_2513)) , 0x67L) , 1L);
            if (p_28)
                break;
            if (p_28)
                break;
        }
    }
    (*l_2529) = ((+(0x9FC9L == (safe_mod_func_uint64_t_u_u(p_28, ((*l_2519) &= (safe_lshift_func_uint8_t_u_s(p_28, 1))))))) == (((safe_mod_func_uint32_t_u_u(((*l_2528) &= (((safe_lshift_func_uint16_t_u_u(((****g_2271) | (g_19[1][3][0] != 1UL)), ((l_2139[1] &= (safe_sub_func_uint32_t_u_u(((((l_2526 == l_2526) <= (*p_27)) > g_114) != (*g_2026)), (*g_2026)))) & 1UL))) && (*p_27)) & p_28)), 0xA49896F3L)) <= (*g_267)) , 0xD07DB5B4E78FF907LL));
    g_2532 = (safe_mod_func_int8_t_s_s(((*l_2529) <= ((*l_2529) , 0x7E46AF6DL)), p_28));
    return (*l_2529);
}



static int16_t * func_30(int32_t  p_31, int32_t  p_32, int64_t * p_33, int16_t * p_34)
{ 
    uint32_t l_1627 = 0x844EDCF8L;
    int32_t l_1632 = 1L;
    int32_t l_1636 = (-4L);
    int64_t l_1665 = 0xC65A0BC856111182LL;
    int32_t l_1666 = (-1L);
    int32_t l_1688 = 0x0C9922EBL;
    int16_t *l_1701 = &g_177[0];
    union U2 l_1707[5] = {{1L},{1L},{1L},{1L},{1L}};
    struct S0 l_1708 = {0x4431DF0BL,0UL,7455,-3L,8UL,-2L};
    uint8_t l_1740[2][1];
    int32_t l_1764 = (-10L);
    int8_t l_1774[3][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x16L,0x16L,0x16L,0x16L,0x16L},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
    int32_t l_1781[7] = {0xAD9B0C1AL,0xAD9B0C1AL,0xAD9B0C1AL,0xAD9B0C1AL,0xAD9B0C1AL,0xAD9B0C1AL,0xAD9B0C1AL};
    int32_t l_1782 = 0xE4189D1AL;
    union U1 l_1800 = {1L};
    const int32_t *l_1830 = (void*)0;
    const int32_t **l_1829 = &l_1830;
    const int32_t ***l_1828[5][6][2] = {{{&l_1829,&l_1829},{&l_1829,&l_1829},{(void*)0,&l_1829},{&l_1829,(void*)0},{&l_1829,&l_1829},{&l_1829,(void*)0}},{{&l_1829,&l_1829},{(void*)0,&l_1829},{&l_1829,&l_1829},{&l_1829,&l_1829},{&l_1829,&l_1829},{(void*)0,&l_1829}},{{&l_1829,(void*)0},{&l_1829,&l_1829},{&l_1829,(void*)0},{&l_1829,&l_1829},{(void*)0,&l_1829},{&l_1829,&l_1829}},{{&l_1829,&l_1829},{&l_1829,&l_1829},{(void*)0,&l_1829},{&l_1829,(void*)0},{&l_1829,&l_1829},{&l_1829,(void*)0}},{{&l_1829,&l_1829},{(void*)0,&l_1829},{&l_1829,&l_1829},{&l_1829,&l_1829},{&l_1829,&l_1829},{(void*)0,&l_1829}}};
    const int32_t *** const *l_1827[4][6] = {{&l_1828[0][3][0],&l_1828[4][4][1],&l_1828[0][3][0],&l_1828[0][3][0],&l_1828[4][4][1],(void*)0},{&l_1828[0][3][0],&l_1828[0][3][0],&l_1828[0][3][0],&l_1828[0][3][0],&l_1828[0][3][0],&l_1828[0][3][0]},{&l_1828[0][3][0],(void*)0,(void*)0,&l_1828[0][3][0],(void*)0,&l_1828[0][3][0]},{&l_1828[0][3][0],&l_1828[4][4][1],&l_1828[0][3][0],&l_1828[0][3][0],&l_1828[4][4][1],(void*)0}};
    union U1 **l_1866 = &g_1198[3][4][0];
    int8_t l_1890[7][2][5] = {{{(-1L),1L,(-5L),0x37L,1L},{7L,(-5L),0x3FL,0x37L,(-2L)}},{{0x37L,2L,2L,0x37L,0x1CL},{0xAAL,0x1FL,1L,0x37L,0x39L}},{{0xD4L,0x3FL,0x1FL,0x37L,0x8AL},{(-1L),1L,(-5L),0x37L,1L}},{{7L,(-5L),0x3FL,0x37L,(-2L)},{0x37L,2L,2L,0x37L,0x1CL}},{{0xAAL,0x1FL,1L,0x37L,0x39L},{0xD4L,0x3FL,0x1FL,0x37L,0x8AL}},{{(-1L),1L,(-5L),0x37L,1L},{7L,(-5L),0x3FL,0x37L,(-2L)}},{{0x37L,2L,2L,0x37L,0x1CL},{0xAAL,0x1FL,1L,0x37L,0x39L}}};
    int16_t l_1891 = 1L;
    int8_t l_1893 = 0x9FL;
    const uint64_t **l_1907 = &g_642[1][1];
    const uint64_t ***l_1906 = &l_1907;
    uint16_t *l_1912 = &g_1404;
    uint16_t **l_1911 = &l_1912;
    union U2 *l_1917 = &l_1707[0];
    union U2 **l_1916 = &l_1917;
    int64_t * const l_1950 = &g_1951;
    int64_t * const *l_1949[4];
    union U1 *l_1969 = (void*)0;
    int16_t l_1979 = 6L;
    uint64_t l_1998 = 0x9E87BD1118E5DDACLL;
    struct S0 **l_2021 = &g_965;
    int8_t ***l_2051 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1740[i][j] = 255UL;
    }
    for (i = 0; i < 4; i++)
        l_1949[i] = &l_1950;
    if (((**g_230) = l_1627))
    { 
        uint8_t *l_1630 = &g_83[0];
        int32_t l_1631 = (-7L);
        int64_t *l_1646 = &g_1012[1];
        int32_t l_1647 = 0x7BD91FF8L;
        int8_t *l_1648 = &g_394;
        int64_t l_1649 = 0xE475DA2A371CB285LL;
        union U2 l_1668 = {0xDB996D51L};
        int32_t l_1737 = 0x9C7F7E98L;
        int32_t l_1738 = 0L;
        int32_t l_1739 = 0xF5704C8EL;
        (**g_230) ^= (0xBEL && ((g_952 , (0x2BFFD5FE91F12B6ELL && ((safe_add_func_uint8_t_u_u(0xD0L, ((*l_1630) = p_32))) & l_1627))) , l_1631));
        if ((((((g_83[1] > (((((*p_33) = g_19[1][2][0]) >= (l_1632 = (g_65.f1 ^ l_1631))) >= ((safe_unary_minus_func_int8_t_s(((safe_add_func_int8_t_s_s((l_1636 = (*g_267)), ((*l_1648) = (safe_sub_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_s(0x9DL, (((g_13 = ((+((((*l_1646) = (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((p_32 & 1L), 5)), 4)) , (-1L)) == p_32)) , l_1627) == l_1631)) < l_1647)) , p_34) != (void*)0))) >= (-1L)) >= l_1631) & 4294967291UL), p_32))))) && 0xA3L))) , g_175[6])) , (-1L))) <= l_1631) <= l_1627) , 0xD71ADC9AA8A26F7CLL) && l_1649))
        { 
            union U2 l_1650 = {0x7DFE61E5L};
            int16_t *l_1667[2][3][4] = {{{&g_935.f5,&g_177[0],(void*)0,&g_177[2]},{&g_935.f5,&g_177[0],&g_177[0],&g_935.f5},{&g_177[0],&g_935.f5,&g_935.f5,&g_19[0][5][0]}},{{&g_177[0],&g_935.f5,&g_177[0],(void*)0},{&g_935.f5,&g_19[0][5][0],(void*)0,(void*)0},{&g_935.f5,&g_935.f5,&g_177[2],&g_19[0][5][0]}}};
            int32_t l_1726 = 0x9CC88F02L;
            const uint32_t *l_1730 = (void*)0;
            uint32_t *l_1732 = &l_1708.f1;
            int i, j, k;
            if (((0x14L <= ((((l_1650 , (((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((*g_669) ^= ((l_1631 = ((p_31 == (safe_div_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_1650.f0, ((~(safe_mul_func_uint8_t_u_u((+p_32), (65535UL < p_31)))) & (*g_267)))), 1)) < 0x299AF34AL) && 0xBEA7FBE6953A1FE0LL), l_1650.f2))) >= l_1665)) | (**g_230))) | 1L), 1)), l_1650.f0)) | l_1650.f1) | p_32)) & 1UL) , (void*)0) == (void*)0)) >= l_1666))
            { 
                uint16_t *l_1676[1][1];
                int32_t l_1677[5] = {0x7DE46C0BL,0x7DE46C0BL,0x7DE46C0BL,0x7DE46C0BL,0x7DE46C0BL};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1676[i][j] = &g_234;
                }
lbl_1678:
                for (g_930 = 0; (g_930 <= 2); g_930 += 1)
                { 
                    return l_1667[1][2][2];
                }
                if (((l_1650 , ((l_1668 = g_952) , p_32)) <= (safe_mul_func_int16_t_s_s((*p_34), (l_1677[1] = ((**g_1216) , (safe_mod_func_uint16_t_u_u(p_31, (((safe_div_func_uint8_t_u_u(((*l_1630) = ((l_1647 | p_32) && 4294967295UL)), p_31)) , g_1675) , p_32)))))))))
                { 
                    (*g_230) = &l_1677[1];
                    if (l_1666)
                        goto lbl_1678;
                    (*g_230) = (*g_230);
                }
                else
                { 
                    int32_t *l_1682 = (void*)0;
                    int32_t *l_1683 = &l_1632;
                    int32_t *l_1684 = &g_553;
                    int32_t *l_1685 = &g_152;
                    int32_t *l_1686 = &l_1668.f2;
                    int32_t *l_1687[5][3];
                    struct S0 l_1692 = {1L,0xAF43C401L,10840,3L,0xB3A555ACL,0x9DA6L};
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1687[i][j] = &l_1631;
                    }
                    --g_1679;
                    (*g_230) = &l_1632;
                    g_1689[1]++;
                    (**g_230) = (l_1692 , ((safe_rshift_func_uint16_t_u_u((l_1650.f2 = ((*l_1686) = (l_1668 , ((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0x40L, 0xCEL)), (((l_1668 , (p_31 , &l_1687[4][0])) == &l_1687[4][0]) > p_31))) & 0UL)))), (*l_1684))) & (-1L)));
                }
                for (l_1649 = 0; (l_1649 >= 21); l_1649 = safe_add_func_uint64_t_u_u(l_1649, 3))
                { 
                    return l_1701;
                }
            }
            else
            { 
                int32_t *l_1711 = &g_553;
                (*l_1711) = (safe_sub_func_int32_t_s_s(p_31, ((safe_rshift_func_uint16_t_u_s((!((((l_1707[0] , (-7L)) < (l_1650.f2 ^= 1L)) , (l_1708 , (safe_mul_func_int8_t_s_s(p_32, ((l_1650.f2 = ((*g_231) = (((((p_32 , l_1708.f4) >= 0x793F500D3D80515ALL) || l_1708.f3) , l_1708.f5) && 0x76L))) , l_1708.f5))))) , p_32)), 10)) > p_31)));
                (*l_1711) &= (+(safe_rshift_func_int16_t_s_s(0x01D6L, 7)));
            }
            (*g_964) = &l_1708;
            for (g_1675.f0 = (-11); (g_1675.f0 >= (-1)); ++g_1675.f0)
            { 
                const uint32_t *l_1724 = &g_1466;
                const uint32_t **l_1723 = &l_1724;
                int32_t l_1725 = 0xFBFB6384L;
                int32_t *l_1727[5][2];
                const uint32_t **l_1731 = &l_1730;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1727[i][j] = (void*)0;
                }
                l_1650.f2 ^= p_32;
                l_1726 &= (l_1725 ^= (((safe_mul_func_uint8_t_u_u(g_175[1], (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_1707[0].f1, 5)), ((l_1631 >= (l_1650.f0 == ((((((l_1668.f0 , l_1723) == (void*)0) <= 0xA3F9C4178C01603BLL) , (void*)0) != &g_1214) == g_935.f2))) , l_1631))))) , p_31) <= g_952.f0));
                l_1726 |= (-4L);
                l_1631 = (((*l_1630) ^= (safe_rshift_func_uint8_t_u_s(0x4AL, p_32))) | ((*p_34) && ((((*l_1731) = l_1730) == l_1732) , (safe_mod_func_int16_t_s_s((*p_34), ((l_1650.f1 ^ l_1631) , p_32))))));
            }
        }
        else
        { 
            int32_t *l_1735 = &l_1668.f2;
            int32_t *l_1736[6][6][2] = {{{&g_395[1],&l_1688},{(void*)0,&g_952.f2},{&g_395[2],&g_395[2]},{&g_395[1],&g_395[2]},{&g_395[2],&g_952.f2},{(void*)0,&l_1688}},{{&g_395[1],(void*)0},{&l_1688,&g_952.f2},{&l_1688,(void*)0},{&g_395[1],&l_1688},{(void*)0,&g_952.f2},{&g_395[2],&g_395[2]}},{{&g_395[1],&g_395[2]},{&g_395[2],&g_952.f2},{(void*)0,&l_1688},{&g_395[1],(void*)0},{&l_1688,&g_952.f2},{&l_1688,(void*)0}},{{&g_395[1],&l_1688},{(void*)0,&g_952.f2},{&g_395[2],&g_395[2]},{&g_395[1],&g_395[2]},{&g_395[2],&g_952.f2},{(void*)0,&l_1688}},{{&g_395[1],(void*)0},{&l_1688,&g_952.f2},{&l_1688,(void*)0},{&g_395[1],&l_1688},{(void*)0,&g_952.f2},{&g_395[2],&g_395[2]}},{{&g_395[1],&g_395[2]},{&g_395[2],&g_952.f2},{(void*)0,&l_1688},{&g_395[1],(void*)0},{&g_393,&g_3[4][2][1]},{&g_393,&g_952.f2}}};
            int i, j, k;
            (*g_230) = (void*)0;
            --l_1740[0][0];
            for (l_1647 = (-30); (l_1647 != 0); l_1647 = safe_add_func_uint64_t_u_u(l_1647, 6))
            { 
                uint32_t l_1753[3][7][5] = {{{0x5CC3B015L,1UL,0x16879EEDL,0UL,18446744073709551614UL},{0x5FC8D992L,0UL,0xD3DD22C1L,18446744073709551614UL,0xD3DD22C1L},{0x1935B187L,0x1935B187L,18446744073709551615UL,18446744073709551614UL,6UL},{0UL,0x5FC8D992L,18446744073709551610UL,0UL,0x1935B187L},{1UL,0x5CC3B015L,1UL,18446744073709551612UL,0x5CC3B015L},{0x1935B187L,0x5FC8D992L,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551610UL,0x1935B187L,18446744073709551610UL,1UL,18446744073709551615UL}},{{18446744073709551614UL,0UL,0x16879EEDL,1UL,0x5CC3B015L},{0x5FC8D992L,1UL,0xB47F09D9L,18446744073709551614UL,0x1935B187L},{0xD3DD22C1L,0x1935B187L,0x16879EEDL,0x5CC3B015L,6UL},{1UL,18446744073709551610UL,18446744073709551610UL,1UL,0xD3DD22C1L},{1UL,18446744073709551614UL,18446744073709551607UL,18446744073709551612UL,18446744073709551614UL},{0xD3DD22C1L,0x5FC8D992L,1UL,0x16879EEDL,18446744073709551615UL},{0x5FC8D992L,0xD3DD22C1L,18446744073709551610UL,18446744073709551612UL,0x16879EEDL}},{{18446744073709551614UL,1UL,18446744073709551615UL,1UL,18446744073709551614UL},{18446744073709551610UL,1UL,0xD3DD22C1L,0x5CC3B015L,0x1935B187L},{0x1935B187L,0xD3DD22C1L,0x16879EEDL,18446744073709551614UL,18446744073709551615UL},{1UL,0x5FC8D992L,3UL,1UL,0x1935B187L},{0UL,18446744073709551614UL,1UL,1UL,18446744073709551614UL},{0x1935B187L,18446744073709551610UL,1UL,18446744073709551615UL,0x16879EEDL},{0x5FC8D992L,0x1935B187L,3UL,18446744073709551612UL,18446744073709551615UL}}};
                int32_t l_1759 = 0x16DEB8D7L;
                int32_t l_1763 = 0L;
                int i, j, k;
                for (l_1668.f0 = (-8); (l_1668.f0 <= 10); l_1668.f0++)
                { 
                    const uint32_t l_1751 = 0x39A3BC32L;
                    int32_t l_1752[7][6][4] = {{{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L}},{{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L}},{{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L}},{{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L}},{{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L}},{{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L}},{{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L},{0L,0xE77517C8L,0L,0xE77517C8L}}};
                    int32_t *l_1756 = &l_1707[0].f2;
                    int i, j, k;
                    l_1752[6][0][3] |= (safe_mul_func_int8_t_s_s((((safe_div_func_int8_t_s_s(((*p_34) || 0x20C2L), l_1751)) & ((*p_33) = ((((void*)0 == (*g_503)) ^ ((void*)0 != p_33)) == 0x99L))) <= 7L), 0xD4L));
                    ++l_1753[2][5][2];
                    (*g_230) = (l_1756 = (*g_230));
                    l_1763 = (((safe_div_func_int32_t_s_s((l_1759 == l_1739), (safe_unary_minus_func_int16_t_s(((&l_1627 == &l_1627) != (l_1753[0][4][3] || (safe_div_func_int16_t_s_s(((g_291 < 255UL) < 18446744073709551615UL), (*p_34))))))))) != p_32) > g_3[3][1][2]);
                }
                (*g_230) = l_1736[4][2][1];
            }
        }
        return p_34;
    }
    else
    { 
        uint64_t *l_1768 = &g_256;
        int8_t l_1775[1];
        int32_t l_1778[2];
        int32_t *l_1788 = &g_260;
        uint32_t l_1796 = 0xE259C6C6L;
        union U1 l_1824 = {0x12E99D4501F600ECLL};
        uint16_t l_1841 = 0xF549L;
        const uint64_t **l_1845[1];
        const uint64_t *** const l_1844 = &l_1845[0];
        uint16_t * const * const * const l_1858 = (void*)0;
        uint32_t l_1954 = 0x44B1C38CL;
        const union U2 l_1958 = {0L};
        const uint64_t * const **l_1959[3][6] = {{&g_641,(void*)0,&g_641,(void*)0,&g_641,&g_641},{&g_641,(void*)0,(void*)0,&g_641,(void*)0,&g_641},{&g_641,(void*)0,&g_641,(void*)0,(void*)0,&g_641}};
        int8_t *l_1986 = &g_394;
        int8_t **l_1985 = &l_1986;
        int16_t * const *l_1996 = &g_669;
        const int64_t l_2029 = (-4L);
        int i, j;
        for (i = 0; i < 1; i++)
            l_1775[i] = (-2L);
        for (i = 0; i < 2; i++)
            l_1778[i] = 1L;
        for (i = 0; i < 1; i++)
            l_1845[i] = &g_642[1][2];
        for (g_1675.f2 = 2; (g_1675.f2 >= 0); g_1675.f2 -= 1)
        { 
            const struct S0 l_1767[6][4] = {{{0x782D0B4AL,4294967288UL,10144,0x393C4E29L,1UL,-1L},{0L,0x2BF33114L,19023,0L,1UL,4L},{4L,0x969582EEL,29459,1L,0xF9A8E475L,0L},{0x5D00EEDAL,1UL,20488,-1L,0xD5373BADL,6L}},{{0x0E78BBC2L,0xA03A2369L,5479,0x3A9F6161L,0x5F52970EL,0x82BAL},{0L,0x2BF33114L,19023,0L,1UL,4L},{0L,0x2BF33114L,19023,0L,1UL,4L},{0x0E78BBC2L,0xA03A2369L,5479,0x3A9F6161L,0x5F52970EL,0x82BAL}},{{0L,0x2BF33114L,19023,0L,1UL,4L},{0x0E78BBC2L,0xA03A2369L,5479,0x3A9F6161L,0x5F52970EL,0x82BAL},{0x782D0B4AL,4294967288UL,10144,0x393C4E29L,1UL,-1L},{0xAC5A394DL,4294967295UL,17198,0L,4294967287UL,0x4D8CL}},{{0L,0x2BF33114L,19023,0L,1UL,4L},{0x782D0B4AL,4294967288UL,10144,0x393C4E29L,1UL,-1L},{0L,0x2BF33114L,19023,0L,1UL,4L},{4L,0x969582EEL,29459,1L,0xF9A8E475L,0L}},{{0x0E78BBC2L,0xA03A2369L,5479,0x3A9F6161L,0x5F52970EL,0x82BAL},{0xAC5A394DL,4294967295UL,17198,0L,4294967287UL,0x4D8CL},{4L,0x969582EEL,29459,1L,0xF9A8E475L,0L},{4L,0x969582EEL,29459,1L,0xF9A8E475L,0L}},{{0x782D0B4AL,4294967288UL,10144,0x393C4E29L,1UL,-1L},{0x782D0B4AL,4294967288UL,10144,0x393C4E29L,1UL,-1L},{0x5D00EEDAL,1UL,20488,-1L,0xD5373BADL,6L},{0xAC5A394DL,4294967295UL,17198,0L,4294967287UL,0x4D8CL}}};
            uint64_t *l_1769[7] = {&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256};
            int32_t l_1777 = 8L;
            int32_t l_1779 = 0x372A05F2L;
            int32_t l_1780 = (-1L);
            int32_t l_1783 = 0x8053B5E5L;
            int32_t *l_1787 = &g_395[2];
            int32_t l_1793 = 0x27EBF81BL;
            int32_t l_1794[6][5][7] = {{{0x8C9918EBL,(-3L),0xF26C8E72L,0x6D9AEDBDL,(-1L),1L,0x75FEF5E1L},{0xEC3CECD5L,0xEBABCF00L,1L,(-3L),7L,4L,(-1L)},{0x660FDED9L,0x7B5E2A61L,0xEBABCF00L,4L,0xAB98FD42L,4L,0xEBABCF00L},{(-1L),(-1L),(-6L),0x8C9918EBL,0x7B5E2A61L,1L,(-1L)},{(-1L),4L,0xEE9E89C4L,0x845A3E0FL,4L,0x660FDED9L,0xAB98FD42L}},{{7L,0x845A3E0FL,0xEBABCF00L,0x0E927D38L,0x7B5E2A61L,(-1L),0x0E927D38L},{0x8C9918EBL,0L,0x7ABB0684L,0x75FEF5E1L,0xAB98FD42L,0xF26C8E72L,(-1L)},{(-3L),0xEE9E89C4L,7L,0x75FEF5E1L,7L,0xEE9E89C4L,(-1L)},{0L,0xEE9E89C4L,0x7ABB0684L,0xF64F9E5BL,0x7FFB08DCL,0x0523E9D7L,1L},{0xFE21F58DL,0x7FFB08DCL,0x75FEF5E1L,0xFE21F58DL,4L,0xEC3CECD5L,0xEBABCF00L}},{{(-1L),0xF26C8E72L,0x7ABB0684L,4L,0x8A209E24L,0x7ABB0684L,7L},{0x8A209E24L,(-1L),0x0523E9D7L,(-6L),0x7FFB08DCL,0xB79FE5D5L,0xB79FE5D5L},{0x660FDED9L,(-1L),0x6D9AEDBDL,(-1L),0x660FDED9L,0x845A3E0FL,0x7FFB08DCL},{1L,0xF26C8E72L,6L,0xEE9E89C4L,0xF64F9E5BL,(-6L),(-1L)},{1L,0x7FFB08DCL,0L,0x8A209E24L,7L,0xB79FE5D5L,0x7ABB0684L}},{{1L,0xEE9E89C4L,(-1L),0xFE21F58DL,0xEE9E89C4L,0x8C9918EBL,(-1L)},{0x660FDED9L,0L,6L,(-1L),0xF26C8E72L,0xF26C8E72L,(-1L)},{0x8A209E24L,0x0E927D38L,0x8A209E24L,0xB79FE5D5L,(-1L),0x0523E9D7L,0x7ABB0684L},{(-1L),0xFE21F58DL,(-1L),0xEBABCF00L,0x660FDED9L,(-1L),(-1L)},{0xFE21F58DL,(-6L),0x7ABB0684L,(-1L),1L,0x0523E9D7L,0x7FFB08DCL}},{{0L,0x7FFB08DCL,1L,0L,4L,0xF26C8E72L,0xB79FE5D5L},{(-1L),7L,0x8C9918EBL,4L,4L,0x8C9918EBL,7L},{4L,6L,0x0523E9D7L,0xEE9E89C4L,1L,0xB79FE5D5L,0xEBABCF00L},{0x0523E9D7L,(-1L),0x8A209E24L,6L,0x660FDED9L,(-6L),1L},{1L,7L,0L,0xEE9E89C4L,(-1L),0x845A3E0FL,(-1L)}},{{0x7FFB08DCL,1L,0L,4L,0xF26C8E72L,0xB79FE5D5L,1L},{0x7ABB0684L,0xEE9E89C4L,0L,0L,0xEE9E89C4L,0x7ABB0684L,0xF64F9E5BL},{0x660FDED9L,0xFE21F58DL,0L,(-1L),7L,0xEC3CECD5L,(-1L)},{4L,0x82F3E19BL,0x8A209E24L,0xEBABCF00L,0xF64F9E5BL,0x0523E9D7L,1L},{6L,0xFE21F58DL,0x0523E9D7L,0xB79FE5D5L,0x660FDED9L,0L,6L}}};
            int8_t l_1795 = (-1L);
            union U1 l_1799 = {0L};
            uint32_t l_1832 = 0x0130663FL;
            int i, j, k;
        }
lbl_1847:
        l_1707[0].f2 = ((l_1781[1] = (safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_s((*l_1788), 7))))) == (p_31 != ((*l_1768) ^= (l_1841 > (safe_lshift_func_uint8_t_u_s(((l_1844 == (l_1800 , &l_1845[0])) <= (((p_32 , (*p_34)) && 0x644CL) < g_4)), (*l_1788)))))));
        if (((*l_1788) = (*l_1788)))
        { 
            uint8_t l_1853 = 252UL;
            union U1 l_1865 = {0x9C2334E60886EE86LL};
            int32_t l_1878 = 9L;
            int32_t l_1881 = 0xC68A6D15L;
            int32_t l_1883[3][6] = {{0x7DE22AA7L,0x9358CEE5L,4L,0x9358CEE5L,0x7DE22AA7L,6L},{0x9358CEE5L,0x7DE22AA7L,6L,6L,0x7DE22AA7L,0x9358CEE5L},{0xF33BCD39L,0x9358CEE5L,0xECDD14D3L,0x7DE22AA7L,0xECDD14D3L,0x9358CEE5L}};
            int64_t l_1887 = 0x11D610FCC4E9F667LL;
            uint16_t **l_1913[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t l_1920[1];
            struct S0 l_1931 = {-2L,0xE9E58857L,18743,-1L,2UL,9L};
            uint32_t l_1932 = 0x5EC31255L;
            int64_t * const *l_1948 = &g_1947[2][3];
            int i, j;
            for (i = 0; i < 1; i++)
                l_1920[i] = 8UL;
            if ((+g_935.f1))
            { 
                if (l_1708.f5)
                    goto lbl_1847;
                for (g_85 = (-24); (g_85 >= 43); ++g_85)
                { 
                    return p_34;
                }
            }
            else
            { 
                uint32_t l_1850 = 0x93559353L;
                l_1850++;
                return l_1701;
            }
            if (l_1853)
            { 
                union U1 **l_1868 = &g_1198[3][4][1];
                int32_t l_1880 = 0x3CD2DFC9L;
                int32_t l_1882 = 0x7F99C357L;
                int32_t l_1884 = 0L;
                int32_t l_1885 = 0xDB6EECC1L;
                int32_t l_1886 = 1L;
                int32_t l_1888[6] = {0x3A33A574L,0x3A33A574L,0x3A33A574L,0x3A33A574L,0x3A33A574L,0x3A33A574L};
                int16_t l_1892 = 0x573CL;
                struct S0 l_1902[2] = {{0xC909FB51L,4294967295UL,3472,3L,0xE42F0801L,1L},{0xC909FB51L,4294967295UL,3472,3L,0xE42F0801L,1L}};
                uint32_t *l_1903 = &g_280;
                union U1 ***l_1981 = (void*)0;
                union U1 ***l_1982 = &l_1866;
                int i;
                for (g_393 = 24; (g_393 < 5); --g_393)
                { 
                    union U1 ***l_1867 = &l_1866;
                    int32_t l_1869 = 0x1EB18CE6L;
                    uint16_t l_1870 = 0x7585L;
                    int32_t *l_1875 = &l_1707[0].f2;
                    int32_t *l_1876 = &l_1632;
                    int32_t *l_1877 = &g_395[2];
                    int32_t *l_1879[5][5][2] = {{{&g_935.f3,&l_1878},{&g_395[2],&g_935.f3},{&g_3[0][0][0],&g_3[0][0][0]},{&g_935.f3,&g_395[2]},{&g_395[1],&g_3[0][0][0]}},{{&g_395[2],&g_3[0][0][0]},{&g_395[1],&g_395[2]},{&g_935.f3,&g_935.f3},{&g_935.f3,&g_395[2]},{&g_395[1],&g_3[0][0][0]}},{{&g_395[2],&g_3[0][0][0]},{&g_395[1],&g_395[2]},{&g_935.f3,&g_935.f3},{&g_935.f3,&g_395[2]},{&g_395[1],&g_3[0][0][0]}},{{&g_395[2],&g_3[0][0][0]},{&g_395[1],&g_395[2]},{&g_935.f3,&g_935.f3},{&g_935.f3,&g_395[2]},{&g_395[1],&g_3[0][0][0]}},{{&g_395[2],&g_3[0][0][0]},{&g_395[1],&g_395[2]},{&g_935.f3,&g_935.f3},{&g_935.f3,&g_395[2]},{&g_395[1],&g_3[0][0][0]}}};
                    int32_t l_1889 = (-1L);
                    uint64_t l_1894 = 0UL;
                    int i, j, k;
                    (*l_1788) = p_31;
                    l_1870 = (safe_sub_func_uint32_t_u_u(((l_1858 == (void*)0) ^ ((*l_1768) = ((safe_add_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(p_32, (((safe_mod_func_int16_t_s_s(((*p_34) && ((l_1865 , ((*l_1867) = l_1866)) != l_1868)), 0xE86EL)) == 0xC7L) & p_32))) || 0xDFD5L) , (-1L)), (*p_33))) < l_1869))), g_114));
                    (**g_230) &= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*p_34) || (0x5F6AD61FBBB56A4DLL | p_32)), 0)), p_31));
                    --l_1894;
                }
                (*g_964) = (void*)0;
                if (((*g_231) = (+(safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((l_1902[0] , (((*l_1903) = g_1218[3]) < (g_935.f4 = (safe_sub_func_uint16_t_u_u(p_32, (l_1906 != &g_641)))))), p_31)), (~p_31))))))
                { 
                    uint16_t *l_1910 = (void*)0;
                    uint16_t **l_1909 = &l_1910;
                    const union U2 l_1918[7][5] = {{{0xA8D602BCL},{0x260A4B8CL},{0xF1CE615DL},{0x185B52C2L},{0xED4DA4D9L}},{{0x185B52C2L},{0xA4C524D0L},{0x4A4D590AL},{-9L},{0xF1CE615DL}},{{1L},{0xA8D602BCL},{0x185B52C2L},{0x185B52C2L},{0xA8D602BCL}},{{0xDC46CC01L},{-6L},{0L},{0xB2DECC92L},{0xA8D602BCL}},{{0xA4C524D0L},{1L},{0x260A4B8CL},{0x512AC831L},{0xF1CE615DL}},{{-6L},{0x512AC831L},{0x7D38F1DBL},{0xED4DA4D9L},{0xED4DA4D9L}},{{0xA4C524D0L},{0L},{0xA4C524D0L},{0x7D38F1DBL},{4L}}};
                    int i, j;
                    l_1913[1] = (l_1911 = l_1909);
                    (*g_231) = (safe_mul_func_uint16_t_u_u((l_1916 == (l_1918[2][3] , g_1489)), p_32));
                }
                else
                { 
                    union U1 l_1945 = {0x43E27273787EC0F2LL};
                    (**g_230) |= (((((((!l_1920[0]) > ((((safe_sub_func_uint8_t_u_u(0x2FL, ((((-1L) & ((*l_1788) = ((safe_rshift_func_uint8_t_u_u((p_32 > 0x56L), 0)) > (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(1L, (l_1931 , (*g_267)))) >= l_1932), (*g_669))), 7L))))) & 0x9BA9L) && l_1902[0].f4))) > (*g_669)) <= l_1931.f0) | g_291)) == p_32) && p_32) || 7L) == l_1902[0].f0) < g_735[5][3][0]);
                    (**g_230) ^= (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(p_32, ((safe_div_func_uint64_t_u_u(p_32, (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((l_1945 , (((g_1946 != (l_1949[1] = l_1948)) ^ ((safe_mul_func_int8_t_s_s((((2L <= l_1954) | p_31) | (*p_33)), 0L)) | 0x23L)) || (-1L))), l_1945.f3)), 2)))) , (*p_33)))), 7)), g_952.f0));
                }
                if (l_1865.f0)
                { 
                    uint64_t l_1955[1][3][6] = {{{0xD92349EEB908F8A0LL,0UL,0x9016FA79EA9758C3LL,0x9016FA79EA9758C3LL,0UL,0xD92349EEB908F8A0LL},{18446744073709551609UL,0xD92349EEB908F8A0LL,0x9016FA79EA9758C3LL,0xD92349EEB908F8A0LL,18446744073709551609UL,18446744073709551609UL},{1UL,0xD92349EEB908F8A0LL,0xD92349EEB908F8A0LL,1UL,0UL,1UL}}};
                    int i, j, k;
                    ++l_1955[0][1][1];
                }
                else
                { 
                    uint32_t l_1976 = 1UL;
                    (*l_1788) &= (l_1958 , ((g_1960 = l_1959[0][5]) == &g_641));
                    (**g_230) ^= 1L;
                    l_1902[0].f3 = ((**g_230) = ((0xE445L <= (safe_mod_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((*l_1788), 11)) > (((*l_1868) = l_1969) != (void*)0)), (0x02L == (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u((l_1976 | (safe_sub_func_int16_t_s_s((((0x94L ^ l_1979) & (*g_669)) , 1L), 65529UL))), (-1L))) <= l_1880) , 65534UL), (*g_669))), (-1L)))))), l_1865.f0)) <= l_1880) ^ p_32), g_1980))) && 0x41F97255L));
                }
                (*l_1982) = &g_1198[1][0][1];
            }
            else
            { 
                (*g_230) = (*g_230);
            }
            l_1883[0][5] &= (-4L);
        }
        else
        { 
            const int32_t * const l_2011 = &g_152;
            struct S0 ***l_2020[4][6][5] = {{{&g_964,&g_964,(void*)0,&g_964,&g_964},{&g_964,&g_964,(void*)0,(void*)0,&g_964},{&g_964,&g_964,&g_964,(void*)0,&g_964},{&g_964,&g_964,(void*)0,&g_964,(void*)0},{&g_964,(void*)0,(void*)0,(void*)0,(void*)0},{&g_964,&g_964,&g_964,&g_964,(void*)0}},{{&g_964,(void*)0,&g_964,&g_964,(void*)0},{&g_964,&g_964,&g_964,&g_964,&g_964},{&g_964,&g_964,&g_964,&g_964,&g_964},{&g_964,&g_964,(void*)0,&g_964,&g_964},{&g_964,(void*)0,&g_964,&g_964,&g_964},{&g_964,&g_964,&g_964,&g_964,&g_964}},{{&g_964,(void*)0,&g_964,&g_964,(void*)0},{(void*)0,&g_964,&g_964,(void*)0,(void*)0},{&g_964,&g_964,(void*)0,(void*)0,(void*)0},{&g_964,&g_964,&g_964,&g_964,(void*)0},{&g_964,&g_964,(void*)0,(void*)0,&g_964},{&g_964,&g_964,&g_964,(void*)0,&g_964}},{{(void*)0,&g_964,&g_964,&g_964,(void*)0},{&g_964,(void*)0,&g_964,&g_964,&g_964},{&g_964,&g_964,&g_964,&g_964,(void*)0},{&g_964,&g_964,&g_964,&g_964,&g_964},{(void*)0,&g_964,&g_964,(void*)0,&g_964},{(void*)0,&g_964,&g_964,&g_964,&g_964}}};
            uint64_t l_2022 = 18446744073709551615UL;
            union U1 l_2035[1] = {{0x42269CD78068730FLL}};
            int32_t *l_2037[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_2037[i] = &g_65.f2;
            for (l_1708.f5 = 0; (l_1708.f5 == 9); l_1708.f5 = safe_add_func_int64_t_s_s(l_1708.f5, 8))
            { 
                int16_t **l_1995 = &g_669;
                int32_t l_1997[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1997[i] = 0x875CCBFCL;
                (*l_1788) |= 4L;
                l_1985 = ((*g_503) = l_1985);
                if ((safe_rshift_func_uint16_t_u_s(((g_935.f3 != p_31) <= (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((l_1995 == l_1996) < (((l_1708 , p_31) , (l_1997[1] & p_31)) != 0UL)) || 0UL), l_1998)), (*l_1788))), 0x3335L))), 5)))
                { 
                    int32_t *l_1999 = &g_952.f2;
                    int32_t *l_2000 = &l_1778[1];
                    int32_t *l_2001 = &l_1632;
                    int32_t *l_2002 = &l_1778[0];
                    int32_t *l_2003 = &l_1636;
                    int32_t *l_2004 = &g_393;
                    int32_t *l_2005 = &g_395[2];
                    int32_t *l_2006 = &l_1688;
                    int32_t *l_2007[1][1][7] = {{{&l_1708.f3,&l_1708.f3,&l_1708.f3,&l_1708.f3,&l_1708.f3,&l_1708.f3,&l_1708.f3}}};
                    int i, j, k;
                    ++g_2008;
                    if (p_32)
                        break;
                }
                else
                { 
                    const int32_t **l_2012 = &l_1830;
                    (*l_2012) = l_2011;
                }
                if (p_31)
                    break;
            }
            (*g_231) &= (safe_rshift_func_uint16_t_u_s(((!1L) & (((*l_1701) = 3L) , ((*l_1986) = (safe_sub_func_int64_t_s_s((l_1688 &= ((safe_sub_func_uint32_t_u_u((p_31 , ((((**g_1197) , (((((g_964 = &g_965) != ((**g_1197) , l_2021)) < l_2022) <= 0xA9A8L) | p_32)) || (*l_2011)) && p_31)), g_952.f1)) == (*p_33))), (*l_2011)))))), 3));
            if (((+(+((*p_34) | 0UL))) , ((void*)0 != g_2025)))
            { 
                (*l_1788) = (9UL ^ (safe_add_func_uint16_t_u_u(l_2029, p_32)));
            }
            else
            { 
                int32_t **l_2036 = (void*)0;
                int64_t l_2038 = (-7L);
                uint32_t *l_2039 = &g_1466;
                uint32_t *l_2041[1];
                uint32_t **l_2040 = &l_2041[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_2041[i] = &g_1784;
                for (l_1796 = (-2); (l_1796 != 13); l_1796 = safe_add_func_uint16_t_u_u(l_1796, 3))
                { 
                    uint8_t l_2032[5][4][1] = {{{0x13L},{0x13L},{255UL},{0UL}},{{248UL},{255UL},{248UL},{0UL}},{{255UL},{0x13L},{0x13L},{255UL}},{{0UL},{248UL},{255UL},{248UL}},{{0UL},{255UL},{0x13L},{0x13L}}};
                    int i, j, k;
                    ++l_2032[3][2][0];
                    if (p_32)
                        continue;
                }
                (*g_231) ^= ((l_2035[0] , (((l_2037[1] = &p_31) != ((((l_2038 , ((g_1214 = l_2039) == ((*l_2040) = l_2039))) ^ (safe_add_func_uint32_t_u_u((*g_2026), (~(((((0x1C68CD93EE96D06ALL && l_2038) < p_31) , (*p_34)) | l_2038) && p_32))))) <= (*p_34)) , l_1788)) && 0xC162D92487E47141LL)) >= (*l_1788));
            }
            for (g_1251 = 0; (g_1251 != (-10)); g_1251--)
            { 
                int32_t l_2054 = 7L;
                (*l_1866) = &l_2035[0];
                (**g_230) = (safe_lshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s(0x88D5D953L, (l_2051 != (p_31 , l_2051)))) , (safe_mod_func_uint8_t_u_u(0UL, (((l_2054 >= (((*p_33) > (*p_33)) <= 0xFAL)) && (*l_2011)) ^ 252UL)))) | (*l_2011)), (*g_267)));
            }
        }
        return p_34;
    }
}



static const int8_t  func_37(int16_t * p_38, int32_t  p_39, int64_t * p_40, int32_t  p_41, uint8_t  p_42)
{ 
    return p_42;
}



static const uint16_t  func_55(int32_t  p_56, int16_t * p_57, uint32_t  p_58, int32_t  p_59)
{ 
    int8_t l_1600 = (-1L);
    union U2 *l_1608 = &g_952;
    int32_t l_1624 = 1L;
    for (p_58 = 0; (p_58 > 32); p_58 = safe_add_func_int64_t_s_s(p_58, 7))
    { 
        uint32_t **l_1591[6][6][7] = {{{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,(void*)0},{&g_1214,&g_1214,&g_1214,&g_1214,(void*)0,&g_1214,(void*)0},{&g_1214,(void*)0,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,(void*)0,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{(void*)0,&g_1214,&g_1214,(void*)0,&g_1214,&g_1214,&g_1214}},{{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,(void*)0,(void*)0,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,(void*)0,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,(void*)0,&g_1214,&g_1214,&g_1214}},{{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,(void*)0},{(void*)0,(void*)0,&g_1214,(void*)0,&g_1214,&g_1214,&g_1214},{&g_1214,(void*)0,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214}},{{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,(void*)0,(void*)0},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,(void*)0,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,(void*)0,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214}},{{(void*)0,&g_1214,(void*)0,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,(void*)0,&g_1214,&g_1214,(void*)0,&g_1214},{&g_1214,&g_1214,(void*)0,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{(void*)0,&g_1214,&g_1214,&g_1214,&g_1214,(void*)0,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214}},{{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,(void*)0,&g_1214,&g_1214,(void*)0,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,(void*)0},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214},{&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214,&g_1214}}};
        int32_t l_1606 = 0xFDFC8465L;
        union U2 *l_1609 = &g_952;
        const int16_t ***l_1617 = &g_73;
        uint16_t l_1622 = 1UL;
        int i, j, k;
        for (g_393 = 0; (g_393 != (-16)); --g_393)
        { 
            int32_t **l_1597[7] = {&g_907[6][0][1],&g_231,&g_907[6][0][1],&g_907[6][0][1],&g_231,&g_907[6][0][1],&g_907[6][0][1]};
            uint8_t *l_1599 = &g_952.f1;
            int i;
            for (g_930 = 0; (g_930 != 25); g_930 = safe_add_func_int64_t_s_s(g_930, 1))
            { 
                uint32_t ***l_1592 = &g_1213;
                int32_t l_1603 = 0x62B643BAL;
                int32_t l_1607[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1607[i] = 0xDC0B64C5L;
                (*l_1592) = l_1591[1][2][2];
            }
            for (g_178 = 0; (g_178 <= 1); g_178 += 1)
            { 
                int64_t *l_1623 = &g_259;
                int i, j, k;
                l_1624 &= (safe_mod_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(g_1218[(g_178 + 3)], g_19[g_178][g_178][g_178])) , g_775[g_178][g_178]) < (safe_add_func_int32_t_s_s((!(l_1617 == (void*)0)), (((((*l_1623) = (safe_sub_func_int16_t_s_s((*g_669), (safe_div_func_uint16_t_u_u((l_1622 | p_58), p_59))))) && p_59) != p_56) == p_56)))), (*g_231)));
                return l_1600;
            }
        }
    }
    return l_1624;
}



static int32_t  func_60(int64_t * p_61)
{ 
    int32_t *l_1413 = &g_174;
    int32_t l_1416 = 0xE77162C4L;
    int32_t l_1419 = 0x5303D7ABL;
    int32_t l_1420 = 1L;
    int32_t l_1421[3];
    int64_t l_1422[3];
    uint64_t l_1423 = 0x0DD619DA038A5F78LL;
    union U1 l_1507 = {0x12C266790582C90BLL};
    uint16_t l_1530 = 65535UL;
    int i;
    for (i = 0; i < 3; i++)
        l_1421[i] = 1L;
    for (i = 0; i < 3; i++)
        l_1422[i] = 0L;
    (*l_1413) |= (0x744FL < func_62(g_65, p_61));
    (*g_230) = l_1413;
lbl_1426:
    for (g_737 = (-30); (g_737 != 24); g_737 = safe_add_func_uint64_t_u_u(g_737, 3))
    { 
        int32_t *l_1417 = &g_553;
        int32_t *l_1418[1][5][5] = {{{&g_952.f2,&g_952.f2,&g_152,&g_952.f2,&g_952.f2},{&g_393,&g_952.f2,&g_393,&g_393,&g_952.f2},{&g_952.f2,&g_393,&g_393,&g_952.f2,&g_393},{&g_952.f2,&g_952.f2,&g_152,&g_952.f2,&g_952.f2},{&g_393,&g_952.f2,&g_393,&g_393,&g_952.f2}}};
        int i, j, k;
        l_1423--;
        if (g_952.f0)
            goto lbl_1426;
        return g_152;
    }
    for (g_259 = 0; (g_259 > (-3)); g_259--)
    { 
        const struct S0 l_1434 = {0L,4294967292UL,25921,-10L,0xAF54BF42L,8L};
        uint32_t l_1437 = 0xC6F0E33BL;
        uint64_t *l_1438[1][3];
        int32_t l_1445 = 0xD8D489B7L;
        int32_t l_1462 = 0x0DA5CFABL;
        uint64_t l_1480 = 2UL;
        union U2 l_1483 = {0xEAF53328L};
        int32_t *l_1534[5] = {&l_1420,&l_1420,&l_1420,&l_1420,&l_1420};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1438[i][j] = &l_1423;
        }
    }
    return g_394;
}



static int16_t  func_62(union U1  p_63, int64_t * p_64)
{ 
    const int16_t ** const l_72 = (void*)0;
    uint8_t l_81[2][1][2] = {{{0xFFL,0xFFL}},{{0xFFL,0xFFL}}};
    int32_t l_116[2][4] = {{0L,0x36B02009L,0x36B02009L,0L},{0x36B02009L,0L,0x36B02009L,0x36B02009L}};
    int32_t **l_215 = (void*)0;
    int16_t l_216 = 0xB98CL;
    uint64_t l_339 = 0x90D8DB81AA3C2180LL;
    uint32_t *l_349 = &g_65.f1;
    int64_t l_381 = 0xD181C57303B41750LL;
    int8_t l_417 = 0x53L;
    struct S0 l_443 = {-10L,0x0EC6505AL,11822,5L,0xAFB3F48BL,0x5253L};
    uint32_t l_456 = 0UL;
    int16_t *l_565 = &g_177[0];
    int16_t **l_564 = &l_565;
    int16_t ** const *l_563 = &l_564;
    int16_t ** const **l_562 = &l_563;
    int16_t ** const ***l_561 = &l_562;
    uint32_t l_650 = 0xAAF484A8L;
    uint16_t *** const l_663 = (void*)0;
    uint8_t l_728 = 247UL;
    union U2 l_756 = {0x812FAB29L};
    int32_t l_783 = 0xCB5E0DE6L;
    uint64_t *l_816 = (void*)0;
    int16_t l_845 = (-8L);
    const uint32_t l_868 = 18446744073709551614UL;
    int8_t ***l_876 = &g_504;
    uint16_t *l_891 = &g_775[2][0];
    uint16_t **l_890 = &l_891;
    int16_t ****l_900 = &g_316;
    int32_t *l_906 = &l_756.f2;
    uint32_t l_995 = 0x72DDAE34L;
    int32_t ****l_1016 = (void*)0;
    int32_t ***l_1017 = &g_321;
    int32_t ***l_1018 = &g_230;
    int16_t **l_1024 = &l_565;
    int16_t ***l_1023 = &l_1024;
    uint64_t l_1039 = 1UL;
    int16_t l_1072[7][3] = {{0xF518L,0xF518L,0xF518L},{(-4L),1L,(-4L)},{0xF518L,0xF518L,0xF518L},{(-4L),1L,(-4L)},{0xF518L,0xF518L,0xF518L},{(-4L),1L,(-4L)},{0xF518L,0xF518L,0xF518L}};
    const int32_t l_1161[2] = {(-1L),(-1L)};
    union U1 *l_1185[6] = {&g_65,&g_65,&g_65,&g_65,&g_65,&g_65};
    union U1 **l_1184[6] = {&l_1185[3],&l_1185[3],&l_1185[3],&l_1185[3],&l_1185[3],&l_1185[3]};
    union U2 *l_1210 = &g_952;
    int8_t l_1247 = 0L;
    uint64_t l_1288[5][5] = {{0UL,0xA8DD9B84F993D30FLL,0UL,0UL,0xA8DD9B84F993D30FLL},{5UL,0xDAE1AC5E0F2CECEELL,0xDAE1AC5E0F2CECEELL,5UL,0xDAE1AC5E0F2CECEELL},{0xA8DD9B84F993D30FLL,0xA8DD9B84F993D30FLL,0UL,0xA8DD9B84F993D30FLL,0xA8DD9B84F993D30FLL},{0xDAE1AC5E0F2CECEELL,5UL,0xDAE1AC5E0F2CECEELL,0xDAE1AC5E0F2CECEELL,5UL},{0xA8DD9B84F993D30FLL,0UL,0UL,0xA8DD9B84F993D30FLL,0UL}};
    int16_t *****l_1344 = &l_900;
    const uint16_t **l_1355 = (void*)0;
    const uint16_t ***l_1354 = &l_1355;
    const uint16_t ****l_1353 = &l_1354;
    int8_t l_1382 = 1L;
    const uint32_t *l_1391 = &l_995;
    const uint32_t **l_1390 = &l_1391;
    const uint32_t ***l_1389[1];
    const uint32_t ****l_1388 = &l_1389[0];
    uint16_t *l_1405 = &g_234;
    int32_t *l_1406[6] = {&l_116[1][3],&l_116[1][3],&g_293,&l_116[1][3],&l_116[1][3],&g_293};
    uint32_t l_1407 = 0x6DA4FF79L;
    uint32_t l_1410 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1389[i] = &l_1390;
    for (p_63.f0 = 0; (p_63.f0 >= 10); ++p_63.f0)
    { 
        uint8_t l_102 = 5UL;
        int32_t l_151 = 0x1AE72209L;
        int8_t *l_165 = &g_114;
        int32_t l_173[3];
        int32_t *l_214 = &l_173[2];
        int32_t **l_213 = &l_214;
        union U1 l_220[7] = {{0xEE90AB4F1E68E90FLL},{0xEE90AB4F1E68E90FLL},{1L},{0xEE90AB4F1E68E90FLL},{0xEE90AB4F1E68E90FLL},{1L},{0xEE90AB4F1E68E90FLL}};
        uint16_t **l_235 = (void*)0;
        int32_t *l_287 = (void*)0;
        int16_t l_288 = 0xE438L;
        int16_t ***l_318 = (void*)0;
        int32_t **l_335[4];
        int32_t *l_336 = (void*)0;
        union U2 *l_344 = (void*)0;
        struct S0 l_421 = {1L,0x0757D9CDL,23933,-1L,0x90E9D92AL,0x23CBL};
        uint16_t ****l_461 = (void*)0;
        uint16_t l_467[2][5][4] = {{{0xBBFDL,1UL,0xFF7DL,0x5C9CL},{65527UL,0x6B15L,0x5C9CL,0x8304L},{0x5C9CL,0x8304L,0xCEC2L,0x8304L},{65535UL,0x6B15L,0xBE9DL,0x5C9CL},{1UL,1UL,0x8304L,2UL}},{{0xBE9DL,65535UL,1UL,1UL},{0xBE9DL,0xBE9DL,0x8304L,0xBBFDL},{1UL,1UL,0xBE9DL,1UL},{65535UL,65527UL,0xCEC2L,0xBE9DL},{0x5C9CL,65527UL,0x5C9CL,1UL}}};
        uint64_t *l_510 = &g_85;
        int8_t l_517 = 3L;
        int16_t l_552 = 0x6856L;
        int32_t l_572[3];
        int64_t l_597 = 0x2F89EAAC16843CFBLL;
        uint32_t *l_613 = &l_456;
        uint32_t l_677 = 18446744073709551615UL;
        uint8_t l_806 = 250UL;
        int32_t l_828 = 0x74531986L;
        int64_t l_849[1][2][6] = {{{4L,3L,4L,4L,3L,4L},{4L,3L,4L,4L,3L,4L}}};
        int16_t ****l_901 = &l_318;
        const uint8_t l_931 = 0x1FL;
        uint32_t l_958 = 6UL;
        int8_t l_977 = 1L;
        const uint64_t **l_989[1];
        const uint64_t ***l_988 = &l_989[0];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_173[i] = 1L;
        for (i = 0; i < 4; i++)
            l_335[i] = &l_214;
        for (i = 0; i < 3; i++)
            l_572[i] = (-5L);
        for (i = 0; i < 1; i++)
            l_989[i] = &g_642[1][2];
        for (g_65.f1 = 0; (g_65.f1 <= 1); g_65.f1 += 1)
        { 
            uint32_t *l_68 = &g_69;
            int32_t *l_75[1];
            int32_t **l_74 = &l_75[0];
            int8_t *l_119 = (void*)0;
            int16_t *l_123 = &g_19[1][3][0];
            int16_t **l_122 = &l_123;
            int32_t *l_157 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_75[i] = (void*)0;
            g_73 = (((*l_68)++) , l_72);
            (*l_74) = l_68;
            for (g_69 = 0; (g_69 <= 1); g_69 += 1)
            { 
                uint8_t *l_82 = &g_83[1];
                uint64_t *l_84 = &g_85;
                int32_t l_108 = 0L;
                int32_t l_149 = 5L;
                int i, j, k;
                if ((g_19[g_69][(g_65.f1 + 2)][g_65.f1] & ((g_65.f1 == ((*l_84) = ((safe_mul_func_uint16_t_u_u((~g_65.f3), (p_63.f1 , (g_4 ^ ((0xB9L > ((*l_82) ^= (safe_div_func_int16_t_s_s((((0UL <= 4294967286UL) || p_63.f1) >= (*p_64)), l_81[1][0][0])))) <= 0xDD7081DCL))))) == p_63.f0))) <= p_63.f3)))
                { 
                    struct S0 l_95 = {0xFB7918A9L,4294967286UL,20901,-7L,0x06EB7662L,1L};
                    uint16_t *l_107[2];
                    int8_t *l_113 = &g_114;
                    union U1 l_115 = {0x2FFC3EBA449F347FLL};
                    int16_t ***l_124 = &l_122;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_107[i] = (void*)0;
                    l_116[1][3] ^= ((p_63.f2 , (safe_mod_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((l_81[1][0][0] , (((((((!(l_95 , ((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_102, ((*l_113) = (((safe_add_func_int16_t_s_s(0x141EL, (safe_sub_func_uint16_t_u_u((l_108 = g_83[1]), (safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_81[1][0][0], g_3[4][3][2])), g_83[1])))))) <= 0L) , g_85)))), 1L)), p_63.f0)) || p_63.f3))) >= (-2L)) > p_63.f0) , l_115) , p_63.f3) , 65535UL) <= l_81[1][0][0])), 0x3BL)) < g_83[3]), 2)), p_63.f1)) > g_19[1][3][0]) | p_63.f2) & g_3[0][0][0]), g_19[g_69][(g_65.f1 + 2)][g_65.f1]))) ^ p_63.f3);
                    if (p_63.f0)
                        break;
                    l_116[0][2] = (safe_lshift_func_int16_t_s_s(((void*)0 == l_119), l_95.f1));
                    l_95.f3 = ((((*l_124) = l_122) == g_73) & ((safe_lshift_func_int16_t_s_u(((l_116[1][3] = ((safe_lshift_func_int16_t_s_s(p_63.f2, ((*l_123) = p_63.f0))) <= ((safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((0xBA34BD0913F082F4LL | ((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((+(safe_lshift_func_int8_t_s_u(0xB0L, (((p_63.f1 < g_13) , 0x5E9D0F7BDB4A0C66LL) , p_63.f0)))), l_102)) < (*p_64)), (*p_64))) ^ g_85)) == p_63.f1), l_115.f0)), g_83[1])) < g_83[1]))) <= 0UL), g_65.f3)) == l_108));
                }
                else
                { 
                    uint64_t *l_144 = (void*)0;
                    int32_t l_145 = 1L;
                    int8_t *l_148[1];
                    int32_t l_150 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_148[i] = &g_114;
                    l_151 |= (l_149 = (g_65.f1 != (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((l_145 = ((*l_84) = ((-1L) > (((*p_64) ^= g_83[1]) && l_102)))) || ((*l_84) = (((safe_div_func_int32_t_s_s(((void*)0 != l_148[0]), (g_19[1][3][0] , l_102))) , (void*)0) == l_119))), l_149)), l_150))));
                    g_152 ^= 0x34743BD4L;
                    if (p_63.f1)
                        continue;
                }
                for (g_13 = 18; (g_13 < (-16)); g_13--)
                { 
                    return p_63.f0;
                }
                for (l_151 = 0; (l_151 < 20); l_151++)
                { 
                    int32_t *l_159[2];
                    int32_t **l_158 = &l_159[0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_159[i] = &g_3[0][0][0];
                    (*l_158) = (l_157 = ((*l_74) = &g_3[0][0][0]));
                    if (g_65.f1)
                        continue;
                }
                for (g_13 = 0; (g_13 > (-30)); g_13--)
                { 
                    return p_63.f3;
                }
            }
        }
    }
    if ((safe_mod_func_uint16_t_u_u(g_1012[1], (~(p_63.f1 && (safe_mul_func_uint32_t_u_u(((*p_64) | (((l_1017 = &g_230) != l_1018) != (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((*l_563) != ((*l_1023) = &l_565)), (*g_669))), 0xC7E1359AL)))), 0L)))))))
    { 
        int16_t l_1035 = 0L;
        int32_t l_1036[1][5][1] = {{{0x65463586L},{0xEBD60C32L},{0x65463586L},{0xEBD60C32L},{0x65463586L}}};
        int32_t l_1037[7][3][4] = {{{0xEC2BA96BL,0xE739CE77L,0xE739CE77L,0xEC2BA96BL},{0x57FFF414L,0xE739CE77L,0x276894CDL,0xE739CE77L},{0xE739CE77L,0xEA87FF0EL,0x276894CDL,0x276894CDL}},{{0x57FFF414L,0x57FFF414L,0xE739CE77L,0x276894CDL},{0xEC2BA96BL,0xEA87FF0EL,0xEC2BA96BL,0xE739CE77L},{0xEC2BA96BL,0xE739CE77L,0xE739CE77L,0xEC2BA96BL}},{{0x57FFF414L,0xE739CE77L,0x276894CDL,0xE739CE77L},{0xE739CE77L,0xEA87FF0EL,0x276894CDL,0x276894CDL},{0x57FFF414L,0x57FFF414L,0xE739CE77L,0x276894CDL}},{{0xEC2BA96BL,0xEA87FF0EL,0xEC2BA96BL,0xE739CE77L},{0xEC2BA96BL,0xE739CE77L,0xE739CE77L,0xEC2BA96BL},{0x57FFF414L,0xE739CE77L,0x276894CDL,0xE739CE77L}},{{0xE739CE77L,0xEA87FF0EL,0x276894CDL,0x276894CDL},{0x57FFF414L,0x57FFF414L,0xE739CE77L,0x276894CDL},{0xEC2BA96BL,0xEA87FF0EL,0xEC2BA96BL,0xE739CE77L}},{{0xEC2BA96BL,0xE739CE77L,0xE739CE77L,0xEC2BA96BL},{0x57FFF414L,0xE739CE77L,0x276894CDL,0xE739CE77L},{0xE739CE77L,0xEA87FF0EL,0x276894CDL,0x276894CDL}},{{0x57FFF414L,0x57FFF414L,0xE739CE77L,0x276894CDL},{0xEC2BA96BL,0xEA87FF0EL,0xEC2BA96BL,0xE739CE77L},{0xEC2BA96BL,0xE739CE77L,0xE739CE77L,0xEC2BA96BL}}};
        int32_t *l_1038[5];
        uint64_t *l_1050 = &l_339;
        struct S0 l_1067 = {0xC8E74D32L,0x4B7E7788L,22694,-5L,4294967291UL,-2L};
        const uint16_t l_1069 = 1UL;
        uint32_t l_1070 = 0x0B0FFCCAL;
        uint64_t l_1071 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1038[i] = &g_553;
        (*l_906) = (((safe_mod_func_int64_t_s_s(0xA2DB309BA1C82221LL, 0x97D05DC90D80E141LL)) || ((***g_229) = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((8UL ^ ((*g_669) = ((**l_1024) = (((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((6L || ((**g_230) <= (*g_231))), (0UL == (*p_64)))), p_63.f1)) ^ (**g_230)) , l_1035)))), 1)), l_1035)))) != p_63.f0);
        ++l_1039;
        l_1072[1][0] &= ((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int64_t_s(((*p_64) = (safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(((*g_669) = ((*l_565) |= p_63.f0)), (~p_63.f1))) || ((*l_1050)++)), 5))))) && (safe_rshift_func_int8_t_s_u((0x8BE5L | ((*g_231) || (safe_lshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_1067 , (~(*g_267))) || (((g_260 >= 4294967295UL) , (*l_906)) < p_63.f2)), g_69)), 0xF461L)) & l_1069) > 0xF069B3347ED7E1D4LL) , l_1070), p_63.f2)), l_1071)), p_63.f2)))), g_13))), 0x724B3CA3L)) == 0xA021067CD3E723F1LL);
    }
    else
    { 
        int32_t l_1081[5] = {0x82A2D3C6L,0x82A2D3C6L,0x82A2D3C6L,0x82A2D3C6L,0x82A2D3C6L};
        int16_t ** const * const *l_1088[2];
        int16_t ** const * const **l_1087 = &l_1088[1];
        int32_t l_1101 = 0xFE3E9A16L;
        int16_t ***l_1109 = &l_1024;
        int32_t l_1116 = 0x1DA8620BL;
        int32_t l_1118 = (-1L);
        int32_t l_1127 = 0xD66C06F4L;
        int32_t l_1129 = 0xAB5C5BC8L;
        int32_t l_1131 = (-1L);
        int32_t l_1136[3][2][2] = {{{1L,0xC64A4CC2L},{1L,0xC64A4CC2L}},{{1L,0xC64A4CC2L},{1L,0xC64A4CC2L}},{{1L,0xC64A4CC2L},{1L,0xC64A4CC2L}}};
        int64_t l_1166 = 5L;
        union U1 **l_1181 = (void*)0;
        int8_t *l_1186 = &g_394;
        union U2 *l_1209 = &l_756;
        uint16_t * const *l_1232 = &l_891;
        uint16_t * const **l_1231 = &l_1232;
        int32_t ***l_1296[5];
        struct S0 *l_1299 = &l_443;
        uint32_t ** const l_1337 = &g_1214;
        int16_t l_1349 = 0xFF35L;
        int8_t l_1383 = 0x13L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1088[i] = &l_563;
        for (i = 0; i < 5; i++)
            l_1296[i] = &g_321;
lbl_1141:
        for (g_739 = 9; (g_739 <= 22); g_739++)
        { 
            uint16_t *l_1082[2][2][2];
            int32_t l_1083 = 0x418A3E3CL;
            int32_t l_1084 = 0xAB1DD8D9L;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1082[i][j][k] = (void*)0;
                }
            }
            (***g_229) = (*l_906);
            (***g_229) = ((***l_1018) & (safe_div_func_uint16_t_u_u(0x9A30L, ((l_1083 = ((*l_891) = (safe_mul_func_uint16_t_u_u(((0x5D2E3B890D12B060LL >= ((~p_63.f2) & (p_63.f0 != ((*l_349) ^= ((((((+p_63.f3) >= ((((*g_669) &= (((g_935.f1 |= g_293) && (-2L)) && 0x1CADL)) > 0xCACEL) > (-1L))) & 0x2657L) != p_63.f1) == p_63.f1) & 0x1DD6L))))) < p_63.f0), l_1081[0])))) & l_1084))));
            if ((**g_230))
                continue;
        }
lbl_1170:
        for (g_234 = 4; (g_234 <= 43); g_234 = safe_add_func_uint64_t_u_u(g_234, 2))
        { 
            union U2 l_1093[3][5][2] = {{{{0xFD5925D6L},{0x50C46041L}},{{0x1B36B022L},{0xB0851C22L}},{{0L},{0x1B36B022L}},{{0L},{0x4664D36FL}},{{0L},{0x1B36B022L}}},{{{0L},{0xB0851C22L}},{{0x1B36B022L},{0x50C46041L}},{{0xFD5925D6L},{0xBE41A494L}},{{-3L},{9L}},{{9L},{0L}}},{{{-5L},{0L}},{{9L},{9L}},{{-3L},{0xBE41A494L}},{{0xFD5925D6L},{0x50C46041L}},{{0x1B36B022L},{0xB0851C22L}}}};
            int32_t l_1117 = 0x4CCFC922L;
            int32_t l_1119 = 3L;
            int32_t l_1121[6];
            uint8_t *l_1153 = (void*)0;
            uint8_t *l_1154 = &l_728;
            uint8_t *l_1155 = &l_81[1][0][0];
            uint8_t *l_1158 = &g_83[1];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1121[i] = 0x6CBE3EAEL;
            (**g_230) = (((((((void*)0 == l_1087) , 0x6DA7BAECBC3D3D44LL) ^ (safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((l_1093[1][1][0] , g_65.f1), (((l_1081[4] > (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((+((safe_rshift_func_uint8_t_u_s(1UL, l_1093[1][1][0].f1)) & 0x789EL)) , (*g_267)), p_63.f1)), 0))) | (***l_1018)) | p_63.f3))), 0xEA3339AEL))) || p_63.f1) <= 8L) || p_63.f1);
            for (g_291 = 0; (g_291 <= 1); g_291 += 1)
            { 
                int32_t l_1115 = 0x03E1C865L;
                int32_t l_1120 = 0x50812BCBL;
                int32_t l_1122 = 0x62352A64L;
                int32_t l_1123 = 6L;
                int32_t l_1124 = 0x5349F707L;
                int32_t l_1126 = (-9L);
                int32_t l_1128 = 0x2E157B32L;
                int32_t l_1130 = (-9L);
                int32_t l_1132 = 0xEE51E22DL;
                int32_t l_1133 = 1L;
                int32_t l_1134 = 4L;
                int32_t l_1135 = (-1L);
                int32_t l_1137 = 0L;
                for (l_995 = 0; (l_995 <= 1); l_995 += 1)
                { 
                    int16_t ***l_1110 = &l_564;
                    int16_t ***l_1111[6];
                    uint8_t *l_1112 = &g_178;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1111[i] = (void*)0;
                    (***l_1018) = (l_1101 &= ((g_65 , g_775[l_995][l_995]) > 0xA6E1EA8B25337AC8LL));
                    (**g_230) ^= (safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((*l_1112) = (safe_unary_minus_func_int64_t_s(((((l_1110 = l_1109) != l_1111[3]) , (g_775[(g_291 + 1)][g_291] || g_83[(l_995 + 3)])) ^ (l_1093[(l_995 + 1)][(l_995 + 3)][l_995] , ((-3L) >= (((*p_64) , p_63.f1) >= 0x40F3L))))))), 3L)), p_63.f3)) && p_63.f3), l_1093[1][1][0].f0));
                }
                for (l_216 = 1; (l_216 >= 0); l_216 -= 1)
                { 
                    int32_t *l_1113 = &l_116[0][1];
                    int32_t *l_1114[3][2] = {{&l_116[1][1],&l_116[1][1]},{&g_395[1],&l_116[1][1]},{&l_116[1][1],&g_395[1]}};
                    int8_t l_1125 = 0x96L;
                    uint16_t l_1138[6][7][2] = {{{0x0113L,1UL},{0UL,0x554DL},{0x0113L,0x554DL},{0UL,1UL},{0x0113L,1UL},{0UL,0x554DL},{0x0113L,0x554DL}},{{0UL,1UL},{0x0113L,1UL},{0UL,0x554DL},{0x0113L,0x554DL},{0UL,1UL},{0x0113L,1UL},{0UL,0x554DL}},{{0x0113L,0x554DL},{0UL,1UL},{0x0113L,1UL},{0UL,0x554DL},{0x0113L,0x554DL},{0UL,1UL},{0x0113L,1UL}},{{0UL,0x554DL},{0x0113L,0x554DL},{0UL,1UL},{0x0113L,1UL},{0UL,0x554DL},{0x0113L,0x554DL},{0UL,1UL}},{{0x0113L,1UL},{0UL,0x554DL},{0x0113L,0x554DL},{0UL,1UL},{0x0113L,1UL},{0UL,0x554DL},{0x0113L,0x554DL}},{{0UL,1UL},{0x0113L,1UL},{0UL,0x554DL},{0x0113L,0x554DL},{0UL,1UL},{0x0113L,1UL},{0UL,0x554DL}}};
                    uint64_t l_1142 = 0UL;
                    int i, j, k;
                    ++l_1138[2][2][1];
                    if (g_152)
                        goto lbl_1141;
                    (*g_231) = (*l_1113);
                    l_1142++;
                }
            }
            if (l_995)
                goto lbl_1170;
            (**g_230) ^= ((((0xB0D9L & l_1136[2][1][1]) , (safe_sub_func_uint16_t_u_u(0x6965L, ((safe_mul_func_int8_t_s_s(p_63.f2, (0xE93CL <= ((((((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_1154) = 0x39L), ((*l_1158) = (--(*l_1155))))), p_63.f3)) >= p_63.f3) || l_1129) || p_63.f1) , g_256) , l_1093[1][1][0].f2)))) != g_952.f1)))) , g_775[2][1]) & 4UL);
            for (l_756.f2 = 21; (l_756.f2 >= 22); l_756.f2 = safe_add_func_int8_t_s_s(l_756.f2, 7))
            { 
                int32_t l_1165[3];
                uint16_t l_1167 = 1UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1165[i] = 2L;
                if (g_739)
                    goto lbl_1141;
                if (l_1161[1])
                    break;
                for (g_69 = 0; (g_69 <= 0); g_69 += 1)
                { 
                    int32_t *l_1163 = (void*)0;
                    int32_t *l_1164[1][5][3] = {{{&l_1136[1][1][1],&l_1136[1][1][1],&l_1136[1][1][1]},{&l_1129,&l_1129,&l_1129},{&l_1136[1][1][1],&l_1136[1][1][1],&l_1136[1][1][1]},{&l_1129,&l_1129,&l_1129},{&l_1136[1][1][1],&l_1136[1][1][1],&l_1136[1][1][1]}}};
                    int i, j, k;
                    l_1101 = ((**g_230) &= ((!l_1119) >= (-2L)));
                    l_1167++;
                }
                if (p_63.f0)
                    break;
            }
            (***g_229) ^= 0x92C8BFB5L;
        }
        if ((safe_add_func_int16_t_s_s((*l_906), (l_1118 = (0x70L && (((*l_1186) = ((safe_mod_func_uint32_t_u_u(0x008AC79BL, (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((((*g_669) ^= (safe_sub_func_int16_t_s_s((l_1181 != ((l_1136[0][1][1] != (safe_mod_func_int16_t_s_s(((*****l_561) = (l_1129 , (g_738 < 0UL))), p_63.f2))) , l_1184[0])), 0xED10L))) && (-1L)), 0xC80672C2L)), 14)))) && g_85)) && p_63.f0))))))
        { 
            uint64_t *l_1199 = &l_1039;
            int32_t l_1202 = 0xACECD17AL;
            l_1136[2][1][1] = p_63.f3;
            for (l_1129 = 0; (l_1129 != (-10)); l_1129 = safe_sub_func_int32_t_s_s(l_1129, 5))
            { 
                if (g_234)
                    goto lbl_1170;
            }
            (***g_229) = (safe_add_func_int8_t_s_s(6L, (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((*l_906), (((safe_add_func_uint64_t_u_u(((*l_1199) &= (g_1197 != &l_1185[3])), ((((*l_1186) = (((*p_64) = (*p_64)) >= ((p_63.f2 & (((*g_669) = ((***l_1109) = (g_19[0][1][0] > p_63.f0))) < p_63.f2)) <= 65535UL))) , p_63.f0) >= p_63.f2))) > 1L) | l_1202))), p_63.f3))));
        }
        else
        { 
            int32_t *l_1207 = &g_4;
            int32_t *l_1236 = &l_1101;
            uint32_t ***l_1250 = &g_1213;
            int64_t *l_1255[6] = {&g_259,&g_259,&g_259,&g_259,&g_259,&g_259};
            int64_t **l_1254 = &l_1255[3];
            int64_t *l_1257 = &g_175[1];
            int64_t **l_1256 = &l_1257;
            int32_t l_1275 = 0xFFE00CF3L;
            int32_t l_1279 = 0x16F5F877L;
            int32_t l_1280 = (-3L);
            int32_t l_1281 = (-3L);
            int32_t l_1283 = 0x07D7E6B8L;
            int32_t l_1286[7][2][1] = {{{(-1L)},{(-10L)}},{{(-1L)},{0x89684DE4L}},{{0x89684DE4L},{(-1L)}},{{(-10L)},{(-1L)}},{{0x89684DE4L},{0x89684DE4L}},{{(-1L)},{(-10L)}},{{(-1L)},{0x89684DE4L}}};
            int32_t l_1298 = (-10L);
            int8_t *l_1315 = &l_1247;
            const int8_t l_1321 = 0x91L;
            int32_t l_1322 = 1L;
            const uint16_t **l_1352 = (void*)0;
            const uint16_t ***l_1351 = &l_1352;
            const uint16_t ****l_1350 = &l_1351;
            union U1 l_1363 = {-1L};
            int i, j, k;
lbl_1253:
            for (g_65.f0 = 0; (g_65.f0 >= (-10)); g_65.f0--)
            { 
                int32_t *l_1208 = (void*)0;
                uint32_t ***l_1215 = &g_1213;
                const uint16_t *l_1235[2][5];
                const uint16_t **l_1234[6] = {&l_1235[1][1],&l_1235[1][1],&l_1235[1][1],&l_1235[1][1],&l_1235[1][1],&l_1235[1][1]};
                const uint16_t ***l_1233 = &l_1234[2];
                int32_t l_1252 = 0x02B65ADCL;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1235[i][j] = &g_775[0][1];
                }
                for (l_1039 = 0; (l_1039 > 33); l_1039 = safe_add_func_uint16_t_u_u(l_1039, 1))
                { 
                    l_1208 = l_1207;
                }
                if (l_1101)
                    goto lbl_1253;
                l_1210 = l_1209;
            }
            if ((((*l_1254) = p_64) != ((*l_1256) = p_64)))
            { 
                uint32_t * const l_1267 = (void*)0;
                int32_t l_1269 = (-9L);
                int32_t l_1276 = 0x3E574C25L;
                int32_t l_1277 = 0x6B99E64FL;
                int32_t l_1278 = (-5L);
                int32_t l_1282 = 1L;
                int32_t l_1284[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1284[i][j] = (-8L);
                }
                for (g_935.f5 = (-11); (g_935.f5 >= (-29)); g_935.f5 = safe_sub_func_int8_t_s_s(g_935.f5, 2))
                { 
                    uint8_t l_1262 = 0UL;
                    uint32_t **l_1268 = &l_349;
                    (***l_1018) = 0x9D731553L;
                    (**g_230) = ((safe_mul_func_uint8_t_u_u(g_935.f3, l_1262)) < ((safe_sub_func_uint16_t_u_u(((*l_1236) == (safe_mul_func_int16_t_s_s(l_1136[1][1][1], ((g_393 != ((l_1267 == ((*l_1268) = l_1207)) > p_63.f2)) , p_63.f3)))), (-1L))) | 0xFFL));
                    (*l_906) = (***g_229);
                }
                for (l_1131 = 1; (l_1131 >= 0); l_1131 -= 1)
                { 
                    int32_t *l_1270 = &g_952.f2;
                    int32_t *l_1271 = &l_1127;
                    int32_t *l_1272 = &l_1118;
                    int32_t *l_1273 = (void*)0;
                    int32_t *l_1274[3];
                    int64_t l_1285 = 0xD2080FF9CA02B7C4LL;
                    int8_t l_1287 = 0L;
                    int32_t ***l_1297 = &l_215;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1274[i] = (void*)0;
                    if ((*g_231))
                        break;
                    (*g_231) = (**g_230);
                    ++l_1288[4][0];
                    (*l_1236) ^= ((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u(((*l_906) | ((safe_unary_minus_func_uint8_t_u(0x21L)) || ((g_229 = l_1296[2]) != l_1297))), (l_1298 < (((*g_964) = (void*)0) != l_1299)))) <= g_65.f0) , p_63.f0), 0x3369F996L)) < 65529UL);
                }
                return l_1277;
            }
            else
            { 
                int32_t ****l_1320 = &l_1017;
                int16_t *****l_1366 = &l_900;
                const uint64_t l_1380[7] = {0xCF823554D6665F5CLL,0xCF823554D6665F5CLL,0xCF823554D6665F5CLL,0xCF823554D6665F5CLL,0xCF823554D6665F5CLL,0xCF823554D6665F5CLL,0xCF823554D6665F5CLL};
                int i;
                for (g_176 = 0; (g_176 <= 2); g_176 += 1)
                { 
                    int32_t l_1306 = (-5L);
                    int i;
                    if (g_395[g_176])
                        break;
                    (*l_1236) |= (((***g_229) == (safe_sub_func_uint64_t_u_u(0x5161088536C9C7ABLL, ((((safe_lshift_func_int16_t_s_u((p_63.f3 | ((l_1306 = (safe_div_func_uint16_t_u_u((0UL < ((g_395[g_176] | p_63.f0) , ((*g_267) & p_63.f3))), (-1L)))) && p_63.f3)), p_63.f3)) | (*g_231)) == 0x0A9D6EDCD589D691LL) == (-7L))))) , 0xFFCE52C2L);
                }
                (***l_1018) = (safe_lshift_func_int16_t_s_u(p_63.f0, (((((~(~p_63.f2)) ^ (safe_lshift_func_int16_t_s_u(((((((safe_mul_func_uint16_t_u_u(((void*)0 != l_1315), ((safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((void*)0 != l_1320), (p_63.f2 | 0xB5045E31L))) & p_63.f1), p_63.f3)) & (***l_1018)))) , (*l_906)) <= l_1321) > g_69) < p_63.f1) || p_63.f2), 5))) != (*p_64)) || g_1012[1]) == l_1322)));
                for (l_1129 = 12; (l_1129 == (-15)); l_1129--)
                { 
                    if ((***g_229))
                        break;
                    return p_63.f1;
                }
                if ((0x953819DB0474E06BLL != ((safe_add_func_int32_t_s_s((**g_230), ((safe_add_func_int8_t_s_s(p_63.f0, (*g_267))) < p_63.f3))) <= ((*l_1186) = (p_63.f3 & ((**g_1197) , 0x800930D9FB18F78CLL))))))
                { 
                    uint32_t *l_1338 = &g_935.f1;
                    int16_t *****l_1367[5][6] = {{&l_900,(void*)0,(void*)0,&l_900,&l_900,&l_900},{&l_900,&l_900,&l_900,(void*)0,&l_900,&l_900},{(void*)0,&l_900,&l_900,&l_900,&l_900,(void*)0},{&l_900,(void*)0,(void*)0,&l_900,(void*)0,(void*)0},{(void*)0,&l_900,&l_900,&l_900,&l_900,&l_900}};
                    int32_t l_1381 = (-1L);
                    int i, j;
                    (**g_230) = ((*l_1207) ^ (((safe_mod_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((*l_891) = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((&l_663 == (void*)0), 4)) ^ (*p_64)), 0xA543L))), 3)) , l_1337) == ((*l_1250) = ((((void*)0 != l_1338) == g_114) , (*l_1250)))), p_63.f1)) >= g_952.f0) || p_63.f1));
                    (*g_231) = (((*g_641) == (*g_641)) < ((!p_63.f0) , ((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((**l_1232) = (((void*)0 != l_1344) , 0xD5F2L)) & (safe_div_func_uint64_t_u_u(((((safe_sub_func_int8_t_s_s((0xBB3D222EB2D167D4LL & 0xEA5C847F97BD9A8ELL), 0x33L)) == 18446744073709551608UL) == 0x09B5L) == p_63.f1), (***l_1018)))), (***l_1018))), l_1349)) , p_63.f0)));
                    (*g_231) = ((g_1356[1][1][0] = (l_1353 = l_1350)) == (p_63 , (void*)0));
                    l_1382 ^= (safe_add_func_uint32_t_u_u((+(safe_div_func_uint32_t_u_u(((((*g_669) = (***l_1018)) , l_1363) , ((safe_lshift_func_int8_t_s_u((((l_1344 = l_1366) != (g_628 = l_1367[3][2])) && (safe_lshift_func_uint16_t_u_s(3UL, (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((((((((safe_mod_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s(0xA06DL, 13)) || l_1380[6]) | (*l_1207)) != p_63.f0), p_63.f1)) >= g_19[1][3][0]) , p_63.f2) && 4294967293UL) || p_63.f1) | 4L) <= (*g_267)), (*g_267))) , l_1381) || p_63.f2), 0L)) < p_63.f2), g_280))))), 3)) , g_738)), (**g_230)))), 0x3C0B78D6L));
                }
                else
                { 
                    return (*l_1207);
                }
            }
            if (g_65.f3)
                goto lbl_1253;
            l_1383 |= 0x304FC188L;
        }
    }
    (*l_906) |= (safe_lshift_func_uint8_t_u_s((((*p_64) &= (-1L)) <= (safe_lshift_func_uint16_t_u_s(((void*)0 != l_1388), ((((*l_1405) ^= (65534UL < (((safe_lshift_func_uint16_t_u_s(((*l_891) ^= (safe_lshift_func_int8_t_s_s(1L, 0))), ((~(+(safe_mul_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(2L, (g_1404 , (*g_267)))), 3)) & 0xFBD2L) & p_63.f0), p_63.f0)))) <= 4L))) == p_63.f1) , 0x3542L))) , (*g_669)) && 0x4F48L)))), (***l_1018)));
    --l_1407;
    --l_1410;
    return p_63.f3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_19[i][j][k], "g_19[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_65.f1, "g_65.f1", print_hash_value);
    transparent_crc(g_65.f2, "g_65.f2", print_hash_value);
    transparent_crc(g_65.f3, "g_65.f3", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);

    }
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_395[i], "g_395[i]", print_hash_value);

    }
    transparent_crc(g_553, "g_553", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_735[i][j][k], "g_735[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_775[i][j], "g_775[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_935.f0, "g_935.f0", print_hash_value);
    transparent_crc(g_935.f1, "g_935.f1", print_hash_value);
    transparent_crc(g_935.f2, "g_935.f2", print_hash_value);
    transparent_crc(g_935.f3, "g_935.f3", print_hash_value);
    transparent_crc(g_935.f4, "g_935.f4", print_hash_value);
    transparent_crc(g_935.f5, "g_935.f5", print_hash_value);
    transparent_crc(g_952.f0, "g_952.f0", print_hash_value);
    transparent_crc(g_952.f1, "g_952.f1", print_hash_value);
    transparent_crc(g_952.f2, "g_952.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1012[i], "g_1012[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1218[i], "g_1218[i]", print_hash_value);

    }
    transparent_crc(g_1251, "g_1251", print_hash_value);
    transparent_crc(g_1404, "g_1404", print_hash_value);
    transparent_crc(g_1466, "g_1466", print_hash_value);
    transparent_crc(g_1675.f0, "g_1675.f0", print_hash_value);
    transparent_crc(g_1675.f1, "g_1675.f1", print_hash_value);
    transparent_crc(g_1675.f2, "g_1675.f2", print_hash_value);
    transparent_crc(g_1675.f3, "g_1675.f3", print_hash_value);
    transparent_crc(g_1679, "g_1679", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1689[i], "g_1689[i]", print_hash_value);

    }
    transparent_crc(g_1784, "g_1784", print_hash_value);
    transparent_crc(g_1951, "g_1951", print_hash_value);
    transparent_crc(g_1980, "g_1980", print_hash_value);
    transparent_crc(g_2008, "g_2008", print_hash_value);
    transparent_crc(g_2131, "g_2131", print_hash_value);
    transparent_crc(g_2148, "g_2148", print_hash_value);
    transparent_crc(g_2158, "g_2158", print_hash_value);
    transparent_crc(g_2532, "g_2532", print_hash_value);
    transparent_crc(g_2669, "g_2669", print_hash_value);
    transparent_crc(g_2731, "g_2731", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2870[i], "g_2870[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2902[i], "g_2902[i]", print_hash_value);

    }
    transparent_crc(g_2984, "g_2984", print_hash_value);
    transparent_crc(g_3063, "g_3063", print_hash_value);
    transparent_crc(g_3122, "g_3122", print_hash_value);
    transparent_crc(g_3249, "g_3249", print_hash_value);
    transparent_crc(g_3260, "g_3260", print_hash_value);
    transparent_crc(g_3364, "g_3364", print_hash_value);
    transparent_crc(g_3371, "g_3371", print_hash_value);
    transparent_crc(g_3412, "g_3412", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
