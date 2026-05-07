// SPDX-License-Identifier: MIT
// cctest_csmith_d3141677.c --- cctest case csmith_d3141677 (csmith seed 3541309047)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2ccb5cff */

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

// Options:   -s 3541309047 -o /tmp/csmith_gen_8lhr687w/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 26;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
   int8_t  f1;
};
#pragma pack(pop)

struct S2 {
   const uint16_t  f0;
   uint32_t  f1;
   struct S0  f2;
   int32_t  f3;
};

struct S3 {
   signed f0 : 16;
   signed f1 : 26;
   const unsigned f2 : 31;
   signed f3 : 6;
   const unsigned f4 : 24;
   unsigned f5 : 19;
   signed f6 : 6;
   unsigned f7 : 3;
};

union U4 {
   uint64_t  f0;
   struct S1  f1;
};

union U5 {
   const int8_t * const  f0;
   int32_t  f1;
   uint64_t  f2;
   struct S1  f3;
};


static uint32_t g_13 = 0x33FD52A4L;
static struct S0 g_19 = {89};
static int8_t g_36 = 0x66L;
static struct S2 g_38 = {65532UL,18446744073709551610UL,{-4074},0L};
static union U5 g_60 = {0};
static uint32_t g_75 = 0xE30C1ABDL;
static uint8_t g_118 = 255UL;
static uint32_t g_134 = 0x224DB28FL;
static int64_t g_140 = 0x31822BFEBDF65D56LL;
static int32_t g_141 = 0x858A7F69L;
static int16_t g_144[1] = {0xCDF1L};
static int16_t g_145 = 0xB578L;
static const uint32_t **g_182 = (void*)0;
static const uint32_t g_185 = 0x9419EC0FL;
static struct S1 g_188 = {8UL,7L};
static struct S1 *g_187 = &g_188;
static uint8_t g_191 = 255UL;
static const int64_t *g_199 = &g_140;
static const int64_t **g_198 = &g_199;
static int16_t g_213 = 0L;
static int64_t g_214[3][1] = {{0xB51E4AA302B4F16BLL},{0xB51E4AA302B4F16BLL},{0xB51E4AA302B4F16BLL}};
static int32_t *g_241 = &g_60.f1;
static int32_t g_282 = 0x1C128671L;
static uint16_t g_283 = 0xC54FL;
static int32_t *g_299[2][2] = {{&g_282,&g_282},{&g_282,&g_282}};
static uint64_t g_312 = 0xF2C5EE9AC8311569LL;
static union U4 g_314 = {18446744073709551615UL};
static struct S0 *g_336 = &g_38.f2;
static uint32_t g_394[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static int64_t *g_413 = &g_214[1][0];
static struct S3 g_464 = {5,-4102,31616,-7,3386,678,-1,0};
static struct S2 g_559 = {0UL,0x73D9C547L,{2172},0x43BA4743L};
static struct S2 *g_593 = &g_38;
static struct S2 **g_592[2] = {&g_593,&g_593};
static int64_t g_658 = 0x8E38308500D2562ALL;
static int8_t g_662 = 0xC2L;
static int8_t *g_684 = (void*)0;
static int8_t **g_683 = &g_684;
static int32_t **g_863 = &g_299[0][0];
static int16_t g_874 = (-2L);
static uint16_t g_875 = 2UL;
static int8_t *****g_897 = (void*)0;
static const int32_t g_898 = 0L;
static int32_t g_899 = 0xB743B2E6L;
static int32_t g_902 = (-9L);
static uint8_t g_924 = 255UL;
static int32_t * const g_983 = &g_899;
static struct S0 **g_1069 = &g_336;
static struct S0 *** const g_1068 = &g_1069;
static struct S0 *** const *g_1067 = &g_1068;
static uint32_t *g_1138 = &g_394[1];
static uint32_t **g_1137[5][3][1] = {{{(void*)0},{&g_1138},{(void*)0}},{{&g_1138},{(void*)0},{&g_1138}},{{(void*)0},{&g_1138},{(void*)0}},{{&g_1138},{(void*)0},{&g_1138}},{{(void*)0},{&g_1138},{(void*)0}}};
static const int32_t *g_1245 = &g_60.f1;
static struct S1 **g_1304 = &g_187;
static struct S3 g_1362 = {-72,-5777,17007,0,4052,216,0,0};
static union U5 g_1421 = {0};
static union U5 *g_1420[7] = {(void*)0,&g_1421,(void*)0,(void*)0,&g_1421,(void*)0,(void*)0};
static struct S3 g_1428 = {198,-8042,13716,2,2010,661,-1,1};
static struct S3 *g_1427 = &g_1428;
static struct S2 g_1515 = {65534UL,0x05C56A00L,{-1859},0x5BA1EE83L};
static int64_t g_1537[5] = {0x1502F2B87A44997BLL,0x1502F2B87A44997BLL,0x1502F2B87A44997BLL,0x1502F2B87A44997BLL,0x1502F2B87A44997BLL};
static int32_t g_1539 = (-1L);
static uint32_t g_1548 = 4UL;
static uint32_t g_1583 = 1UL;
static int8_t ***g_1714 = &g_683;
static int8_t ****g_1713 = &g_1714;
static int32_t g_1725 = (-1L);
static int32_t g_1792 = 0L;
static uint64_t ***g_2039 = (void*)0;



static struct S1  func_1(void);
static const uint16_t  func_3(int8_t * p_4, struct S0  p_5);
static int8_t * func_6(int16_t  p_7, uint16_t  p_8);
static const uint8_t  func_14(struct S0  p_15, const union U5  p_16, int8_t * p_17, struct S2  p_18);
static int8_t * func_21(int32_t  p_22, struct S0  p_23);
static uint8_t  func_41(int32_t  p_42, int8_t * const  p_43, struct S2  p_44, uint8_t  p_45, int64_t  p_46);
static int32_t  func_47(uint32_t  p_48, const uint32_t  p_49, struct S1  p_50, uint8_t  p_51);
static int8_t * func_58(union U5  p_59);




static struct S1  func_1(void)
{ 
    const union U5 l_20 = {0};
    int32_t l_32[1][1][2];
    int32_t l_1644 = (-1L);
    struct S0 l_1665 = {-6133};
    uint16_t l_1667 = 1UL;
    struct S1 l_1680 = {0x0BE9L,0L};
    uint16_t l_1685[5][3] = {{65533UL,65533UL,65533UL},{0xBC73L,0xBC73L,0xBC73L},{65533UL,65533UL,65533UL},{0xBC73L,0xBC73L,0xBC73L},{65533UL,65533UL,65533UL}};
    union U5 **l_1691[7] = {(void*)0,&g_1420[1],(void*)0,(void*)0,&g_1420[1],(void*)0,(void*)0};
    union U4 *l_1699 = &g_314;
    uint64_t l_1700 = 18446744073709551609UL;
    struct S2 l_1710[4] = {{0x6AADL,0xEAF8B757L,{-872},1L},{0x6AADL,0xEAF8B757L,{-872},1L},{0x6AADL,0xEAF8B757L,{-872},1L},{0x6AADL,0xEAF8B757L,{-872},1L}};
    struct S1 **l_1723 = &g_187;
    struct S1 l_1747[4] = {{0UL,0xCAL},{0UL,0xCAL},{0UL,0xCAL},{0UL,0xCAL}};
    uint32_t l_1777 = 1UL;
    uint64_t l_1844 = 0x8D6D453C25EEF43FLL;
    int16_t *l_1907 = (void*)0;
    int16_t **l_1906 = &l_1907;
    struct S3 l_1945 = {53,-852,20475,-4,3290,285,-5,0};
    uint16_t l_1968 = 65535UL;
    int8_t l_2006[4][7][2] = {{{0x0CL,0L},{0L,0x0CL},{0L,0L},{0x0CL,0L},{0L,0x0CL},{0L,0L},{0x0CL,0L}},{{0L,0x0CL},{0L,0L},{0x0CL,0L},{0L,0x0CL},{0L,0L},{0x0CL,0L},{0L,0x0CL}},{{0L,0L},{0x0CL,0L},{0L,0x0CL},{0L,0L},{0x0CL,0L},{0L,0x0CL},{0L,0L}},{{0x0CL,0L},{0L,0x0CL},{0L,0L},{0x0CL,0L},{0L,0x0CL},{0L,0L},{0x0CL,0L}}};
    uint8_t l_2051 = 0x47L;
    int32_t l_2063 = 0x74552CC5L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_32[i][j][k] = 1L;
        }
    }
    if ((((((safe_unary_minus_func_uint16_t_u(func_3(func_6((l_32[0][0][0] = ((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((((-1L) ^ ((g_13 == g_13) != (func_14(g_19, l_20, func_21(((safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(0x93L, 5)), ((safe_mul_func_int16_t_s_s(g_19.f0, 4UL)) > l_32[0][0][0]))), l_32[0][0][0])) <= g_19.f0), g_19), g_38) != l_32[0][0][0]))) >= 0x4F73L) | g_1428.f7) >= g_1428.f5), g_464.f1)), g_1362.f0)) & 0UL)), l_1644), l_1665))) & l_1665.f0) , l_32[0][0][0]) , (-1L)) > l_1667))
    { 
        int32_t l_1668 = 0x77039213L;
        int32_t l_1675 = 0xFA5BD536L;
        int32_t *l_1676 = &g_1539;
        int32_t *l_1677[6][3][6] = {{{&g_902,&g_902,(void*)0,&g_902,&g_559.f3,&g_559.f3},{&g_902,&g_902,&g_902,&g_902,&g_559.f3,(void*)0},{&g_559.f3,&g_902,&g_559.f3,&g_559.f3,&g_559.f3,&g_902}},{{&g_902,&g_902,(void*)0,&g_902,&g_559.f3,&g_559.f3},{&g_902,&g_902,&g_902,&g_902,&g_559.f3,(void*)0},{&g_559.f3,&g_902,&g_559.f3,&g_559.f3,&g_559.f3,&g_902}},{{&g_902,&g_902,(void*)0,&g_902,&g_559.f3,&g_559.f3},{&g_902,&g_902,&g_902,&g_902,&g_559.f3,(void*)0},{&g_559.f3,&g_902,&g_559.f3,&g_559.f3,&g_559.f3,&g_902}},{{&g_902,&g_902,(void*)0,&g_902,&g_559.f3,&g_559.f3},{&g_902,&g_902,&g_902,&g_902,&g_559.f3,(void*)0},{&g_559.f3,&g_902,&g_559.f3,&g_559.f3,&g_559.f3,&g_902}},{{&g_902,&g_902,(void*)0,&g_902,&g_559.f3,&g_559.f3},{&g_902,&g_902,&g_902,&g_902,&g_559.f3,(void*)0},{&g_559.f3,&g_902,&g_559.f3,&g_559.f3,&g_559.f3,&g_902}},{{&g_902,&g_902,(void*)0,&g_902,&g_559.f3,&g_559.f3},{&g_902,&g_902,&g_902,&g_902,&g_559.f3,(void*)0},{&g_559.f3,&g_902,&g_559.f3,&g_559.f3,&g_559.f3,&g_902}}};
        int16_t l_1678 = (-9L);
        int32_t *l_1679 = &g_141;
        int i, j, k;
        (*g_983) = l_1668;
        (*l_1679) &= ((safe_div_func_uint64_t_u_u(((l_1678 = ((*l_1676) &= ((g_191 ^ (l_1668 < (((((*g_983) &= (0x63L ^ (l_1668 < (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(l_1668, l_1675)) && l_32[0][0][0]), 9L))))) != 4294967295UL) >= l_1675) && l_1644))) && g_283))) , 4UL), 0x5294D881E657A3C9LL)) , 0x679DA0B0L);
    }
    else
    { 
        return l_1680;
    }
    if ((l_1665.f0 ^= ((*g_1427) , ((*g_983) > (~((*g_983) < (+(safe_mul_func_uint8_t_u_u((l_1685[1][0] <= 0L), 0xEFL)))))))))
    { 
        struct S0 l_1686 = {4768};
        uint64_t *l_1690 = &g_312;
        uint64_t **l_1689 = &l_1690;
        int16_t l_1701 = 0x9CD6L;
        uint16_t *l_1702[4] = {&g_314.f1.f0,&g_314.f1.f0,&g_314.f1.f0,&g_314.f1.f0};
        int32_t l_1703 = (-7L);
        uint16_t l_1704[1];
        int32_t l_1705 = 4L;
        struct S1 l_1711 = {0xE70AL,1L};
        int32_t * const l_1745 = &g_282;
        int32_t *l_1746 = &g_282;
        int32_t l_1784 = 1L;
        int32_t l_1785 = 1L;
        int32_t l_1786 = 0L;
        uint8_t l_1787 = 0x49L;
        int i;
        for (i = 0; i < 1; i++)
            l_1704[i] = 0x725BL;
        l_1665 = l_1686;
        l_1705 ^= (safe_sub_func_int8_t_s_s((((((*l_1689) = &g_312) != &g_312) < ((void*)0 == l_1691[6])) , (((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((l_1667 == ((l_1703 &= ((safe_mod_func_int16_t_s_s((((+(&g_314 == l_1699)) | l_1700) , 0L), l_1701)) && l_1686.f0)) , 0x68F70C6B7E6CC961LL)), l_1704[0])), g_1515.f3)) < 0xFAL) == 0xB35AL)), 0xF8L));
        for (l_1667 = 23; (l_1667 > 12); l_1667 = safe_sub_func_uint32_t_u_u(l_1667, 1))
        { 
            int32_t l_1712[5];
            int8_t *****l_1715 = &g_1713;
            struct S3 l_1724 = {-216,2935,40251,4,1917,99,2,1};
            struct S0 l_1742 = {1403};
            int32_t *l_1779 = &g_60.f1;
            int32_t *l_1780 = &l_32[0][0][0];
            int32_t *l_1781 = (void*)0;
            int32_t *l_1782 = (void*)0;
            int32_t *l_1783[4] = {&l_1644,&l_1644,&l_1644,&l_1644};
            int i;
            for (i = 0; i < 5; i++)
                l_1712[i] = 0x8AA166BDL;
            (*g_983) |= ((&g_191 != &g_191) < ((l_1701 , ((l_1710[1] , (l_1711 , ((((g_875 = (g_60.f3.f0 = l_1712[1])) || ((0L >= l_1667) && 0xF965588BL)) | 0L) <= 0L))) != l_1712[1])) != 0L));
            (*l_1715) = g_1713;
            for (g_141 = 0; (g_141 < 2); g_141++)
            { 
                uint16_t l_1718[4][2][4] = {{{0x2723L,0x2723L,0xE67FL,65535UL},{0xAAFAL,0x6AE3L,65535UL,0xB485L}},{{65535UL,0xB485L,0x2A46L,65535UL},{0x2723L,0xB485L,0x31E5L,0xB485L}},{{0xB485L,0x6AE3L,1UL,65535UL},{65535UL,0x2723L,0x2A46L,1UL}},{{0xAAFAL,0x7AE9L,0UL,0xB485L},{0xAAFAL,0x2A46L,0x2A46L,0xAAFAL}}};
                int32_t *l_1726 = &l_32[0][0][0];
                struct S2 l_1733 = {65535UL,1UL,{5927},1L};
                int i, j, k;
                l_1718[2][0][0]++;
                (*l_1726) = ((*g_983) = (+(g_1725 = ((g_314 , (((*g_413) = (((0xD7L & (((1L == ((!(l_1723 != (void*)0)) >= g_191)) >= ((l_1724 , (void*)0) == (*g_1067))) != l_1711.f0)) == g_141) | l_1685[1][0])) , 2L)) ^ 0UL))));
                if (((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((void*)0 != (*g_1067)), ((((safe_div_func_uint8_t_u_u((l_1733 , (safe_mod_func_int32_t_s_s(l_1724.f7, ((safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((&g_314 != ((*l_1726) , ((safe_mul_func_uint8_t_u_u(g_394[1], g_1583)) , l_1699))), 0x6CL)) <= l_1710[1].f3), 5)) || l_1710[1].f2.f0)))), g_394[1])) < l_1703) && l_1704[0]) == g_283))), g_662)) == 1L))
                { 
                    union U5 *l_1743 = (void*)0;
                    struct S0 *l_1744 = &l_1742;
                    l_1742 = l_1742;
                    l_1743 = &g_60;
                    (*l_1744) = l_1686;
                }
                else
                { 
                    l_1746 = l_1745;
                }
                (*g_983) |= (*l_1745);
                return l_1747[2];
            }
            for (g_899 = 0; (g_899 != (-28)); --g_899)
            { 
                int32_t l_1754 = 0x1E410C12L;
                uint32_t *l_1755 = &l_1710[1].f1;
                int8_t *l_1774 = &l_1747[2].f1;
                uint32_t *l_1775 = &g_75;
                uint8_t l_1776 = 0xF1L;
                int32_t l_1778 = (-7L);
                l_1724.f6 ^= (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((l_1777 |= ((l_1754 || l_1724.f5) >= ((((*l_1755)--) , (safe_div_func_int32_t_s_s((*l_1746), ((*l_1775) = (0xBDD7417EFBF52C7CLL || (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((*g_1138) |= (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_188.f1, (g_1515.f1 | (l_1774 != (**g_1714))))), l_1685[1][0])) < l_1754) <= 0xEDL), 4294967295UL)), l_1754))), l_1724.f4)), l_1754))))))) >= l_1776))), l_1680.f0)) | (*l_1745)) >= 0xDFFFDE1FA66DECB7LL), 7));
                if (l_1778)
                    break;
                (*l_1745) = (-3L);
                if (l_1724.f5)
                    break;
            }
            l_1787++;
        }
        for (g_283 = 0; (g_283 != 14); g_283 = safe_add_func_uint8_t_u_u(g_283, 7))
        { 
            if (g_1792)
                break;
        }
    }
    else
    { 
        const uint8_t l_1799[7][1] = {{0xA9L},{0x49L},{0xA9L},{0x49L},{0xA9L},{0x49L},{0xA9L}};
        union U5 l_1805[5][5][6] = {{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}}};
        const uint8_t l_1808 = 0xEAL;
        uint8_t *l_1809 = &g_924;
        uint64_t *l_1810 = &g_1421.f2;
        uint64_t *l_1811 = (void*)0;
        uint64_t *l_1812 = &g_312;
        struct S3 l_1824 = {255,-8084,35478,-7,3005,281,1,1};
        struct S0 *l_1829 = &g_19;
        int32_t ***l_1847 = &g_863;
        int32_t **** const l_1846 = &l_1847;
        const uint32_t ****l_1859 = (void*)0;
        const struct S0 *l_1872 = &l_1665;
        const struct S0 **l_1871 = &l_1872;
        const struct S0 ***l_1870 = &l_1871;
        int64_t **l_1877 = &g_413;
        int64_t ***l_1876 = &l_1877;
        int8_t **l_1913 = &g_684;
        struct S1 l_1918[2] = {{65530UL,-10L},{65530UL,-10L}};
        int32_t l_1926 = 0L;
        int32_t l_1927 = 1L;
        uint32_t l_1952[7][5] = {{0x3A5A7A4EL,4294967295UL,4294967288UL,4294967286UL,0UL},{4294967295UL,1UL,4294967288UL,1UL,4294967288UL},{0UL,0UL,1UL,0x3A5A7A4EL,0x84973F23L},{4294967295UL,0x84973F23L,0xAF6AC994L,0x3A5A7A4EL,0x3A5A7A4EL},{0x3A5A7A4EL,1UL,0x3A5A7A4EL,1UL,0x8D8E493CL},{0xAF6AC994L,0x84973F23L,4294967295UL,4294967286UL,0x8D8E493CL},{1UL,0UL,0UL,1UL,0x3A5A7A4EL}};
        uint64_t l_1954 = 0xF58E32259082926CLL;
        const int32_t l_1982 = 0xB2DA2268L;
        int32_t *l_2004 = (void*)0;
        int32_t *l_2005[6] = {&g_141,&g_141,&g_141,&g_141,&g_141,&g_141};
        uint16_t l_2007[3][1];
        int16_t *l_2024 = &g_144[0];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_2007[i][j] = 0x6A76L;
        }
        if ((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((((((l_1799[6][0] != ((*g_1138) &= l_1700)) >= (safe_lshift_func_int16_t_s_u((l_1665 , (safe_lshift_func_int16_t_s_s((~(l_1805[4][3][2] , (safe_mod_func_uint8_t_u_u(0xE6L, l_1808)))), 11))), (((*l_1812) ^= ((((*l_1809) = l_1685[4][0]) , g_1362.f1) , g_36)) , 0x64B4L)))) | l_1710[1].f3) || l_1747[2].f1) & g_191), g_282)), 0L)), (**g_198))))
        { 
            struct S2 *l_1813[3];
            uint8_t l_1816 = 1UL;
            struct S0 * const *l_1826 = &g_336;
            int32_t l_1830 = 0L;
            int32_t l_1837 = 1L;
            int32_t l_1838 = 0x6EA684F5L;
            struct S1 l_1843 = {1UL,0x7AL};
            uint32_t *l_1862 = (void*)0;
            union U5 l_1875 = {0};
            struct S3 l_1914 = {-187,2334,8608,-7,2390,668,4,0};
            int32_t l_1928 = 0xE1969767L;
            uint32_t l_1929[5];
            int i;
            for (i = 0; i < 3; i++)
                l_1813[i] = &l_1710[1];
            for (i = 0; i < 5; i++)
                l_1929[i] = 3UL;
            for (g_658 = 0; (g_658 <= 4); g_658 += 1)
            { 
                uint16_t *l_1823[1][7] = {{&l_1805[4][3][2].f3.f0,&l_1680.f0,&l_1680.f0,&l_1805[4][3][2].f3.f0,&l_1680.f0,&l_1680.f0,&l_1805[4][3][2].f3.f0}};
                int8_t *l_1825 = &g_1421.f3.f1;
                struct S0 *l_1828 = (void*)0;
                int32_t l_1832 = 0x80528574L;
                int32_t l_1833 = 0x47D31C94L;
                int16_t l_1835 = 0x6A2BL;
                int32_t l_1836 = 0x3D4F2EDDL;
                int32_t l_1839 = 0x1E9647A2L;
                uint16_t l_1840 = 1UL;
                int i, j;
                for (g_282 = 3; (g_282 >= 0); g_282 -= 1)
                { 
                    struct S2 **l_1814 = &l_1813[1];
                    int32_t *l_1815[1][6][7] = {{{&l_32[0][0][0],(void*)0,&l_32[0][0][0],(void*)0,&l_32[0][0][0],(void*)0,&l_32[0][0][0]},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&l_32[0][0][0],(void*)0,&l_32[0][0][0],(void*)0,&l_32[0][0][0],(void*)0,&l_32[0][0][0]},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&l_32[0][0][0],(void*)0,&l_32[0][0][0],(void*)0,&l_32[0][0][0],(void*)0,&l_32[0][0][0]},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141}}};
                    int i, j, k;
                    (*g_983) = g_1537[g_282];
                    (*l_1814) = l_1813[1];
                    if (g_1537[g_282])
                        continue;
                    (*g_863) = l_1815[0][0][4];
                    l_1816++;
                }
                (*g_983) ^= (((*g_1068) = (*g_1068)) == ((((*g_1138) ^= ((safe_mul_func_uint8_t_u_u(g_1537[g_658], (((g_1537[g_658] < g_1362.f6) , ((safe_lshift_func_uint8_t_u_s((((*l_1825) = (((-7L) <= ((g_875 = 0xEDC9L) , ((l_1824 , l_1824.f2) <= g_1583))) > l_1799[6][0])) | l_32[0][0][0]), l_1824.f4)) <= l_1816)) <= l_1667))) >= l_32[0][0][0])) ^ g_1537[g_658]) , l_1826));
                for (g_924 = 0; (g_924 <= 3); g_924 += 1)
                { 
                    int32_t *l_1827 = &g_1725;
                    (*g_863) = l_1827;
                }
                l_1829 = l_1828;
                if (l_1799[0][0])
                { 
                    int32_t *l_1831[2][7] = {{(void*)0,&l_32[0][0][0],(void*)0,(void*)0,&l_32[0][0][0],(void*)0,(void*)0},{&l_32[0][0][0],&l_32[0][0][0],&l_1830,&l_32[0][0][0],&l_32[0][0][0],&l_1830,&l_32[0][0][0]}};
                    int32_t l_1834[5][2][3] = {{{1L,0x1D9E7321L,(-7L)},{0x1D9E7321L,0x2D8DF20AL,0x2D8DF20AL}},{{1L,1L,(-7L)},{0x6824F503L,0x55095C0EL,1L}},{{0x6824F503L,9L,0x1D9E7321L},{1L,1L,1L}},{{0x1D9E7321L,9L,0x6824F503L},{1L,0x55095C0EL,0x6824F503L}},{{(-7L),1L,1L},{0x2D8DF20AL,0x2D8DF20AL,0x1D9E7321L}}};
                    int i, j, k;
                    g_1420[4] = &g_1421;
                    --l_1840;
                }
                else
                { 
                    (*g_983) ^= 0x84E9AA8BL;
                    if (l_1832)
                        break;
                    (*g_863) = &g_899;
                    (*g_983) = (-1L);
                }
            }
            l_1805[4][3][2].f3 = ((**l_1723) = l_1843);
            for (g_283 = 0; (g_283 <= 2); g_283 += 1)
            { 
                for (g_312 = 0; (g_312 <= 3); g_312 += 1)
                { 
                    int i;
                    if (g_1537[(g_283 + 2)])
                        break;
                }
                l_32[0][0][1] = ((*g_983) = l_1844);
            }
            (*g_983) = ((((+l_1843.f1) || ((void*)0 != l_1846)) , g_1428.f3) & (((*l_1809) = (safe_mod_func_uint8_t_u_u(0x18L, g_188.f0))) , ((((((*l_1810) = 0x03CDD7099885B361LL) || 18446744073709551606UL) & l_1837) <= l_1685[2][1]) < 0xBCB2D2B6C4B65BE4LL)));
            if ((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((((*g_413) = (((safe_mod_func_uint16_t_u_u((!(safe_mul_func_uint8_t_u_u(((void*)0 == l_1859), (((safe_rshift_func_uint8_t_u_u((((&l_1824 == (void*)0) & g_559.f3) , l_1844), (l_1862 == (void*)0))) <= l_1667) || l_1747[2].f1)))), g_924)) < l_1777) | g_1428.f5)) , 0x01L), l_1700)), g_1362.f0)))
            { 
                uint64_t l_1867[1];
                const union U4 l_1894 = {0x2BEF7D8BC4ABDDF5LL};
                int16_t l_1897 = 0L;
                int32_t l_1898 = 0x8ED8787DL;
                int16_t **l_1908 = &l_1907;
                struct S2 **l_1923 = (void*)0;
                struct S2 **l_1924 = &l_1813[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1867[i] = 1UL;
                (*g_983) |= (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_1867[0], (safe_mod_func_int16_t_s_s((((l_1870 != (((***l_1876) = (safe_lshift_func_uint16_t_u_u((((l_1875 , (void*)0) == (l_1838 , l_1876)) ^ (l_1837 = 0x7537F72EDE15FABELL)), l_1710[1].f0))) , (*g_1067))) < l_1830) & l_1685[1][0]), l_1838)))), 0xD0L));
                for (g_875 = 0; (g_875 <= 0); g_875 += 1)
                { 
                    uint16_t *l_1880 = &l_1685[1][2];
                    int32_t l_1883[5][4][7] = {{{2L,0L,1L,2L,0x1F8EE7C0L,0x1F8EE7C0L,2L},{1L,0xF3EE213EL,1L,0x1F8EE7C0L,0xF3EE213EL,0L,0L},{0xF3EE213EL,2L,0xC47A7015L,2L,0xF3EE213EL,0xC47A7015L,1L},{1L,0L,0x1F8EE7C0L,1L,0x1F8EE7C0L,0L,1L}},{{1L,1L,0L,0x1F8EE7C0L,1L,0x1F8EE7C0L,0L},{1L,1L,0xC47A7015L,0xF3EE213EL,2L,0xC47A7015L,2L},{0xF3EE213EL,0L,0L,0xF3EE213EL,0x1F8EE7C0L,1L,0xF3EE213EL},{5L,0x1F8EE7C0L,0L,0L,0x1F8EE7C0L,5L,0xC47A7015L}},{{0x1F8EE7C0L,0L,1L,1L,1L,1L,0L},{0x1F8EE7C0L,0xC47A7015L,5L,0x1F8EE7C0L,0L,0L,0x1F8EE7C0L},{5L,0L,5L,0L,0L,0xC47A7015L,0xC47A7015L},{0L,0x1F8EE7C0L,1L,0x1F8EE7C0L,0L,1L,1L}},{{1L,0xC47A7015L,0L,1L,0L,0xC47A7015L,1L},{5L,1L,0xC47A7015L,0L,1L,0L,0xC47A7015L},{1L,1L,1L,0L,0x1F8EE7C0L,1L,0x1F8EE7C0L},{0L,0xC47A7015L,0xC47A7015L,0L,0L,5L,0L}},{{5L,0x1F8EE7C0L,0L,0L,0x1F8EE7C0L,5L,0xC47A7015L},{0x1F8EE7C0L,0L,1L,1L,1L,1L,0L},{0x1F8EE7C0L,0xC47A7015L,5L,0x1F8EE7C0L,0L,0L,0x1F8EE7C0L},{5L,0L,5L,0L,0L,0xC47A7015L,0xC47A7015L}}};
                    int32_t *l_1895 = &l_1875.f1;
                    int32_t *l_1896[6][6] = {{&g_1421.f1,&l_1644,&g_1421.f1,&l_1644,&g_1421.f1,&l_1644},{&g_1421.f1,&l_1644,&g_1421.f1,&l_1644,&g_1421.f1,&l_1644},{&g_1421.f1,&l_1644,&g_1421.f1,&l_1644,&g_1421.f1,&l_1644},{&g_1421.f1,&l_1644,&g_1421.f1,&l_1644,&g_1421.f1,&l_1644},{&g_1421.f1,&l_1644,&g_1421.f1,&l_1644,&g_1421.f1,&l_1644},{&g_1421.f1,&l_1644,&g_1421.f1,&l_1644,&g_1421.f1,&l_1644}};
                    uint16_t l_1899 = 0xF896L;
                    struct S0 *l_1915[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1915[i] = (void*)0;
                    (*g_983) &= (safe_mod_func_int64_t_s_s((((g_1428.f3 == ((*l_1880)--)) & (l_1883[1][2][0] != (safe_add_func_uint8_t_u_u(5UL, 7L)))) & (safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x6868L, 9)), 0xE5L)), (l_1894 , 0xEB325D5D4FDB85BCLL))), l_1844))), g_1362.f3));
                    l_1899++;
                    l_1898 ^= ((g_144[0] &= (((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((-9L), (l_1906 != (l_1644 , l_1908)))), (safe_mod_func_uint8_t_u_u(l_1894.f1.f1, (safe_lshift_func_int16_t_s_u((((**g_1713) = l_1913) != (void*)0), g_394[2])))))) & g_464.f0) >= l_1747[2].f0)) != g_1428.f4);
                    l_1665 = (l_1914 , (***l_1870));
                }
                if (g_145)
                    goto lbl_1919;
lbl_1919:
                for (g_1583 = 17; (g_1583 < 41); ++g_1583)
                { 
                    return l_1918[0];
                }
                for (l_1843.f1 = (-3); (l_1843.f1 != (-27)); l_1843.f1 = safe_sub_func_int8_t_s_s(l_1843.f1, 1))
                { 
                    struct S1 l_1922[6] = {{65535UL,1L},{65535UL,1L},{65535UL,1L},{65535UL,1L},{65535UL,1L},{65535UL,1L}};
                    int i;
                    (*g_187) = l_1922[2];
                }
                (*l_1924) = l_1813[2];
            }
            else
            { 
                int32_t *l_1925[6][7][4] = {{{&l_1838,&g_1725,&g_141,&l_32[0][0][0]},{&g_1725,&g_1725,&g_899,&g_1725},{&l_1830,&g_1725,&g_899,(void*)0},{&g_1725,&g_141,&g_141,&l_1838},{&l_1838,&g_899,&l_32[0][0][0],(void*)0},{&l_32[0][0][0],(void*)0,(void*)0,(void*)0},{&l_32[0][0][0],&l_32[0][0][0],&g_899,&l_1838}},{{&g_1725,&g_1725,&l_32[0][0][0],&l_32[0][0][0]},{&l_32[0][0][0],&l_1838,&l_1644,&l_32[0][0][0]},{(void*)0,&l_1838,&g_141,&l_32[0][0][0]},{&l_1838,&g_1725,(void*)0,&l_1838},{&l_1830,&l_32[0][0][0],&g_1725,(void*)0},{&l_1644,(void*)0,&g_141,(void*)0},{&g_141,&g_899,&l_1830,&l_1838}},{{&l_32[0][0][0],&g_141,&g_141,&g_1421.f1},{&l_32[0][0][0],&l_1830,&g_1725,&g_899},{&l_32[0][0][0],&g_1421.f1,&g_141,&l_1644},{&l_1644,&g_899,&g_1725,(void*)0},{(void*)0,(void*)0,&l_32[0][0][0],&l_1830},{(void*)0,&g_1421.f1,&g_1421.f1,(void*)0},{&g_1725,&l_32[0][0][0],&g_899,&g_1421.f1}},{{&g_1725,&l_32[0][0][0],&l_32[0][0][0],(void*)0},{(void*)0,&g_141,&g_282,(void*)0},{&l_1644,&l_32[0][0][0],(void*)0,&g_1421.f1},{&l_1830,&l_32[0][0][0],&g_1725,(void*)0},{&l_1644,&g_1421.f1,&g_1421.f1,&l_1830},{&l_1644,(void*)0,&l_1644,(void*)0},{&l_32[0][0][0],&g_899,&l_32[0][0][0],&l_1644}},{{&g_899,&g_1421.f1,&g_141,&g_899},{&g_1725,&l_1830,&g_141,&g_1421.f1},{&g_899,(void*)0,&l_32[0][0][0],&l_32[0][0][0]},{&l_32[0][0][0],&g_141,&l_1644,(void*)0},{&l_1644,(void*)0,&g_1421.f1,&g_1421.f1},{&l_1644,&l_1644,&g_1725,&g_1725},{&l_1830,&g_1421.f1,(void*)0,&l_32[0][0][0]}},{{&l_1644,&g_1725,&g_282,(void*)0},{(void*)0,&g_1725,&l_32[0][0][0],&l_32[0][0][0]},{&g_1725,&g_1421.f1,&g_899,&g_1725},{&g_1725,&l_1644,&g_1421.f1,&g_1421.f1},{(void*)0,(void*)0,&l_32[0][0][0],(void*)0},{(void*)0,&g_141,&g_1725,&l_32[0][0][0]},{&l_1644,(void*)0,&g_141,&g_1421.f1}}};
                int i, j, k;
                ++l_1929[2];
            }
        }
        else
        { 
            int8_t l_1932 = 0x22L;
            int32_t l_1953 = 0L;
            int32_t l_1961 = 0x8E79C62DL;
            struct S0 l_1973 = {-4531};
lbl_1971:
            for (g_1583 = 0; (g_1583 <= 0); g_1583 += 1)
            { 
                struct S2 l_1950[6][3] = {{{0x65F2L,0x78A35F92L,{7249},0L},{0x65F2L,0x78A35F92L,{7249},0L},{0xC25BL,0xEB028910L,{5308},0x72CBC4E1L}},{{0x62EDL,0xC73CAD06L,{-1571},-5L},{0x62EDL,0xC73CAD06L,{-1571},-5L},{0x255EL,0xBAB8E8B9L,{1529},0xF0503D64L}},{{0x65F2L,0x78A35F92L,{7249},0L},{0x65F2L,0x78A35F92L,{7249},0L},{0xC25BL,0xEB028910L,{5308},0x72CBC4E1L}},{{0x62EDL,0xC73CAD06L,{-1571},-5L},{0x62EDL,0xC73CAD06L,{-1571},-5L},{0x255EL,0xBAB8E8B9L,{1529},0xF0503D64L}},{{0x65F2L,0x78A35F92L,{7249},0L},{0x65F2L,0x78A35F92L,{7249},0L},{0xC25BL,0xEB028910L,{5308},0x72CBC4E1L}},{{0x62EDL,0xC73CAD06L,{-1571},-5L},{0x62EDL,0xC73CAD06L,{-1571},-5L},{0x255EL,0xBAB8E8B9L,{1529},0xF0503D64L}}};
                int16_t *l_1951[7] = {&g_144[0],&g_144[0],&g_144[0],&g_144[0],&g_144[0],&g_144[0],&g_144[0]};
                struct S1 l_1957 = {0UL,0x3EL};
                int i, j;
                (*g_983) = l_1932;
                (*g_983) = ((((+(safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(g_1428.f2, (safe_unary_minus_func_int16_t_s((((*l_1812) = ((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((&g_199 != &g_199), (g_1515.f3 != ((safe_mul_func_uint16_t_u_u((l_1945 , l_1685[2][2]), (g_213 = (g_144[0] = (safe_add_func_int16_t_s_s((g_145 = (safe_mul_func_int16_t_s_s(((l_1950[2][2] , g_19.f0) >= g_213), 0xD196L))), 1UL)))))) > (*g_983))))), l_1952[0][0])) > l_1777)) ^ (*g_199)))))), 12))) , 4294967295UL) && l_1953) , (*g_983));
                ++l_1954;
                for (g_314.f1.f0 = 0; (g_314.f1.f0 <= 0); g_314.f1.f0 += 1)
                { 
                    if (l_1644)
                        break;
                    return l_1957;
                }
            }
            l_1961 = (l_1932 <= (safe_mul_func_int16_t_s_s((~(((l_1777 != (*g_199)) <= l_1932) && g_464.f7)), g_282)));
            for (g_140 = 0; (g_140 <= 4); g_140 += 1)
            { 
                union U5 l_1980 = {0};
                int32_t l_1981 = 0xFD3ECAF8L;
                int8_t **l_1992 = &g_684;
                for (g_662 = 0; (g_662 <= 4); g_662 += 1)
                { 
                    union U4 **l_1964 = (void*)0;
                    union U4 **l_1965 = &l_1699;
                    int32_t *l_1966 = &g_141;
                    int32_t *l_1967[4] = {&l_1805[4][3][2].f1,&l_1805[4][3][2].f1,&l_1805[4][3][2].f1,&l_1805[4][3][2].f1};
                    int i, j;
                    (*g_983) = (safe_sub_func_int16_t_s_s(((*g_1427) , 0x2288L), l_1952[(g_662 + 2)][g_140]));
                    (***l_1846) = &g_899;
                    (*l_1965) = &g_314;
                    --l_1968;
                    if (l_1945.f1)
                        goto lbl_1971;
                }
                for (g_191 = 0; (g_191 <= 0); g_191 += 1)
                { 
                    struct S3 **l_1972 = &g_1427;
                    int8_t *l_1983 = &l_1680.f1;
                    int8_t *l_1984[1][6][3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1984[i][j][k] = &g_60.f3.f1;
                        }
                    }
                    (*l_1972) = &g_464;
                    (*l_1829) = l_1973;
                    (*g_983) = ((l_1952[g_140][(g_191 + 3)] = ((safe_rshift_func_int16_t_s_s((0x429D27C180D0E0A6LL | (safe_lshift_func_int8_t_s_s(((*g_1138) ^ (safe_lshift_func_int16_t_s_u(((3L != (((*g_1714) = (((l_1980 , (g_188.f1 = ((*l_1983) = ((l_32[0][0][0] = l_1981) || l_1982)))) != (safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u(g_1362.f7, 0x67E7L)) < l_1973.f0) > 1UL), 14)), l_1644))))) , (*g_1714))) == l_1992)) | 0x8E06L), g_559.f1))), l_1953))), 11)) && 0x28C3L)) > (*g_1138));
                }
                g_1420[3] = &g_60;
                for (l_1926 = 0; (l_1926 <= 1); l_1926 += 1)
                { 
                    uint8_t *l_2003 = &g_191;
                    int i, j;
                    (*g_983) &= (((&g_312 == (void*)0) == ((safe_div_func_int64_t_s_s(((-1L) < (g_314 , 7L)), ((*l_1812)--))) != (((*l_2003) ^= (safe_mul_func_uint8_t_u_u((g_658 || ((-9L) != l_1968)), g_924))) > l_1981))) | l_1973.f0);
                    (*g_983) &= l_1981;
                    if (l_1981)
                        break;
                }
            }
            (*g_983) = l_1945.f3;
        }
        l_2007[2][0]--;
        (*g_983) = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((0x40F30BD09812A48FLL > (safe_unary_minus_func_int8_t_s(l_1680.f0))), l_1945.f6)) == (safe_unary_minus_func_uint16_t_u(((&g_863 != &g_863) >= (((*l_2024) = (safe_mod_func_int32_t_s_s(((5UL < (safe_div_func_uint64_t_u_u(0xDE68D03A97F0B125LL, 8UL))) | (-1L)), (-3L)))) && l_1685[1][0]))))), 1UL)), 0x7C41L)) , 1UL), 3));
    }
    for (l_1680.f0 = 0; (l_1680.f0 == 49); l_1680.f0++)
    { 
        uint8_t l_2038 = 0x42L;
        int32_t **l_2045 = &g_299[1][1];
        int32_t l_2056 = (-1L);
        int32_t *l_2057 = &g_899;
        int32_t *l_2058 = (void*)0;
        int32_t *l_2059 = &l_32[0][0][0];
        int32_t *l_2060 = &g_899;
        int32_t *l_2061 = &l_32[0][0][0];
        int32_t *l_2062[5];
        uint32_t l_2064 = 0xC7D24B5EL;
        int16_t ** const *l_2067[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t ** const **l_2068 = &l_2067[2];
        int16_t ** const *l_2070 = &l_1906;
        int16_t ** const **l_2069 = &l_2070;
        int i;
        for (i = 0; i < 5; i++)
            l_2062[i] = &g_899;
        for (l_1844 = 0; (l_1844 == 52); ++l_1844)
        { 
            uint64_t l_2037 = 18446744073709551613UL;
            for (g_38.f1 = (-16); (g_38.f1 <= 13); g_38.f1 = safe_add_func_uint32_t_u_u(g_38.f1, 5))
            { 
                int64_t l_2031 = 0xD84E9B2A8A3ADB46LL;
                struct S0 ***l_2034 = &g_1069;
                struct S0 ****l_2033[3][2][3] = {{{&l_2034,&l_2034,&l_2034},{&l_2034,&l_2034,&l_2034}},{{&l_2034,&l_2034,&l_2034},{&l_2034,&l_2034,&l_2034}},{{&l_2034,&l_2034,&l_2034},{&l_2034,&l_2034,&l_2034}}};
                struct S0 *****l_2032 = &l_2033[1][1][2];
                uint64_t ****l_2040 = &g_2039;
                struct S2 *l_2041 = &l_1710[1];
                struct S2 **l_2042 = &g_593;
                int i, j, k;
                if (l_2031)
                    break;
                (*g_983) = ((void*)0 == l_2032);
                for (g_559.f1 = (-28); (g_559.f1 <= 9); ++g_559.f1)
                { 
                    (*g_983) = (l_2037 != (*g_1138));
                    (*g_983) ^= l_2038;
                }
                (*l_2040) = g_2039;
                (*l_2042) = l_2041;
            }
        }
        for (g_282 = (-30); (g_282 == 28); ++g_282)
        { 
            const int16_t l_2048 = 0x2F18L;
            uint64_t *l_2052 = &g_312;
            struct S0 l_2055[1] = {{4801}};
            int i;
            l_2056 &= (g_283 == (((l_2045 == &g_299[0][0]) <= (safe_div_func_int32_t_s_s(l_2048, (safe_div_func_uint64_t_u_u(((*l_2052) = l_2051), (safe_mod_func_int32_t_s_s(l_2006[3][0][1], ((((l_2055[0] , 0xC6B2L) && g_559.f0) && l_1710[1].f1) || l_1667)))))))) , l_1747[2].f1));
            if (l_1945.f5)
                continue;
        }
        l_2064--;
        (*l_2069) = ((*l_2068) = l_2067[2]);
    }
    return g_188;
}



static const uint16_t  func_3(int8_t * p_4, struct S0  p_5)
{ 
    int32_t *l_1666 = &g_282;
    (*g_863) = l_1666;
    return (*l_1666);
}



static int8_t * func_6(int16_t  p_7, uint16_t  p_8)
{ 
    int32_t l_1645 = 5L;
    struct S3 * const ** const l_1648 = (void*)0;
    struct S1 l_1661 = {0x7FD9L,1L};
    struct S3 *l_1662 = &g_1362;
    int8_t *l_1664 = (void*)0;
    l_1645 |= (*g_983);
    for (g_902 = 0; (g_902 >= 5); g_902 = safe_add_func_uint8_t_u_u(g_902, 1))
    { 
        int8_t l_1660 = 0x4EL;
        struct S3 **l_1663 = &l_1662;
        (*g_187) = (((((l_1648 != l_1648) >= p_7) | (((safe_lshift_func_int16_t_s_u(l_1645, 3)) , (safe_add_func_int8_t_s_s(p_8, 0xDCL))) == ((safe_mod_func_int8_t_s_s((+(safe_mul_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(p_8, p_8)) , p_8) <= l_1645), p_8))), l_1660)) <= p_8))) != 0x2495C352L) , l_1661);
        (*l_1663) = l_1662;
    }
    return l_1664;
}



static const uint8_t  func_14(struct S0  p_15, const union U5  p_16, int8_t * p_17, struct S2  p_18)
{ 
    int8_t *l_72 = &g_36;
    struct S1 l_76 = {0x6B74L,0x84L};
    int32_t l_1456 = 0L;
    int32_t l_1457 = 8L;
    int32_t l_1458 = 0xC9418B57L;
    uint8_t l_1461 = 255UL;
    union U5 **l_1496[7][6][2] = {{{&g_1420[4],&g_1420[6]},{&g_1420[3],&g_1420[4]},{&g_1420[3],&g_1420[6]},{&g_1420[4],(void*)0},{&g_1420[6],&g_1420[6]},{&g_1420[4],&g_1420[6]}},{{&g_1420[4],&g_1420[3]},{&g_1420[3],&g_1420[6]},{&g_1420[4],(void*)0},{&g_1420[6],(void*)0},{&g_1420[4],&g_1420[6]},{&g_1420[3],&g_1420[3]}},{{&g_1420[4],&g_1420[6]},{&g_1420[4],&g_1420[6]},{&g_1420[4],&g_1420[4]},{&g_1420[0],&g_1420[4]},{&g_1420[6],&g_1420[4]},{&g_1420[6],&g_1420[4]}},{{&g_1420[0],&g_1420[4]},{&g_1420[4],&g_1420[4]},{&g_1420[6],&g_1420[4]},{&g_1420[4],&g_1420[6]},{&g_1420[6],&g_1420[4]},{&g_1420[6],&g_1420[4]}},{{&g_1420[4],&g_1420[4]},{&g_1420[6],&g_1420[4]},{&g_1420[6],&g_1420[6]},{&g_1420[4],&g_1420[4]},{&g_1420[6],&g_1420[4]},{&g_1420[4],&g_1420[4]}},{{&g_1420[0],&g_1420[4]},{&g_1420[6],&g_1420[4]},{&g_1420[6],&g_1420[4]},{&g_1420[0],&g_1420[4]},{&g_1420[4],&g_1420[4]},{&g_1420[6],&g_1420[4]}},{{&g_1420[4],&g_1420[6]},{&g_1420[6],&g_1420[4]},{&g_1420[6],&g_1420[4]},{&g_1420[4],&g_1420[4]},{&g_1420[6],&g_1420[4]},{&g_1420[6],&g_1420[6]}}};
    struct S3 l_1497 = {250,-6148,29946,5,2900,628,5,0};
    int32_t *l_1517 = (void*)0;
    int32_t l_1543 = 7L;
    int32_t l_1544 = 0x4980F2EAL;
    int32_t l_1545 = (-10L);
    int32_t l_1547 = 0x35EEEC93L;
    int32_t l_1573 = 0xD1CCAD90L;
    int32_t l_1574 = 0x6E5E63ECL;
    int32_t l_1575[6][2] = {{1L,0xDE1DD85FL},{0xDE1DD85FL,1L},{0xDE1DD85FL,0xDE1DD85FL},{1L,0xDE1DD85FL},{0xDE1DD85FL,1L},{0xDE1DD85FL,0xDE1DD85FL}};
    int64_t l_1591[1];
    uint32_t * const *l_1612[5] = {&g_1138,&g_1138,&g_1138,&g_1138,&g_1138};
    int32_t l_1629 = (-1L);
    uint8_t l_1630[6] = {0xB4L,0xDCL,0xDCL,0xB4L,0xDCL,0xDCL};
    struct S3 * const *l_1637 = (void*)0;
    struct S3 * const **l_1638 = &l_1637;
    int8_t l_1639[5];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1591[i] = 0x10D60A3A33DF89EDLL;
    for (i = 0; i < 5; i++)
        l_1639[i] = 0x80L;
    if (p_15.f0)
    { 
        int8_t *l_57[6][3] = {{&g_36,&g_36,&g_36},{(void*)0,(void*)0,(void*)0},{&g_36,&g_36,&g_36},{(void*)0,(void*)0,(void*)0},{&g_36,&g_36,&g_36},{(void*)0,(void*)0,(void*)0}};
        int8_t **l_56 = &l_57[0][1];
        int8_t *l_62 = &g_36;
        int8_t **l_61 = &l_62;
        uint32_t *l_74 = &g_75;
        int16_t *l_1437 = &g_874;
        struct S1 l_1440 = {0xF5F4L,0xE7L};
        uint16_t l_1441 = 0UL;
        int32_t l_1442 = 0xC50CF08EL;
        int32_t l_1445 = 1L;
        int32_t l_1449 = (-9L);
        int32_t l_1455 = 4L;
        int32_t l_1459 = 0L;
        int32_t l_1460 = (-9L);
        int32_t *l_1466 = &l_1460;
        union U5 l_1477 = {0};
        int8_t ***l_1479 = &l_61;
        int8_t ****l_1478 = &l_1479;
        struct S0 l_1481 = {-7885};
        union U5 **l_1492[7][2] = {{&g_1420[4],&g_1420[4]},{&g_1420[4],&g_1420[4]},{&g_1420[4],&g_1420[4]},{&g_1420[4],&g_1420[4]},{&g_1420[4],&g_1420[4]},{&g_1420[4],&g_1420[4]},{&g_1420[4],&g_1420[4]}};
        union U5 **l_1494 = &g_1420[5];
        union U5 ***l_1493 = &l_1494;
        union U5 ***l_1495 = (void*)0;
        int32_t l_1541 = 0xC40CABB4L;
        int32_t l_1546[3][4] = {{0x12B3266AL,0x12B3266AL,1L,0x12B3266AL},{0x12B3266AL,5L,5L,0x12B3266AL},{5L,0x12B3266AL,5L,5L}};
        int32_t l_1572 = 0x78198568L;
        struct S0 **l_1596[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_1596[i] = &g_336;
        (*g_983) = (safe_lshift_func_uint8_t_u_u(func_41(func_47(((safe_div_func_uint8_t_u_u((((((((*l_56) = (void*)0) != ((*l_61) = func_58(g_60))) >= (safe_rshift_func_int8_t_s_u((g_13 & (safe_sub_func_int64_t_s_s((((~(safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((((l_72 == p_17) != (~((*l_74) &= g_19.f0))) || p_18.f0) <= 0xE05BF5EFL), 0x8BE3E2CAL)) , 0x43DAL), p_18.f0))) >= g_13) >= 7L), 0xE8449123D2215ACALL))), 4))) | g_36) ^ 0UL) , g_19.f0), g_36)) && 0xF0EDL), p_18.f0, l_76, l_76.f0), &g_36, g_559, g_464.f2, g_464.f2), p_18.f3));
        if ((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((((~(safe_sub_func_uint32_t_u_u((((**l_61) = (((l_76.f1 != (g_38.f1 && ((p_18.f2.f0 == ((*l_1437) = (8L ^ 3UL))) <= ((((safe_add_func_uint32_t_u_u((l_1440 , p_15.f0), l_1440.f0)) | 0x3C50L) && p_15.f0) >= 1UL)))) ^ p_18.f0) , l_1440.f0)) && l_1441), 4UL))) || 0x0AL) >= l_1440.f1), 0L)) & 0xE0L), 5)))
        { 
            int32_t *l_1443 = &g_282;
            int32_t *l_1444 = &g_60.f1;
            int32_t *l_1446 = &g_60.f1;
            int32_t *l_1447 = &g_1421.f1;
            int32_t *l_1448 = &l_1445;
            int32_t *l_1450 = &g_60.f1;
            int32_t *l_1451 = &l_1449;
            int32_t *l_1452 = &g_60.f1;
            int32_t *l_1453 = &l_1449;
            int32_t *l_1454[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1454[i][j] = (void*)0;
            }
            l_1461--;
        }
        else
        { 
            struct S1 *l_1470 = &l_76;
            union U4 **l_1471 = (void*)0;
            int32_t l_1480 = 0x93E422CBL;
            uint8_t *l_1488 = &g_118;
            for (l_1455 = 21; (l_1455 <= 7); l_1455 = safe_sub_func_uint32_t_u_u(l_1455, 1))
            { 
                int32_t *l_1467 = (void*)0;
                int8_t * const ***l_1476 = (void*)0;
                l_1466 = &l_1458;
                if (p_18.f0)
                    continue;
                (*g_863) = l_1467;
                p_15.f0 = ((g_1362.f4 & (((((p_18 , &p_18) != (void*)0) == ((((((safe_mul_func_uint64_t_u_u((l_1470 != &l_1440), (l_1471 != (void*)0))) < g_1428.f6) , p_16) , p_18.f0) ^ l_76.f1) <= g_1362.f5)) , g_1428.f2) , p_18.f2.f0)) > 0xB2L);
                (*g_983) = ((safe_div_func_int32_t_s_s((g_1362.f4 || 0xCD17L), (safe_add_func_int32_t_s_s((p_16 , (*l_1466)), (((p_16 , l_1476) == (l_1477 , l_1478)) >= p_18.f1))))) || l_1480);
            }
            l_1481 = l_1481;
            for (l_1445 = 0; (l_1445 >= (-6)); l_1445--)
            { 
                if (p_18.f0)
                    break;
                return p_15.f0;
            }
            (*g_863) = &l_1480;
            (*l_1466) = (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((*l_1466), 0)) > (*l_1466)), ((*l_1488) |= g_902)));
        }
        for (l_1440.f0 = (-8); (l_1440.f0 >= 60); l_1440.f0 = safe_add_func_int8_t_s_s(l_1440.f0, 5))
        { 
            struct S0 *l_1491[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1491[i] = &g_38.f2;
            (**g_1068) = l_1491[0];
            for (g_213 = 0; (g_213 <= 1); g_213 += 1)
            { 
                return g_464.f3;
            }
            l_1457 = ((*g_983) = (3UL != 4294967290UL));
            (*g_863) = &l_1458;
        }
lbl_1609:
        if ((l_1492[4][1] != (l_1496[2][0][1] = ((*l_1493) = l_1492[4][1]))))
        { 
            uint32_t l_1523 = 0x9989ECAAL;
            int32_t l_1534[1][4][3] = {{{0x2B066B0FL,0x2B066B0FL,0x2B066B0FL},{2L,2L,2L},{0x2B066B0FL,0x2B066B0FL,0x2B066B0FL},{2L,2L,2L}}};
            int32_t *l_1553 = (void*)0;
            int32_t *l_1554 = &l_1459;
            int32_t *l_1555 = &l_1544;
            int32_t *l_1556 = &l_1442;
            int32_t *l_1557 = &g_141;
            int32_t *l_1558 = &l_1455;
            int32_t *l_1559 = &l_1457;
            int8_t l_1560 = 0xA8L;
            int32_t *l_1561 = &l_1543;
            int32_t *l_1562 = &l_1458;
            int32_t *l_1563 = &l_1445;
            int32_t *l_1564 = &l_1445;
            int32_t *l_1565 = (void*)0;
            int32_t *l_1566 = (void*)0;
            int32_t *l_1567 = (void*)0;
            int32_t *l_1568 = &l_1455;
            int32_t *l_1569 = &g_1421.f1;
            int32_t *l_1570 = &l_1459;
            int32_t *l_1571[7][5] = {{&g_282,&l_1460,&g_282,&g_899,&g_141},{&l_1544,&g_899,&l_1534[0][0][2],&g_899,&l_1544},{&g_282,&l_1545,&l_1460,&l_1449,&l_1460},{&l_1457,&l_1457,&l_1534[0][0][2],&l_1544,&l_1459},{&l_1545,&g_282,&g_282,&l_1545,&l_1460},{&g_899,&l_1544,&g_282,&g_282,&l_1544},{&l_1460,&g_282,&g_899,&g_141,&g_141}};
            uint32_t l_1576[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1576[i] = 0xEE3747B9L;
            if ((l_1497 , ((safe_mul_func_int16_t_s_s((~(((*l_1466) = (*g_983)) , 0xF2L)), ((safe_rshift_func_int8_t_s_s((p_18.f0 || (((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((****l_1478) |= p_18.f0), ((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((-8L), (l_1440 , 255UL))), 1)) == p_15.f0))), 0x3BL)) | l_1497.f4) >= g_38.f1) , 0x4F62L) != l_1497.f6)), l_1481.f0)) > 1L))) == p_18.f0)))
            { 
                struct S2 *l_1514 = &g_1515;
                for (l_1457 = (-17); (l_1457 <= 1); l_1457++)
                { 
                    struct S2 **l_1513[3];
                    int32_t l_1516 = (-3L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1513[i] = &g_593;
                    l_1514 = &p_18;
                    if (p_18.f2.f0)
                        break;
                    if (l_1516)
                        break;
                    (*g_863) = &l_1458;
                }
                (*g_863) = l_1517;
                (*l_1466) &= 0x796938CDL;
                (*g_983) |= 0xCDD8E9B5L;
                for (g_559.f3 = 0; (g_559.f3 >= (-5)); g_559.f3 = safe_sub_func_int32_t_s_s(g_559.f3, 4))
                { 
                    const uint64_t l_1520 = 18446744073709551611UL;
                    return l_1520;
                }
            }
            else
            { 
                uint32_t l_1524[3][4][6] = {{{4294967295UL,4294967286UL,4294967295UL,0x7C59AF75L,4294967295UL,0xDE5962CCL},{0xC2398785L,1UL,4294967295UL,0xC2398785L,4294967286UL,0xD9B8FF9AL},{0xD9B8FF9AL,0xA189A022L,0xDE5962CCL,0xC2398785L,0UL,0x7C59AF75L},{0xC2398785L,0UL,0UL,0UL,0x7C59AF75L,1UL}},{{0xD34F76DFL,4294967295UL,0xE5F29CC1L,8UL,4294967293UL,1UL},{0xE5F29CC1L,0xD9B8FF9AL,0UL,4294967295UL,4294967289UL,0UL},{0xE5F29CC1L,4294967293UL,4294967295UL,8UL,0xC2398785L,8UL},{0xD34F76DFL,4294967293UL,0xD34F76DFL,0UL,4294967289UL,4294967295UL}},{{1UL,0xD9B8FF9AL,0xD34F76DFL,1UL,4294967293UL,8UL},{8UL,4294967295UL,4294967295UL,1UL,0x7C59AF75L,0UL},{1UL,0x7C59AF75L,0UL,0UL,0x7C59AF75L,1UL},{0xD34F76DFL,4294967295UL,0xE5F29CC1L,8UL,4294967293UL,1UL}}};
                int32_t l_1535 = 0xE3116E1FL;
                int32_t l_1536 = 9L;
                int32_t l_1538[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1538[i] = (-1L);
                for (l_1461 = 7; (l_1461 < 56); ++l_1461)
                { 
                    int32_t **l_1525 = &l_1517;
                    int32_t *l_1526 = &l_1445;
                    int32_t *l_1527 = &g_282;
                    int32_t *l_1528 = &l_1449;
                    int32_t *l_1529 = (void*)0;
                    int32_t *l_1530 = &l_1442;
                    int32_t *l_1531 = &g_899;
                    int32_t *l_1532 = &l_1456;
                    int32_t *l_1533[4] = {&l_1456,&l_1456,&l_1456,&l_1456};
                    int32_t l_1540 = 0L;
                    int8_t l_1542 = 0x06L;
                    int i;
                    if (l_1523)
                        break;
                    if (l_1524[0][1][1])
                        break;
                    (*l_1525) = ((*g_863) = &l_1456);
                    ++g_1548;
                }
                for (g_312 = (-7); (g_312 > 31); g_312++)
                { 
                    return g_75;
                }
            }
            --l_1576[0];
            (*g_1069) = &p_15;
        }
        else
        { 
            uint64_t *l_1579 = (void*)0;
            (*l_1466) = ((g_312 = ((*g_413) & g_185)) , p_18.f2.f0);
        }
        for (l_1455 = 4; (l_1455 >= 1); l_1455 -= 1)
        { 
            struct S3 *l_1588 = &g_464;
            struct S2 l_1617 = {0x7814L,18446744073709551607UL,{733},0xA27BC3CDL};
            int32_t *l_1622 = &l_1544;
            int32_t *l_1623 = &l_1460;
            int32_t *l_1624 = (void*)0;
            int32_t *l_1625 = &l_1458;
            int32_t *l_1626 = (void*)0;
            int32_t *l_1627[1];
            int32_t l_1628 = 0xF47882A7L;
            int i;
            for (i = 0; i < 1; i++)
                l_1627[i] = &l_1458;
            for (g_36 = 6; (g_36 >= 0); g_36 -= 1)
            { 
                p_18.f2 = p_18.f2;
            }
            for (g_75 = 0; (g_75 <= 6); g_75 += 1)
            { 
                int32_t l_1581[4] = {1L,1L,1L,1L};
                int32_t l_1595[6][7] = {{0xDD0FE84CL,(-1L),0L,0L,(-1L),0xDD0FE84CL,(-1L)},{0L,0x2E45F7BFL,0x2E45F7BFL,0L,(-6L),0L,0x2E45F7BFL},{0x9A06EE0DL,0x9A06EE0DL,0xDD0FE84CL,0L,0xDD0FE84CL,0x9A06EE0DL,0x9A06EE0DL},{0x96B093AFL,0x2E45F7BFL,(-5L),0x2E45F7BFL,0x96B093AFL,0x96B093AFL,0x2E45F7BFL},{(-7L),(-1L),(-7L),0xDD0FE84CL,0xDD0FE84CL,(-7L),(-1L)},{0x2E45F7BFL,(-6L),(-5L),(-5L),(-6L),0x2E45F7BFL,(-6L)}};
                int32_t l_1613 = 2L;
                int i, j;
                if (((*g_198) == (void*)0))
                { 
                    int i;
                    (*g_983) |= (-9L);
                    return g_394[l_1455];
                }
                else
                { 
                    struct S1 l_1582 = {65535UL,0L};
                    int32_t *l_1593 = &l_1455;
                    int32_t **l_1594 = &l_1466;
                    uint16_t *l_1605 = &l_1441;
                    uint16_t l_1608 = 0xCDE7L;
                    int i;
                    g_1583 &= ((safe_unary_minus_func_uint16_t_u((((l_76 , l_1581[2]) == p_18.f0) && (l_1582 , (((*g_413) &= (1L > l_1582.f1)) , ((g_464.f5 && l_1581[3]) & (*l_1466))))))) != (*g_1138));
                    (*g_983) &= (safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((*l_1466) , (l_1595[3][4] = ((l_1588 != ((((((void*)0 != (*l_56)) , (safe_mul_func_uint16_t_u_u(((l_1591[0] || (!((**g_1069) , (((*l_1594) = l_1593) == &l_1445)))) > l_1445), 0x3F8BL))) , p_18.f0) && g_134) , (void*)0)) & g_464.f7))), l_1449)), (*g_199)));
                    (*g_1068) = l_1596[0];
                    (*g_863) = (((safe_mul_func_int16_t_s_s((((&g_1420[g_75] == ((*l_1493) = (void*)0)) && (g_1362.f1 < ((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_1362.f6, (++(*l_1605)))), 7)) > l_1608) <= p_18.f1), p_18.f2.f0)) != (-2L)))) ^ (*l_1466)), p_18.f3)) ^ 0x69F36D1CL) , (void*)0);
                    (*g_187) = l_1440;
                }
                if (l_1497.f5)
                    goto lbl_1609;
                if ((*l_1466))
                    break;
                for (g_38.f1 = 0; (g_38.f1 <= 1); g_38.f1 += 1)
                { 
                    (*g_983) = (safe_div_func_int16_t_s_s((l_1613 = ((((l_1612[2] == &g_1138) || p_15.f0) & 0x67L) | 0xB41803425157191DLL)), 0x8AB2L));
                    if (g_188.f0)
                        goto lbl_1609;
                    (*g_983) &= (!((((((safe_lshift_func_uint16_t_u_s(((-1L) == (p_18.f0 == (l_1617 , l_1595[5][5]))), (((safe_lshift_func_uint16_t_u_u(g_394[1], 13)) || l_1617.f3) && (safe_mul_func_uint16_t_u_u(0x810CL, 65530UL))))) & (*g_1138)) ^ g_282) < 0L) && p_15.f0) >= l_1581[2]));
                }
            }
            l_1630[0]--;
            (****g_1067) = (*g_336);
            for (l_1441 = 0; (l_1441 <= 6); l_1441 += 1)
            { 
                struct S1 * const l_1633 = &g_314.f1;
                struct S1 **l_1634[2][5][5] = {{{(void*)0,&g_187,&g_187,&g_187,(void*)0},{&g_187,&g_187,&g_187,&g_187,&g_187},{&g_187,&g_187,&g_187,&g_187,&g_187},{&g_187,&g_187,&g_187,&g_187,&g_187},{&g_187,&g_187,&g_187,&g_187,(void*)0}},{{&g_187,&g_187,(void*)0,&g_187,(void*)0},{&g_187,&g_187,&g_187,(void*)0,&g_187},{&g_187,&g_187,&g_187,&g_187,&g_187},{&g_187,&g_187,&g_187,(void*)0,&g_187},{(void*)0,&g_187,&g_187,&g_187,&g_187}}};
                struct S1 **l_1635 = &g_187;
                int i, j, k;
                (*l_1635) = l_1633;
                for (g_282 = 1; (g_282 <= 6); g_282 += 1)
                { 
                    int i;
                    return g_394[l_1455];
                }
            }
        }
    }
    else
    { 
        struct S3 **l_1636 = &g_1427;
        (*l_1636) = &g_464;
    }
    (*l_1638) = l_1637;
    (*g_983) = ((((*g_1138) || p_18.f0) , (((*g_1427) , (l_1639[3] = (-2L))) == (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_188.f0, (((g_1428.f2 <= ((l_76 , 255UL) & p_18.f0)) | p_15.f0) , p_18.f1))), 255UL)))) ^ p_18.f2.f0);
    return p_18.f3;
}



static int8_t * func_21(int32_t  p_22, struct S0  p_23)
{ 
    int8_t *l_37 = (void*)0;
    for (p_22 = 0; (p_22 <= (-11)); p_22 = safe_sub_func_int8_t_s_s(p_22, 7))
    { 
        int8_t *l_35[3];
        int i;
        for (i = 0; i < 3; i++)
            l_35[i] = &g_36;
        return l_35[1];
    }
    return l_37;
}



static uint8_t  func_41(int32_t  p_42, int8_t * const  p_43, struct S2  p_44, uint8_t  p_45, int64_t  p_46)
{ 
    int64_t l_567[2][1][5] = {{{3L,3L,3L,3L,3L}},{{(-8L),0x2D30988F3DE28B01LL,(-8L),0x2D30988F3DE28B01LL,(-8L)}}};
    struct S3 l_571[2] = {{111,-3439,21618,7,1777,284,-2,1},{111,-3439,21618,7,1777,284,-2,1}};
    union U5 l_576 = {0};
    struct S2 l_577 = {0x0090L,1UL,{6038},0x30C60227L};
    const struct S1 l_590 = {65535UL,-1L};
    int32_t l_594 = 0xD2509822L;
    uint32_t *l_623 = &g_394[4];
    uint32_t ** const l_622 = &l_623;
    struct S2 **l_628 = (void*)0;
    int32_t l_666 = 1L;
    int32_t l_667 = 0x4C88921BL;
    int32_t l_668 = 0x900281C1L;
    const struct S0 *l_712 = &l_577.f2;
    const struct S0 **l_711 = &l_712;
    int8_t **l_747 = &g_684;
    uint8_t l_755 = 1UL;
    int16_t *l_782 = &g_145;
    int16_t *l_784 = &g_145;
    uint64_t l_868 = 2UL;
    int8_t ** const l_896[1] = {(void*)0};
    int8_t ** const *l_895[5][2][4] = {{{&l_896[0],&l_896[0],&l_896[0],&l_896[0]},{&l_896[0],&l_896[0],&l_896[0],&l_896[0]}},{{&l_896[0],&l_896[0],&l_896[0],&l_896[0]},{&l_896[0],&l_896[0],&l_896[0],&l_896[0]}},{{&l_896[0],&l_896[0],&l_896[0],&l_896[0]},{&l_896[0],&l_896[0],&l_896[0],&l_896[0]}},{{&l_896[0],&l_896[0],(void*)0,&l_896[0]},{(void*)0,&l_896[0],&l_896[0],&l_896[0]}},{{&l_896[0],&l_896[0],&l_896[0],&l_896[0]},{&l_896[0],&l_896[0],&l_896[0],&l_896[0]}}};
    int8_t ** const **l_894 = &l_895[3][1][2];
    int8_t ** const ***l_893 = &l_894;
    int32_t l_905 = 0x4C8A899BL;
    int32_t l_908 = 1L;
    int32_t l_909 = 0x6697C2C7L;
    int32_t l_911 = 6L;
    int32_t l_912 = 0L;
    int8_t l_996 = 0x37L;
    struct S0 **l_1065[1][4][1];
    struct S0 ***l_1064[4];
    struct S0 ****l_1063[5] = {&l_1064[0],&l_1064[0],&l_1064[0],&l_1064[0],&l_1064[0]};
    int32_t l_1083 = 0xFA63FF1AL;
    int32_t l_1232 = 0xF55FD177L;
    int32_t l_1233 = 0L;
    int32_t l_1234[3];
    uint32_t l_1289 = 1UL;
    uint32_t l_1323 = 4294967294UL;
    struct S3 *l_1361 = &g_1362;
    int32_t *l_1423 = &l_911;
    uint8_t l_1429[6][1] = {{0xEAL},{254UL},{0xEAL},{254UL},{0xEAL},{254UL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_1065[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 4; i++)
        l_1064[i] = &l_1065[0][2][0];
    for (i = 0; i < 3; i++)
        l_1234[i] = 0xCE59032BL;
    for (g_75 = (-5); (g_75 != 17); ++g_75)
    { 
        uint64_t *l_566 = &g_60.f2;
        uint16_t *l_568 = &g_188.f0;
        int32_t l_569 = 4L;
        int32_t *l_570 = &l_569;
        int16_t *l_575 = &g_144[0];
        struct S2 **l_591 = (void*)0;
        (*l_570) = (safe_mod_func_int32_t_s_s((((*l_568) ^= ((safe_rshift_func_uint8_t_u_u(((((((g_314 , ((*l_566) = 18446744073709551614UL)) >= (*g_199)) <= l_567[0][0][1]) , &g_283) == l_568) , g_75), p_45)) < l_569)) | 0xB397L), p_44.f0));
        (*g_336) = p_44.f2;
        l_594 &= (p_44.f2.f0 = ((((((l_571[1] , (0xA63A2F3CCBC94EC8LL & ((((+(safe_sub_func_int16_t_s_s(((*l_575) = g_75), ((l_576 , l_577) , l_567[0][0][1])))) && (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((*p_43) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((0xFDEF0B55L > 0UL), 18446744073709551606UL)) <= g_191) || 0x1C7C812C1D875B40LL), g_464.f2)) , p_44.f3), 6)), 1))) ^ (*l_570)), g_60.f1)), p_45))) < 18446744073709551611UL) <= l_577.f0))) , l_590) , g_38) , l_591) != g_592[0]) , p_44.f2.f0));
    }
    return g_1362.f5;
}



static int32_t  func_47(uint32_t  p_48, const uint32_t  p_49, struct S1  p_50, uint8_t  p_51)
{ 
    int64_t l_77[3][2];
    int32_t l_114 = (-1L);
    int32_t l_215 = (-7L);
    int32_t l_218 = 0x3012BAB1L;
    uint32_t l_219 = 0xD0433462L;
    int32_t *l_240 = &g_60.f1;
    uint16_t l_242 = 0x54E4L;
    union U4 l_265 = {0x151E720B53A75C7ALL};
    int32_t l_286 = (-7L);
    struct S1 * const l_327 = &g_188;
    struct S0 *l_335[2];
    int32_t l_351 = 0x146B4ABCL;
    int32_t l_352 = 0x1D20B754L;
    int32_t l_353 = 0xBA3E4821L;
    int32_t l_354 = 0x84E146BBL;
    int32_t l_355 = 0xAF580ACEL;
    int32_t l_356 = 0x8478C441L;
    int32_t l_357 = 0xF8C1580BL;
    int32_t l_358 = 0x68796CF8L;
    int32_t l_360 = 7L;
    int32_t l_361 = (-4L);
    int32_t l_363 = 3L;
    int32_t l_364 = 0xC52F704FL;
    int32_t l_365 = 0x9F1FF219L;
    int32_t l_366 = 0x8926852DL;
    int32_t l_368 = 0x6FEA44CAL;
    int32_t l_369 = (-6L);
    int32_t l_370[6] = {0x8AB537D9L,0xA92ECBBEL,0xA92ECBBEL,0x8AB537D9L,0xA92ECBBEL,0xA92ECBBEL};
    uint32_t l_371 = 1UL;
    struct S0 *l_385 = (void*)0;
    int8_t *l_409 = &l_265.f1.f1;
    int64_t *l_412[4][1][4] = {{{&g_140,(void*)0,(void*)0,&g_140}},{{&g_140,(void*)0,(void*)0,&g_140}},{{&g_140,(void*)0,(void*)0,&g_140}},{{&g_140,(void*)0,(void*)0,&g_140}}};
    int8_t l_487 = 3L;
    uint32_t l_500 = 4294967295UL;
    uint32_t *l_518 = (void*)0;
    uint32_t **l_517 = &l_518;
    uint32_t ***l_516 = &l_517;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_77[i][j] = 0xEE1EFB40ACB48866LL;
    }
    for (i = 0; i < 2; i++)
        l_335[i] = (void*)0;
lbl_478:
    for (g_38.f1 = 0; (g_38.f1 <= 1); g_38.f1 += 1)
    { 
        struct S2 *l_79 = (void*)0;
        struct S2 **l_78 = &l_79;
        int32_t l_92[6][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
        int32_t l_112 = 0L;
        union U4 l_130 = {0UL};
        uint16_t *l_222 = (void*)0;
        uint16_t *l_223 = &g_188.f0;
        struct S3 l_228 = {33,-4247,45262,7,3911,700,-7,1};
        int64_t *l_250 = &g_214[1][0];
        int64_t **l_249 = &l_250;
        union U5 l_252 = {0};
        int i, j;
        (*l_78) = &g_38;
        for (p_50.f0 = 0; (p_50.f0 <= 1); p_50.f0 += 1)
        { 
            int16_t l_113 = 1L;
            int32_t l_117 = 0x047B2A23L;
            int8_t *l_125 = &g_36;
            uint32_t l_131 = 1UL;
            int8_t *l_133[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_142 = 3L;
            uint8_t l_147[3];
            const uint32_t *l_184 = &g_185;
            const uint32_t **l_183[5][6] = {{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184},{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184},{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184},{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184},{&l_184,&l_184,&l_184,&l_184,&l_184,&l_184}};
            uint32_t l_253 = 1UL;
            int32_t **l_278 = &l_240;
            int32_t *l_279 = &l_114;
            int32_t *l_280 = (void*)0;
            int32_t *l_281[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_147[i] = 1UL;
            for (i = 0; i < 3; i++)
                l_281[i] = &l_218;
            for (g_38.f3 = 1; (g_38.f3 >= 0); g_38.f3 -= 1)
            { 
                int64_t l_82 = 0xA87DC7FB053AAA0CLL;
                int32_t l_102 = 0L;
                uint16_t *l_105 = &g_60.f3.f0;
                uint32_t *l_115 = (void*)0;
                uint32_t *l_116 = &g_75;
                int32_t l_138 = 0x7840180AL;
                int32_t l_143 = 7L;
                int32_t l_146[7][5][4] = {{{0L,0x1D1A91C2L,0L,(-4L)},{1L,0x5B779334L,1L,0xB4F394D2L},{0x1D30752CL,1L,0x1D30752CL,0x38483835L},{0L,(-8L),2L,0x5B779334L},{(-4L),0x1D30752CL,0xB4F394D2L,(-8L)}},{{0x61B76A28L,0xC832F20CL,0xB4F394D2L,0x1D1A91C2L},{(-4L),0xC26539BAL,2L,2L},{0L,0L,0x1D30752CL,0x61B76A28L},{0x1D30752CL,0x61B76A28L,1L,1L},{1L,0xAAA867C8L,0L,1L}},{{0L,0xAAA867C8L,5L,1L},{0xAAA867C8L,0x61B76A28L,0x38483835L,0x61B76A28L},{0xDA777F1DL,0L,(-8L),2L},{0x38483835L,0xC26539BAL,0xC832F20CL,0x1D1A91C2L},{2L,0xC832F20CL,0xAAA867C8L,(-8L)}},{{2L,0x1D30752CL,0xC832F20CL,0x5B779334L},{0x38483835L,(-8L),(-8L),0x38483835L},{0xDA777F1DL,1L,0x38483835L,0xB4F394D2L},{0xAAA867C8L,0x5B779334L,5L,(-4L)},{0L,0x1D1A91C2L,0L,(-4L)}},{{1L,0x5B779334L,1L,0xB4F394D2L},{0x1D30752CL,0xC832F20CL,0xDA777F1DL,0x1D30752CL},{0L,0L,0x38483835L,1L},{0xB4F394D2L,0xDA777F1DL,2L,0L},{(-8L),(-4L),2L,5L}},{{0xB4F394D2L,0x1D1A91C2L,0x38483835L,0x38483835L},{0L,0L,0xDA777F1DL,(-8L)},{0xDA777F1DL,(-8L),0xAAA867C8L,0xC832F20CL},{0xC832F20CL,0x61B76A28L,0L,0xAAA867C8L},{(-5L),0x61B76A28L,1L,0xC832F20CL}},{{0x61B76A28L,(-8L),0x1D30752CL,(-8L)},{0x5B779334L,0L,0L,0x38483835L},{0x1D30752CL,0x1D1A91C2L,(-4L),5L},{0x38483835L,(-4L),0x61B76A28L,0L},{0x38483835L,0xDA777F1DL,(-4L),1L}}};
                int8_t l_156 = 3L;
                uint32_t l_168 = 5UL;
                struct S0 *l_175 = &g_19;
                int i, j, k;
                for (p_50.f1 = 0; (p_50.f1 <= 1); p_50.f1 += 1)
                { 
                    uint32_t *l_87 = &g_13;
                    int32_t l_88 = 0x688490A1L;
                    int i, j;
                    l_82 &= (safe_lshift_func_int16_t_s_s(0x8CACL, 6));
                    l_88 |= ((g_60 , g_19) , ((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((l_77[p_50.f1][p_50.f1] & (l_77[g_38.f3][g_38.f3] >= (l_87 != &g_75))), 4)) != l_77[1][1]), g_19.f0)) > l_77[2][1]) > 0x7F0BL) > 6L));
                    if (g_38.f3)
                        continue;
                    if (l_88)
                        continue;
                }
                if (((+(safe_rshift_func_int16_t_s_s((l_92[0][1] = (-1L)), 0))) <= ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((~(g_118 = ((((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u(l_77[(p_50.f0 + 1)][g_38.f1], ((l_102 = 254UL) | (((safe_lshift_func_uint8_t_u_u(((((*l_105) = 0x4994L) ^ (l_117 = (safe_div_func_int16_t_s_s(((l_77[g_38.f1][p_50.f0] >= ((safe_mod_func_int16_t_s_s((((*l_116) = (safe_sub_func_uint16_t_u_u((l_112 , (l_114 = l_113)), g_38.f3))) && 0x53E23B9CL), g_36)) & g_38.f1)) ^ l_77[(p_50.f0 + 1)][g_38.f1]), p_49)))) < 0x37L), l_77[2][0])) || p_48) ^ g_38.f3)))), 0x48DF9F9BL)) == l_112) & g_36) < 6L))), g_13)), 0x88FD2EADL)) && l_82)))
                { 
                    struct S0 l_132 = {4317};
                    int64_t *l_135 = &l_82;
                    int32_t *l_136 = (void*)0;
                    int32_t *l_137 = &l_102;
                    int32_t *l_139[6][4] = {{&l_92[0][1],&l_102,&l_92[0][1],&l_102},{&l_102,&l_102,(void*)0,&l_102},{(void*)0,&l_102,(void*)0,(void*)0},{&l_102,&l_102,&l_92[0][1],&l_92[0][1]},{&l_102,&l_102,(void*)0,&l_102},{(void*)0,&l_92[0][1],(void*)0,(void*)0}};
                    int i, j;
                    g_38.f2.f0 = (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((p_50.f0 , (((((*l_135) = (g_134 = (safe_mod_func_int32_t_s_s(((((((l_125 == (l_133[2] = func_21((safe_mod_func_int8_t_s_s(0x9EL, (safe_mul_func_int16_t_s_s(((l_130 , &g_36) != ((0xFBEBL & (p_48 , l_131)) , l_125)), 0x2945L)))), l_132))) | p_50.f0) , (void*)0) != (void*)0) , p_50.f1) == p_49), l_130.f1.f1)))) , &g_36) == (void*)0) > g_13)), 1L)), l_132.f0));
                    l_138 = ((*l_137) = p_51);
                    --l_147[0];
                }
                else
                { 
                    uint8_t l_163 = 5UL;
                    uint16_t *l_164 = &l_130.f1.f0;
                    int64_t *l_165 = &l_77[(p_50.f0 + 1)][g_38.f1];
                    int32_t *l_166 = &l_143;
                    int32_t *l_167[3];
                    struct S0 *l_172[1][5] = {{&g_19,&g_19,&g_19,&g_19,&g_19}};
                    struct S0 **l_171 = &l_172[0][3];
                    uint32_t **l_173 = &l_116;
                    uint32_t **l_174 = &l_115;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_167[i] = (void*)0;
                    (*l_166) &= (safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((*l_165) ^= (safe_add_func_uint16_t_u_u(l_156, ((*l_164) = ((g_38.f0 != ((safe_mul_func_int8_t_s_s(p_50.f1, (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(l_163, (((void*)0 != l_164) | 8UL))), l_102)))) & p_51)) >= 0x0C58L))))), l_163)), g_13));
                    --l_168;
                    (*l_171) = &g_19;
                    (*l_166) &= ((g_38.f2 , ((*l_173) = &g_13)) == ((*l_174) = &g_75));
                }
                if (((&g_19 == l_175) ^ (safe_add_func_uint8_t_u_u(((*l_79) , 0xC6L), (safe_lshift_func_uint8_t_u_s(255UL, 5))))))
                { 
                    uint32_t **l_181[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t ***l_180 = &l_181[2];
                    int32_t *l_186[3];
                    struct S1 **l_189 = &g_187;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_186[i] = &l_143;
                    (*l_175) = (*l_175);
                    g_38.f2.f0 &= (((*l_180) = &l_116) == (l_183[0][4] = g_182));
                    (*l_189) = g_187;
                }
                else
                { 
                    int32_t *l_190[6] = {&l_146[3][3][2],&g_60.f1,&l_146[3][3][2],&l_146[3][3][2],&g_60.f1,&l_146[3][3][2]};
                    int i;
                    g_191++;
                    if (p_49)
                        break;
                    if (g_38.f0)
                        break;
                    return g_19.f0;
                }
            }
            for (g_188.f0 = 0; (g_188.f0 > 14); g_188.f0 = safe_add_func_uint8_t_u_u(g_188.f0, 1))
            { 
                uint8_t *l_234[2][6][1] = {{{&l_147[1]},{(void*)0},{&l_147[1]},{(void*)0},{&l_147[1]},{(void*)0}},{{&l_147[1]},{(void*)0},{&l_147[1]},{(void*)0},{&l_147[1]},{(void*)0}}};
                int32_t *l_235 = (void*)0;
                int32_t *l_236 = &l_142;
                int i, j, k;
                for (g_188.f1 = (-19); (g_188.f1 > (-9)); g_188.f1 = safe_add_func_int16_t_s_s(g_188.f1, 2))
                { 
                    const int64_t ***l_200 = &g_198;
                    (*l_200) = g_198;
                }
                for (g_75 = (-18); (g_75 >= 2); g_75++)
                { 
                    uint16_t *l_203 = &l_130.f1.f0;
                    uint16_t *l_210[5];
                    int32_t l_211 = 0x449593A4L;
                    int32_t l_212 = 0x2B9AB531L;
                    int32_t l_216 = 0xF4AB573FL;
                    int32_t l_217 = 0x8057AD14L;
                    int32_t *l_229[2];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_210[i] = &g_60.f3.f0;
                    for (i = 0; i < 2; i++)
                        l_229[i] = &l_215;
                    g_19.f0 &= ((++(*l_203)) <= (safe_rshift_func_uint16_t_u_s((((-1L) > (-9L)) >= (safe_rshift_func_int16_t_s_u(((++l_219) || ((g_38 , (((l_222 = l_222) != l_223) || (safe_div_func_int16_t_s_s(l_147[0], (safe_mod_func_int32_t_s_s(((((l_228 , l_218) , l_219) | 0x32CA02B6L) | 2UL), 4294967295UL)))))) | p_48)), 8))), p_50.f0)));
                    if (p_48)
                        continue;
                    l_114 = (l_142 &= (safe_add_func_int8_t_s_s(8L, (-1L))));
                    return g_214[0][0];
                }
                (*l_236) |= (safe_mod_func_int8_t_s_s(0xA8L, (p_51 = (g_118 = 254UL))));
                if ((safe_sub_func_uint32_t_u_u(p_49, 0xDF701544L)))
                { 
                    int32_t **l_239 = (void*)0;
                    l_240 = l_236;
                    g_241 = &l_112;
                    ++l_242;
                }
                else
                { 
                    int64_t ***l_251 = &l_249;
                    int32_t *l_254 = &l_117;
                    int32_t **l_255[1][5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_255[i][j] = &l_254;
                    }
                    (*l_254) &= ((((((-5L) | (((((!p_49) > l_142) || (~(((*l_251) = l_249) != (void*)0))) == ((l_252 , ((void*)0 != &l_219)) >= 0xF1E348D706CD7918LL)) > 0L)) == l_253) == g_38.f1) > p_48) ^ l_228.f1);
                    l_240 = l_254;
                }
                if ((*l_240))
                    break;
            }
        }
    }
    if (l_286)
    { 
        int32_t *l_296 = &l_286;
        struct S1 *l_303 = &l_265.f1;
        struct S0 *l_319 = &g_38.f2;
        struct S0 **l_318[3];
        struct S0 ***l_317 = &l_318[1];
        int32_t l_328 = 1L;
        int8_t *l_338 = (void*)0;
        int8_t **l_337 = &l_338;
        int32_t l_350[7] = {0xEFAE8F2CL,0xEFAE8F2CL,0xEFAE8F2CL,0xEFAE8F2CL,0xEFAE8F2CL,0xEFAE8F2CL,0xEFAE8F2CL};
        int32_t l_362 = 0xA93332FBL;
        struct S0 *l_384 = &g_19;
        int64_t l_390 = 0xF0153EA0C148EE5ALL;
        int32_t *l_391 = &l_114;
        int i;
        for (i = 0; i < 3; i++)
            l_318[i] = &l_319;
        for (l_286 = 0; (l_286 == 13); l_286++)
        { 
            int32_t *l_292 = (void*)0;
            int32_t **l_293 = (void*)0;
            int32_t **l_294 = &g_241;
            int32_t **l_295 = &l_292;
            int32_t **l_297 = (void*)0;
            int32_t **l_298[3];
            int32_t *l_322 = (void*)0;
            int64_t l_324 = 0xD9CC43486AE788CELL;
            int16_t l_359 = (-6L);
            int32_t l_367 = 0xB191FAFAL;
            int i;
            for (i = 0; i < 3; i++)
                l_298[i] = &g_241;
        }
        (*l_319) = (*g_336);
        for (l_357 = 0; (l_357 < 6); l_357++)
        { 
            return g_145;
        }
        (*l_391) ^= ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((p_49 && ((safe_sub_func_uint64_t_u_u(((l_384 != l_385) != (*l_296)), (safe_rshift_func_uint16_t_u_s((*l_296), ((((g_60 , (g_191 ^= (safe_rshift_func_uint16_t_u_u(65535UL, g_145)))) <= g_75) != 0x97L) == g_314.f1.f1))))) , p_50.f0)) | (*l_296)), g_188.f0)), l_390)), 0x897BA3F5L)) | p_50.f0);
    }
    else
    { 
        int32_t *l_392 = (void*)0;
        int32_t *l_393[7][1][4] = {{{&l_365,&l_286,&l_365,&l_353}},{{(void*)0,&l_215,(void*)0,(void*)0}},{{&l_361,(void*)0,&l_215,&l_215}},{{&l_360,&l_360,&l_215,&l_365}},{{&l_361,&l_355,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_365,(void*)0}},{{&l_365,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        g_394[1]--;
        for (l_365 = 0; (l_365 < 23); l_365 = safe_add_func_int8_t_s_s(l_365, 7))
        { 
            uint16_t *l_401 = &l_242;
            uint64_t *l_402 = &l_265.f0;
            int64_t *l_415 = &l_77[1][0];
            int64_t **l_414 = &l_415;
            int64_t l_416 = 0L;
            l_416 = ((safe_add_func_int64_t_s_s((l_401 == &g_283), ((*l_402)--))) && ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((l_409 == (void*)0), (safe_rshift_func_int16_t_s_u(((l_412[0][0][0] == ((*l_414) = (g_413 = (g_314.f1.f0 , &g_140)))) ^ p_50.f0), g_188.f1)))) ^ g_144[0]), 255UL)) ^ 5L));
            return l_364;
        }
    }
    for (l_286 = 0; (l_286 > (-7)); l_286 = safe_sub_func_int64_t_s_s(l_286, 5))
    { 
        int32_t *l_421 = &l_357;
        union U5 l_427[5] = {{0},{0},{0},{0},{0}};
        uint64_t l_428 = 7UL;
        struct S0 l_429 = {-3963};
        int32_t l_438 = 0x030BDD49L;
        int64_t l_439 = (-9L);
        int32_t l_441 = 0xA05D6CAFL;
        int32_t l_444 = 0x65DF6A83L;
        uint32_t l_445 = 0xA6A34E4BL;
        int32_t l_494[6][5] = {{0xA91AA0BFL,(-8L),0xD3464A58L,0xD3464A58L,(-8L)},{0x6B6110D4L,(-1L),0x0972F4FEL,0x0972F4FEL,(-1L)},{0xA91AA0BFL,(-8L),0xD3464A58L,0xD3464A58L,(-8L)},{0x6B6110D4L,(-1L),0x0972F4FEL,0x0972F4FEL,(-1L)},{0xA91AA0BFL,(-8L),0xD3464A58L,0xD3464A58L,(-8L)},{0x6B6110D4L,(-1L),0x0972F4FEL,0x0972F4FEL,(-1L)}};
        int16_t *l_556 = (void*)0;
        int16_t *l_557 = &g_144[0];
        int32_t *l_558 = &l_351;
        int i, j;
        (*l_421) = (safe_rshift_func_uint16_t_u_u(p_51, 12));
        if ((*l_421))
        { 
            uint64_t l_422 = 18446744073709551615UL;
            int32_t *l_423 = &l_215;
            int32_t l_435[7][7][5] = {{{0L,0L,(-5L),(-5L),4L},{(-2L),1L,(-1L),0L,(-8L)},{(-1L),0xC0AF77E9L,1L,(-1L),0L},{0xD06EE73AL,0L,5L,0xF1428284L,(-4L)},{0x3496D3FFL,0L,4L,0x03C8D4C0L,(-1L)},{(-2L),(-1L),0x5486DC3EL,9L,(-9L)},{(-1L),(-1L),(-5L),(-1L),(-2L)}},{{1L,9L,(-7L),0xF5F4F606L,0xD06EE73AL},{(-1L),0x75D0AC64L,1L,(-1L),(-5L)},{(-2L),0xF84ED784L,6L,0xF84ED784L,(-2L)},{0x3496D3FFL,0xC0AF77E9L,(-5L),0L,0L},{0xD06EE73AL,0xF5F4F606L,(-7L),9L,1L},{9L,0L,3L,0xC0AF77E9L,0L},{(-9L),9L,0x5486DC3EL,(-1L),(-2L)}},{{0L,4L,0x03C8D4C0L,(-1L),(-5L)},{(-4L),0xF1428284L,5L,0L,0xD06EE73AL},{0x75D0AC64L,0L,(-5L),4L,(-2L)},{(-2L),0L,0x4BC5AE53L,0L,(-9L)},{9L,0xC0AF77E9L,0x8643F58EL,(-1L),(-1L)},{(-7L),0L,(-7L),(-1L),(-4L)},{(-2L),0x75D0AC64L,4L,0xC0AF77E9L,0L}},{{(-2L),0xF1428284L,0L,9L,(-2L)},{0L,(-1L),4L,0L,(-2L)},{(-4L),0x1204D076L,(-7L),0xF84ED784L,(-7L)},{(-1L),0L,0x8643F58EL,(-1L),9L},{(-9L),0xF84ED784L,0x4BC5AE53L,0xF5F4F606L,(-2L)},{(-2L),0x03C8D4C0L,(-5L),(-1L),0x75D0AC64L},{0xD06EE73AL,0xF84ED784L,5L,9L,(-4L)}},{{(-5L),0L,0x03C8D4C0L,0x03C8D4C0L,0L},{(-2L),0x1204D076L,0x5486DC3EL,0xF1428284L,(-9L)},{0L,(-1L),3L,(-1L),9L},{1L,0xF1428284L,(-7L),0L,0xD06EE73AL},{0L,0x75D0AC64L,(-5L),(-1L),0x3496D3FFL},{(-2L),0L,6L,0L,(-2L)},{(-5L),0xC0AF77E9L,1L,0L,(-1L)}},{{0xD06EE73AL,0L,(-7L),0xF1428284L,1L},{(-2L),0L,(-5L),0xC0AF77E9L,(-1L)},{(-9L),0xF1428284L,0x5486DC3EL,0x1204D076L,(-2L)},{(-1L),4L,4L,(-1L),0x3496D3FFL},{(-4L),9L,5L,0xF84ED784L,0xD06EE73AL},{0L,0L,1L,(-5L),(-5L)},{(-9L),(-3L),6L,0xF5F4F606L,(-8L)}},{{0x3496D3FFL,0x03C8D4C0L,0L,0L,0x75D0AC64L},{5L,0xF5F4F606L,5L,0L,1L},{(-5L),0L,3L,0x03C8D4C0L,0L},{(-9L),0x1204D076L,(-2L),(-1L),(-9L)},{0L,4L,3L,0x9A7D0FC8L,(-5L)},{1L,0x61AC9980L,5L,0L,5L},{0x75D0AC64L,0x75D0AC64L,0L,4L,0x3496D3FFL}}};
            struct S1 l_472 = {0x0B37L,1L};
            int i, j, k;
            if (p_50.f0)
                break;
            (*l_421) = (((0L <= ((*l_421) | ((*l_423) = l_422))) , (safe_mul_func_uint16_t_u_u((+p_51), (l_427[3] , l_428)))) ^ p_48);
            for (l_351 = 0; (l_351 <= 0); l_351 += 1)
            { 
                int32_t l_434 = 0L;
                int32_t l_436 = (-1L);
                int32_t l_437 = 0xA61C2187L;
                int32_t l_440 = 0xB98C7187L;
                int32_t l_442 = 0xEAAED409L;
                int32_t l_443 = 1L;
                int32_t **l_448[3][6][7] = {{{(void*)0,&g_299[1][1],&g_241,&g_299[1][1],&l_421,&l_421,&g_299[1][1]},{&l_421,&l_240,&l_421,(void*)0,&g_241,&l_423,&g_299[1][1]},{&g_299[1][1],(void*)0,&g_299[1][1],&l_423,&g_241,(void*)0,(void*)0},{&l_423,&g_299[1][1],(void*)0,&g_299[1][1],&l_423,&l_423,&l_423},{&l_421,(void*)0,&l_421,&g_241,&g_241,&l_421,&l_423},{&l_423,&g_299[1][1],&l_423,&g_299[1][1],&l_240,&g_299[1][1],&g_299[1][1]}},{{&g_299[0][1],(void*)0,&l_423,(void*)0,(void*)0,&l_240,&g_299[1][1]},{&g_299[1][1],&g_241,&l_240,(void*)0,&g_299[1][1],(void*)0,&g_241},{(void*)0,&l_240,&g_299[1][1],&g_299[1][1],(void*)0,(void*)0,(void*)0},{&l_240,&l_240,&g_241,&g_241,&l_240,&l_240,(void*)0},{&g_299[1][1],(void*)0,(void*)0,&g_299[1][1],&g_299[1][1],&g_299[1][1],&g_241},{(void*)0,(void*)0,&g_299[1][1],&l_423,&l_423,&l_423,&l_423}},{{&g_241,(void*)0,&l_240,(void*)0,&g_299[1][1],&l_423,&g_299[1][1]},{(void*)0,&l_240,&l_421,&g_299[1][1],&g_299[1][1],&g_241,&g_299[1][1]},{&l_423,&l_240,&l_423,(void*)0,&l_423,&g_241,&l_240},{(void*)0,&g_241,&l_423,&g_299[1][1],&l_421,&g_299[0][1],&l_240},{&g_299[1][1],(void*)0,&g_241,&l_421,&l_240,&g_299[1][1],&g_299[1][1]},{&g_241,&g_299[1][1],&g_299[1][1],(void*)0,&l_423,(void*)0,&g_299[1][1]}}};
                int i, j, k;
                if ((g_214[l_351][l_351] < (l_429 , p_51)))
                { 
                    int32_t l_430 = 8L;
                    return l_430;
                }
                else
                { 
                    int32_t *l_431 = &l_368;
                    int32_t *l_432 = &l_215;
                    int32_t *l_433[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_433[i] = &l_355;
                    ++l_445;
                }
                l_421 = &g_141;
                l_423 = &l_435[1][0][1];
                for (l_369 = 2; (l_369 >= 0); l_369 -= 1)
                { 
                    int i, j, k;
                    (*l_421) ^= 0x0ADD45C5L;
                }
                (*l_421) &= p_49;
            }
            if (p_51)
            { 
                int32_t *l_473 = &l_368;
                int16_t l_476 = 0xA9E4L;
                if (p_49)
                    break;
                for (l_441 = 0; (l_441 > (-6)); l_441--)
                { 
                    return p_49;
                }
                for (g_134 = 1; (g_134 <= 4); g_134 += 1)
                { 
                    uint16_t l_465[6] = {0x5DC5L,6UL,0x5DC5L,0x5DC5L,6UL,0x5DC5L};
                    int32_t *l_466 = (void*)0;
                    int32_t *l_467 = &l_368;
                    int32_t **l_468 = (void*)0;
                    int32_t **l_469 = &g_299[0][0];
                    int i;
                    (*l_423) = 1L;
                    (*l_467) ^= (g_314.f0 != ((+(((((safe_mod_func_uint8_t_u_u(p_51, (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((void*)0 != &g_283) ^ (safe_rshift_func_uint16_t_u_u(((*l_423) > ((*l_409) = ((safe_div_func_uint16_t_u_u((((g_464 , (((*l_421) = (*l_423)) != 0xEE6EF279L)) != 0x94L) , (*l_423)), 0xB62EL)) ^ g_75))), g_185))), p_49)), p_50.f0)) <= g_118), g_191)))) && (-10L)) >= l_465[0]) >= 1L) == 0x60125D6EL)) <= p_51));
                    if (p_48)
                        continue;
                    (*l_469) = &l_435[4][6][0];
                }
                (*l_423) = ((safe_lshift_func_uint16_t_u_u(((l_472 , l_473) != &l_435[3][1][2]), 0)) & (safe_add_func_uint16_t_u_u(g_191, l_476)));
            }
            else
            { 
                int32_t l_477 = 0x844442D0L;
                int32_t l_482 = (-6L);
                int32_t l_483 = 0xF6250329L;
                int32_t l_484 = 0x68C0D647L;
                int32_t l_485 = 0x4858963AL;
                int32_t l_486 = 0xB8EB6C83L;
                int32_t l_488 = (-10L);
                int32_t l_489 = 0x39886D65L;
                int32_t l_490 = 4L;
                int32_t l_491 = 0xDF164E78L;
                int32_t l_492 = 5L;
                int32_t l_493 = 0x91B15A70L;
                int32_t l_496 = (-1L);
                int32_t l_497 = 1L;
                int32_t l_498 = 0x6BED6FDAL;
                int32_t l_499 = 0L;
                int16_t *l_503 = (void*)0;
                int16_t *l_504[2][1];
                uint16_t *l_509 = &g_188.f0;
                uint16_t *l_512 = &l_427[3].f3.f0;
                uint16_t *l_513 = (void*)0;
                uint16_t *l_514 = (void*)0;
                uint16_t *l_515 = &g_314.f1.f0;
                uint32_t ****l_519 = (void*)0;
                uint32_t ****l_520 = &l_516;
                struct S1 l_543 = {65535UL,0x8FL};
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_504[i][j] = &g_144[0];
                }
                if (l_477)
                { 
                    int32_t *l_479 = (void*)0;
                    int32_t *l_480 = &l_365;
                    int32_t *l_481[3][4][6] = {{{&l_364,&l_369,&l_364,&l_358,&l_218,&l_435[1][5][3]},{&l_444,(void*)0,&l_477,&l_364,&l_354,&l_477},{&l_438,&l_114,&l_218,&l_364,(void*)0,&l_366},{(void*)0,&l_438,&l_354,&l_366,&l_477,&g_282}},{{&l_355,&l_286,&l_354,&l_435[3][1][2],&l_358,&l_366},{&l_435[0][0][3],&l_218,&g_282,&g_282,&l_218,&l_435[0][0][3]},{&g_282,&l_218,&l_435[0][0][3],(void*)0,&l_358,&l_354},{&l_354,&l_286,&l_355,(void*)0,&l_477,&l_435[3][1][2]}},{{&l_354,&l_438,(void*)0,(void*)0,&l_435[1][5][3],&l_441},{&g_282,&l_358,(void*)0,&g_282,(void*)0,&l_441},{&l_435[0][0][3],&l_435[1][5][3],(void*)0,&l_435[3][1][2],&l_364,&l_435[3][1][2]},{&l_355,&l_360,&l_355,&l_366,&l_364,&l_354}}};
                    int64_t l_495 = 8L;
                    int i, j, k;
                    (*l_421) &= (0x6CL > 9L);
                    if (g_314.f0)
                        goto lbl_478;
                    l_500--;
                }
                else
                { 
                    if (p_50.f0)
                        break;
                }
                (*l_423) = ((g_145 |= ((*l_421) = g_464.f6)) > 0xAB01L);
                if ((safe_sub_func_int16_t_s_s(p_50.f1, (safe_rshift_func_int16_t_s_s(((--(*l_509)) ^ ((*l_515) &= 0x976BL)), (l_351 && ((&g_182 == ((*l_520) = l_516)) == p_48)))))))
                { 
                    int8_t *l_521 = (void*)0;
                    int32_t l_529 = 1L;
                    const uint64_t l_530 = 9UL;
                    (*l_421) = ((((((0L >= ((((0x93L ^ ((((g_464 , l_521) != l_521) , (void*)0) != &g_187)) <= (**g_198)) & 65535UL) , g_464.f6)) != 0xCBL) || l_483) | g_191) >= (*g_199)) == 0x6BL);
                    (*g_187) = ((safe_lshift_func_int8_t_s_s((+(*l_421)), (safe_lshift_func_uint16_t_u_u((0x0BAE5D826A452BD2LL == ((((g_140 = ((*l_421) , (safe_add_func_int64_t_s_s(((*g_413) = (((*g_187) , (l_529 ^ ((*l_423) = l_529))) , (**g_198))), p_50.f1)))) != l_530) , (*g_336)) , (*g_199))), 6)))) , p_50);
                    if (p_51)
                        break;
                    l_488 = ((g_394[4] = 0UL) ^ (safe_mod_func_int8_t_s_s(p_50.f1, p_48)));
                }
                else
                { 
                    uint32_t *l_537 = &g_75;
                    uint32_t *l_540 = &l_500;
                    uint8_t *l_541[6][5][6] = {{{(void*)0,&g_118,&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0},{(void*)0,&g_118,(void*)0,(void*)0,&g_118,(void*)0},{&g_118,&g_118,&g_118,(void*)0,&g_118,(void*)0},{&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118}},{{&g_118,&g_118,(void*)0,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118},{(void*)0,&g_118,&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,(void*)0,&g_118,&g_118,&g_118},{(void*)0,&g_118,(void*)0,&g_118,&g_118,(void*)0}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118,&g_118},{(void*)0,&g_118,&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0}},{{(void*)0,&g_118,(void*)0,(void*)0,&g_118,(void*)0},{&g_118,&g_118,&g_118,(void*)0,&g_118,(void*)0},{&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,(void*)0,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118}},{{(void*)0,&g_118,&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,(void*)0,&g_118,&g_118,&g_118},{(void*)0,&g_118,(void*)0,&g_118,&g_118,(void*)0},{&g_118,(void*)0,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,&g_118,&g_118,(void*)0,(void*)0},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,(void*)0,&g_118,&g_118},{&g_118,(void*)0,&g_118,&g_118,&g_118,(void*)0}}};
                    int32_t l_542 = 0L;
                    int32_t **l_544 = &l_423;
                    struct S1 *l_545 = &l_472;
                    int i, j, k;
                    if (p_49)
                        break;
                    if (l_355)
                        break;
                    (*l_327) = ((((safe_lshift_func_uint16_t_u_u(((l_493 = (safe_add_func_uint64_t_u_u((*l_421), (((((((--(*l_537)) == ((*l_540) = p_51)) , (p_51 ^ ((g_191 &= p_50.f1) >= (l_542 |= ((((g_464.f0 | p_50.f1) || ((void*)0 == (*l_517))) != (*l_423)) <= (*l_423)))))) >= 255UL) <= p_50.f1) || (*l_423)) || 0xAAL)))) && 0x84L), (*l_423))) < 1L) ^ 1L) , l_543);
                    (*l_544) = &g_141;
                    (*l_545) = ((*l_327) = (*g_187));
                }
            }
        }
        else
        { 
            return g_185;
        }
        (*l_558) ^= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(((*l_557) = ((((safe_mul_func_uint16_t_u_u(g_214[1][0], ((g_464 , (*l_421)) <= (safe_sub_func_uint32_t_u_u(p_48, (-1L)))))) & p_50.f0) == (safe_sub_func_uint64_t_u_u(0UL, p_49))) != 8L)), 11)) > 250UL), p_50.f1));
    }
    return g_464.f7;
}



static int8_t * func_58(union U5  p_59)
{ 
    return &g_36;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2.f0, "g_38.f2.f0", print_hash_value);
    transparent_crc(g_38.f3, "g_38.f3", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_144[i], "g_144[i]", print_hash_value);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_214[i][j], "g_214[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_394[i], "g_394[i]", print_hash_value);

    }
    transparent_crc(g_464.f0, "g_464.f0", print_hash_value);
    transparent_crc(g_464.f1, "g_464.f1", print_hash_value);
    transparent_crc(g_464.f2, "g_464.f2", print_hash_value);
    transparent_crc(g_464.f3, "g_464.f3", print_hash_value);
    transparent_crc(g_464.f4, "g_464.f4", print_hash_value);
    transparent_crc(g_464.f5, "g_464.f5", print_hash_value);
    transparent_crc(g_464.f6, "g_464.f6", print_hash_value);
    transparent_crc(g_464.f7, "g_464.f7", print_hash_value);
    transparent_crc(g_559.f0, "g_559.f0", print_hash_value);
    transparent_crc(g_559.f1, "g_559.f1", print_hash_value);
    transparent_crc(g_559.f2.f0, "g_559.f2.f0", print_hash_value);
    transparent_crc(g_559.f3, "g_559.f3", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_898, "g_898", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_1362.f0, "g_1362.f0", print_hash_value);
    transparent_crc(g_1362.f1, "g_1362.f1", print_hash_value);
    transparent_crc(g_1362.f2, "g_1362.f2", print_hash_value);
    transparent_crc(g_1362.f3, "g_1362.f3", print_hash_value);
    transparent_crc(g_1362.f4, "g_1362.f4", print_hash_value);
    transparent_crc(g_1362.f5, "g_1362.f5", print_hash_value);
    transparent_crc(g_1362.f6, "g_1362.f6", print_hash_value);
    transparent_crc(g_1362.f7, "g_1362.f7", print_hash_value);
    transparent_crc(g_1428.f0, "g_1428.f0", print_hash_value);
    transparent_crc(g_1428.f1, "g_1428.f1", print_hash_value);
    transparent_crc(g_1428.f2, "g_1428.f2", print_hash_value);
    transparent_crc(g_1428.f3, "g_1428.f3", print_hash_value);
    transparent_crc(g_1428.f4, "g_1428.f4", print_hash_value);
    transparent_crc(g_1428.f5, "g_1428.f5", print_hash_value);
    transparent_crc(g_1428.f6, "g_1428.f6", print_hash_value);
    transparent_crc(g_1428.f7, "g_1428.f7", print_hash_value);
    transparent_crc(g_1515.f0, "g_1515.f0", print_hash_value);
    transparent_crc(g_1515.f1, "g_1515.f1", print_hash_value);
    transparent_crc(g_1515.f2.f0, "g_1515.f2.f0", print_hash_value);
    transparent_crc(g_1515.f3, "g_1515.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1537[i], "g_1537[i]", print_hash_value);

    }
    transparent_crc(g_1539, "g_1539", print_hash_value);
    transparent_crc(g_1548, "g_1548", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    transparent_crc(g_1725, "g_1725", print_hash_value);
    transparent_crc(g_1792, "g_1792", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
