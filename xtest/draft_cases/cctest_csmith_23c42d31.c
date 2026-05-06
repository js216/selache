// SPDX-License-Identifier: MIT
// cctest_csmith_23c42d31.c --- cctest case csmith_23c42d31 (csmith seed 600059185)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc47400af */

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

// Options:   -s 600059185 -o /tmp/csmith_gen_1tgum4j8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint16_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 8;
   unsigned f1 : 26;
   unsigned f2 : 21;
   unsigned f3 : 5;
   unsigned f4 : 10;
};
#pragma pack(pop)

struct S2 {
   unsigned f0 : 16;
   unsigned : 0;
   const signed f1 : 27;
};

union U3 {
   int64_t  f0;
   uint32_t  f1;
   int64_t  f2;
   int32_t  f3;
};


static int32_t g_2 = 0xB143E95AL;
static int32_t g_5 = 0x948B0815L;
static int32_t g_8 = (-1L);
static union U3 g_72 = {0x82EDDAAD19DDA5C1LL};
static struct S0 g_78[5][5][2] = {{{{18446744073709551615UL,1UL},{4UL,1UL}},{{18446744073709551611UL,5UL},{18446744073709551615UL,1UL}},{{18446744073709551611UL,5UL},{4UL,1UL}},{{18446744073709551615UL,1UL},{18446744073709551611UL,5UL}},{{18446744073709551611UL,5UL},{0x896031D569F207B6LL,0x817EL}}},{{{18446744073709551611UL,5UL},{18446744073709551611UL,5UL}},{{18446744073709551615UL,1UL},{4UL,1UL}},{{18446744073709551611UL,5UL},{18446744073709551615UL,1UL}},{{18446744073709551611UL,5UL},{4UL,1UL}},{{18446744073709551615UL,1UL},{18446744073709551611UL,5UL}}},{{{18446744073709551611UL,5UL},{0x896031D569F207B6LL,0x817EL}},{{18446744073709551611UL,5UL},{18446744073709551611UL,5UL}},{{18446744073709551615UL,1UL},{4UL,1UL}},{{18446744073709551611UL,5UL},{18446744073709551615UL,1UL}},{{18446744073709551611UL,5UL},{4UL,1UL}}},{{{18446744073709551615UL,1UL},{18446744073709551611UL,5UL}},{{18446744073709551611UL,5UL},{0x896031D569F207B6LL,0x817EL}},{{18446744073709551611UL,5UL},{18446744073709551611UL,5UL}},{{18446744073709551615UL,1UL},{4UL,1UL}},{{18446744073709551611UL,5UL},{18446744073709551615UL,1UL}}},{{{18446744073709551611UL,5UL},{4UL,1UL}},{{18446744073709551615UL,1UL},{18446744073709551611UL,5UL}},{{18446744073709551611UL,5UL},{0x896031D569F207B6LL,0x817EL}},{{18446744073709551615UL,1UL},{18446744073709551615UL,1UL}},{{0x6F303358B4D46498LL,1UL},{0x896031D569F207B6LL,0x817EL}}}};
static union U3 g_79 = {-5L};
static int8_t g_81 = 0L;
static int32_t g_85 = 4L;
static int32_t g_86 = (-4L);
static int8_t g_88 = 0x37L;
static uint8_t g_89 = 255UL;
static int8_t g_130[5][2] = {{9L,9L},{9L,9L},{9L,9L},{9L,9L},{9L,9L}};
static int32_t g_133 = 0x1DEE43BDL;
static int64_t g_159 = 0xE4C48B7B41906970LL;
static uint32_t g_160[5][4] = {{18446744073709551611UL,0x40EAF7AEL,0x84EC9872L,0x84EC9872L},{1UL,1UL,18446744073709551615UL,0xEF0F4639L},{1UL,8UL,0x84EC9872L,1UL},{18446744073709551611UL,0xEF0F4639L,18446744073709551611UL,0x84EC9872L},{0x40EAF7AEL,0xEF0F4639L,18446744073709551615UL,1UL}};
static int64_t g_165 = 1L;
static int64_t g_193 = (-9L);



static union U3  func_1(void);
static struct S0  func_11(uint16_t  p_12);
static struct S0  func_13(struct S0  p_14, union U3  p_15, struct S0  p_16);
static struct S0  func_17(union U3  p_18);




static union U3  func_1(void)
{ 
    union U3 l_19 = {-6L};
    struct S0 l_117 = {0x263A393D43457D5ALL,65535UL};
    int32_t l_127 = 0L;
    int16_t l_129 = (-1L);
    int16_t l_158 = 0x8217L;
    const uint64_t l_183 = 18446744073709551615UL;
    for (g_2 = 19; (g_2 >= (-26)); g_2--)
    { 
        int8_t l_137[4];
        int i;
        for (i = 0; i < 4; i++)
            l_137[i] = 4L;
        for (g_5 = (-9); (g_5 >= 18); ++g_5)
        { 
            int64_t l_128 = 0xF1CBC00A24D0A392LL;
            int32_t l_170 = 0x149B903AL;
            for (g_8 = 5; (g_8 < 3); g_8 = safe_sub_func_uint16_t_u_u(g_8, 5))
            { 
                struct S0 l_73[4] = {{18446744073709551615UL,0x1E1DL},{18446744073709551615UL,0x1E1DL},{18446744073709551615UL,0x1E1DL},{18446744073709551615UL,0x1E1DL}};
                int i;
                l_117 = func_11((((func_13(func_17(l_19), g_72, l_73[2]) , g_5) == g_88) == g_88));
                g_130[0][1] |= (!((0xC173D2B22B304CA5LL >= (((g_88 |= g_2) < (safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(g_5, 3)), ((((l_127 >= g_86) > g_81) | l_128) <= l_129))), l_129)) >= l_73[2].f1), l_127))) < g_8)) >= (-1L)));
            }
            if ((g_8 = (g_8 ^ ((g_133 = (safe_rshift_func_int8_t_s_s(g_85, 5))) || (((g_72.f1 > (safe_unary_minus_func_uint64_t_u((safe_sub_func_uint16_t_u_u(l_128, 1UL))))) != 0x7803L) | g_130[0][1])))))
            { 
                uint8_t l_138 = 0xD6L;
                int32_t l_155 = 0x1C8C37E7L;
                g_8 ^= l_137[0];
                g_160[0][1] ^= (g_159 = (g_8 = (((l_138 = g_81) == (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s(0x5344L, l_155)) , (safe_lshift_func_int8_t_s_u((l_155 = ((0x9DL && 0x2DL) ^ 0x1B6CL)), 6))) == 1L) == g_133), g_86)) >= g_133), l_19.f3)) >= 0x57AAL) , l_128) != l_137[3]), l_19.f0)), l_117.f0)), l_117.f0)), l_158)), g_72.f1))) || g_133)));
                l_155 ^= 0L;
            }
            else
            { 
                int8_t l_166 = 0x98L;
                int32_t l_169 = (-4L);
                g_8 = (safe_sub_func_int16_t_s_s((-4L), (65535UL != (safe_lshift_func_int8_t_s_u(g_165, (l_166 ^ g_88))))));
                l_170 = ((safe_sub_func_int8_t_s_s((l_169 &= 0x7CL), l_137[0])) != g_88);
            }
        }
        if (g_165)
        { 
            int16_t l_182[3][4] = {{0x705CL,0x705CL,0x705CL,0x705CL},{0x705CL,0x705CL,0x705CL,0x705CL},{0x705CL,0x705CL,0x705CL,0x705CL}};
            int32_t l_184[3];
            int32_t l_191 = (-2L);
            int i, j;
            for (i = 0; i < 3; i++)
                l_184[i] = 0L;
            l_184[0] ^= ((((safe_sub_func_int8_t_s_s(((((g_85 && ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(0x7687L, (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint8_t_u_u(((l_19 , g_130[3][0]) >= (-10L)), l_182[1][0])))), 12)))) <= 0xB05AL), l_182[1][0])) && 1L)) || 0x2AL) == 0x125FL) > l_182[1][1]), l_182[1][2])) | 18446744073709551611UL) ^ l_183) <= 0x7EL);
            l_191 = (l_184[0] = ((safe_rshift_func_int16_t_s_s(l_137[2], (safe_rshift_func_int16_t_s_s(g_89, (l_182[1][0] , ((safe_rshift_func_uint16_t_u_s(g_72.f1, 15)) | l_182[2][3])))))) == 0UL));
        }
        else
        { 
            g_5 = ((g_193 |= (g_130[0][1] >= (g_89 || (g_72.f3 <= (!(g_165 = (-1L))))))) | g_5);
        }
    }
    return l_19;
}



static struct S0  func_11(uint16_t  p_12)
{ 
    struct S0 l_116 = {0x047BAF77F40A761ELL,0xE6C6L};
    for (p_12 = 0; p_12 < 5; p_12 += 1)
    {
        for (g_72.f2 = 0; g_72.f2 < 5; g_72.f2 += 1)
        {
            for (g_86 = 0; g_86 < 2; g_86 += 1)
            {
                struct S0 tmp = {0xCB904F0D90DC829BLL,0xF5A9L};
                g_78[p_12][g_72.f2][g_86] = tmp;
            }
        }
    }
    return l_116;
}



static struct S0  func_13(struct S0  p_14, union U3  p_15, struct S0  p_16)
{ 
    int32_t l_87[4] = {(-1L),(-1L),(-1L),(-1L)};
    int32_t l_96 = 0x868ECCACL;
    int32_t l_114 = (-3L);
    struct S0 l_115 = {0x874C7D6E71340892LL,0UL};
    int i;
    for (p_15.f3 = 0; (p_15.f3 < 3); p_15.f3++)
    { 
        uint32_t l_82[4];
        uint8_t l_105 = 255UL;
        int32_t l_106 = 0xDC7201A7L;
        int32_t l_107 = (-7L);
        int i;
        for (i = 0; i < 4; i++)
            l_82[i] = 0x3E797ADAL;
        for (p_16.f0 = 0; (p_16.f0 == 44); p_16.f0 = safe_add_func_uint16_t_u_u(p_16.f0, 6))
        { 
            int32_t l_80 = 9L;
            for (g_72.f2 = 0; (g_72.f2 <= 1); g_72.f2 += 1)
            { 
                int i, j, k;
                g_78[(g_72.f2 + 3)][(g_72.f2 + 3)][g_72.f2] = func_17((g_79 = p_15));
                if (g_72.f1)
                    break;
                return g_78[(g_72.f2 + 3)][(g_72.f2 + 3)][g_72.f2];
            }
            l_82[3]++;
            for (g_72.f1 = 0; (g_72.f1 <= 3); g_72.f1 += 1)
            { 
                --g_89;
            }
        }
        for (p_16.f0 = 14; (p_16.f0 < 57); p_16.f0 = safe_add_func_int8_t_s_s(p_16.f0, 1))
        { 
            struct S1 l_98[1][5][2] = {{{{-15,6683,296,1,26},{-15,6683,296,1,26}},{{-15,6683,296,1,26},{-15,6683,296,1,26}},{{-15,6683,296,1,26},{-15,6683,296,1,26}},{{-15,6683,296,1,26},{-15,6683,296,1,26}},{{-15,6683,296,1,26},{-15,6683,296,1,26}}}};
            union U3 l_108[2] = {{1L},{1L}};
            int i, j, k;
            if (p_14.f1)
                break;
            for (p_14.f0 = 0; (p_14.f0 <= 3); p_14.f0 += 1)
            { 
                struct S2 l_97 = {11,-7398};
                struct S1 l_99 = {-14,2639,1029,1,23};
                struct S0 l_109 = {1UL,0x80CDL};
                int i;
                l_96 ^= (((safe_mul_func_uint8_t_u_u(0x3FL, 0x2FL)) <= 0xE99EL) && ((0x9D0EL != l_82[p_14.f0]) | l_82[p_14.f0]));
                l_96 = (l_107 &= ((l_97 , ((l_99 = l_98[0][3][1]) , ((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(p_14.f0)) != (l_106 |= (safe_sub_func_int64_t_s_s(((0xD0260C4036C84AECLL == l_105) ^ p_15.f3), 0x685852762AA9168FLL)))), l_98[0][3][1].f0)) >= 7UL))) && l_82[3]));
                l_109 = (g_78[1][2][0] = func_17(l_108[1]));
            }
        }
        l_114 |= ((safe_mul_func_uint16_t_u_u(g_88, ((safe_div_func_int8_t_s_s(0x3BL, l_87[0])) && (g_8 | l_96)))) & 0L);
    }
    return l_115;
}



static struct S0  func_17(union U3  p_18)
{ 
    const uint8_t l_22 = 0xF0L;
    int32_t l_23 = (-1L);
    int32_t l_38 = 0x700D1A0CL;
    int32_t l_39 = 0x0BAB1F35L;
    int32_t l_40 = 0x826FBC79L;
    int32_t l_41 = 0xC0F3ADCFL;
    struct S0 l_42 = {1UL,0xF916L};
    for (p_18.f0 = 8; (p_18.f0 >= 10); ++p_18.f0)
    { 
        l_23 = l_22;
    }
    l_41 ^= (safe_rshift_func_int8_t_s_s((((l_40 = ((((((((l_22 & (l_23 = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(g_2, 6)), g_8)))) || ((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((l_38 |= (safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(p_18.f1, p_18.f0)), l_23))), l_39)), 13)) ^ g_5)) < g_2) , 0x317DL) <= 0x94ADL) >= p_18.f1) > g_2) , l_22)) | l_39) == l_39), 5));
    if (p_18.f2)
    { 
        return l_42;
    }
    else
    { 
        uint64_t l_68 = 1UL;
        int32_t l_69 = 0L;
        int32_t l_70 = 0x4A39B7B3L;
        int32_t l_71 = 0x6FC49175L;
        l_71 = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((p_18.f1 == ((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u((p_18 , ((65532UL <= ((safe_div_func_int64_t_s_s((l_70 |= (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((l_69 = (~(safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((p_18.f0 >= p_18.f0), l_41)), l_68)))) || g_2), p_18.f3)), g_8)), 5))), 0x6ABE926F5D9AEB8ELL)) == l_68)) && g_5)), p_18.f1)) <= 0xF7E48FFCL), p_18.f2)), 0x7F41L)) , p_18.f1)), g_5)), l_22));
    }
    return l_42;
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
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_78[i][j][k].f0, "g_78[i][j][k].f0", print_hash_value);
                transparent_crc(g_78[i][j][k].f1, "g_78[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_130[i][j], "g_130[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_160[i][j], "g_160[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
