// SPDX-License-Identifier: MIT
// cctest_csmith_cc7fe9b3.c --- cctest case csmith_cc7fe9b3 (csmith seed 3430934963)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6abb4f0e */

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

// Options:   -s 3430934963 -o /tmp/csmith_gen_exvod6ye/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   unsigned f0 : 24;
   unsigned f1 : 15;
   signed f2 : 22;
};

struct S1 {
   const unsigned f0 : 18;
   const uint32_t  f1;
   unsigned f2 : 22;
   unsigned f3 : 23;
};

union U2 {
   uint8_t  f0;
   int64_t  f1;
   unsigned f2 : 2;
};

union U3 {
   uint32_t  f0;
};

union U4 {
   const uint8_t  f0;
};


static int32_t g_3 = (-1L);
static int32_t g_4 = (-1L);
static uint8_t g_5 = 251UL;
static union U4 g_23 = {255UL};
static struct S1 g_33 = {277,3UL,1066,2555};
static const struct S0 g_35 = {463,115,66};
static uint32_t g_68 = 18446744073709551615UL;
static uint8_t g_81 = 253UL;
static struct S0 g_86 = {1541,80,1570};
static struct S1 g_87[3] = {{367,0xF84107A4L,393,2494},{367,0xF84107A4L,393,2494},{367,0xF84107A4L,393,2494}};
static int16_t g_112 = 7L;
static union U3 g_135[1][4] = {{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}};
static int8_t g_174[4] = {0xE8L,0xE8L,0xE8L,0xE8L};
static uint32_t g_175 = 4294967290UL;



static int32_t  func_1(void);
static uint16_t  func_8(uint32_t  p_9, uint32_t  p_10, struct S0  p_11);
static int8_t  func_14(int32_t  p_15, const int32_t  p_16, uint32_t  p_17, struct S1  p_18);
static int16_t  func_21(union U4  p_22);




static int32_t  func_1(void)
{ 
    int32_t l_2[2][3];
    struct S0 l_91[4] = {{874,178,320},{874,178,320},{874,178,320},{874,178,320}};
    uint32_t l_127 = 18446744073709551615UL;
    uint64_t l_138 = 0x554FBD3AC5977F73LL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_2[i][j] = (-1L);
    }
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { 
        uint32_t l_128 = 4294967289UL;
        int32_t l_161 = 1L;
        int32_t l_164[5];
        int i;
        for (i = 0; i < 5; i++)
            l_164[i] = 0x220E4BD6L;
        ++g_5;
        l_128 = ((func_8(g_3, (safe_div_func_int8_t_s_s(0L, func_14((safe_lshift_func_int16_t_s_s(func_21(g_23), g_5)), l_2[0][0], l_2[0][1], g_87[1]))), l_91[1]) && l_127) , (-5L));
        l_138 = (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((l_91[1].f2 ^= g_3) >= (l_2[0][1] = l_128)) | (safe_add_func_int64_t_s_s(((g_135[0][0] , (safe_lshift_func_int8_t_s_s(l_91[1].f0, l_91[1].f0))) || (-8L)), g_81))), g_87[1].f0)), g_87[1].f1));
        for (g_4 = 1; (g_4 >= 0); g_4 -= 1)
        { 
            int32_t l_142[4][4][5] = {{{6L,1L,(-1L),0L,1L},{(-4L),(-1L),0x13D62D75L,0x13D62D75L,(-1L)},{6L,1L,(-1L),0L,1L},{(-4L),(-1L),0x13D62D75L,0x13D62D75L,(-1L)}},{{6L,1L,(-1L),0L,1L},{(-4L),(-1L),0x13D62D75L,0x13D62D75L,(-1L)},{6L,(-8L),1L,1L,1L},{0x517B9ED3L,0xA9471153L,(-1L),(-1L),0xA9471153L}},{{0xBA8A213CL,(-8L),1L,1L,1L},{0x517B9ED3L,0xA9471153L,(-1L),(-1L),0xA9471153L},{0xBA8A213CL,(-8L),1L,1L,1L},{0x517B9ED3L,0xA9471153L,(-1L),(-1L),0xA9471153L}},{{0xBA8A213CL,(-8L),1L,1L,1L},{0x517B9ED3L,0xA9471153L,(-1L),(-1L),0xA9471153L},{0xBA8A213CL,(-8L),1L,1L,1L},{0x517B9ED3L,0xA9471153L,(-1L),(-1L),0xA9471153L}}};
            int32_t l_162 = 0x70772F82L;
            int32_t l_163[4][4][3] = {{{0L,4L,0L},{0xB93622BFL,(-1L),0xCF4BB604L},{(-5L),(-1L),(-6L)},{0x5AB6DA70L,4L,0x5AA70A8BL}},{{0x98C6906FL,0x5AB6DA70L,0x5AB6DA70L},{0x5AB6DA70L,4L,0x41DF5887L},{(-5L),0L,0x41DF5887L},{0xB93622BFL,0x41DF5887L,0x5AB6DA70L}},{{0L,(-6L),0x5AA70A8BL},{0x41DF5887L,0x41DF5887L,(-6L)},{4L,0L,0xCF4BB604L},{4L,4L,0L}},{{0x41DF5887L,0x5AB6DA70L,0L},{0L,4L,0L},{0xB93622BFL,(-1L),0xCF4BB604L},{(-5L),(-1L),(-6L)}}};
            struct S0 l_168 = {828,121,942};
            int i, j, k;
            for (g_5 = 0; (g_5 <= 1); g_5 += 1)
            { 
                uint64_t l_139 = 18446744073709551615UL;
                int i, j;
                if (l_139)
                    break;
                l_2[g_4][g_4] = (((g_33.f3 = (safe_rshift_func_int16_t_s_u(l_142[0][0][1], (safe_mod_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((g_23.f0 | (safe_mod_func_uint32_t_u_u(0x96934F3FL, (safe_mod_func_int8_t_s_s(g_86.f2, l_142[0][0][1]))))), l_139)) < g_86.f1), 0xA12690506A2FBD8CLL))))) , g_35.f2) , l_139);
            }
            if ((((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(0L, ((safe_mod_func_int8_t_s_s((l_91[1].f2 = g_33.f2), (safe_sub_func_int8_t_s_s(0x73L, ((safe_div_func_int32_t_s_s(g_135[0][0].f0, g_86.f2)) , 1UL))))) == 0x744AF555DEF731F7LL))), l_128)) , l_128) > l_138))
            { 
                uint32_t l_165 = 4294967295UL;
                l_168 = ((l_165++) , g_86);
                return l_164[4];
            }
            else
            { 
                int32_t l_176 = 0xD19DAF4EL;
                g_86.f2 ^= (safe_mul_func_uint16_t_u_u((((g_112 = l_142[0][0][1]) ^ ((safe_add_func_uint16_t_u_u(((l_176 = (g_175 = (g_174[1] = (safe_unary_minus_func_uint64_t_u(g_86.f1))))) < l_91[1].f1), ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_163[0][3][0], 1L)), l_91[1].f2)) != 0x893A053FBE9BACE1LL), 15)))) > g_4))) & g_86.f0)) | l_128), l_91[1].f1));
                g_86.f2 = (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((g_87[1].f3 , ((((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(0x2E585F6FCF51EDECLL, (safe_div_func_uint64_t_u_u((g_33 , (l_91[1].f2 ^ l_164[2])), l_176)))), l_168.f2)) , 1UL) , g_3) & g_135[0][0].f0)), 7)), g_87[1].f2));
            }
        }
    }
    g_4 = g_86.f2;
    return g_35.f2;
}



static uint16_t  func_8(uint32_t  p_9, uint32_t  p_10, struct S0  p_11)
{ 
    uint16_t l_109 = 0xA806L;
    int32_t l_124 = 0L;
    int32_t l_125[4][5] = {{0x021301A5L,(-8L),(-8L),0x021301A5L,(-8L)},{(-9L),(-9L),0L,(-9L),(-9L)},{(-8L),0x021301A5L,(-8L),(-8L),0x021301A5L},{(-9L),0x2B6DE28BL,0x2B6DE28BL,(-9L),0x2B6DE28BL}};
    int32_t l_126 = (-7L);
    int i, j;
    for (p_10 = 0; (p_10 == 29); p_10++)
    { 
        uint32_t l_107 = 0xCD5CA7D7L;
        int16_t l_108[4][3][2];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 2; k++)
                    l_108[i][j][k] = (-4L);
            }
        }
        for (g_81 = (-23); (g_81 >= 26); g_81 = safe_add_func_int16_t_s_s(g_81, 9))
        { 
            uint8_t l_102 = 0x0BL;
            if (p_11.f2)
                break;
            l_109 |= (safe_lshift_func_uint16_t_u_u(((p_10 , ((((safe_mod_func_int8_t_s_s(0x14L, (safe_mul_func_uint16_t_u_u(((l_102 , (safe_mod_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((l_107 = 0L), g_86.f1)) != 0x60L) || 9UL), p_11.f0))) | l_102), g_87[1].f3)))) == g_87[1].f3) > l_108[3][2][0]) & g_33.f2)) , g_35.f1), 5));
            for (g_4 = 0; (g_4 <= 1); g_4 += 1)
            { 
                int i, j, k;
                g_112 = (safe_sub_func_int8_t_s_s(l_108[(g_4 + 1)][g_4][g_4], 0xF5L));
                g_86 = g_86;
            }
        }
    }
    l_125[2][4] &= ((l_109 >= ((safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s(((p_10 | p_11.f2) ^ ((safe_div_func_int64_t_s_s((l_124 = (safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s((((5L ^ 4UL) & g_87[1].f3) || g_86.f0), g_68)), g_68))), 0xE76681864D21BD33LL)) == 0xF6E0L)), 0x51L)))) != p_10)) <= p_11.f0);
    return l_126;
}



static int8_t  func_14(int32_t  p_15, const int32_t  p_16, uint32_t  p_17, struct S1  p_18)
{ 
    uint32_t l_88[2];
    int i;
    for (i = 0; i < 2; i++)
        l_88[i] = 4294967295UL;
    for (g_4 = 0; (g_4 <= 1); g_4 += 1)
    { 
        int i;
        g_86.f2 = ((l_88[g_4] <= l_88[g_4]) != p_18.f3);
    }
    for (p_17 = 0; (p_17 > 3); p_17++)
    { 
        if (l_88[1])
            break;
    }
    return g_87[1].f1;
}



static int16_t  func_21(union U4  p_22)
{ 
    uint32_t l_28 = 0xE10D32DEL;
    int32_t l_29 = 0x390DFC1FL;
    struct S1 l_32 = {508,1UL,1141,1004};
    union U2 l_34 = {0x0BL};
    struct S0 l_36 = {3448,73,992};
    union U3 l_39 = {0UL};
    int32_t l_60[3][1][4] = {{{0xC332E49DL,9L,0xC332E49DL,9L}},{{0xC332E49DL,9L,0xC332E49DL,9L}},{{0xC332E49DL,9L,0xC332E49DL,9L}}};
    uint32_t l_67[2][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_67[i][j] = 0x73CE5076L;
    }
    if ((((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((((l_29 ^= l_28) || 0x400765E4L) || 0x79L) <= l_28) >= p_22.f0), 8)), 2UL)) < l_28) || 0L))
    { 
        uint32_t l_30 = 18446744073709551613UL;
        struct S0 l_59[4][3] = {{{2482,11,-43},{2482,11,-43},{1825,131,416}},{{756,61,393},{756,61,393},{743,131,689}},{{2482,11,-43},{2482,11,-43},{1825,131,416}},{{756,61,393},{756,61,393},{743,131,689}}};
        int i, j;
        g_4 = (l_30 | (!p_22.f0));
        l_36 = ((l_32 , g_33) , ((l_34 , l_34) , g_35));
        if (((safe_sub_func_int16_t_s_s(((l_39 , (((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((0xC62EL >= ((safe_mul_func_uint16_t_u_u(p_22.f0, g_35.f0)) >= 1UL)), p_22.f0)), 0xD9C7L)) , p_22.f0) >= l_34.f0)) ^ 0xB2L), l_36.f1)) <= 8L))
        { 
            int8_t l_54 = (-1L);
            g_4 |= (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_30 , (safe_add_func_int8_t_s_s((65531UL != (safe_div_func_uint64_t_u_u((l_54 == ((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(((g_33.f2 = (l_59[2][1] , 0UL)) & l_59[2][1].f1), 7)) && l_60[1][0][1]) ^ p_22.f0), p_22.f0)) || l_54)), 0xAB0C02EE360852B1LL))), g_33.f1))), l_54)), l_54));
        }
        else
        { 
            uint16_t l_62[3][3][5] = {{{0x59BFL,65535UL,0x59BFL,65535UL,0x59BFL},{0xADB6L,0xAE8BL,0xAE8BL,0xADB6L,0xADB6L},{0x9808L,65535UL,0x9808L,65535UL,0x9808L}},{{0xADB6L,0xADB6L,0xAE8BL,0xAE8BL,0xADB6L},{0x59BFL,65535UL,0x59BFL,65535UL,0x59BFL},{0xADB6L,0xAE8BL,0xAE8BL,0xADB6L,0xADB6L}},{{0x9808L,65535UL,0x9808L,65535UL,0x9808L},{0xADB6L,0xADB6L,0xAE8BL,0xAE8BL,0xADB6L},{0x59BFL,65535UL,0x59BFL,65535UL,0x59BFL}}};
            int i, j, k;
            for (l_30 = 0; (l_30 <= 2); l_30 += 1)
            { 
                struct S0 l_61 = {2197,179,281};
                l_61 = l_36;
                g_4 |= l_61.f1;
                l_62[0][0][0]--;
            }
        }
    }
    else
    { 
        uint16_t l_71 = 65535UL;
        struct S0 l_74 = {2745,122,1234};
        if ((safe_rshift_func_uint8_t_u_u(g_35.f2, l_67[0][0])))
        { 
            g_68--;
            return l_29;
        }
        else
        { 
            g_4 |= 3L;
            ++l_71;
            l_74 = g_35;
        }
        l_60[1][0][1] = (safe_lshift_func_uint16_t_u_s(l_67[0][0], 6));
    }
    for (g_68 = 16; (g_68 >= 5); g_68--)
    { 
        int64_t l_79 = 0xE9BCC685A4B52006LL;
        int32_t l_80 = 0xC003918AL;
        --g_81;
        for (l_28 = 13; (l_28 < 31); ++l_28)
        { 
            g_86 = (p_22.f0 , l_36);
        }
    }
    return l_32.f1;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_87[i].f0, "g_87[i].f0", print_hash_value);
        transparent_crc(g_87[i].f1, "g_87[i].f1", print_hash_value);
        transparent_crc(g_87[i].f2, "g_87[i].f2", print_hash_value);
        transparent_crc(g_87[i].f3, "g_87[i].f3", print_hash_value);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_135[i][j].f0, "g_135[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_174[i], "g_174[i]", print_hash_value);

    }
    transparent_crc(g_175, "g_175", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
