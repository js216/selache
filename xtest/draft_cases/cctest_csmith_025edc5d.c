// SPDX-License-Identifier: MIT
// cctest_csmith_025edc5d.c --- cctest case csmith_025edc5d (csmith seed 39771229)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2634135d */

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

// Options:   -s 39771229 -o /tmp/csmith_gen_ywo0_n5x/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 13;
   signed f1 : 16;
   signed f2 : 19;
   signed f3 : 18;
};
#pragma pack(pop)

struct S1 {
   signed f0 : 13;
};

union U2 {
   int32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   const uint32_t  f4;
};

union U3 {
   int8_t * f0;
   uint8_t  f1;
   uint16_t  f2;
   int8_t * f3;
   signed f4 : 23;
};

union U4 {
   int64_t  f0;
   int32_t  f1;
   int64_t  f2;
};

union U5 {
   const int8_t * const  f0;
};


static int32_t g_3 = (-3L);
static union U2 g_29 = {-5L};
static union U4 g_31 = {0x12DC6D0F065F4B3FLL};
static union U4 *g_32 = &g_31;
static union U4 g_44 = {0L};
static uint32_t g_50 = 0xC264F89CL;
static int32_t g_80 = (-1L);
static int8_t g_95 = 0x5EL;
static const union U3 g_110 = {0};
static union U5 g_126 = {0};
static uint8_t g_144 = 0xF6L;
static int32_t *g_167[7][4] = {{&g_80,&g_80,&g_44.f1,&g_44.f1},{&g_44.f1,&g_44.f1,&g_80,&g_44.f1},{&g_31.f1,&g_80,&g_31.f1,&g_80},{&g_31.f1,&g_80,&g_80,&g_31.f1},{&g_44.f1,&g_80,&g_44.f1,&g_80},{&g_80,&g_80,&g_44.f1,&g_44.f1},{&g_44.f1,&g_44.f1,&g_80,&g_44.f1}};
static union U4 g_189 = {0x080F64FDBAA03829LL};
static union U4 *g_188 = &g_189;
static const struct S0 g_217 = {56,8,124,-152};
static uint64_t g_229 = 18446744073709551614UL;
static uint64_t *g_228 = &g_229;
static uint32_t g_230 = 0x92555290L;
static union U3 g_233 = {0};
static struct S1 g_267 = {-48};
static union U3 *g_271 = (void*)0;
static const uint8_t g_339 = 5UL;
static int32_t *g_341 = &g_44.f1;
static int8_t *g_382 = &g_95;
static int8_t **g_381 = &g_382;
static uint16_t *g_386 = &g_29.f1;
static union U2 g_437[6] = {{0x24B41616L},{0x24B41616L},{0x8B62525DL},{0x24B41616L},{0x24B41616L},{0x8B62525DL}};
static const union U2 *g_439 = (void*)0;
static const union U2 **g_438 = &g_439;
static union U5 g_494 = {0};
static int32_t **g_563[6] = {&g_341,&g_341,&g_167[6][0],&g_341,&g_341,&g_167[6][0]};
static int32_t ***g_562 = &g_563[1];
static int32_t ** const *g_614 = (void*)0;
static int32_t ** const **g_613 = &g_614;
static uint8_t g_629 = 251UL;
static int32_t *g_630 = &g_80;
static int16_t g_730 = 8L;
static uint64_t g_737[4] = {0x08CB09D60781C281LL,0x08CB09D60781C281LL,0x08CB09D60781C281LL,0x08CB09D60781C281LL};
static struct S0 g_742 = {13,61,613,269};
static uint32_t *g_789 = &g_230;
static uint32_t **g_788[2] = {&g_789,&g_789};
static uint32_t ***g_787 = &g_788[0];
static int32_t g_828 = 1L;
static const uint16_t *g_832 = &g_29.f1;
static const uint16_t **g_831 = &g_832;
static const uint16_t ***g_862[5][5] = {{&g_831,&g_831,&g_831,&g_831,&g_831},{(void*)0,&g_831,&g_831,&g_831,(void*)0},{&g_831,&g_831,(void*)0,(void*)0,&g_831},{&g_831,&g_831,&g_831,&g_831,(void*)0},{&g_831,(void*)0,&g_831,&g_831,&g_831}};
static const struct S1 g_883 = {59};
static const struct S1 g_885 = {33};
static const struct S1 *g_884 = &g_885;
static const struct S1 *g_886 = &g_267;
static uint16_t g_889 = 1UL;
static uint8_t g_896 = 0xCAL;
static const int8_t g_1070 = 0x59L;
static union U5 ** const g_1113 = (void*)0;
static union U3 *** const g_1186 = (void*)0;
static union U3 *** const *g_1185 = &g_1186;
static union U3 *****g_1196 = (void*)0;
static uint32_t g_1206 = 1UL;
static int64_t ***g_1252 = (void*)0;
static int64_t ****g_1251 = &g_1252;
static int32_t *g_1373 = &g_828;
static int32_t **g_1372[4][6] = {{&g_1373,&g_1373,&g_1373,&g_1373,&g_1373,&g_1373},{&g_1373,&g_1373,&g_1373,&g_1373,&g_1373,&g_1373},{&g_1373,&g_1373,&g_1373,&g_1373,&g_1373,&g_1373},{&g_1373,&g_1373,&g_1373,&g_1373,&g_1373,&g_1373}};
static int64_t * const g_1512 = &g_189.f0;
static int64_t * const *g_1511 = &g_1512;
static int64_t * const **g_1510[2][3] = {{&g_1511,&g_1511,&g_1511},{&g_1511,&g_1511,&g_1511}};
static int64_t * const ***g_1509 = &g_1510[1][2];
static int64_t * const ****g_1508 = &g_1509;
static int16_t g_1539 = 0xB902L;
static union U5 *g_1587 = (void*)0;
static union U5 **g_1586 = &g_1587;
static int8_t g_1631 = 0x61L;
static int32_t g_1673[5] = {0xD079B5CFL,0xD079B5CFL,0xD079B5CFL,0xD079B5CFL,0xD079B5CFL};
static uint8_t g_1681 = 6UL;
static uint32_t g_1770 = 4294967295UL;
static union U5 ** const *g_1789 = &g_1586;



static int16_t  func_1(void);
static int32_t * func_4(union U3  p_5, const int8_t  p_6);
static union U3  func_7(int32_t * p_8, union U5  p_9, int32_t  p_10);
static int32_t * func_11(int8_t  p_12);
static const uint32_t  func_17(int16_t  p_18, int32_t * const  p_19, uint32_t  p_20, int8_t * p_21, const uint32_t  p_22);
static int16_t  func_26(int32_t * p_27, union U2  p_28);
static int32_t * func_33(int16_t  p_34);
static int32_t * func_37(int32_t * p_38, union U4 * p_39, int32_t * p_40);




static int16_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int8_t *l_636 = (void*)0;
    int32_t l_1599 = 8L;
    uint32_t l_1644 = 0UL;
    union U4 l_1645 = {-10L};
    const union U5 l_1654[5][1][6] = {{{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}}}};
    struct S0 l_1689[3][2] = {{{22,7,-336,197},{22,7,-336,197}},{{22,7,-336,197},{22,7,-336,197}},{{22,7,-336,197},{22,7,-336,197}}};
    union U4 **l_1758[1][5][6];
    uint8_t l_1772[6][4] = {{0xE0L,2UL,2UL,0xE0L},{0x30L,2UL,246UL,2UL},{2UL,0x44L,246UL,246UL},{0x30L,0x30L,2UL,246UL},{0xE0L,0x44L,0xE0L,2UL},{0xE0L,2UL,2UL,0xE0L}};
    int64_t l_1773[3];
    union U2 *l_1798 = &g_29;
    int16_t l_1824[3];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
                l_1758[i][j][k] = &g_32;
        }
    }
    for (i = 0; i < 3; i++)
        l_1773[i] = (-5L);
    for (i = 0; i < 3; i++)
        l_1824[i] = 0x07D1L;
    if (((*l_2) = 9L))
    { 
        int32_t * const l_23 = &g_3;
        uint16_t *l_632 = &g_437[4].f1;
        int32_t l_1410[3];
        int32_t **l_1596 = (void*)0;
        int32_t **l_1597 = &g_341;
        union U5 l_1598 = {0};
        uint8_t *l_1620 = &g_144;
        int8_t *l_1630 = &g_1631;
        int64_t l_1632 = 9L;
        uint32_t l_1637 = 0xB532B4F7L;
        union U4 l_1655 = {3L};
        int32_t **l_1679 = &g_1373;
        struct S0 **l_1705 = (void*)0;
        union U3 ** const *l_1735 = (void*)0;
        union U3 ** const **l_1734 = &l_1735;
        union U3 ** const ***l_1733 = &l_1734;
        uint32_t l_1739 = 0x2A4A07A0L;
        union U5 l_1766 = {0};
        union U5 l_1769 = {0};
        const int8_t l_1796 = 8L;
        uint8_t l_1820 = 6UL;
        int i;
        for (i = 0; i < 3; i++)
            l_1410[i] = 7L;
    }
    else
    { 
        return (*l_2);
    }
    (*g_341) |= (*l_2);
    return g_217.f2;
}



static int32_t * func_4(union U3  p_5, const int8_t  p_6)
{ 
    uint64_t l_1601 = 18446744073709551614UL;
    int32_t **l_1602 = (void*)0;
    int32_t **l_1603[6];
    int32_t *l_1604[3];
    struct S1 l_1605[2][3][3] = {{{{-47},{-47},{73}},{{-47},{-47},{73}},{{-47},{-47},{73}}},{{{-47},{-47},{73}},{{-47},{-47},{73}},{{-47},{-47},{73}}}};
    union U2 l_1610 = {0x61C6AFAEL};
    union U5 l_1613[3] = {{0},{0},{0}};
    const int32_t l_1614 = 0x1491C202L;
    int32_t ** const *l_1615 = &g_1372[2][5];
    uint64_t l_1616 = 0x9D3944546AF6FDC3LL;
    int32_t *l_1617 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1603[i] = &g_167[0][3];
    for (i = 0; i < 3; i++)
        l_1604[i] = &g_44.f1;
    l_1604[2] = func_11(l_1601);
    (*g_630) &= (l_1605[1][2][1] , ((safe_mul_func_uint8_t_u_u(g_217.f1, ((1L != ((safe_add_func_int8_t_s_s(((((((*g_789) = p_6) < (l_1610 , (1L && ((*****g_1508) = ((safe_sub_func_int32_t_s_s((l_1613[1] , l_1614), 0x42420A1CL)) ^ p_6))))) & p_6) , l_1615) != (void*)0), l_1616)) | p_6)) > p_6))) || (*g_386)));
    p_5.f4 = p_6;
    return l_1617;
}



static union U3  func_7(int32_t * p_8, union U5  p_9, int32_t  p_10)
{ 
    union U3 l_1600 = {0};
    return l_1600;
}



static int32_t * func_11(int8_t  p_12)
{ 
    struct S1 *l_1411 = &g_267;
    struct S1 **l_1412 = (void*)0;
    struct S1 **l_1413 = (void*)0;
    struct S1 **l_1414 = &l_1411;
    int32_t l_1433 = (-5L);
    int32_t l_1464 = (-5L);
    int32_t l_1466 = 0x74028E7CL;
    uint16_t l_1473 = 0xD0E6L;
    union U3 ****l_1505 = (void*)0;
    union U3 *****l_1504 = &l_1505;
    int32_t *l_1516[4][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    union U4 *l_1563 = &g_31;
    int16_t l_1575[1];
    union U5 **l_1584 = (void*)0;
    union U5 ***l_1585[1];
    int32_t *l_1594 = &l_1464;
    int32_t *l_1595 = &g_3;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1575[i] = 0x5EE0L;
    for (i = 0; i < 1; i++)
        l_1585[i] = &l_1584;
    (*l_1414) = l_1411;
    for (g_730 = 1; (g_730 >= 24); g_730 = safe_add_func_uint8_t_u_u(g_730, 2))
    { 
        uint16_t **l_1426 = (void*)0;
        uint16_t ***l_1425 = &l_1426;
        uint16_t ****l_1424 = &l_1425;
        int32_t l_1434 = 0x3DE06B99L;
        int32_t *l_1437 = &g_189.f1;
        struct S0 l_1458 = {39,85,-396,-145};
        int64_t l_1465 = 0x008E7001E65DE265LL;
        int32_t l_1467 = (-8L);
        int64_t * const ****l_1513[7] = {&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509,&g_1509};
        int64_t * const ****l_1514[6];
        int64_t *****l_1515 = &g_1251;
        uint64_t *l_1530 = &g_737[0];
        uint64_t *l_1533 = &g_737[3];
        struct S1 l_1574[2][5] = {{{11},{-14},{11},{24},{24}},{{11},{-14},{11},{24},{24}}};
        int16_t *l_1576 = &g_1539;
        int i, j;
        for (i = 0; i < 6; i++)
            l_1514[i] = (void*)0;
    }
lbl_1593:
    for (g_31.f2 = 0; (g_31.f2 != (-10)); g_31.f2 = safe_sub_func_int8_t_s_s(g_31.f2, 5))
    { 
        const int8_t l_1581 = 0x70L;
        int32_t *l_1583 = (void*)0;
        for (g_44.f2 = 11; (g_44.f2 == 17); g_44.f2 = safe_add_func_uint16_t_u_u(g_44.f2, 5))
        { 
            uint16_t l_1582[4][4] = {{2UL,2UL,2UL,2UL},{2UL,2UL,2UL,2UL},{2UL,2UL,2UL,2UL},{2UL,2UL,2UL,2UL}};
            int i, j;
            l_1582[1][3] = ((*g_884) , l_1581);
            return l_1583;
        }
        l_1516[0][0] = func_33(p_12);
    }
    g_1586 = l_1584;
    for (g_189.f0 = (-28); (g_189.f0 != 20); g_189.f0 = safe_add_func_uint8_t_u_u(g_189.f0, 8))
    { 
        for (g_230 = 20; (g_230 != 56); g_230 = safe_add_func_uint16_t_u_u(g_230, 1))
        { 
            struct S0 l_1592 = {76,-74,124,16};
            (*l_1414) = &g_267;
            l_1592 = g_217;
        }
        if (g_217.f1)
            goto lbl_1593;
    }
    return l_1595;
}



static const uint32_t  func_17(int16_t  p_18, int32_t * const  p_19, uint32_t  p_20, int8_t * p_21, const uint32_t  p_22)
{ 
    int8_t l_642 = 0xFBL;
    int32_t *l_648 = &g_3;
    uint64_t *l_659 = (void*)0;
    union U4 l_690 = {8L};
    union U2 l_702 = {-9L};
    union U5 l_728 = {0};
    int32_t l_836 = 0x4079DFF0L;
    int32_t l_838 = 0x7BAA7E34L;
    int32_t l_839 = 0xB733ADD0L;
    int32_t l_840 = 0x3F1777D5L;
    int32_t l_841[3][2] = {{0L,0x7A60415EL},{0L,0L},{0x7A60415EL,0L}};
    int32_t l_842 = 0x4C2F6E5EL;
    const uint16_t ****l_863[5][2][2] = {{{&g_862[4][1],&g_862[4][1]},{&g_862[4][1],&g_862[4][1]}},{{&g_862[4][1],&g_862[4][1]},{&g_862[4][1],&g_862[4][1]}},{{&g_862[4][1],&g_862[4][1]},{&g_862[4][1],&g_862[4][1]}},{{&g_862[4][1],&g_862[4][1]},{&g_862[4][1],&g_862[4][1]}},{{&g_862[4][1],&g_862[4][1]},{&g_862[4][1],&g_862[4][1]}}};
    const uint16_t ***l_864 = (void*)0;
    uint16_t *l_871 = (void*)0;
    uint16_t *l_872 = &g_233.f2;
    uint16_t *l_873 = &l_702.f1;
    uint64_t l_880 = 0xE2903F0516877944LL;
    struct S1 l_901 = {37};
    int32_t l_957 = 0xB46AA901L;
    union U3 l_1016 = {0};
    struct S0 l_1021[7][1][2] = {{{{85,81,470,398},{33,108,95,-86}}},{{{85,81,470,398},{46,-151,-60,-108}}},{{{1,-185,100,-270},{1,-185,100,-270}}},{{{46,-151,-60,-108},{85,81,470,398}}},{{{33,108,95,-86},{85,81,470,398}}},{{{46,-151,-60,-108},{1,-185,100,-270}}},{{{1,-185,100,-270},{46,-151,-60,-108}}}};
    int8_t l_1085 = 0xD0L;
    int32_t l_1177[7][6][4] = {{{0xF965CD9FL,0xD88BD83BL,2L,(-1L)},{7L,0xCB004FA4L,0L,0xD88BD83BL},{(-1L),0x86FD4036L,1L,0xBDFFE462L},{0x99DD0907L,1L,2L,2L},{(-5L),(-5L),0x6E44F53AL,(-1L)},{0xCB004FA4L,0x1979A18BL,6L,(-4L)}},{{0L,(-4L),0xF965CD9FL,6L},{0x96F04E96L,(-4L),0xF692F03AL,(-4L)},{(-4L),0x1979A18BL,0xCBDFD9FFL,(-1L)},{1L,(-5L),9L,2L},{1L,1L,(-4L),0xBDFFE462L},{(-1L),0x86FD4036L,5L,0xD88BD83BL}},{{2L,0xCB004FA4L,0x86FD4036L,(-1L)},{1L,0xD88BD83BL,(-5L),1L},{0x15024384L,0L,0xCBDFD9FFL,3L},{5L,(-1L),(-1L),0x99DD0907L},{0x96F04E96L,0xBDFFE462L,0L,7L},{(-4L),(-1L),6L,3L}},{{0L,(-4L),0L,0xCBDFD9FFL},{(-5L),0xD88BD83BL,0x63C5D380L,(-1L)},{7L,0L,1L,0xD88BD83BL},{0x1979A18BL,4L,1L,0x5FB22913L},{7L,1L,0x63C5D380L,(-1L)},{(-5L),0xF965CD9FL,0L,(-1L)}},{{0L,(-1L),6L,0L},{(-4L),(-4L),0L,1L},{0x96F04E96L,5L,(-1L),(-4L)},{5L,(-1L),0xCBDFD9FFL,0x1979A18BL},{0x15024384L,(-5L),(-5L),(-1L)},{1L,0x25496A03L,0x86FD4036L,0xBDFFE462L}},{{2L,4L,5L,9L},{(-1L),0xCB004FA4L,(-4L),(-1L)},{1L,9L,9L,1L},{1L,(-4L),0xCBDFD9FFL,1L},{(-4L),(-1L),0xF692F03AL,7L},{0x96F04E96L,0x5FB22913L,0xF965CD9FL,7L}},{{0L,(-1L),6L,1L},{0xCB004FA4L,(-4L),0x6E44F53AL,1L},{(-5L),9L,2L,(-1L)},{0x99DD0907L,0xCB004FA4L,1L,9L},{(-1L),4L,0L,(-1L)},{1L,0x3F3C7BCCL,0x09795579L,0xCBDFD9FFL}}};
    const union U4 *l_1213[7] = {(void*)0,&g_44,(void*)0,(void*)0,&g_44,(void*)0,(void*)0};
    const union U4 **l_1212 = &l_1213[3];
    const union U5 *l_1219 = &g_494;
    const union U5 **l_1218 = &l_1219;
    const union U5 ***l_1217[3][1][6] = {{{&l_1218,(void*)0,&l_1218,&l_1218,(void*)0,&l_1218}},{{&l_1218,&l_1218,&l_1218,(void*)0,&l_1218,&l_1218}},{{&l_1218,&l_1218,&l_1218,(void*)0,(void*)0,&l_1218}}};
    const union U2 * const **l_1285 = (void*)0;
    const union U2 * const ***l_1284 = &l_1285;
    struct S1 *l_1349[3][2] = {{&g_267,&g_267},{&g_267,&g_267},{&g_267,&g_267}};
    uint32_t l_1368[5] = {1UL,1UL,1UL,1UL,1UL};
    int i, j, k;
    for (g_629 = 0; (g_629 == 28); g_629 = safe_add_func_uint32_t_u_u(g_629, 3))
    { 
        int32_t **l_639[5][2][3];
        int32_t **l_640 = (void*)0;
        int32_t **l_641 = &g_341;
        int32_t **l_643[7];
        int32_t **l_644[5] = {&g_630,&g_630,&g_630,&g_630,&g_630};
        int32_t **l_645 = &g_630;
        struct S1 l_689[5] = {{-84},{-84},{-84},{-84},{-84}};
        int64_t *l_731 = (void*)0;
        uint16_t l_734 = 0UL;
        union U3 l_748 = {0};
        union U5 *l_754[4];
        union U5 **l_753[7][7] = {{(void*)0,(void*)0,(void*)0,&l_754[1],&l_754[1],&l_754[1],(void*)0},{(void*)0,(void*)0,(void*)0,&l_754[1],&l_754[1],&l_754[1],(void*)0},{(void*)0,(void*)0,(void*)0,&l_754[1],&l_754[1],&l_754[1],(void*)0},{(void*)0,(void*)0,(void*)0,&l_754[1],&l_754[1],&l_754[1],(void*)0},{(void*)0,(void*)0,(void*)0,&l_754[1],&l_754[1],&l_754[1],(void*)0},{(void*)0,(void*)0,(void*)0,&l_754[1],&l_754[1],&l_754[1],(void*)0},{(void*)0,(void*)0,(void*)0,&l_754[1],&l_754[1],&l_754[1],(void*)0}};
        int64_t l_834 = 0xF3B45A10B1D51FEDLL;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 3; k++)
                    l_639[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 7; i++)
            l_643[i] = &g_167[6][0];
        for (i = 0; i < 4; i++)
            l_754[i] = &l_728;
        (*l_641) = p_19;
        if (l_642)
            break;
        if ((*p_19))
            continue;
        (*l_645) = p_19;
        for (g_44.f2 = 0; (g_44.f2 > (-18)); g_44.f2 = safe_sub_func_uint32_t_u_u(g_44.f2, 7))
        { 
            uint32_t l_664[3][4][5] = {{{18446744073709551613UL,18446744073709551613UL,0x64B89D4DL,0UL,0xFEF89E56L},{3UL,0x6AB2FDDFL,0x6AB2FDDFL,3UL,18446744073709551613UL},{3UL,0UL,0x220E13DEL,0x220E13DEL,0UL},{18446744073709551613UL,0x6AB2FDDFL,0x220E13DEL,0x64B89D4DL,0x64B89D4DL}},{{0x6AB2FDDFL,18446744073709551613UL,0x6AB2FDDFL,0x220E13DEL,0x64B89D4DL},{0UL,3UL,0x64B89D4DL,3UL,0UL},{0x6AB2FDDFL,3UL,18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,0x64B89D4DL,0UL,0xFEF89E56L}},{{3UL,0x6AB2FDDFL,0x6AB2FDDFL,3UL,18446744073709551613UL},{3UL,0UL,0x220E13DEL,0x220E13DEL,0UL},{18446744073709551613UL,0x6AB2FDDFL,0x220E13DEL,0x64B89D4DL,0x64B89D4DL},{0x6AB2FDDFL,18446744073709551613UL,0x6AB2FDDFL,0x220E13DEL,0x64B89D4DL}}};
            const int8_t *l_686[4][2][6] = {{{&g_95,(void*)0,&g_95,(void*)0,&g_95,(void*)0},{&l_642,(void*)0,&l_642,(void*)0,&l_642,(void*)0}},{{&g_95,(void*)0,&g_95,(void*)0,&g_95,(void*)0},{&l_642,(void*)0,&l_642,(void*)0,&l_642,(void*)0}},{{&g_95,(void*)0,&g_95,(void*)0,&g_95,(void*)0},{&l_642,(void*)0,&l_642,(void*)0,&l_642,(void*)0}},{{&g_95,(void*)0,&g_95,(void*)0,&g_95,(void*)0},{&l_642,(void*)0,&l_642,(void*)0,&l_642,(void*)0}}};
            const int8_t **l_685 = &l_686[3][1][5];
            const int8_t ***l_684 = &l_685;
            const int8_t ****l_683[6][4] = {{&l_684,&l_684,&l_684,&l_684},{&l_684,&l_684,&l_684,&l_684},{(void*)0,&l_684,(void*)0,&l_684},{(void*)0,&l_684,&l_684,(void*)0},{&l_684,&l_684,&l_684,&l_684},{&l_684,&l_684,&l_684,&l_684}};
            int8_t l_687 = 0x81L;
            int32_t l_688 = 0x394015CCL;
            int64_t *l_727 = &g_31.f2;
            int8_t l_738 = 5L;
            struct S1 l_759[7][1][4] = {{{{-41},{-18},{-41},{-18}}},{{{-41},{-18},{-41},{-18}}},{{{-41},{-18},{-41},{-18}}},{{{-41},{-18},{-41},{-18}}},{{{-41},{-18},{-41},{-18}}},{{{-41},{-18},{-41},{-18}}},{{{-41},{-18},{-41},{-18}}}};
            int16_t *l_760 = (void*)0;
            int16_t *l_761[5];
            struct S0 l_762[6] = {{34,-25,-184,-24},{34,-25,-184,-24},{34,-25,-184,-24},{34,-25,-184,-24},{34,-25,-184,-24},{34,-25,-184,-24}};
            int32_t *l_792 = &l_688;
            const uint16_t **l_829 = (void*)0;
            int32_t l_835 = 0x09412CA4L;
            int32_t l_837[5][1] = {{0xE361757CL},{0xDCCBB74FL},{0xE361757CL},{0xDCCBB74FL},{0xE361757CL}};
            union U5 l_853 = {0};
            int32_t l_857 = 0x6C1F44FDL;
            uint64_t l_858[4][7][5] = {{{0x1B809427365F3D95LL,0x07A963CE53C52AA3LL,0x10A09DD874802FE2LL,0x0D5A69CA7DE5EED6LL,0x03B0C9294F709E12LL},{0x69B00F33ABA882D8LL,18446744073709551612UL,18446744073709551612UL,0x69B00F33ABA882D8LL,0x7DED8EDD87F0D046LL},{0xF2E1B5BAF1737747LL,1UL,0x116AE11A521399E1LL,0xF921A2DDECCDE769LL,0xACF6F2638AF3F365LL},{0UL,0UL,18446744073709551608UL,18446744073709551615UL,0x6A20BC1A0EE94E52LL},{0x0D5A69CA7DE5EED6LL,0xFBD2E75361097BBDLL,0x03B0C9294F709E12LL,0xF921A2DDECCDE769LL,1UL},{18446744073709551612UL,0x22DE728C0DD29439LL,0UL,0x69B00F33ABA882D8LL,0x4B7A7AF22CB73E9DLL},{5UL,1UL,0xDFC62886858BB542LL,0x0D5A69CA7DE5EED6LL,0x0D5A69CA7DE5EED6LL}},{{0xD89A6690625C8827LL,0x445CAD91F5EA86F8LL,0xD89A6690625C8827LL,18446744073709551615UL,0x237524F6208D0195LL},{0x07A963CE53C52AA3LL,5UL,0x38B1786752F82A39LL,0x0434CF79E01400D5LL,3UL},{0x3EE4283C1DA942C0LL,0UL,0x237524F6208D0195LL,1UL,0UL},{18446744073709551611UL,0xDFC62886858BB542LL,0x38B1786752F82A39LL,3UL,18446744073709551615UL},{0xA247F70623F40D0CLL,0x237524F6208D0195LL,0xD89A6690625C8827LL,18446744073709551608UL,0x2C34283905A7E566LL},{0UL,0x2DDAB0572AA27963LL,0xDFC62886858BB542LL,0xF2E1B5BAF1737747LL,0xDFC62886858BB542LL},{18446744073709551615UL,18446744073709551615UL,0UL,0xDDBE8A13E99B32C2LL,18446744073709551615UL}},{{0xF921A2DDECCDE769LL,0x29F093C86EAE05A9LL,0x03B0C9294F709E12LL,0x07A963CE53C52AA3LL,0x0C5ABE81C737680DLL},{0xDA8DFBBCA76A86FDLL,0x2B73576E322362DDLL,18446744073709551608UL,0x237524F6208D0195LL,0UL},{1UL,0x29F093C86EAE05A9LL,0x116AE11A521399E1LL,0x03B0C9294F709E12LL,0UL},{0xD508EB5DF5A3132BLL,18446744073709551615UL,18446744073709551612UL,0x6A20BC1A0EE94E52LL,0x3EE4283C1DA942C0LL},{0x116AE11A521399E1LL,0x2DDAB0572AA27963LL,0x10A09DD874802FE2LL,0x10A09DD874802FE2LL,0x2DDAB0572AA27963LL},{0UL,0x237524F6208D0195LL,0x2B73576E322362DDLL,2UL,18446744073709551608UL},{0xACF6F2638AF3F365LL,0xDFC62886858BB542LL,0UL,0UL,0x10A09DD874802FE2LL}},{{18446744073709551615UL,0UL,2UL,18446744073709551612UL,0UL},{0xACF6F2638AF3F365LL,1UL,0x182B4C6D4DC6E781LL,0xFBD2E75361097BBDLL,1UL},{0x445CAD91F5EA86F8LL,0x6A20BC1A0EE94E52LL,0x22DE728C0DD29439LL,2UL,0x237524F6208D0195LL},{0xF2E1B5BAF1737747LL,18446744073709551615UL,0x0434CF79E01400D5LL,18446744073709551615UL,0xF2E1B5BAF1737747LL},{0x172A49548756AD57LL,18446744073709551615UL,2UL,2UL,0UL},{18446744073709551615UL,0x2DDAB0572AA27963LL,18446744073709551608UL,0xACF6F2638AF3F365LL,0x116AE11A521399E1LL},{0x4B7A7AF22CB73E9DLL,0UL,0x2C34283905A7E566LL,18446744073709551615UL,0UL}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_761[i] = &g_730;
            l_648 = l_648;
            for (g_230 = 0; (g_230 <= 1); g_230 += 1)
            { 
                int32_t l_739 = 0x88BC6738L;
                int i, j, k;
                if (((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((-6L), (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((void*)0 != l_659), 3)), ((p_19 == p_19) >= (0x4B3F4C7F3D2D1263LL == (safe_rshift_func_int16_t_s_u(p_18, (*g_386))))))) && g_50) != 0UL))), l_664[1][0][4])) >= g_29.f0), 7)) >= 0x3052DFBFAFEE3093LL))
                { 
                    if (l_664[1][0][4])
                        break;
                }
                else
                { 
                    int8_t ***l_666 = &g_381;
                    int8_t ****l_665 = &l_666;
                    struct S1 *l_691 = &l_689[3];
                    (*l_665) = &g_381;
                    l_688 = (safe_mul_func_uint16_t_u_u((~(((*l_648) > ((safe_div_func_int16_t_s_s(((~(safe_add_func_uint32_t_u_u(((((((safe_add_func_int32_t_s_s(((safe_div_func_int64_t_s_s((((safe_mod_func_uint8_t_u_u(((((p_18 == 8UL) , ((g_80 <= (safe_unary_minus_func_int8_t_s((+p_22)))) < 3L)) == (l_683[0][2] != (void*)0)) <= 0L), l_687)) != p_22) != g_44.f0), g_339)) | 2L), (-10L))) <= 0xDDD7L) >= 2UL) && p_22) > 0xCCL) && (*g_228)), 0x06D36443L))) == 0xC9656FD60F0D664ELL), 0x4D83L)) != 0x4C36L)) || p_22)), p_20));
                    (*l_691) = (g_217 , ((l_689[0] , (l_690 , ((*g_32) , p_18))) , g_267));
                }
                for (l_690.f0 = 0; (l_690.f0 <= 1); l_690.f0 += 1)
                { 
                    int8_t l_705[4][1];
                    uint8_t *l_706 = (void*)0;
                    uint8_t *l_707[3][1][6] = {{{&g_629,&g_629,&g_233.f1,&g_233.f1,&g_629,&g_629}},{{&g_629,&g_233.f1,&g_233.f1,&g_629,&g_629,&g_233.f1}},{{&g_629,&g_629,&g_233.f1,&g_233.f1,&g_629,&g_629}}};
                    uint32_t *l_708 = (void*)0;
                    uint32_t *l_709 = (void*)0;
                    uint32_t *l_710 = &g_50;
                    int32_t l_714 = (-1L);
                    int64_t *l_725 = &g_44.f2;
                    int64_t **l_726[1];
                    int16_t *l_729 = &g_730;
                    uint64_t *l_735 = (void*)0;
                    uint64_t *l_736 = &g_737[3];
                    int32_t l_740[5];
                    struct S0 *l_741 = &g_742;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_705[i][j] = (-4L);
                    }
                    for (i = 0; i < 1; i++)
                        l_726[i] = &l_725;
                    for (i = 0; i < 5; i++)
                        l_740[i] = 0xE2B94AA1L;
                    l_714 = ((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint32_t_u_u(((*l_710) = (safe_add_func_uint16_t_u_u((l_688 = (l_702 , (~g_80))), (safe_unary_minus_func_int64_t_s(((g_144 = (l_705[0][0] , p_22)) , g_437[4].f1)))))), (((*g_228) <= (safe_add_func_uint16_t_u_u((+0x03L), l_664[1][0][4]))) > l_687))), 6)), 5L)), g_44.f0)) >= 1L);
                    l_740[0] = (l_714 = ((*g_228) != ((safe_div_func_int8_t_s_s(((((((*l_736) ^= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(p_20, ((l_727 = l_725) != ((l_728 , ((*l_729) ^= g_217.f3)) , l_731)))) || (((*g_630) = (((safe_add_func_int64_t_s_s(((l_734 ^ l_688) == 0xC9L), (**l_641))) ^ g_437[4].f1) ^ 9L)) ^ l_705[0][0])), (**g_381))) != 0x7EEDF8D2B177E483LL), 6)), 0xDFBBA3C4L))) ^ 9L) & l_738) & l_739) == g_144), g_229)) != 0xCFL)));
                    (*l_741) = g_217;
                }
            }
            (*g_613) = (*g_613);
            if (((((safe_lshift_func_int16_t_s_u((((l_759[4][0][3].f0 = (p_18 = ((+((safe_mul_func_uint16_t_u_u(((*g_228) || ((l_688 &= ((l_748 , (safe_div_func_int64_t_s_s(((((g_437[4].f1 |= (*g_386)) == (safe_lshift_func_int16_t_s_s(((void*)0 == l_753[5][6]), l_738))) ^ (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((((l_759[4][0][3] , (*l_648)) != p_22) != p_20), (*p_19))) & g_31.f1), 4))) , g_31.f0), p_22))) >= 0xBCD0L)) | (*g_228))), p_20)) , 18446744073709551608UL)) <= 0UL))) < 0x1082L) >= g_189.f2), (*l_648))) && p_22) , (*g_228)) != p_22))
            { 
                struct S0 *l_763[3];
                int32_t l_785 = 0L;
                union U4 *l_786[7][4] = {{&g_189,&g_189,&l_690,&g_31},{&g_31,&g_44,&l_690,&g_44},{&g_189,&l_690,&g_31,&l_690},{&g_44,&l_690,&l_690,&g_44},{&l_690,&g_44,&g_189,&g_31},{&l_690,&g_189,&l_690,&g_31},{&g_44,&g_31,&g_31,&g_31}};
                uint32_t ***l_790 = &g_788[1];
                int32_t *l_793 = (void*)0;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_763[i] = &l_762[4];
                g_742 = l_762[4];
                for (p_20 = (-29); (p_20 < 2); p_20 = safe_add_func_int32_t_s_s(p_20, 6))
                { 
                    int32_t **l_766[2][4];
                    int32_t **l_767 = &l_648;
                    uint16_t *l_774 = &g_233.f2;
                    uint16_t *l_775 = &l_702.f1;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_766[i][j] = &g_167[6][0];
                    }
                    (*g_341) &= ((void*)0 != &g_562);
                    (*l_767) = p_19;
                    (*l_648) = (safe_mod_func_int32_t_s_s(((((*g_382) = (safe_mul_func_uint16_t_u_u((*g_386), (g_267 , (safe_rshift_func_uint16_t_u_u(((*l_775)++), (safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s(2L, (safe_add_func_uint8_t_u_u(((0UL & (g_217.f3 , 0xE3CDL)) < (((safe_unary_minus_func_uint8_t_u(250UL)) , g_386) != (void*)0)), 0x4CL)))), l_762[4].f2)))))))) != g_29.f2) , 1L), (*p_19)));
                    if (l_785)
                        continue;
                }
                for (g_95 = 5; (g_95 >= 0); g_95 -= 1)
                { 
                    int32_t *l_791 = &g_29.f0;
                    g_188 = l_786[2][3];
                    l_790 = g_787;
                    l_793 = (l_792 = l_791);
                    return (*g_789);
                }
            }
            else
            { 
                uint64_t l_814 = 0x6B85C8864BDEB1DCLL;
                int32_t l_816 = (-3L);
                int32_t l_817[6];
                int8_t l_833 = 0xDBL;
                uint8_t l_843[2];
                struct S0 l_854 = {55,-181,-461,-494};
                int i;
                for (i = 0; i < 6; i++)
                    l_817[i] = 0x43C3E4B5L;
                for (i = 0; i < 2; i++)
                    l_843[i] = 0xF0L;
                if ((g_494 , (*p_19)))
                { 
                    uint64_t l_807 = 0x272E02883BE466BDLL;
                    int64_t *l_815 = &l_690.f2;
                    l_817[0] &= (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((*g_386), (((*g_386) || (((safe_lshift_func_int16_t_s_u(((((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((*l_792), ((*l_815) = ((safe_unary_minus_func_uint32_t_u(((*l_648) = l_807))) <= (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s(((l_814 = (((0x067922546A9703C9LL > (*g_228)) > (safe_add_func_int8_t_s_s(((((0x969D2E673AC6DC0CLL == p_18) == l_807) & g_742.f1) > p_22), 0x64L))) >= (*g_382))) < p_20), 11)) & l_807) , p_20), (*g_382))))))), l_816)) <= 0x1BL) >= g_50) < 0x04L), p_20)) >= p_20) >= l_807)) ^ 0x3C15ADEB1905BF28LL))), 4));
                    (*l_792) &= (*p_19);
                }
                else
                { 
                    union U2 l_824 = {0x92D79CD4L};
                    uint64_t l_827 = 18446744073709551614UL;
                    const uint16_t ***l_830 = (void*)0;
                    g_828 = ((**l_641) = (((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_217 , (*g_382)), (l_728 , p_22))), (l_824 , (g_742.f3 , ((safe_lshift_func_uint8_t_u_u(0xFFL, 4)) ^ (*l_792)))))), p_20)) <= (***g_787)) || l_827));
                    g_831 = l_829;
                    (*p_19) = (*p_19);
                    return p_18;
                }
                --l_843[1];
                for (g_230 = 0; (g_230 <= 2); g_230 += 1)
                { 
                    int32_t ** const ***l_846 = &g_613;
                    uint64_t l_855 = 18446744073709551611UL;
                    uint16_t *l_856[3][1][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_856[i][j][k] = &l_734;
                        }
                    }
                    (**l_641) ^= l_664[g_230][g_230][(g_230 + 1)];
                    (*l_846) = &g_614;
                    (*g_438) = (((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_22, (*g_832))), (l_853 , 0xADL))), (((((((*g_228) > ((**g_831) && (l_857 &= ((l_854 , l_855) <= 0x1CL)))) | 0xA3L) & 7L) , &l_762[4]) != (void*)0) , 0x95L))) && l_858[2][5][4]) , (void*)0);
                }
            }
        }
    }
    if ((((!(safe_add_func_int8_t_s_s(((l_864 = g_862[4][1]) != &g_831), (safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_22, 0x986977B12FDEE42ELL)), ((*l_873) ^= ((*g_386)--))))))) != (0UL <= ((g_95 >= ((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(1UL, (*l_648))), (*l_648))), g_229)) || p_20)) & (*l_648)))) <= l_880))
    { 
        int64_t l_892 = 0x19A95F7839E82C66LL;
        int32_t l_894 = 0x928EA361L;
        int32_t **** const l_909 = (void*)0;
        uint16_t *l_930[6] = {&g_889,&g_889,&g_889,&g_889,&g_889,&g_889};
        int32_t l_934[2];
        int i;
        for (i = 0; i < 2; i++)
            l_934[i] = 0L;
        for (g_730 = 0; (g_730 <= 5); g_730 += 1)
        { 
            int32_t *l_890 = &l_838;
            int32_t l_895 = 6L;
            struct S1 l_902[2] = {{82},{82}};
            struct S0 * const l_912[1][5][3] = {{{&g_742,&g_742,&g_742},{&g_742,&g_742,&g_742},{&g_742,&g_742,&g_742},{&g_742,&g_742,&g_742},{&g_742,&g_742,&g_742}}};
            union U4 *l_920 = &g_44;
            struct S1 l_929 = {39};
            uint16_t *l_931[7][7][5] = {{{(void*)0,&g_437[4].f1,(void*)0,&l_702.f1,&g_889},{&l_702.f1,&g_29.f1,&g_29.f1,&l_702.f1,(void*)0},{&g_889,&g_29.f1,&g_437[4].f1,&l_702.f1,(void*)0},{&l_702.f1,&g_889,&g_889,&l_702.f1,&l_702.f1},{&g_437[4].f1,&g_437[4].f1,(void*)0,&l_702.f1,&g_437[4].f1},{&l_702.f1,&l_702.f1,&g_889,&l_702.f1,&l_702.f1},{&g_889,(void*)0,&g_437[4].f1,&l_702.f1,&g_889}},{{&g_889,&g_889,(void*)0,&l_702.f1,&g_889},{&g_29.f1,&g_29.f1,(void*)0,&l_702.f1,&g_437[4].f1},{&g_889,(void*)0,&l_702.f1,&l_702.f1,&g_437[4].f1},{(void*)0,&g_437[4].f1,(void*)0,&l_702.f1,&g_889},{&l_702.f1,&g_29.f1,&g_29.f1,&l_702.f1,(void*)0},{&g_889,&g_29.f1,&g_437[4].f1,&l_702.f1,(void*)0},{&l_702.f1,&g_889,&g_889,&l_702.f1,&l_702.f1}},{{&g_437[4].f1,&g_437[4].f1,(void*)0,&l_702.f1,&g_437[4].f1},{&l_702.f1,&l_702.f1,&g_889,&l_702.f1,&l_702.f1},{&g_889,(void*)0,&g_437[4].f1,&l_702.f1,&g_889},{&g_889,&g_889,(void*)0,&l_702.f1,&g_889},{&g_29.f1,&g_29.f1,(void*)0,&l_702.f1,(void*)0},{&l_702.f1,&l_702.f1,&g_889,&g_437[4].f1,&g_889},{&l_702.f1,&l_702.f1,&g_437[4].f1,&l_702.f1,&g_29.f1}},{{&g_437[4].f1,&l_702.f1,&l_702.f1,&g_437[4].f1,(void*)0},{&g_29.f1,&l_702.f1,&g_29.f1,&l_702.f1,(void*)0},{(void*)0,&g_889,&l_702.f1,&g_437[4].f1,&g_437[4].f1},{&g_29.f1,(void*)0,&g_889,&l_702.f1,&g_29.f1},{&g_437[4].f1,&g_889,&g_889,&g_437[4].f1,&l_702.f1},{&g_29.f1,&l_702.f1,&g_889,&l_702.f1,&g_29.f1},{&l_702.f1,&l_702.f1,&l_702.f1,&g_437[4].f1,(void*)0}},{{&g_889,(void*)0,(void*)0,&l_702.f1,(void*)0},{&l_702.f1,&l_702.f1,&g_889,&g_437[4].f1,&g_889},{&l_702.f1,&l_702.f1,&g_437[4].f1,&l_702.f1,&g_29.f1},{&g_437[4].f1,&l_702.f1,&l_702.f1,&g_437[4].f1,(void*)0},{&g_29.f1,&l_702.f1,&g_29.f1,&l_702.f1,(void*)0},{(void*)0,&g_889,&l_702.f1,&g_437[4].f1,&g_437[4].f1},{&g_29.f1,(void*)0,&g_889,&l_702.f1,&g_29.f1}},{{&g_437[4].f1,&g_889,&g_889,&g_437[4].f1,&l_702.f1},{&g_29.f1,&l_702.f1,&g_889,&l_702.f1,&g_29.f1},{&l_702.f1,&l_702.f1,&l_702.f1,&g_437[4].f1,(void*)0},{&g_889,(void*)0,(void*)0,&l_702.f1,(void*)0},{&l_702.f1,&l_702.f1,&g_889,&g_437[4].f1,&g_889},{&l_702.f1,&l_702.f1,&g_437[4].f1,&l_702.f1,&g_29.f1},{&g_437[4].f1,&l_702.f1,&l_702.f1,&g_437[4].f1,(void*)0}},{{&g_29.f1,&l_702.f1,&g_29.f1,&l_702.f1,(void*)0},{(void*)0,&g_889,&l_702.f1,&g_437[4].f1,&g_437[4].f1},{&g_29.f1,(void*)0,&g_889,&l_702.f1,&g_29.f1},{&g_437[4].f1,&g_889,&g_889,&g_437[4].f1,&l_702.f1},{&g_29.f1,&l_702.f1,&g_889,&l_702.f1,&g_29.f1},{&l_702.f1,&l_702.f1,&l_702.f1,&g_437[4].f1,(void*)0},{&g_889,(void*)0,(void*)0,&l_702.f1,(void*)0}}};
            int32_t l_935 = (-1L);
            int32_t l_936 = 0x3D63CB1DL;
            int32_t l_937[6][1];
            int8_t l_941 = 0x43L;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_937[i][j] = 0x2097B363L;
            }
        }
    }
    else
    { 
        int64_t l_1034 = 0x3576EF724A8AA207LL;
        int64_t l_1036 = 0x2212A5EAAFC363F1LL;
        int32_t l_1040 = 0x6790C23AL;
        uint16_t l_1057[3];
        union U3 *l_1065 = &l_1016;
        int32_t l_1094 = 0xE2E783FDL;
        int32_t l_1096 = 1L;
        int32_t l_1100 = 5L;
        int32_t l_1103 = (-1L);
        int32_t l_1104 = 0x1AD2C1D6L;
        int32_t l_1105 = 0x2B351E12L;
        uint16_t l_1106 = 0UL;
        int32_t l_1200 = 0x7F77359FL;
        int64_t *l_1243 = (void*)0;
        int64_t **l_1242 = &l_1243;
        int64_t ***l_1241 = &l_1242;
        union U4 l_1274[6] = {{0L},{0L},{0L},{0L},{0L},{0L}};
        int32_t *l_1286 = (void*)0;
        const uint8_t l_1296 = 0x4CL;
        uint16_t **l_1303 = (void*)0;
        int32_t l_1322 = 4L;
        int32_t l_1323 = 0xAFB5D336L;
        int32_t l_1324 = 0L;
        int32_t l_1325 = (-9L);
        int32_t l_1326 = 9L;
        int8_t l_1327 = 0x7CL;
        int32_t l_1328 = (-6L);
        int64_t **l_1363 = (void*)0;
        uint64_t l_1371 = 0UL;
        struct S0 l_1394 = {49,-142,637,306};
        int i;
        for (i = 0; i < 3; i++)
            l_1057[i] = 6UL;
        for (l_702.f0 = 0; (l_702.f0 >= 14); ++l_702.f0)
        { 
            int64_t *l_1026 = &l_690.f0;
            int32_t l_1033 = 1L;
            int16_t *l_1035[2];
            int32_t l_1037 = 0xDAA66536L;
            int32_t *l_1038 = &g_828;
            union U4 *l_1039 = &g_189;
            union U3 *l_1063 = &g_233;
            int32_t l_1092 = (-8L);
            int32_t l_1095 = 1L;
            union U5 *l_1115 = &g_126;
            union U5 **l_1114 = &l_1115;
            int16_t l_1197 = (-6L);
            int32_t l_1205[5] = {0x88EBCC09L,0x88EBCC09L,0x88EBCC09L,0x88EBCC09L,0x88EBCC09L};
            int16_t l_1220 = (-1L);
            uint32_t l_1222 = 0xC02364D3L;
            int64_t l_1264 = 0L;
            uint32_t l_1265 = 4UL;
            struct S1 l_1287 = {-31};
            int32_t l_1290[2];
            int32_t **l_1304 = (void*)0;
            int32_t **l_1305 = &g_630;
            int64_t l_1310 = 0x0B2CFC9C09AA10A4LL;
            int64_t ***l_1311[1][5];
            int64_t *** const l_1312 = &l_1242;
            int64_t l_1367 = 0x395AA75AE02DBC93LL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1035[i] = &g_730;
            for (i = 0; i < 2; i++)
                l_1290[i] = 0xA8DE0036L;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1311[i][j] = (void*)0;
            }
        }
    }
    return (*l_648);
}



static int16_t  func_26(int32_t * p_27, union U2  p_28)
{ 
    union U4 *l_30[7] = {&g_31,&g_31,&g_31,&g_31,&g_31,&g_31,&g_31};
    int32_t l_35 = 0x005D9C72L;
    int32_t *l_631 = (void*)0;
    int i;
    g_32 = l_30[3];
    l_631 = func_33(l_35);
    (*g_630) = (*l_631);
    (*g_341) &= (p_28.f1 ^ (*l_631));
    return g_31.f0;
}



static int32_t * func_33(int16_t  p_34)
{ 
    uint32_t l_36[4][2][1] = {{{0xD17CD953L},{0UL}},{{0xD17CD953L},{0UL}},{{0xD17CD953L},{0UL}},{{0xD17CD953L},{0UL}}};
    union U4 *l_43[7][5] = {{&g_44,&g_44,&g_44,&g_44,&g_44},{&g_44,&g_44,&g_44,&g_44,&g_44},{&g_44,&g_44,&g_44,&g_44,&g_44},{&g_44,&g_44,&g_44,&g_44,&g_44},{&g_44,&g_44,&g_44,&g_44,&g_44},{&g_44,&g_44,&g_44,&g_44,&g_44},{&g_44,&g_44,&g_44,&g_44,&g_44}};
    int32_t *l_45 = &g_29.f0;
    int32_t **l_85 = &l_45;
    union U2 l_87 = {0x26825732L};
    union U5 *l_125 = &g_126;
    int16_t l_130 = 0xD525L;
    int32_t l_131 = 0x0901DBA8L;
    int32_t l_192 = 0L;
    int32_t l_193 = 1L;
    int32_t l_194[6][1][1] = {{{0L}},{{(-10L)}},{{0L}},{{(-10L)}},{{0L}},{{(-10L)}}};
    uint64_t l_195 = 0UL;
    uint8_t l_253 = 0UL;
    const union U3 l_287 = {0};
    uint8_t l_290 = 255UL;
    int32_t l_309 = 0x870CEF40L;
    union U2 *l_370 = (void*)0;
    union U2 ** const l_369[7] = {&l_370,&l_370,&l_370,&l_370,&l_370,&l_370,&l_370};
    uint8_t l_392 = 0UL;
    int16_t l_441 = 0xC0E1L;
    struct S0 l_469 = {74,84,-620,39};
    uint8_t l_545 = 0x00L;
    struct S1 l_551[7][1][1] = {{{{-40}}},{{{54}}},{{{-40}}},{{{54}}},{{{-40}}},{{{54}}},{{{-40}}}};
    int32_t l_558[4] = {(-3L),(-3L),(-3L),(-3L)};
    int8_t l_587 = 0xACL;
    int8_t l_616 = (-8L);
    const struct S0 *l_618 = &l_469;
    int32_t ***l_619 = &g_563[0];
    int i, j, k;
    for (g_29.f0 = 0; (g_29.f0 <= 0); g_29.f0 += 1)
    { 
        union U4 l_41 = {-4L};
        union U4 **l_42 = &g_32;
        int32_t **l_82 = &l_45;
        int32_t *l_83 = &g_31.f1;
    }
    (*l_85) = l_45;
    return g_630;
}



static int32_t * func_37(int32_t * p_38, union U4 * p_39, int32_t * p_40)
{ 
    union U4 **l_46 = (void*)0;
    union U4 **l_47 = &g_32;
    int16_t l_48[4][5] = {{0xBFB4L,0xBFB4L,0xBFB4L,0xBFB4L,0xBFB4L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xBFB4L,0xBFB4L,0xBFB4L,0xBFB4L,0xBFB4L},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
    struct S1 l_77 = {-63};
    int32_t *l_81 = &g_29.f0;
    int i, j;
    (*l_47) = (void*)0;
    for (g_44.f1 = 0; (g_44.f1 <= 3); g_44.f1 += 1)
    { 
        uint32_t *l_49 = &g_50;
        int32_t l_59[7][7] = {{(-1L),0x05B3B6ACL,0x7A3EBEF2L,(-1L),0L,(-1L),0x7A3EBEF2L},{0xD34437F0L,0xD34437F0L,0L,5L,0x05B3B6ACL,(-1L),0xD34437F0L},{0xD34437F0L,0x7A3EBEF2L,0xCB0B9D62L,0x05B3B6ACL,0xF5774D2AL,0xF5774D2AL,0x05B3B6ACL},{(-1L),0L,(-1L),0x7A3EBEF2L,0x05B3B6ACL,(-1L),0L},{0x05B3B6ACL,0L,0L,5L,0L,0L,0L},{1L,0x7A3EBEF2L,0x7A3EBEF2L,1L,0L,(-1L),0x05B3B6ACL},{0xF5774D2AL,0xD34437F0L,0x7A3EBEF2L,0xCB0B9D62L,0x05B3B6ACL,0xF5774D2AL,0xF5774D2AL}};
        int32_t *l_64 = &g_31.f1;
        int32_t l_78[2][4] = {{(-1L),(-1L),0xE53FD177L,(-1L)},{(-1L),0xAFE108D8L,0xAFE108D8L,(-1L)}};
        int i, j;
        (*l_64) = (((*l_49)++) && (safe_add_func_int32_t_s_s(g_29.f2, (safe_rshift_func_int16_t_s_u(g_31.f1, ((safe_add_func_int16_t_s_s((l_48[1][3] , l_59[5][2]), (safe_mod_func_int32_t_s_s(0x52F109D4L, l_48[1][2])))) == (((safe_div_func_uint16_t_u_u(((18446744073709551615UL >= l_48[2][0]) && 1L), 7L)) >= g_44.f1) , 4294967295UL)))))));
        for (g_31.f1 = 0; (g_31.f1 <= 3); g_31.f1 += 1)
        { 
            int32_t *l_79 = &g_80;
            int i, j;
            (*l_79) = (safe_div_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((l_48[g_44.f1][g_44.f1] != (safe_mul_func_int16_t_s_s(((0x53F201F9D99D06D0LL || (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((((&p_39 == &g_32) , ((*l_49) = (safe_add_func_int16_t_s_s(0x140BL, (&g_32 != (l_77 , &p_39)))))) ^ 0x3BF156DEL) | l_48[3][3]), (*l_64))), 0xC7L))) , (-7L)), 9L))) , l_78[1][0]), 0x7F17E9BB10DA9BE8LL)) && l_48[2][3]), (*l_64)));
            if ((*l_64))
                continue;
        }
    }
    return l_81;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
    transparent_crc(g_29.f3, "g_29.f3", print_hash_value);
    transparent_crc(g_29.f4, "g_29.f4", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_44.f1, "g_44.f1", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_217.f0, "g_217.f0", print_hash_value);
    transparent_crc(g_217.f1, "g_217.f1", print_hash_value);
    transparent_crc(g_217.f2, "g_217.f2", print_hash_value);
    transparent_crc(g_217.f3, "g_217.f3", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_267.f0, "g_267.f0", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_437[i].f0, "g_437[i].f0", print_hash_value);
        transparent_crc(g_437[i].f1, "g_437[i].f1", print_hash_value);
        transparent_crc(g_437[i].f2, "g_437[i].f2", print_hash_value);
        transparent_crc(g_437[i].f3, "g_437[i].f3", print_hash_value);
        transparent_crc(g_437[i].f4, "g_437[i].f4", print_hash_value);

    }
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_737[i], "g_737[i]", print_hash_value);

    }
    transparent_crc(g_742.f0, "g_742.f0", print_hash_value);
    transparent_crc(g_742.f1, "g_742.f1", print_hash_value);
    transparent_crc(g_742.f2, "g_742.f2", print_hash_value);
    transparent_crc(g_742.f3, "g_742.f3", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_883.f0, "g_883.f0", print_hash_value);
    transparent_crc(g_885.f0, "g_885.f0", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    transparent_crc(g_1539, "g_1539", print_hash_value);
    transparent_crc(g_1631, "g_1631", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1673[i], "g_1673[i]", print_hash_value);

    }
    transparent_crc(g_1681, "g_1681", print_hash_value);
    transparent_crc(g_1770, "g_1770", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
