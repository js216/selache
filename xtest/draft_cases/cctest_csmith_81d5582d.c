// SPDX-License-Identifier: MIT
// cctest_csmith_81d5582d.c --- cctest case csmith_81d5582d (csmith seed 2178242605)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbf81ed67 */

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

// Options:   -s 2178242605 -o /tmp/csmith_gen_e495xaxn/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   unsigned f0 : 21;
   unsigned f1 : 24;
   signed f2 : 27;
   signed f3 : 26;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 21;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   uint8_t  f1;
   int16_t  f2;
   uint8_t  f3;
};


static uint16_t g_13 = 0x6E6AL;
static int32_t g_22 = (-2L);
static int8_t g_33[3] = {1L,1L,1L};
static uint32_t g_74 = 4294967294UL;
static int64_t g_78 = 1L;
static struct S0 g_79 = {1178,97,-1209,-1423};
static int32_t g_81 = 1L;
static uint64_t g_82 = 0xB476018F8C21E6DBLL;
static int8_t g_85 = 0x6EL;
static int64_t g_86 = 0xEFDC0328A1E48BA3LL;
static uint8_t g_87 = 255UL;
static uint32_t g_90 = 4UL;
static int64_t *g_105[4][5][3] = {{{&g_86,(void*)0,&g_86},{&g_86,&g_78,&g_78},{(void*)0,(void*)0,(void*)0},{&g_86,&g_78,&g_78},{&g_86,(void*)0,&g_86}},{{&g_86,&g_78,&g_78},{(void*)0,(void*)0,(void*)0},{&g_86,&g_78,&g_78},{&g_86,(void*)0,&g_86},{&g_86,&g_78,&g_78}},{{(void*)0,(void*)0,(void*)0},{&g_86,&g_78,&g_78},{&g_86,(void*)0,&g_86},{&g_86,&g_78,&g_78},{(void*)0,&g_78,&g_86}},{{&g_78,&g_78,&g_86},{&g_86,&g_78,&g_86},{&g_78,&g_86,&g_86},{&g_86,&g_78,&g_86},{&g_78,&g_78,&g_86}}};
static int32_t *g_112[2][4][1] = {{{&g_22},{(void*)0},{&g_22},{(void*)0}},{{&g_22},{(void*)0},{&g_22},{(void*)0}}};
static int32_t g_125 = 0x660C04CDL;
static const int32_t g_146 = (-10L);
static struct S1 g_159 = {997};
static struct S1 *g_158 = &g_159;
static uint8_t **g_163 = (void*)0;
static int16_t g_188 = 0x68D1L;
static union U2 g_236 = {0x5AC4C825L};
static union U2 *g_238 = (void*)0;
static int64_t g_259 = 1L;
static int32_t g_289 = (-10L);
static const int32_t g_327[7][7] = {{0x0084AF5CL,1L,0x0084AF5CL,0L,0xC6A1D4F5L,0xC6A1D4F5L,0L},{0xE49E45B5L,2L,0xE49E45B5L,(-7L),(-8L),(-8L),(-7L)},{0x0084AF5CL,1L,0x0084AF5CL,0L,0xC6A1D4F5L,0xC6A1D4F5L,0L},{0xE49E45B5L,2L,0xE49E45B5L,(-7L),(-8L),(-8L),(-7L)},{0x0084AF5CL,1L,0x0084AF5CL,0L,0xC6A1D4F5L,0xC6A1D4F5L,0L},{0xE49E45B5L,2L,0xE49E45B5L,(-7L),(-8L),(-8L),(-7L)},{0x0084AF5CL,1L,0x0084AF5CL,0L,0xC6A1D4F5L,0xC6A1D4F5L,0L}};
static int8_t g_361[2] = {(-1L),(-1L)};
static uint64_t g_393 = 0xEE4E84F6D5A5E065LL;
static uint8_t g_411 = 0x09L;
static uint32_t g_510[5] = {0x57ED5205L,0x57ED5205L,0x57ED5205L,0x57ED5205L,0x57ED5205L};
static uint8_t g_540[3] = {0UL,0UL,0UL};
static uint8_t * const *g_541 = (void*)0;
static int64_t *g_581 = (void*)0;
static int16_t g_722[7] = {0x6B45L,0x6B45L,0x6B45L,0x6B45L,0x6B45L,0x6B45L,0x6B45L};
static uint8_t g_741 = 0xFAL;
static uint16_t g_744[5][7] = {{0x1610L,0UL,0UL,0x1610L,0x0E2FL,0x5FD7L,1UL},{0x5FD7L,0UL,1UL,0UL,1UL,0x0E2FL,0UL},{1UL,65534UL,0x5FD7L,0x60E4L,0x5FD7L,65534UL,1UL},{4UL,0x60E4L,65534UL,0UL,0x5FD7L,65534UL,0UL},{65531UL,65534UL,0UL,0x5FD7L,1UL,1UL,0x5FD7L}};
static uint8_t g_774 = 0UL;
static int64_t **g_827 = &g_105[1][2][2];
static int64_t ***g_826[4][6][4] = {{{&g_827,&g_827,&g_827,(void*)0},{&g_827,&g_827,&g_827,&g_827},{&g_827,&g_827,(void*)0,&g_827},{(void*)0,&g_827,(void*)0,&g_827},{&g_827,&g_827,&g_827,&g_827},{&g_827,(void*)0,&g_827,&g_827}},{{&g_827,&g_827,&g_827,&g_827},{&g_827,(void*)0,&g_827,&g_827},{&g_827,&g_827,&g_827,&g_827},{&g_827,(void*)0,&g_827,&g_827},{&g_827,&g_827,&g_827,&g_827},{(void*)0,&g_827,&g_827,&g_827}},{{(void*)0,&g_827,&g_827,&g_827},{&g_827,&g_827,&g_827,(void*)0},{&g_827,&g_827,&g_827,(void*)0},{&g_827,&g_827,&g_827,&g_827},{&g_827,&g_827,&g_827,&g_827},{&g_827,&g_827,&g_827,&g_827}},{{&g_827,&g_827,&g_827,&g_827},{&g_827,&g_827,&g_827,&g_827},{&g_827,(void*)0,&g_827,&g_827},{&g_827,&g_827,&g_827,&g_827},{&g_827,&g_827,&g_827,&g_827},{&g_827,&g_827,&g_827,(void*)0}}};
static int32_t g_834 = 0xD8903F8DL;
static uint8_t g_884 = 0xC9L;
static uint32_t *g_932[4] = {&g_74,&g_74,&g_74,&g_74};
static uint32_t **g_931 = &g_932[0];
static const int32_t g_971 = 0x95F80D0DL;
static const int32_t *g_970 = &g_971;
static const int32_t *g_972 = &g_834;
static uint64_t g_974 = 18446744073709551612UL;
static int32_t g_989 = 0xA04855A1L;
static struct S1 **g_1001[4] = {&g_158,&g_158,&g_158,&g_158};
static uint64_t g_1076 = 0UL;
static uint32_t ***g_1081 = &g_931;
static uint32_t ****g_1080 = &g_1081;
static struct S1 *****g_1083 = (void*)0;
static int16_t *g_1310 = &g_188;
static int16_t **g_1309[3][7] = {{(void*)0,&g_1310,&g_1310,&g_1310,(void*)0,(void*)0,&g_1310},{&g_1310,&g_1310,&g_1310,&g_1310,&g_1310,&g_1310,&g_1310},{&g_1310,&g_1310,&g_1310,&g_1310,&g_1310,&g_1310,&g_1310}};
static int16_t ***g_1308 = &g_1309[1][1];
static int8_t **g_1347 = (void*)0;
static const uint32_t g_1523 = 4UL;
static uint8_t *g_1625 = &g_236.f3;
static uint8_t **g_1624 = &g_1625;
static int16_t ****g_1718[3][3][2] = {{{&g_1308,&g_1308},{&g_1308,&g_1308},{&g_1308,&g_1308}},{{&g_1308,&g_1308},{&g_1308,&g_1308},{&g_1308,&g_1308}},{{&g_1308,&g_1308},{&g_1308,&g_1308},{&g_1308,&g_1308}}};
static int16_t *****g_1717 = &g_1718[1][0][0];
static int16_t g_1735 = 0x6801L;
static uint16_t g_1809 = 0x4D07L;
static const struct S1 **g_1853[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const struct S1 ***g_1852 = &g_1853[1];
static const struct S1 ****g_1851[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1852,(void*)0,&g_1852,(void*)0},{(void*)0,(void*)0,&g_1852,&g_1852},{&g_1852,&g_1852,(void*)0,&g_1852}};
static uint32_t g_1856 = 4294967295UL;
static int16_t g_1863 = 1L;
static struct S1 ***g_1877 = &g_1001[0];
static struct S1 *** const *g_1876 = &g_1877;
static struct S1 *** const **g_1875 = &g_1876;



static int32_t  func_1(void);
static struct S1  func_2(uint32_t  p_3, int8_t  p_4, int8_t  p_5);
static const int8_t  func_16(int64_t  p_17, int32_t  p_18);
static int32_t  func_19(int64_t  p_20);
static int16_t  func_39(uint32_t  p_40, int16_t  p_41, int64_t  p_42, int32_t  p_43);
static uint64_t  func_46(int32_t * p_47);
static const int16_t  func_51(int32_t * p_52, const uint8_t  p_53, int8_t  p_54, int32_t * p_55, uint8_t  p_56);
static int32_t * func_57(uint32_t  p_58, struct S0  p_59, int32_t * p_60, const uint64_t  p_61);




static int32_t  func_1(void)
{ 
    int8_t l_6 = (-10L);
    int32_t l_543 = 0xD0901331L;
    int32_t *l_1073 = &g_289;
    uint64_t *l_1074 = (void*)0;
    uint64_t *l_1075[4][4] = {{&g_82,&g_82,(void*)0,(void*)0},{&g_82,&g_82,(void*)0,(void*)0},{&g_82,&g_82,(void*)0,(void*)0},{&g_82,&g_82,(void*)0,(void*)0}};
    int32_t l_1740 = (-9L);
    int32_t l_1784 = (-1L);
    int64_t l_1790 = 0L;
    struct S1 l_1797 = {553};
    int32_t l_1806 = (-1L);
    uint32_t l_1834 = 0x7520DF80L;
    int32_t l_1862 = (-6L);
    struct S1 ***l_1874[2];
    struct S1 *** const *l_1873 = &l_1874[1];
    struct S1 *** const **l_1872 = &l_1873;
    int32_t *l_1900 = (void*)0;
    uint32_t l_1903 = 0x38492533L;
    uint32_t l_1906[7];
    int i, j;
    for (i = 0; i < 2; i++)
        l_1874[i] = &g_1001[2];
    for (i = 0; i < 7; i++)
        l_1906[i] = 4294967295UL;
    if (((func_2(l_6, ((g_1076 = (safe_mul_func_uint16_t_u_u((((*l_1073) = (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(g_13, 7)), (safe_mod_func_int16_t_s_s((-6L), (func_16(g_13, ((l_543 = ((func_19(g_13) , l_6) | 0L)) & g_540[1])) && l_6)))))) , g_411), g_327[6][4]))) , g_510[1]), l_6) , 0L) , l_543))
    { 
        int32_t l_1727 = 0xAA139397L;
        int16_t l_1746 = 0x0173L;
        int32_t l_1778 = 0x7465ECA0L;
        uint64_t l_1780 = 0x819D62416B30E980LL;
        int64_t l_1795 = 2L;
        int32_t l_1808 = 0x1701B30BL;
        struct S0 l_1815 = {895,2278,11100,-5107};
        uint32_t *l_1854[7][3][3] = {{{&g_90,&g_90,&g_90},{&g_74,&g_90,&g_74},{&g_90,&g_90,&g_90}},{{&g_74,&g_90,&g_74},{&g_90,&g_90,&g_90},{&g_74,&g_90,&g_74}},{{&g_90,&g_90,&g_90},{&g_74,&g_90,&g_74},{&g_90,&g_90,&g_90}},{{&g_74,&g_90,&g_74},{&g_90,&g_90,&g_90},{&g_74,&g_90,&g_74}},{{&g_90,&g_90,&g_90},{&g_74,&g_90,&g_74},{&g_90,&g_90,&g_90}},{{&g_74,&g_90,&g_74},{&g_90,&g_90,&g_90},{&g_74,&g_90,&g_74}},{{&g_90,&g_90,&g_90},{&g_74,&g_90,&g_74},{&g_90,&g_90,&g_90}}};
        const uint16_t *l_1855 = &g_13;
        int32_t l_1857 = 9L;
        uint8_t l_1864 = 248UL;
        int32_t l_1867 = 0x7D2079A5L;
        int32_t l_1868[4][1][2] = {{{0x8806C5F6L,0x8806C5F6L}},{{0x8806C5F6L,0x8806C5F6L}},{{0x8806C5F6L,0x8806C5F6L}},{{0x8806C5F6L,0x8806C5F6L}}};
        uint64_t l_1869 = 0x523CEF96EE315771LL;
        int i, j, k;
        for (g_90 = (-27); (g_90 > 5); ++g_90)
        { 
            uint32_t l_1732 = 1UL;
            uint8_t *l_1736 = &g_540[1];
            int8_t *l_1738 = (void*)0;
            int8_t *l_1739 = &g_33[0];
            uint32_t l_1741[5][7][4] = {{{0x8649092DL,0x8649092DL,0UL,0x8649092DL},{9UL,1UL,4294967289UL,4294967295UL},{3UL,4294967295UL,3UL,4294967289UL},{0xFC824C1DL,4294967295UL,0xD4D84264L,4294967295UL},{4294967295UL,1UL,0xFC824C1DL,0x8649092DL},{0UL,3UL,0x8E69C4CEL,3UL},{0x3814735FL,0UL,4294967295UL,9UL}},{{1UL,4294967289UL,4294967295UL,3UL},{0x8E69C4CEL,3UL,0xAD6CF0DBL,0xFC824C1DL},{0x8E69C4CEL,0xD4D84264L,4294967295UL,4294967295UL},{1UL,0xFC824C1DL,4294967295UL,0UL},{0x3814735FL,0x8E69C4CEL,0x8E69C4CEL,0x3814735FL},{0UL,4294967295UL,0xFC824C1DL,1UL},{4294967295UL,4294967295UL,0xD4D84264L,0x8E69C4CEL}},{{0xFC824C1DL,0xAD6CF0DBL,3UL,0x8E69C4CEL},{3UL,4294967295UL,4294967289UL,1UL},{9UL,4294967295UL,0UL,0x3814735FL},{3UL,0x8E69C4CEL,3UL,0UL},{0x8649092DL,0xFC824C1DL,1UL,4294967295UL},{4294967295UL,0xD4D84264L,4294967295UL,0xFC824C1DL},{4294967289UL,3UL,4294967295UL,3UL}},{{4294967295UL,4294967289UL,1UL,9UL},{0x8649092DL,0UL,3UL,3UL},{3UL,3UL,0UL,0x8649092DL},{9UL,1UL,4294967289UL,4294967295UL},{3UL,4294967295UL,3UL,4294967289UL},{0xFC824C1DL,4294967295UL,0xD4D84264L,4294967295UL},{4294967295UL,1UL,0xFC824C1DL,0x8649092DL}},{{0UL,3UL,0x8E69C4CEL,3UL},{0x3814735FL,0UL,4294967295UL,9UL},{1UL,4294967289UL,4294967295UL,3UL},{0x8E69C4CEL,3UL,0xAD6CF0DBL,0xFC824C1DL},{0x8E69C4CEL,0xD4D84264L,4294967295UL,4294967295UL},{1UL,0xFC824C1DL,4294967295UL,0UL},{0x3814735FL,0x8E69C4CEL,0x8E69C4CEL,0x3814735FL}}};
            int16_t l_1742[6] = {0x9B55L,0x9B55L,0x9B55L,0x9B55L,0x9B55L,0x9B55L};
            int32_t *l_1743[2][2][6] = {{{&g_834,&g_834,&l_1727,&g_834,&g_834,&l_1727},{&g_834,&g_834,&l_1727,&g_834,&g_834,&l_1727}},{{&g_834,&g_834,&l_1727,&g_834,&g_834,&l_1727},{&g_834,&g_834,&l_1727,&g_834,&g_834,&l_1727}}};
            const struct S1 *****l_1858 = &g_1851[1][1];
            int i, j, k;
            l_543 = (safe_add_func_uint8_t_u_u((**g_1624), (((0x368BF614D62281E8LL | l_1727) || (((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_1732 , (((*l_1736) ^= (safe_add_func_int16_t_s_s(0L, g_1735))) < (((l_1740 ^= ((((*l_1739) = (!(l_1727 & g_79.f2))) , (void*)0) != &g_112[0][3][0])) == l_1741[4][6][3]) , l_1742[3]))), l_1732)), l_6)) >= l_6) && 1UL)) & 0UL)));
            if (((safe_add_func_uint32_t_u_u((**g_931), (l_1746 , l_1740))) && g_236.f1))
            { 
                uint64_t l_1748[1][3];
                uint16_t *l_1763 = &g_744[3][0];
                int64_t *l_1766 = &g_86;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1748[i][j] = 0x8C79840FE76A1F2DLL;
                }
                if ((0x7FL || ((~(l_1748[0][2] , (safe_mul_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(((*l_1766) = (safe_sub_func_uint16_t_u_u(0x5B94L, (g_79 , (((safe_rshift_func_int8_t_s_s(g_85, 7)) != (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((&g_1718[1][0][0] != ((safe_rshift_func_uint16_t_u_u((((*l_1763)--) == l_1748[0][2]), 6)) , &g_1718[1][0][0])), 2)) , 7L) , g_22), l_1748[0][1]))) & l_6))))), l_6)) > g_79.f0) , l_1727), l_6)))) & (***g_1081))))
                { 
                    return g_87;
                }
                else
                { 
                    int32_t * const l_1767 = (void*)0;
                    int32_t **l_1768 = &g_112[1][3][0];
                    (*l_1768) = l_1767;
                }
            }
            else
            { 
                const struct S0 l_1789[1][7] = {{{1079,1603,6866,-2807},{1079,1603,6866,-2807},{254,3468,6239,-5884},{1079,1603,6866,-2807},{1079,1603,6866,-2807},{254,3468,6239,-5884},{1079,1603,6866,-2807}}};
                int64_t l_1791 = (-1L);
                struct S1 l_1796 = {1147};
                int64_t l_1800 = 0x8A698F4EF7D73A7FLL;
                int32_t l_1802 = (-1L);
                int32_t l_1803 = 8L;
                int32_t l_1805 = 0x467BB204L;
                int i, j;
                for (l_1740 = (-11); (l_1740 == 27); l_1740 = safe_add_func_int64_t_s_s(l_1740, 8))
                { 
                    uint16_t *l_1775 = &g_744[4][2];
                    int32_t l_1779[3][2];
                    int32_t l_1781 = 0xFD5D8B2FL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1779[i][j] = 1L;
                    }
                    l_1781 |= ((l_1780 = ((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((*l_1775)--), l_543)), (g_289 | l_543))) < (l_1779[1][0] = (g_33[2] , l_1778)))) < (*g_1625));
                    if (l_1746)
                        break;
                    l_1784 = (&g_1080 == ((safe_add_func_uint32_t_u_u(l_1779[1][0], (((((l_1784 > (safe_lshift_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((l_1789[0][1] , (l_1779[1][1] || l_1790)), (l_1740 & 0x1BAFDC0D1403C4B5LL))) < 65532UL) > (*g_1310)), l_1789[0][1].f3))) , l_543) | l_1789[0][1].f3) == 0x5E8DL) >= l_1791))) , &g_1080));
                }
                for (l_1746 = 0; (l_1746 != 14); l_1746 = safe_add_func_int8_t_s_s(l_1746, 1))
                { 
                    int8_t l_1794[4][1];
                    struct S0 *l_1799 = (void*)0;
                    struct S0 **l_1798 = &l_1799;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1794[i][j] = 3L;
                    }
                    l_1795 ^= l_1794[0][0];
                    l_1797 = l_1796;
                    (*l_1798) = &g_79;
                    l_543 ^= (-3L);
                }
                for (g_393 = 0; (g_393 <= 3); g_393 += 1)
                { 
                    int64_t l_1801 = 0x95B38505B0A1099CLL;
                    int32_t l_1804 = (-1L);
                    int32_t l_1807 = 0L;
                    const int32_t **l_1812 = &g_970;
                    struct S0 *l_1816 = (void*)0;
                    struct S0 *l_1817 = &l_1815;
                    uint16_t l_1830 = 0x88F3L;
                    int8_t l_1833 = (-10L);
                    struct S1 ** const **l_1850 = (void*)0;
                    g_1809++;
                    (*l_1812) = &g_971;
                    l_1727 ^= (safe_add_func_uint32_t_u_u(((((((*l_1817) = l_1815) , (((safe_rshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((g_85 = l_1815.f0), (safe_mod_func_int16_t_s_s((g_540[1] , 0L), (safe_div_func_uint64_t_u_u((((***g_1081) == (((safe_sub_func_int32_t_s_s((l_1802 |= l_1746), ((--l_1830) || (**l_1812)))) && 65535UL) >= l_1800)) & g_989), l_1815.f3)))))), l_1780)) && (**l_1812)), 0)) ^ l_1833) < l_1780)) <= l_1746) , (**l_1812)) < 0xB57F6E9772E7B77ALL), (**l_1812)));
                    l_543 |= l_1834;
                    l_1727 ^= (((~(-1L)) , (~((((safe_add_func_uint16_t_u_u(g_289, (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((-5L) < (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((l_1850 == g_1851[1][1]))), l_1808))), 13)) == ((((*g_1310) = (((((void*)0 != l_1854[3][0][0]) < l_1808) , g_540[1]) == 1L)) , l_1855) != &l_1830)), 65527UL)), (***g_1081))))) < g_86) || g_79.f2) <= g_1856))) == (**l_1812));
                }
            }
            l_1857 ^= (l_1815.f2 |= (-2L));
            l_1858 = &g_1851[3][2];
        }
        for (g_236.f2 = 23; (g_236.f2 <= (-24)); g_236.f2 = safe_sub_func_uint64_t_u_u(g_236.f2, 6))
        { 
            int32_t *l_1861[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1861[i] = &l_1806;
            l_1864--;
            l_1869++;
        }
        g_1875 = l_1872;
    }
    else
    { 
        int32_t **l_1896 = &g_112[1][2][0];
        int32_t **l_1897 = (void*)0;
        int32_t **l_1898 = &g_112[0][1][0];
        int32_t **l_1899 = &g_112[1][2][0];
        int32_t l_1901[4] = {0x46750389L,0x46750389L,0x46750389L,0x46750389L};
        const uint8_t l_1902 = 251UL;
        int16_t *l_1904 = &g_1863;
        int32_t l_1905 = 1L;
        int i;
        l_1740 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(0x0251L, 14)), (((safe_add_func_uint8_t_u_u(0xFBL, (4L > ((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((*l_1904) ^= (((safe_div_func_uint8_t_u_u(((((*g_1310) && (((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((&l_1784 == (l_1900 = &l_1806)) <= l_1901[2]), 11)), 4)) == 1UL) <= l_1902)) & 0x323615CC846283B1LL) || 8UL), 0x5AL)) , l_1903) ^ l_1862)) , 0x53L), l_1784)), l_1834)), l_1905)) <= 2UL)))) & l_1834) <= l_1906[5])));
    }
    return g_79.f3;
}



static struct S1  func_2(uint32_t  p_3, int8_t  p_4, int8_t  p_5)
{ 
    uint32_t ***l_1078 = &g_931;
    uint32_t ****l_1077[5][5][5] = {{{&l_1078,&l_1078,&l_1078,(void*)0,(void*)0},{(void*)0,&l_1078,&l_1078,(void*)0,&l_1078},{&l_1078,&l_1078,&l_1078,&l_1078,&l_1078},{&l_1078,&l_1078,&l_1078,&l_1078,&l_1078},{(void*)0,&l_1078,(void*)0,&l_1078,&l_1078}},{{(void*)0,&l_1078,&l_1078,&l_1078,&l_1078},{&l_1078,&l_1078,&l_1078,&l_1078,&l_1078},{&l_1078,&l_1078,&l_1078,(void*)0,&l_1078},{&l_1078,&l_1078,&l_1078,&l_1078,&l_1078},{(void*)0,(void*)0,&l_1078,(void*)0,(void*)0}},{{&l_1078,(void*)0,(void*)0,(void*)0,&l_1078},{&l_1078,(void*)0,&l_1078,(void*)0,(void*)0},{&l_1078,(void*)0,&l_1078,(void*)0,&l_1078},{(void*)0,&l_1078,&l_1078,&l_1078,&l_1078},{&l_1078,&l_1078,&l_1078,(void*)0,&l_1078}},{{&l_1078,&l_1078,&l_1078,&l_1078,&l_1078},{&l_1078,&l_1078,&l_1078,&l_1078,&l_1078},{&l_1078,(void*)0,&l_1078,&l_1078,&l_1078},{&l_1078,&l_1078,&l_1078,&l_1078,&l_1078},{&l_1078,&l_1078,&l_1078,&l_1078,(void*)0}},{{(void*)0,&l_1078,&l_1078,(void*)0,&l_1078},{&l_1078,(void*)0,(void*)0,&l_1078,&l_1078},{(void*)0,&l_1078,&l_1078,&l_1078,&l_1078},{&l_1078,&l_1078,&l_1078,(void*)0,&l_1078},{&l_1078,(void*)0,&l_1078,&l_1078,&l_1078}}};
    uint32_t *****l_1079 = &l_1077[3][4][4];
    const struct S1 l_1082 = {446};
    struct S1 ***l_1086 = &g_1001[2];
    struct S1 ****l_1085[1];
    struct S1 *****l_1084 = &l_1085[0];
    struct S0 l_1102 = {1336,1343,8778,-4849};
    union U2 l_1111 = {0UL};
    uint8_t *l_1112 = &g_236.f3;
    int16_t *l_1119 = &g_188;
    int16_t **l_1118[1];
    int16_t ***l_1117 = &l_1118[0];
    int32_t *l_1144[4][6][3] = {{{&g_125,&g_289,&g_125},{&g_125,&g_125,&g_125},{&g_289,&g_289,&g_125},{&g_289,(void*)0,&g_289},{&g_289,&g_125,(void*)0},{&g_125,&g_289,&g_289}},{{&g_289,&g_125,&g_125},{&g_125,&g_125,&g_125},{(void*)0,(void*)0,&g_125},{&g_289,&g_125,(void*)0},{&g_289,&g_125,&g_125},{(void*)0,(void*)0,&g_289}},{{&g_125,&g_125,&g_289},{&g_289,&g_125,&g_289},{&g_125,&g_289,&g_289},{&g_289,&g_125,&g_289},{&g_289,&g_125,&g_289},{&g_289,(void*)0,&g_125}},{{&g_125,&g_125,(void*)0},{&g_125,&g_125,(void*)0},{&g_125,(void*)0,&g_125},{&g_125,&g_125,&g_289},{(void*)0,&g_125,&g_289},{&g_125,&g_289,&g_289}}};
    int16_t l_1156 = (-1L);
    int32_t l_1158 = 0L;
    int32_t l_1159 = (-1L);
    int32_t l_1160 = 0L;
    int32_t l_1163[7] = {0x01D0860AL,0x01D0860AL,0x01D0860AL,0x01D0860AL,0x01D0860AL,0x01D0860AL,0x01D0860AL};
    int32_t *l_1331 = (void*)0;
    int64_t l_1333 = 0x8BBCD869C12223BBLL;
    int32_t l_1403 = 0L;
    int64_t l_1447 = 1L;
    struct S1 l_1464 = {630};
    int32_t l_1525 = 0x337987F8L;
    int32_t l_1526 = 0xD1CC7B10L;
    uint16_t *l_1618 = &g_744[3][0];
    int32_t *l_1622 = &l_1159;
    uint32_t l_1693[3][5][1] = {{{8UL},{0xA2221231L},{0UL},{0UL},{0xA2221231L}},{{8UL},{0xA2221231L},{0UL},{0UL},{0xA2221231L}},{{8UL},{0xA2221231L},{0UL},{0UL},{0xA2221231L}}};
    int16_t l_1720[2];
    struct S1 l_1722 = {213};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1085[i] = &l_1086;
    for (i = 0; i < 1; i++)
        l_1118[i] = &l_1119;
    for (i = 0; i < 2; i++)
        l_1720[i] = 0x5B30L;
lbl_1276:
    g_1080 = ((*l_1079) = l_1077[3][4][4]);
    if ((7UL > ((((l_1082 , (((void*)0 != &g_541) < ((l_1084 = g_1083) != (void*)0))) <= g_361[1]) < p_3) ^ g_722[3])))
    { 
        uint8_t l_1101[4][5][6] = {{{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L}},{{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L}},{{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L}},{{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L},{0x92L,255UL,0x92L,0x92L,255UL,0x92L}}};
        struct S1 l_1107 = {380};
        uint8_t *l_1114[5] = {&g_884,&g_884,&g_884,&g_884,&g_884};
        struct S0 *l_1116 = &g_79;
        int64_t ***l_1122[1];
        int32_t l_1136 = 0xC584FEFBL;
        int32_t l_1154[5][6][4] = {{{0x3C02C0E7L,0L,0L,0L},{0x3C02C0E7L,0x3C02C0E7L,0x0CA6187EL,(-1L)},{(-4L),0L,0x3C02C0E7L,0L},{0L,0L,8L,0x3C02C0E7L},{0xACC11102L,0L,0xACC11102L,0L},{0L,0L,0x0281CEDDL,(-1L)}},{{(-1L),0x3C02C0E7L,0L,0L},{0x84C53EDBL,0L,0L,0x84C53EDBL},{(-1L),0L,0x0281CEDDL,0xACC11102L},{0L,(-1L),0xACC11102L,0x0CA6187EL},{0xACC11102L,0x0CA6187EL,8L,0x0CA6187EL},{0L,(-1L),0x3C02C0E7L,0xACC11102L}},{{(-4L),0L,0L,0x3C02C0E7L},{0x0CA6187EL,0x84C53EDBL,0L,0L},{0x0CA6187EL,0x0CA6187EL,0L,0L},{0xACC11102L,0L,0x0CA6187EL,(-1L)},{0x84C53EDBL,(-1L),(-4L),0x0CA6187EL},{0L,(-1L),0L,(-1L)}},{{(-1L),0L,8L,0L},{0L,0x0CA6187EL,0x84C53EDBL,0L},{0x3C02C0E7L,0x84C53EDBL,0x84C53EDBL,0x3C02C0E7L},{0L,(-1L),8L,0L},{(-1L),0x0281CEDDL,0L,0L},{0L,0L,(-4L),0L}},{{0x84C53EDBL,0x0281CEDDL,0x0CA6187EL,0L},{0xACC11102L,(-1L),0L,0x3C02C0E7L},{0x0CA6187EL,0x84C53EDBL,0L,0L},{0x0CA6187EL,0x0CA6187EL,0L,0L},{0xACC11102L,0L,0x0CA6187EL,(-1L)},{0x84C53EDBL,(-1L),(-4L),0x0CA6187EL}}};
        int8_t *l_1174 = &g_361[0];
        int8_t * const *l_1173 = &l_1174;
        uint32_t ***l_1236 = &g_931;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1122[i] = &g_827;
        for (p_3 = 24; (p_3 <= 35); p_3 = safe_add_func_uint16_t_u_u(p_3, 3))
        { 
            struct S0 l_1091 = {1170,377,-4224,2824};
            int32_t *l_1103 = &g_989;
            uint8_t *l_1115 = &g_741;
            int32_t l_1162 = (-4L);
            if (p_4)
                break;
            for (g_236.f2 = 3; (g_236.f2 != 6); g_236.f2 = safe_add_func_int16_t_s_s(g_236.f2, 1))
            { 
                int32_t *l_1094 = &g_22;
                int32_t **l_1104 = &l_1103;
                uint64_t *l_1105 = &g_82;
                struct S1 l_1106 = {483};
                uint16_t *l_1110 = &g_13;
                uint8_t **l_1113[7];
                int16_t ***l_1121 = &l_1118[0];
                struct S1 ***l_1137 = &g_1001[0];
                int8_t *l_1138 = &g_85;
                struct S0 l_1143 = {520,3028,2113,2966};
                int32_t l_1155 = 0x4A244946L;
                int32_t l_1157[3][7][1] = {{{0L},{0xF4A3EFA1L},{0x55818F11L},{0x98A003DCL},{0xF4A3EFA1L},{0x98A003DCL},{0x55818F11L}},{{0xF4A3EFA1L},{0L},{0L},{0xF4A3EFA1L},{0x55818F11L},{0x98A003DCL},{0xF4A3EFA1L}},{{0x98A003DCL},{0x55818F11L},{0xF4A3EFA1L},{0L},{0L},{0xF4A3EFA1L},{0x55818F11L}}};
                int16_t l_1161[2];
                uint64_t l_1166 = 18446744073709551615UL;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1113[i] = &l_1112;
                for (i = 0; i < 2; i++)
                    l_1161[i] = 9L;
            }
        }
        for (g_125 = 0; (g_125 != 16); g_125 = safe_add_func_int32_t_s_s(g_125, 8))
        { 
            uint16_t l_1199[4][2] = {{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,65535UL}};
            struct S1 l_1202 = {234};
            uint16_t *l_1203 = &g_744[3][0];
            uint32_t *l_1204 = &l_1111.f0;
            int32_t *l_1205 = &g_81;
            uint16_t *l_1237 = (void*)0;
            uint16_t *l_1238 = (void*)0;
            uint16_t *l_1239[7][4] = {{&l_1199[2][0],&g_13,&l_1199[2][0],&g_13},{&l_1199[2][0],&g_13,&l_1199[2][0],&g_13},{&l_1199[2][0],&g_13,&l_1199[2][0],&g_13},{&l_1199[2][0],&g_13,&l_1199[2][0],&g_13},{&l_1199[2][0],&g_13,&l_1199[2][0],&g_13},{&l_1199[2][0],&g_13,&l_1199[2][0],&g_13},{&l_1199[2][0],&g_13,&l_1199[2][0],&g_13}};
            int32_t l_1262 = 0x48DA8991L;
            uint32_t l_1266 = 0x05F212E8L;
            int32_t l_1269[3][2][6] = {{{1L,0L,1L,0x872E53E7L,8L,0x062CEA53L},{0x2C2A323AL,1L,0xBA3FD11AL,0L,0x04C65661L,0x010C1D61L}},{{0x2C2A323AL,0x872E53E7L,0L,0x872E53E7L,0x2C2A323AL,8L},{1L,8L,0x04C65661L,0x2C2A323AL,0x010C1D61L,(-1L)}},{{2L,0x062CEA53L,0x010C1D61L,8L,(-1L),(-1L)},{0xB24DAA5BL,0x04C65661L,0x04C65661L,0xB24DAA5BL,1L,8L}}};
            struct S1 ****l_1293 = &l_1086;
            int i, j, k;
        }
        (*l_1116) = (*l_1116);
    }
    else
    { 
        uint64_t l_1368[5];
        int32_t l_1378 = (-8L);
        int32_t l_1402 = 0xC1225797L;
        int32_t l_1404 = 0xFAEFDEE3L;
        int32_t l_1405 = (-1L);
        int32_t l_1406 = (-9L);
        int32_t l_1407 = 0L;
        int64_t l_1412 = (-5L);
        int32_t l_1415[4] = {9L,9L,9L,9L};
        uint8_t l_1417 = 0x02L;
        union U2 **l_1433 = &g_238;
        uint16_t l_1436 = 0UL;
        uint32_t l_1449 = 0x5F105998L;
        uint8_t **l_1463 = &l_1112;
        int16_t l_1521 = 5L;
        uint32_t l_1524[3][1];
        uint16_t l_1528 = 65531UL;
        struct S1 **l_1563 = &g_158;
        const int16_t *l_1569[1];
        const int16_t * const *l_1568 = &l_1569[0];
        int32_t *l_1609[4][4] = {{&l_1378,&l_1406,&l_1159,&l_1159},{(void*)0,(void*)0,&l_1402,&l_1406},{&l_1406,&l_1378,&l_1402,&l_1378},{(void*)0,(void*)0,&l_1159,&l_1402}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_1368[i] = 0UL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1524[i][j] = 1UL;
        }
        for (i = 0; i < 1; i++)
            l_1569[i] = &g_722[3];
        if ((((g_1347 != g_1347) || ((65529UL != ((*g_1310) = 0x1D96L)) , ((p_4 == (g_540[1] ^ 2UL)) && l_1111.f3))) != p_5))
        { 
            int32_t l_1379 = (-6L);
            uint32_t *l_1381 = &g_90;
            int32_t l_1385 = 0xEFE2D27CL;
            int32_t l_1408 = 1L;
            int32_t l_1409 = 1L;
            int32_t l_1410 = 0x4CEB3777L;
            int32_t l_1411 = 0L;
            int32_t l_1413 = 0x6A80C3DBL;
            int32_t l_1416[7] = {9L,9L,9L,9L,9L,9L,9L};
            struct S1 l_1420[1][4][6] = {{{{1139},{4},{4},{1139},{4},{4}},{{1139},{4},{4},{1139},{4},{4}},{{1139},{4},{4},{1139},{4},{4}},{{1139},{4},{4},{1139},{4},{4}}}};
            uint32_t l_1456 = 1UL;
            int i, j, k;
            for (g_259 = 14; (g_259 == 26); ++g_259)
            { 
                uint64_t l_1365 = 0x81F948911A4DCC86LL;
                int32_t l_1380 = 0L;
                uint64_t *l_1382 = (void*)0;
                uint64_t *l_1383 = &g_82;
                uint16_t *l_1384 = &g_744[3][0];
                uint32_t l_1398 = 4294967286UL;
                int32_t l_1414 = 0xAB090042L;
                struct S1 ***l_1425 = &g_1001[2];
                uint8_t l_1439 = 0x9FL;
                int32_t l_1442 = 0x7F8F5652L;
                int64_t l_1443 = 0x5A6D51FC7417CCC3LL;
                int32_t l_1448 = 0x085C4692L;
                l_1380 = (l_1385 |= ((safe_mul_func_int16_t_s_s((((((*l_1384) = ((safe_mod_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u(((*l_1383) = ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_3, (+0x25610BFE81182F8ALL))), ((*l_1112) = (safe_mod_func_uint16_t_u_u((((((l_1365 |= (-5L)) > (p_3 && (safe_sub_func_uint32_t_u_u(l_1368[0], (safe_lshift_func_uint16_t_u_s(65535UL, ((safe_sub_func_uint64_t_u_u((((((~(safe_lshift_func_int8_t_s_u(((l_1378 = (safe_div_func_uint8_t_u_u(l_1368[0], 255UL))) ^ p_3), l_1368[0]))) | (*g_1310)) > p_4) ^ 0xD674L) || l_1379), l_1380)) || p_5))))))) , l_1365) , &p_3) != l_1381), 0x4569L))))), p_5)) >= p_5)), p_3)) ^ l_1379), p_5)) | l_1380)) ^ (*g_1310)) < 0xEBEBA6F9D3A2DA2DLL) == 65535UL), 0xEEDEL)) , 0x34B633A1L));
                if ((safe_rshift_func_uint8_t_u_u(2UL, (p_3 < (g_13 , (safe_mul_func_uint8_t_u_u((1L | (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((***l_1117) = (p_5 | p_4)), (safe_add_func_int16_t_s_s((l_1398 = (safe_lshift_func_int8_t_s_s(0L, 0))), g_884)))), p_5))), l_1368[0])))))))
                { 
                    int32_t **l_1399[7] = {&g_112[1][2][0],&l_1331,&l_1331,&g_112[1][2][0],&l_1331,&l_1331,&g_112[1][2][0]};
                    int i;
                    g_970 = &g_22;
                }
                else
                { 
                    int32_t *l_1400 = &l_1385;
                    int32_t *l_1401[1][6];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_1401[i][j] = &l_1163[2];
                    }
                    --l_1417;
                    return l_1420[0][0][2];
                }
                (***l_1086) = (***l_1086);
                for (p_5 = 23; (p_5 == (-4)); p_5 = safe_sub_func_int64_t_s_s(p_5, 1))
                { 
                    int32_t *l_1427 = &l_1408;
                    (*l_1427) |= ((safe_mul_func_uint8_t_u_u(g_85, (p_3 , (((void*)0 != l_1425) , (p_4 || (p_4 , ((safe_unary_minus_func_uint32_t_u(5UL)) == 0xBCBF9EE2A939BE9ALL))))))) , 0L);
                    l_1416[6] = (safe_lshift_func_int16_t_s_s(((***l_1117) = p_4), ((*l_1427) = (-1L))));
                    l_1411 = (+(safe_rshift_func_int8_t_s_u((-8L), (((l_1433 == (void*)0) , p_5) > (safe_mul_func_int8_t_s_s(((g_22 | (g_79 , (((void*)0 != &g_327[3][2]) <= p_4))) , (-9L)), p_3))))));
                    (*l_1427) = 0xD678806FL;
                    (*l_1427) = (*g_970);
                }
                if (((l_1436 | (&g_1309[1][1] == (void*)0)) | ((((void*)0 == (**l_1425)) | p_5) != (l_1414 , p_3))))
                { 
                    int32_t *l_1437 = &l_1163[6];
                    int32_t *l_1438[4] = {&l_1415[0],&l_1415[0],&l_1415[0],&l_1415[0]};
                    uint32_t l_1444[7][3][4] = {{{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL}},{{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL}},{{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL}},{{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL}},{{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL}},{{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL}},{{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL}}};
                    int64_t l_1459 = 7L;
                    int8_t *l_1460 = &g_361[0];
                    int i, j, k;
                    ++l_1439;
                    ++l_1444[6][2][1];
                    l_1449--;
                    if (l_1380)
                        break;
                    (*l_1437) |= ((((((*l_1460) |= (((*l_1119) = ((((~(!(((l_1415[0] != l_1380) > ((safe_div_func_int64_t_s_s((3UL & l_1456), (safe_div_func_uint64_t_u_u((l_1459 <= (((*l_1383) = 1UL) , (-8L))), l_1448)))) == g_33[2])) | 0xBA031E1201240F95LL))) | p_3) == l_1380) == p_4)) < g_86)) <= p_5) ^ 0xB7L) , l_1409) || p_5);
                }
                else
                { 
                    int32_t *l_1461 = (void*)0;
                    uint8_t ***l_1462 = &g_163;
                    l_1159 &= p_5;
                    l_1415[0] &= (((*l_1462) = (l_1378 , g_163)) != l_1463);
                }
            }
            return l_1464;
        }
        else
        { 
            int16_t l_1465 = 0L;
            int32_t *l_1468 = &l_1415[0];
            int8_t *l_1470 = &g_85;
            int8_t **l_1469[1];
            uint8_t **l_1484[3][4][1] = {{{&l_1112},{&l_1112},{&l_1112},{&l_1112}},{{&l_1112},{&l_1112},{&l_1112},{&l_1112}},{{&l_1112},{&l_1112},{&l_1112},{&l_1112}}};
            int32_t l_1527 = 0xC3C11E53L;
            struct S0 l_1531 = {1323,1624,-10144,4740};
            uint64_t l_1540 = 2UL;
            int32_t l_1546 = 0xD2F324B7L;
            uint64_t *l_1551 = &l_1368[0];
            int32_t *l_1558 = &g_989;
            uint32_t ***l_1560 = &g_931;
            struct S1 **l_1564[3];
            int16_t * const *l_1565[1];
            int16_t * const **l_1566 = (void*)0;
            int16_t * const **l_1567 = &l_1565[0];
            int32_t *l_1581 = &l_1163[2];
            int32_t *l_1582[1][5][7] = {{{&l_1546,&l_1403,&l_1163[0],&l_1403,&l_1546,&l_1406,&l_1403},{&l_1546,&g_834,&l_1163[1],&l_1403,&l_1402,&l_1163[1],&l_1160},{&l_1402,&l_1160,&l_1158,&l_1158,&l_1160,&l_1402,&g_834},{&l_1546,&l_1403,&l_1415[0],&l_1546,&l_1160,(void*)0,&l_1403},{&l_1546,&l_1160,&l_1402,(void*)0,&l_1402,&l_1160,&l_1546}}};
            uint32_t l_1583 = 4294967292UL;
            struct S1 l_1594 = {338};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1469[i] = &l_1470;
            for (i = 0; i < 3; i++)
                l_1564[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_1565[i] = &l_1119;
            if (l_1465)
            { 
                int32_t *l_1466 = (void*)0;
                int32_t **l_1467 = &g_112[1][2][0];
                l_1466 = &g_834;
                l_1468 = ((*l_1467) = l_1466);
                (*l_1467) = &l_1407;
            }
            else
            { 
                uint32_t l_1479 = 1UL;
                uint32_t l_1495 = 0xE5483D69L;
                int8_t l_1508[4];
                uint16_t *l_1513 = (void*)0;
                uint16_t *l_1514 = &g_744[4][2];
                int32_t *l_1519 = (void*)0;
                int32_t *l_1520[7][6][6] = {{{&l_1163[1],&l_1407,&l_1163[1],&g_989,(void*)0,(void*)0},{&l_1158,&l_1163[1],&l_1163[1],&l_1402,&l_1403,(void*)0},{&l_1405,&l_1402,(void*)0,&l_1159,&l_1163[1],&l_1378},{&l_1159,&l_1163[1],&l_1378,&l_1406,&l_1158,&l_1158},{&l_1159,&l_1407,&l_1407,&l_1159,&l_1405,(void*)0},{&l_1405,&l_1403,&l_1406,&l_1402,&l_1159,&l_1158}},{{&l_1158,&l_1402,&l_1403,&g_989,&l_1159,&l_1378},{&l_1163[1],&l_1403,&l_1160,&l_1406,&l_1405,(void*)0},{&l_1403,&l_1407,&l_1402,&g_989,&l_1158,(void*)0},{(void*)0,&l_1163[1],&l_1402,&l_1402,&l_1163[1],(void*)0},{&g_81,&l_1402,&l_1160,&l_1159,&l_1403,&l_1378},{&g_989,&l_1163[1],&l_1403,&l_1406,(void*)0,&l_1158}},{{&g_989,&l_1407,&l_1406,&l_1159,&g_81,(void*)0},{&g_81,&l_1403,&l_1407,&l_1402,&g_989,&l_1158},{(void*)0,&l_1402,&l_1378,&g_989,&g_989,&l_1378},{&l_1403,&l_1403,(void*)0,&l_1406,&g_81,(void*)0},{&l_1163[1],&l_1407,&l_1163[1],&g_989,(void*)0,(void*)0},{&l_1158,&l_1163[1],&l_1163[1],&l_1402,&l_1403,(void*)0}},{{&l_1405,&l_1402,(void*)0,&l_1159,&l_1163[1],&l_1378},{&l_1159,&l_1163[1],&l_1378,&l_1406,&l_1158,&l_1158},{&l_1159,&l_1407,&l_1407,&l_1159,&l_1405,(void*)0},{&l_1405,&l_1403,&l_1406,&l_1402,&l_1159,&l_1158},{&l_1158,&l_1402,&l_1403,&g_989,&l_1159,&l_1378},{&l_1163[1],&l_1403,&l_1160,&l_1406,&l_1405,(void*)0}},{{&l_1403,&l_1407,&l_1402,&g_989,&l_1158,(void*)0},{(void*)0,&l_1163[1],&l_1402,&l_1402,&l_1163[1],(void*)0},{&g_81,&l_1402,&l_1160,&l_1159,&l_1403,&l_1378},{&g_989,&l_1163[1],&l_1403,&l_1406,(void*)0,&l_1158},{&g_989,&l_1407,&l_1406,&l_1159,&g_81,(void*)0},{&g_81,&l_1403,&l_1407,&l_1402,&g_989,&l_1158}},{{(void*)0,&l_1402,&l_1378,&g_989,&g_989,&l_1378},{&l_1403,&l_1403,(void*)0,&l_1406,&g_81,(void*)0},{&l_1163[1],&l_1407,&l_1163[1],&g_989,(void*)0,(void*)0},{&l_1158,&l_1163[1],&l_1163[1],&l_1402,&l_1403,(void*)0},{&l_1405,&l_1402,(void*)0,&l_1159,&l_1163[1],&l_1378},{&l_1159,&l_1163[1],&l_1378,&l_1406,&l_1158,&l_1158}},{{&l_1159,&l_1407,&l_1407,&l_1159,&l_1405,(void*)0},{&l_1405,&l_1403,&l_1406,&l_1402,&l_1159,&l_1158},{&l_1158,&l_1402,&l_1403,&g_989,&l_1159,&l_1378},{&l_1163[1],&l_1403,&l_1160,&l_1406,&l_1405,(void*)0},{&l_1403,&l_1407,&l_1402,&g_989,&l_1158,(void*)0},{(void*)0,&l_1163[1],&l_1402,&l_1402,&l_1163[1],(void*)0}}};
                uint16_t *l_1522 = &g_13;
                int64_t *l_1544 = &l_1447;
                int64_t *l_1545[7];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1508[i] = 0xE6L;
                for (i = 0; i < 7; i++)
                    l_1545[i] = &g_86;
                if ((((void*)0 != l_1469[0]) != ((safe_mod_func_uint32_t_u_u(p_3, ((safe_div_func_uint16_t_u_u((g_86 == (g_79 , (*g_1310))), (safe_div_func_int32_t_s_s((((((*l_1470) = ((safe_sub_func_int16_t_s_s(l_1479, g_411)) , 0x31L)) , l_1479) , l_1479) && p_5), p_3)))) , p_4))) & (***g_1081))))
                { 
                    uint8_t ***l_1485 = &l_1484[0][0][0];
                    (*l_1468) = ((+1L) > (*l_1468));
                    if (g_79.f1)
                        goto lbl_1483;
lbl_1483:
                    (*l_1468) = (safe_lshift_func_uint16_t_u_u((p_5 || p_4), 9));
                    (*l_1468) = l_1479;
                    (*l_1468) = 0L;
                    (*l_1468) &= ((g_163 == ((*l_1485) = l_1484[0][3][0])) ^ p_5);
                }
                else
                { 
                    int32_t *l_1486 = &l_1404;
                    int32_t *l_1487 = &g_22;
                    int32_t *l_1488 = &l_1415[0];
                    int32_t *l_1489 = &l_1158;
                    int32_t *l_1490 = (void*)0;
                    int32_t *l_1491 = &l_1407;
                    int32_t *l_1492 = &l_1158;
                    int32_t *l_1493 = &l_1163[6];
                    int32_t *l_1494[4][3][2] = {{{(void*)0,(void*)0},{&g_989,(void*)0},{(void*)0,&g_989}},{{&g_22,&g_22},{&g_22,&g_989},{(void*)0,(void*)0}},{{&g_989,(void*)0},{(void*)0,&g_989},{&g_22,&g_22}},{{&g_22,&g_989},{(void*)0,(void*)0},{&g_989,(void*)0}}};
                    int i, j, k;
                    ++l_1495;
                }
                l_1527 = ((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(p_5, ((((g_361[0] = (safe_mod_func_int32_t_s_s((l_1525 = (safe_rshift_func_int16_t_s_s((l_1524[2][0] |= (p_4 | ((l_1158 |= (safe_sub_func_uint8_t_u_u(l_1508[3], ((p_3 <= ((*l_1470) ^= ((safe_sub_func_int16_t_s_s(((*g_1310) = (((*l_1522) = (safe_mod_func_uint16_t_u_u(((*l_1514) &= ((void*)0 != &l_1468)), ((((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s((l_1405 = ((*l_1468) = ((l_1111 , p_4) , p_5))), l_1521)), (-1L))) && 0xE7CBDF0B2708E884LL) >= l_1402) | g_989)))) ^ g_510[0])), g_1523)) < p_4))) < l_1417)))) && p_3))), 0))), l_1526))) >= p_5) ^ p_4) , 0x4AD3F8F9FB5565B7LL))), 0x86F41E40L)) > 1L);
                ++l_1528;
                if (g_86)
                    goto lbl_1580;
                l_1527 ^= ((((l_1407 = (((l_1531 , (safe_div_func_int16_t_s_s((!(*l_1468)), (safe_mul_func_uint16_t_u_u(g_722[1], (((l_1531.f2 |= (+(safe_sub_func_uint32_t_u_u((l_1540 , (1L <= p_4)), ((((safe_sub_func_uint32_t_u_u((((((l_1546 = ((*l_1544) = (~(*l_1468)))) , p_5) == p_4) ^ p_5) > g_510[0]), 0xB0428544L)) , 0xB0L) >= 0L) == 0x73BC52E6L))))) && 2L) >= 7L)))))) > 1L) || l_1449)) && p_4) >= p_4) || p_5);
            }
            (*l_1558) ^= (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((g_393 &= ((*l_1551) &= g_82)) <= 0xD9DD03801610BAD3LL), ((248UL ^ ((safe_add_func_int64_t_s_s((0x9C18L && (*l_1468)), ((safe_unary_minus_func_uint32_t_u(l_1528)) | (safe_lshift_func_int16_t_s_u((!(g_79.f0 && 1UL)), 2))))) , l_1415[2])) || l_1449))), l_1528));
            if (g_259)
                goto lbl_1586;
            if (((safe_unary_minus_func_uint64_t_u(((l_1560 == (((((p_5 | (((((*l_1086) = l_1563) != (l_1564[1] = l_1564[2])) , (g_510[2] && ((((*l_1567) = l_1565[0]) != l_1568) >= 7L))) >= p_5)) < g_79.f2) && g_85) & 0x1618L) , &g_931)) , p_3))) , 3L))
            { 
                for (l_1417 = 0; (l_1417 <= 4); l_1417 += 1)
                { 
                    return (*g_158);
                }
lbl_1580:
                (*l_1558) &= (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_4, 2)), l_1368[1])), (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 == &l_1112), 0x9735L)), (7UL || 5L)))));
lbl_1586:
                l_1583--;
                if (g_86)
                    goto lbl_1276;
            }
            else
            { 
                uint32_t l_1589 = 0UL;
                for (g_22 = 0; (g_22 <= (-12)); g_22--)
                { 
                    l_1589--;
                    if (p_5)
                        continue;
                    (*l_1581) &= (safe_rshift_func_uint8_t_u_u(l_1528, 7));
                    return l_1594;
                }
                for (g_85 = 0; (g_85 == (-12)); g_85 = safe_sub_func_uint64_t_u_u(g_85, 3))
                { 
                    int32_t **l_1597 = &l_1582[0][3][1];
                    (*l_1597) = &l_1407;
                }
            }
            for (l_1583 = 0; (l_1583 > 39); l_1583 = safe_add_func_int64_t_s_s(l_1583, 9))
            { 
                int64_t l_1606 = 0x7F772966F4B28998LL;
                l_1606 &= ((*l_1468) &= (safe_add_func_int64_t_s_s(((p_5 & (p_4 <= (p_5 == (safe_sub_func_uint16_t_u_u((((*g_827) = &l_1412) != (g_33[2] , (void*)0)), (safe_add_func_uint64_t_u_u(g_33[2], (*l_1581)))))))) <= (*g_1310)), (-1L))));
            }
        }
        l_1163[1] = ((safe_mul_func_int8_t_s_s(1L, (l_1368[0] ^ 4L))) > (l_1415[3] = (((void*)0 != (*g_931)) == p_4)));
    }
    if (((*l_1622) &= (l_1160 = (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0xE1F6L, ((g_13 , (p_3 && ((*l_1618) = 1UL))) >= ((***l_1086) , (+l_1082.f0))))), (safe_add_func_uint32_t_u_u((((void*)0 != l_1112) != g_74), p_4)))) > p_4) | 0xB275L), p_3)), 0xFCA065D1724FD351LL)))))
    { 
        uint8_t ***l_1623 = &g_163;
        struct S1 **l_1636 = &g_158;
        int16_t *l_1668 = (void*)0;
        int32_t l_1675 = (-10L);
        int32_t l_1676[1];
        uint32_t l_1677 = 4294967295UL;
        struct S0 *l_1682 = &g_79;
        int i;
        for (i = 0; i < 1; i++)
            l_1676[i] = (-1L);
        if ((((*l_1623) = g_163) != (p_4 , g_1624)))
        { 
            union U2 l_1639[7][7][2] = {{{{5UL},{4UL}},{{4294967295UL},{0x1B90B245L}},{{4294967290UL},{0xC9A1213AL}},{{0xEF37EB20L},{0UL}},{{1UL},{0x2B12DD67L}},{{4294967292UL},{0UL}},{{8UL},{0UL}}},{{{4294967292UL},{0x2B12DD67L}},{{1UL},{0UL}},{{0xEF37EB20L},{0xC9A1213AL}},{{4294967290UL},{0x1B90B245L}},{{4294967295UL},{4UL}},{{5UL},{1UL}},{{0UL},{0x96FBBBD2L}}},{{{0UL},{0x2E07632AL}},{{4294967294UL},{4294967294UL}},{{1UL},{0x8E96BDCFL}},{{0x2E07632AL},{5UL}},{{0xF1A3AFF1L},{4294967295UL}},{{0xAEC0EF8FL},{0xF1A3AFF1L}},{{0x2B12DD67L},{0xD982EF60L}}},{{{0x2B12DD67L},{0xF1A3AFF1L}},{{0xAEC0EF8FL},{4294967295UL}},{{0xF1A3AFF1L},{5UL}},{{0x2E07632AL},{0x8E96BDCFL}},{{1UL},{4294967294UL}},{{4294967294UL},{0x2E07632AL}},{{0UL},{0x96FBBBD2L}}},{{{0UL},{1UL}},{{5UL},{4UL}},{{4294967295UL},{0x1B90B245L}},{{4294967290UL},{0xC9A1213AL}},{{0xEF37EB20L},{0UL}},{{1UL},{0x2B12DD67L}},{{4294967292UL},{0UL}}},{{{8UL},{0UL}},{{4294967292UL},{0x2B12DD67L}},{{1UL},{0UL}},{{0xEF37EB20L},{0xC9A1213AL}},{{4294967290UL},{0x1B90B245L}},{{4294967295UL},{4UL}},{{5UL},{1UL}}},{{{0UL},{0x96FBBBD2L}},{{0UL},{0x2E07632AL}},{{4294967294UL},{4294967294UL}},{{1UL},{0x8E96BDCFL}},{{0x2E07632AL},{5UL}},{{0xF1A3AFF1L},{4294967295UL}},{{0xAEC0EF8FL},{0xF1A3AFF1L}}}};
            int16_t ****l_1649[1];
            int32_t l_1674 = (-8L);
            uint8_t *l_1694 = &g_741;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1649[i] = &g_1308;
            for (g_289 = 0; (g_289 != (-12)); g_289 = safe_sub_func_int16_t_s_s(g_289, 6))
            { 
                int32_t **l_1628 = &l_1331;
                struct S1 **l_1635 = &g_158;
                int32_t l_1637 = 0L;
                int32_t *l_1638 = &g_989;
                int8_t *l_1640 = &g_361[0];
                int8_t *l_1641[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1641[i] = &g_85;
                (*l_1628) = &g_834;
                (**l_1628) = ((g_510[0] == (g_33[2] = ((*l_1640) = ((*l_1331) < (safe_div_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_u(p_4, 7)) == ((*l_1638) = (((*l_1622) = p_4) , (l_1637 |= (l_1635 != l_1636))))) , (((((l_1639[6][4][0] , &l_1638) == (void*)0) >= (*l_1331)) , p_4) >= 0L)) && 1L), (*l_1331))))))) > (*g_1625));
                for (l_1333 = 28; (l_1333 > 1); l_1333 = safe_sub_func_int16_t_s_s(l_1333, 8))
                { 
                    int16_t *** const **l_1644 = (void*)0;
                    int16_t **l_1648 = &l_1119;
                    int16_t *** const l_1647 = &l_1648;
                    int16_t *** const *l_1646 = &l_1647;
                    int16_t *** const **l_1645 = &l_1646;
                    int32_t l_1667 = 0xAB897ABBL;
                    int32_t l_1669 = (-1L);
                    int32_t *l_1670 = &l_1403;
                    int32_t *l_1671 = &l_1163[1];
                    int32_t *l_1672 = (void*)0;
                    int32_t *l_1673[3][5][3] = {{{&l_1160,&l_1637,&l_1669},{&l_1160,&l_1637,&l_1160},{(void*)0,&l_1637,&l_1637},{&l_1160,&l_1637,&l_1669},{&l_1160,&l_1637,&l_1160}},{{(void*)0,&l_1637,&l_1637},{&l_1160,&l_1637,&l_1669},{&l_1160,&l_1637,&l_1160},{(void*)0,&l_1637,&l_1637},{&l_1160,&l_1637,&l_1669}},{{&l_1160,&l_1637,&g_989},{&l_1637,&l_1403,&l_1403},{&l_1160,&l_1403,&l_1669},{&l_1669,&l_1403,&g_989},{&l_1637,&l_1403,&l_1403}}};
                    int i, j, k;
                    (**l_1628) = ((*l_1638) |= (((*l_1645) = &g_1308) != (l_1649[0] = &g_1308)));
                    l_1669 &= (((((((!(((0L || ((safe_mul_func_uint16_t_u_u(p_4, (safe_div_func_uint8_t_u_u(((*g_1625) = ((safe_unary_minus_func_uint8_t_u((((void*)0 == g_1347) & ((((**l_1117) = ((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((((safe_unary_minus_func_uint64_t_u(((safe_div_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((safe_div_func_int64_t_s_s(p_4, ((p_5 <= p_4) , (-1L)))), (*g_1625))) != 7L), 0xE2L)) && p_3))) ^ 1L) || l_1639[6][4][0].f2) <= l_1667), p_3)), g_393)) , l_1668)) == l_1668) != p_4)))) , 255UL)), 249UL)))) & l_1639[6][4][0].f0)) , 0x44D8553BL) & p_4)) | g_774) | 1L) ^ (*l_1622)) , (**l_1628)) ^ 0L) && (*l_1638));
                    (**l_1628) &= p_4;
                    l_1677++;
                    if (p_3)
                        break;
                }
                for (g_90 = 29; (g_90 > 48); g_90 = safe_add_func_uint8_t_u_u(g_90, 4))
                { 
                    struct S0 **l_1683 = &l_1682;
                    uint8_t *l_1695 = &l_1111.f3;
                    int32_t l_1696 = 0x5ADDFA3EL;
                    struct S1 ***l_1697[4][5];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1697[i][j] = (void*)0;
                    }
                    (*l_1683) = l_1682;
                    l_1696 &= (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((g_79.f2 , (p_4 , (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(p_3, (!l_1693[2][0][0]))) < (((*l_1622) ^ (l_1694 != l_1695)) <= g_834)), 5)))) , 4L), 0x1B199581L)), 11));
                    (*l_1622) ^= ((**l_1628) = ((((*l_1331) , (1L | (((void*)0 == l_1697[0][0]) , (safe_unary_minus_func_uint64_t_u(((~((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((1L && (*l_1331)) & (((p_4 , 0x8D666EBA3E6ED392LL) == 1UL) , 0x36F2CD995FB3D039LL)), 0)), 0x4DF8L)), (**l_1628))), (*l_1638))) ^ 0x663DL)) >= l_1676[0])))))) , g_744[3][0]) <= p_4));
                }
            }
        }
        else
        { 
            int8_t l_1719 = 0L;
            (*l_1622) = (safe_rshift_func_uint16_t_u_s(g_884, (7L | ((((((l_1719 = (+(+((((**l_1636) , ((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((((void*)0 != g_1717) & (l_1676[0] | (((*l_1112) = (0x5BL == 0x44L)) || g_146))))), p_5)) ^ p_3)) & (***g_1081)) , g_85)))) , l_1102) , l_1675) <= l_1676[0]) <= 3L) <= l_1720[0]))));
        }
    }
    else
    { 
        int32_t l_1721[3][3][5] = {{{0xF6E506E0L,(-3L),(-9L),0x549D6EF6L,0x2202C676L},{(-8L),0xE543A4A5L,8L,0x01BB5231L,0xF6E506E0L},{1L,0x2202C676L,(-9L),0x2202C676L,1L}},{{(-1L),0x549D6EF6L,0xB64EA064L,0x2202C676L,0x01BB5231L},{0xCC9A6153L,(-1L),0xCF8572BDL,0x01BB5231L,(-10L)},{(-9L),0xB64EA064L,0x01BB5231L,0x549D6EF6L,0x01BB5231L}},{{0x01BB5231L,0x01BB5231L,(-3L),0xCF8572BDL,1L},{0x01BB5231L,(-1L),1L,8L,0xF6E506E0L},{(-9L),(-8L),(-10L),0xE543A4A5L,0x2202C676L}}};
        int i, j, k;
        l_1721[0][1][4] ^= (p_4 >= 0x5B6F77E53A807412LL);
    }
    return l_1722;
}



static const int8_t  func_16(int64_t  p_17, int32_t  p_18)
{ 
    uint64_t l_546[5][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
    const int8_t l_551 = (-1L);
    union U2 l_558 = {0x64AE2819L};
    int16_t *l_563 = &g_236.f2;
    int16_t *l_564 = (void*)0;
    int8_t *l_565[5] = {&g_361[1],&g_361[1],&g_361[1],&g_361[1],&g_361[1]};
    int32_t l_566 = 0x970F96B3L;
    struct S0 l_578 = {1357,1207,-6223,6669};
    int64_t *l_579 = &g_259;
    int32_t l_632 = 0x2A9E3AA6L;
    int32_t l_634 = 0x3FB8D053L;
    int32_t l_635 = (-1L);
    int32_t l_638 = 0x9F71B3A6L;
    int32_t l_639 = 0x92309BA2L;
    int32_t l_640 = (-10L);
    int32_t l_661 = 0L;
    int32_t l_662 = 9L;
    int32_t l_663[6][6][1] = {{{1L},{1L},{1L},{1L},{(-2L)},{0L}},{{(-2L)},{1L},{1L},{1L},{1L},{(-2L)}},{{0L},{(-2L)},{1L},{1L},{1L},{1L}},{{(-2L)},{0L},{(-2L)},{1L},{1L},{1L}},{{1L},{(-2L)},{0L},{(-2L)},{1L},{1L}},{{1L},{1L},{(-2L)},{0L},{(-2L)},{1L}}};
    uint8_t l_686 = 0xBCL;
    int64_t l_773 = (-2L);
    const uint8_t *l_808 = &g_741;
    const uint8_t **l_807 = &l_808;
    const uint8_t *** const l_806 = &l_807;
    const uint8_t *** const *l_805 = &l_806;
    uint32_t l_809 = 0x5F8E40D5L;
    const struct S1 *****l_864 = (void*)0;
    int32_t l_887 = 1L;
    uint32_t l_888 = 18446744073709551610UL;
    uint32_t **l_934[5][1];
    uint16_t l_942[4] = {0x7543L,0x7543L,0x7543L,0x7543L};
    int32_t *l_973[5] = {&l_640,&l_640,&l_640,&l_640,&l_640};
    int64_t l_988 = (-1L);
    int64_t l_992[3][5] = {{0xFAFB48C6573CE221LL,0xFAFB48C6573CE221LL,0xFAFB48C6573CE221LL,0xFAFB48C6573CE221LL,0xFAFB48C6573CE221LL},{1L,7L,1L,7L,1L},{0xFAFB48C6573CE221LL,0xFAFB48C6573CE221LL,0xFAFB48C6573CE221LL,0xFAFB48C6573CE221LL,0xFAFB48C6573CE221LL}};
    struct S0 l_1071 = {430,1636,-8612,974};
    struct S0 *l_1072 = &g_79;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_934[i][j] = &g_932[0];
    }
    if ((((safe_div_func_int32_t_s_s(l_546[1][0], (safe_rshift_func_int8_t_s_s((((safe_div_func_int8_t_s_s((l_551 != 0x8D698F9DL), (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((l_558 , (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_566 = ((g_188 |= (((l_558.f2 <= l_558.f3) , l_551) && 8L)) ^ g_361[1])), 2)), p_18))) > p_17), 4)), p_18)) != p_18), 10)))) >= l_558.f0) && (-1L)), 6)))) && p_18) && 1L))
    { 
        uint32_t l_569 = 0xF20F4E5BL;
        int64_t **l_580[2][5] = {{&g_105[1][2][2],&l_579,&g_105[1][2][2],&l_579,&g_105[1][2][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t *l_590 = (void*)0;
        int32_t *l_591 = &g_289;
        uint32_t *l_592 = &g_74;
        int32_t *l_593 = &l_566;
        struct S1 *** const l_597 = (void*)0;
        struct S1 *** const *l_596[7];
        struct S1 *** const ** const l_595[2] = {&l_596[6],&l_596[6]};
        int32_t l_628[1];
        uint32_t l_652 = 0x9C9AA60BL;
        struct S0 l_653[4] = {{496,3605,6967,-4621},{496,3605,6967,-4621},{496,3605,6967,-4621},{496,3605,6967,-4621}};
        struct S0 *l_654 = &l_578;
        union U2 **l_655 = (void*)0;
        int32_t *l_656 = &g_81;
        uint8_t l_665 = 0x81L;
        int i, j;
        for (i = 0; i < 7; i++)
            l_596[i] = &l_597;
        for (i = 0; i < 1; i++)
            l_628[i] = (-1L);
lbl_594:
        (*l_593) |= (((safe_sub_func_int64_t_s_s((l_569 == ((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((&g_86 == (l_578 , (g_581 = (g_105[1][2][2] = l_579)))), ((*l_592) = (safe_mod_func_int32_t_s_s((p_17 && l_569), (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s((((*l_591) = l_578.f2) , p_18), l_569)) || g_510[0]), 1)), g_510[0]))))))) > l_578.f3), l_546[1][0])), 1UL)) , p_17), 8)) | 0x6032L)), l_558.f1)) >= l_569) ^ l_569);
        for (g_236.f1 = 0; (g_236.f1 <= 1); g_236.f1 += 1)
        { 
            int8_t **l_599 = &l_565[2];
            uint8_t l_603 = 0UL;
            union U2 *l_609 = &l_558;
            int16_t l_615 = 0x4AF3L;
            int32_t l_622 = 1L;
            const int64_t l_624 = 0x40BE881DD4068BB0LL;
            int32_t l_630 = (-1L);
            int32_t l_633 = 0x8B3C0F6EL;
            int32_t l_636 = 0xF1230A89L;
            int32_t l_637 = 0x7BE077ABL;
            int32_t l_641 = 0x0E3C966CL;
            int32_t l_642 = 0xBD5D52FDL;
            uint32_t l_643 = 0xD806E890L;
            for (g_74 = 0; (g_74 <= 2); g_74 += 1)
            { 
                struct S1 *** const **l_598 = &l_596[6];
                int8_t **l_600 = &l_565[2];
                union U2 **l_606 = &g_238;
                int32_t *l_612 = &g_22;
                int32_t l_614[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                if (l_578.f3)
                    goto lbl_594;
            }
            if (p_18)
                continue;
            for (l_558.f3 = 0; (l_558.f3 <= 1); l_558.f3 += 1)
            { 
                uint64_t *l_618 = &g_82;
                int32_t l_629[3][2] = {{0x1FC00C7DL,1L},{1L,0x1FC00C7DL},{1L,1L}};
                int32_t l_631 = 0x0FA2B624L;
                int i, j;
                if ((l_615 != ((safe_sub_func_uint64_t_u_u(((*l_618) = p_17), ((g_259 >= l_578.f3) >= 0x66772530C57E0C54LL))) != p_18)))
                { 
                    uint8_t l_623[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_623[i] = 1UL;
                    l_622 = (0xECA2L != (+(safe_lshift_func_int16_t_s_u(((p_18 ^ ((void*)0 == &g_236)) || ((*l_618) = ((-1L) ^ ((((255UL == 252UL) || p_17) || 0xBBL) || (*l_593))))), g_90))));
                    (*l_593) = (0x8D489081L || (l_623[0] = p_18));
                    return g_259;
                }
                else
                { 
                    (*l_593) ^= l_624;
                    if (p_18)
                        continue;
                    if (p_17)
                        break;
                }
                for (g_87 = 0; (g_87 <= 4); g_87 += 1)
                { 
                    int32_t *l_625 = &l_622;
                    int32_t *l_626 = &l_622;
                    int32_t *l_627[7] = {&l_622,&g_22,&l_622,&l_622,&g_22,&l_622,&l_622};
                    int i;
                    l_643--;
                }
            }
        }
        (*l_656) |= (((safe_div_func_int32_t_s_s(((*l_593) ^= l_640), 4294967286UL)) >= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((p_18 , (l_652 &= p_17)), 0)), 1))) != (l_653[2] , ((((((*l_654) = g_79) , ((void*)0 != l_655)) || g_159.f0) , (void*)0) != &g_238)));
        for (g_393 = (-19); (g_393 < 34); g_393 = safe_add_func_int64_t_s_s(g_393, 9))
        { 
            int32_t *l_659 = &l_635;
            int32_t *l_660[3];
            int16_t l_664 = 0x8CE6L;
            int i;
            for (i = 0; i < 3; i++)
                l_660[i] = &l_640;
            l_665--;
            (*l_593) = l_551;
        }
    }
    else
    { 
        int16_t l_674 = (-10L);
        int32_t l_681 = (-1L);
        int32_t l_682 = 0x2CFF1D72L;
        int32_t l_683 = (-9L);
        int32_t l_684[2][7][6] = {{{9L,9L,0x2B552FCEL,9L,9L,0x2B552FCEL},{9L,9L,0x2B552FCEL,9L,9L,0x2B552FCEL},{9L,9L,0x2B552FCEL,9L,9L,0x2B552FCEL},{9L,9L,0x2B552FCEL,9L,9L,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L}},{{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L},{0xBBB0B33EL,0xBBB0B33EL,9L,0xBBB0B33EL,0xBBB0B33EL,9L}}};
        int16_t l_685 = 1L;
        uint16_t *l_693 = &g_13;
        struct S0 l_779[2][6] = {{{536,1220,8606,5100},{536,1220,8606,5100},{1337,3459,144,-4108},{536,1220,8606,5100},{536,1220,8606,5100},{1337,3459,144,-4108}},{{536,1220,8606,5100},{536,1220,8606,5100},{1337,3459,144,-4108},{536,1220,8606,5100},{536,1220,8606,5100},{1337,3459,144,-4108}}};
        struct S1 *l_835 = &g_159;
        const struct S1 *l_869 = (void*)0;
        const struct S1 **l_868 = &l_869;
        const struct S1 ***l_867[7] = {&l_868,&l_868,&l_868,&l_868,&l_868,&l_868,&l_868};
        const struct S1 ****l_866 = &l_867[5];
        const struct S1 *****l_865 = &l_866;
        uint32_t l_874 = 0UL;
        int32_t *l_875 = &g_834;
        int32_t *l_876 = (void*)0;
        int32_t *l_877 = &l_661;
        int32_t *l_878 = &l_683;
        int32_t *l_879 = &l_638;
        int32_t *l_880 = &l_683;
        int32_t *l_881 = &l_661;
        int32_t *l_882 = &g_22;
        int32_t *l_883[3];
        uint8_t *l_897 = &g_411;
        uint8_t **l_896 = &l_897;
        int16_t **l_908 = &l_564;
        union U2 l_930 = {0UL};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_883[i] = &l_638;
        for (l_558.f1 = 21; (l_558.f1 == 13); --l_558.f1)
        { 
            int32_t *l_673 = &l_661;
            int32_t l_675[4] = {0x1A3FE834L,0x1A3FE834L,0x1A3FE834L,0x1A3FE834L};
            int32_t *l_676 = &l_632;
            int32_t *l_677 = &l_661;
            int32_t *l_678 = &g_81;
            int32_t *l_679 = &l_639;
            int32_t *l_680[5][4][3] = {{{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_675[1],&l_640},{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_635,&l_640}},{{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_675[1],&l_640},{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_635,&l_640}},{{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_675[1],&l_640},{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_635,&l_640}},{{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_675[1],&l_640},{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_635,&l_640}},{{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_675[1],&l_640},{&l_661,(void*)0,&l_661},{&l_663[5][1][0],&l_635,&l_640}}};
            int64_t l_714 = 0xA58AD7BB18433896LL;
            int64_t **l_719 = (void*)0;
            int64_t ***l_718 = &l_719;
            const struct S0 *l_721 = &g_79;
            uint16_t *l_770 = &g_13;
            struct S1 l_781 = {460};
            int i, j, k;
            for (g_78 = 0; (g_78 < 28); g_78 = safe_add_func_uint64_t_u_u(g_78, 1))
            { 
                uint8_t l_672 = 0x67L;
                if (l_672)
                    break;
                return l_663[5][1][0];
            }
            l_686++;
        }
        (*l_877) = ((*l_875) = (((*l_563) = (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((p_18 , l_809), (p_17 <= ((1L | (((void*)0 == &g_112[1][2][0]) >= p_18)) <= 0x0C6A31C2L)))), p_18))) || l_874));
        g_884--;
        l_888--;
        if (((***l_866) != (((+((p_17 || ((safe_sub_func_uint32_t_u_u(0xD6C2DA7CL, ((safe_mod_func_int64_t_s_s(((*l_579) |= (g_411 , (((g_722[3] <= ((((*l_896) = &l_686) != ((safe_rshift_func_uint16_t_u_s((g_744[3][5] , (*l_875)), p_18)) , (void*)0)) == 9L)) < g_236.f3) ^ l_551))), l_809)) <= p_17))) , p_17)) , g_327[3][2])) , g_90) , &g_159)))
        { 
            struct S1 l_904 = {150};
            int32_t l_909 = 5L;
            l_909 &= ((((safe_rshift_func_uint8_t_u_s(((*l_897) = (safe_mod_func_int16_t_s_s((3L == (l_558.f3 < ((l_904 , (p_18 ^ (~(((((*l_878) = (*l_881)) && (((safe_div_func_int16_t_s_s((l_635 <= (*l_880)), g_327[5][3])) , 0x4FC1562FE522B1CFLL) != l_566)) , g_78) || p_17)))) | p_18))), (*l_877)))), 3)) & (*l_877)) , &l_563) == l_908);
        }
        else
        { 
            uint32_t ***l_933 = &g_931;
            int32_t l_935 = (-2L);
            int32_t l_936 = 4L;
            int32_t l_940 = 0xEE17D98FL;
            uint32_t l_947 = 0x119972DEL;
            int32_t l_957 = 0x472BE065L;
            if (((safe_rshift_func_uint8_t_u_u((l_558 , (((*l_579) = (safe_div_func_int8_t_s_s((0xB5L > ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((0x2E63C076L == ((*l_880) = 9L)) , ((((l_935 = ((**l_896) ^= ((safe_rshift_func_uint16_t_u_u(((*l_875) = ((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(0xC3L, (safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((*l_933) = (l_930 , g_931)) != l_934[1][0]), p_18)) == p_17), p_17)))), 2)), p_17)) || p_17) != l_935) | p_18)), 13)) , 1UL))) == 0xB7L) , 0xD3CA223EL) && 4294967295UL)) == p_17), p_17)), 11)) != (-1L))), p_17))) <= 0x3E000A83C5860149LL)), 1)) , l_935))
            { 
                int32_t l_937 = 0xE80685EBL;
                int32_t l_938 = 0xA5F145C4L;
                int32_t l_939 = 1L;
                int32_t l_941 = 0x93320346L;
                l_942[2]++;
            }
            else
            { 
                struct S1 l_948 = {1148};
                if (l_942[2])
                { 
                    int32_t **l_945 = &l_876;
                    (*l_945) = &l_662;
                }
                else
                { 
                    uint8_t ** const *l_946 = &l_896;
                    uint8_t l_953 = 0x4EL;
                    uint64_t *l_956 = &l_546[1][0];
                    uint64_t *l_967 = &g_82;
                    int32_t *l_968 = &l_681;
                    const int32_t **l_969 = (void*)0;
                    (*l_879) &= (l_946 == (p_17 , (((l_947 < (l_948 , ((*l_563) ^= (((*l_881) && (g_79.f3 || (safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_779[0][4] , l_953), 0x501DL)), 15)))) >= 0xCD78F73B33D292A3LL)))) && l_935) , &g_163)));
                    g_972 = (g_970 = func_57((safe_mod_func_uint64_t_u_u(((*l_956) = p_18), ((l_957 , 0x1A81C9A42C6B9F1ALL) & ((*l_967) = (p_17 == (safe_sub_func_uint8_t_u_u((((*l_563) = (((safe_div_func_uint16_t_u_u(p_17, (((!(((safe_add_func_int8_t_s_s((l_940 &= (((safe_sub_func_int64_t_s_s(0xB97932DF165F2F98LL, p_17)) & (**g_931)) != l_948.f0)), p_17)) && p_18) > 0x589FL)) & 0x2A8DL) , l_948.f0))) , 0xE7L) == p_18)) & p_17), p_18))))))), l_578, l_968, l_957));
                }
            }
            for (l_681 = 0; l_681 < 2; l_681 += 1)
            {
                for (l_957 = 0; l_957 < 6; l_957 += 1)
                {
                    struct S0 tmp = {225,1487,-10519,6267};
                    l_779[l_681][l_957] = tmp;
                }
            }
        }
    }
    g_974--;
    if ((p_18 >= (&l_564 != &l_563)))
    { 
        uint32_t l_978 = 0x9CE1A214L;
        int32_t l_979 = 1L;
        int32_t l_981 = 1L;
        int32_t l_983[7] = {8L,8L,8L,8L,8L,8L,8L};
        int32_t l_990[7][7] = {{0L,0L,0x5C19F93AL,(-1L),(-3L),(-1L),0x5C19F93AL},{0xF906E750L,0xF906E750L,(-1L),0L,0L,0x671DE85CL,0L},{0L,0xF906E750L,(-5L),0x671DE85CL,0x671DE85CL,(-5L),0xF906E750L},{(-5L),0L,0xF906E750L,0x5C19F93AL,0L,(-1L),0L},{(-5L),0L,(-3L),0xF906E750L,(-3L),0L,(-5L)},{0L,(-1L),0L,0x5C19F93AL,0xF906E750L,0L,0x5AD04C71L},{(-1L),0x5AD04C71L,(-5L),(-5L),0x5AD04C71L,(-1L),(-1L)}};
        uint16_t l_993 = 1UL;
        struct S1 **l_1000 = (void*)0;
        union U2 *l_1017 = &g_236;
        int i, j;
        for (g_236.f0 = 0; (g_236.f0 <= 4); g_236.f0 += 1)
        { 
            int32_t l_980 = 1L;
            int32_t l_982 = 0L;
            int32_t l_984[5][5][7] = {{{(-1L),9L,(-1L),8L,0x906B1102L,0x53D3E266L,0x73F28F8BL},{0x67CDE546L,0x6D61FF7AL,(-1L),5L,0x07743C44L,0L,1L},{0x5EDD8F9CL,(-1L),0xAF1345D3L,0x492788A2L,(-5L),(-5L),0x492788A2L},{(-1L),1L,(-1L),0x7455484BL,0x5EDD8F9CL,9L,0L},{0xA9432BD2L,0xC14524BAL,(-5L),0x67CDE546L,0L,0L,0x0FB6F30FL}},{{0x9F7CB270L,0L,(-1L),2L,0xAF1345D3L,9L,(-7L)},{0x73F28F8BL,(-8L),8L,(-1L),1L,(-5L),0x3071EE42L},{5L,(-2L),0xEB1E226BL,0xA845182BL,2L,0L,0xC14524BAL},{(-1L),0x7B85DAE5L,0x906B1102L,1L,0x62287D65L,0x53D3E266L,0x2A90880CL},{0x0BFAB77EL,0x07743C44L,0xE6941BE8L,(-7L),0x3071EE42L,(-1L),0x2F552E98L}},{{0x0BFAB77EL,0L,0x444D546BL,0x7B85DAE5L,0L,0x787FBA39L,5L},{(-1L),0xCDD3E2F8L,0x7455484BL,(-1L),5L,8L,0x6D61FF7AL},{5L,0x2F552E98L,(-1L),0xC14524BAL,(-1L),0x2F552E98L,5L},{0x73F28F8BL,0x2C8F9893L,0x5EDD8F9CL,0x53D3E266L,(-8L),1L,8L},{0x9F7CB270L,(-8L),0x07743C44L,0xE0D5560FL,0xEB1E226BL,(-1L),0x53D3E266L}},{{0xA9432BD2L,0x492788A2L,0x5EDD8F9CL,0x906B1102L,0x6D61FF7AL,0x444D546BL,(-4L)},{(-1L),0x7392CA8AL,(-1L),0x5EDD8F9CL,(-1L),(-1L),0xE4CD31B2L},{0x5EDD8F9CL,(-7L),0x7455484BL,(-1L),(-8L),8L,0x07743C44L},{0x67CDE546L,0x787FBA39L,0x444D546BL,(-1L),0L,0x73F28F8BL,1L},{(-1L),0x53D3E266L,0xE6941BE8L,0xA9432BD2L,0L,0xA845182BL,9L}},{{0x2A90880CL,2L,0x906B1102L,(-2L),(-8L),0x67CDE546L,0x7B85DAE5L},{0xAF1345D3L,8L,0xEB1E226BL,0x0FB6F30FL,(-1L),0L,(-1L)},{0L,8L,8L,0L,0x6D61FF7AL,5L,0x9F7CB270L},{0xCDD3E2F8L,0x3071EE42L,(-1L),0xE4CD31B2L,0xEB1E226BL,0x2A90880CL,(-8L)},{0xC4B53E03L,0xA9432BD2L,(-5L),0x2C8F9893L,(-8L),2L,0x9F7CB270L}}};
            int16_t l_985[3][1];
            int64_t l_986 = 1L;
            int32_t l_987 = 0L;
            int32_t l_991 = (-3L);
            uint64_t l_1009[3];
            uint32_t l_1027[2];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_985[i][j] = 0L;
            }
            for (i = 0; i < 3; i++)
                l_1009[i] = 3UL;
            for (i = 0; i < 2; i++)
                l_1027[i] = 0xC3B270FEL;
            l_978 = (safe_unary_minus_func_uint32_t_u(g_510[g_236.f0]));
            l_993--;
            if ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((g_510[g_236.f0] || g_393) != ((l_1000 != (g_1001[2] = &g_158)) , (!((((l_983[4] |= ((safe_add_func_uint64_t_u_u(1UL, g_974)) && p_18)) & p_18) < g_236.f0) || 0xE04000F0L)))), 0x85F5L)), 7)))
            { 
                int64_t l_1005 = 0x2D409DF1DC7B8867LL;
                int32_t l_1006 = 0x2607CAACL;
                int32_t l_1007 = (-5L);
                int32_t l_1008[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1008[i] = 0x3C09388CL;
                g_972 = &l_983[6];
                for (l_978 = 0; (l_978 <= 0); l_978 += 1)
                { 
                    return g_327[4][3];
                }
                l_1009[2]++;
            }
            else
            { 
                struct S0 l_1012 = {397,389,7316,-365};
                int64_t *l_1016 = (void*)0;
                struct S1 l_1019 = {333};
                uint64_t l_1020 = 18446744073709551615UL;
                for (l_809 = 0; (l_809 <= 0); l_809 += 1)
                { 
                    struct S0 *l_1013 = &l_578;
                    union U2 **l_1018 = &l_1017;
                    (*l_1013) = (p_17 , l_1012);
                    l_1020 ^= (l_1012.f2 = (((void*)0 != &l_942[2]) && ((safe_lshift_func_int16_t_s_u((((void*)0 != l_1016) >= (((*l_1018) = l_1017) != (l_1019 , &g_236))), l_1009[2])) >= p_17)));
                    return g_259;
                }
                return g_510[0];
            }
            l_983[1] ^= 0x162D2F47L;
            for (g_90 = 0; (g_90 <= 0); g_90 += 1)
            { 
                struct S1 l_1028 = {599};
                uint8_t *l_1031[5] = {&l_558.f3,&l_558.f3,&l_558.f3,&l_558.f3,&l_558.f3};
                uint16_t *l_1037 = &l_942[0];
                int i, j;
                l_982 &= (l_981 = (safe_rshift_func_uint8_t_u_u((((((*l_1037) |= ((((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((l_1027[0] != (l_987 = (l_1028 , (safe_add_func_int32_t_s_s((l_983[3] = (-1L)), p_17))))) < (safe_mod_func_uint16_t_u_u(((l_980 = (p_17 && (~(safe_sub_func_uint32_t_u_u(p_18, (**g_931)))))) != l_993), g_327[3][2]))), p_18)), 6)) && l_984[2][1][1]) != 7L) < 0x60L)) ^ g_74) | p_18) , 5UL), p_18)));
                if (p_17)
                    break;
            }
        }
    }
    else
    { 
        struct S1 *l_1062 = &g_159;
        for (g_393 = 0; (g_393 >= 3); g_393 = safe_add_func_uint32_t_u_u(g_393, 2))
        { 
            uint32_t l_1042[2];
            struct S0 *l_1046 = &g_79;
            union U2 *l_1053 = &g_236;
            int32_t l_1055 = 0x0A0590ECL;
            int32_t l_1056 = (-7L);
            int32_t l_1057 = (-1L);
            uint8_t l_1058 = 0x92L;
            int i;
            for (i = 0; i < 2; i++)
                l_1042[i] = 0UL;
            for (l_558.f0 = 16; (l_558.f0 > 17); l_558.f0++)
            { 
                int32_t l_1045[1];
                int32_t l_1054[5] = {0xA3794B6DL,0xA3794B6DL,0xA3794B6DL,0xA3794B6DL,0xA3794B6DL};
                struct S1 *l_1061 = &g_159;
                int i;
                for (i = 0; i < 1; i++)
                    l_1045[i] = 0x2AA9A2D6L;
                ++l_1042[0];
                if ((0x69EFC44EL == l_1045[0]))
                { 
                    struct S0 **l_1047 = &l_1046;
                    (*l_1047) = l_1046;
                    (*l_1046) = g_79;
                    if (p_18)
                        break;
                }
                else
                { 
                    uint64_t *l_1050 = &g_82;
                    l_1054[2] = (safe_sub_func_uint64_t_u_u((--(*l_1050)), ((**g_931) | ((void*)0 != l_1053))));
                    l_1055 ^= 0L;
                    ++l_1058;
                }
                l_1062 = l_1061;
            }
        }
        for (g_774 = (-5); (g_774 > 49); g_774 = safe_add_func_int8_t_s_s(g_774, 2))
        { 
            uint16_t l_1068[3][5][5] = {{{1UL,0xD1E7L,0xD1E7L,1UL,0xE65CL},{1UL,0xAC44L,0xD370L,0xD370L,0xAC44L},{0xE65CL,0xD1E7L,0xD370L,1UL,1UL},{0xD1E7L,0xE65CL,0xD1E7L,0xD370L,1UL},{0xAC44L,1UL,1UL,1UL,0xAC44L}},{{0xD1E7L,1UL,0xE65CL,0xAC44L,0xE65CL},{0xE65CL,0xE65CL,1UL,0xAC44L,0UL},{1UL,0xD1E7L,0xD1E7L,1UL,0xE65CL},{1UL,0xAC44L,0xD370L,0xD370L,0xAC44L},{0xE65CL,0xD1E7L,0xD370L,1UL,1UL}},{{0xD1E7L,0xE65CL,0xD1E7L,0xD370L,1UL},{0xAC44L,1UL,1UL,1UL,0xAC44L},{0xD1E7L,1UL,0xE65CL,0xAC44L,0xE65CL},{0xE65CL,0xE65CL,1UL,0xAC44L,0UL},{1UL,0xD1E7L,0xD1E7L,1UL,0xE65CL}}};
            int i, j, k;
            for (g_741 = 0; (g_741 <= 3); g_741 += 1)
            { 
                int64_t l_1067 = (-8L);
                l_1067 = (safe_lshift_func_int8_t_s_u((-1L), 3));
                for (g_236.f2 = 0; (g_236.f2 <= 6); g_236.f2 += 1)
                { 
                    return p_18;
                }
            }
            l_1068[0][3][3]++;
        }
    }
    (*l_1072) = l_1071;
    return p_17;
}



static int32_t  func_19(int64_t  p_20)
{ 
    int32_t *l_21 = &g_22;
    int32_t *l_23 = (void*)0;
    int32_t *l_24 = (void*)0;
    int32_t *l_25 = &g_22;
    int32_t *l_26 = &g_22;
    int32_t l_27 = 0x0C11E043L;
    int32_t *l_28 = (void*)0;
    int32_t *l_29 = &l_27;
    int32_t *l_30 = &l_27;
    int32_t *l_31 = &l_27;
    int32_t *l_32[3];
    uint32_t l_34 = 0xB7C39C9DL;
    int8_t *l_360 = &g_361[0];
    int8_t *l_363[3];
    int8_t **l_362 = &l_363[1];
    int16_t *l_438 = (void*)0;
    struct S1 ***l_439 = (void*)0;
    struct S1 ****l_440 = &l_439;
    int32_t **l_441 = (void*)0;
    int32_t **l_442 = &l_28;
    int8_t l_463 = 0x31L;
    uint8_t *l_476 = &g_236.f1;
    uint8_t **l_475 = &l_476;
    uint32_t l_483[6] = {0x1005975DL,0x1005975DL,0x1005975DL,0x1005975DL,0x1005975DL,0x1005975DL};
    union U2 l_528 = {9UL};
    uint32_t l_533 = 4294967295UL;
    int i;
    for (i = 0; i < 3; i++)
        l_32[i] = &g_22;
    for (i = 0; i < 3; i++)
        l_363[i] = (void*)0;
    l_34++;
    (*l_21) = ((*l_29) || (safe_rshift_func_int16_t_s_u(((*l_31) = func_39((func_46(&l_27) | (l_360 == ((*l_362) = &g_361[0]))), g_236.f1, p_20, p_20)), g_289)));
    (*l_440) = l_439;
    (*l_442) = &l_27;
    for (g_86 = 0; (g_86 != (-8)); --g_86)
    { 
        const uint32_t l_445 = 0UL;
        int32_t l_482 = 0x93C85F1AL;
        struct S0 l_489 = {344,865,10661,6512};
        union U2 l_501 = {0xF848020BL};
        uint32_t l_505 = 0x0038A56FL;
        struct S1 l_529 = {588};
        int32_t l_530 = 0x38F7676CL;
        int32_t l_531 = 0xD44C4621L;
        int32_t l_532 = (-1L);
        int32_t *l_536 = &l_482;
        uint8_t * const l_539 = &g_540[1];
        uint8_t * const *l_538 = &l_539;
        uint8_t * const **l_537[2][4][7] = {{{&l_538,&l_538,&l_538,&l_538,&l_538,&l_538,&l_538},{&l_538,&l_538,&l_538,&l_538,&l_538,&l_538,&l_538},{&l_538,&l_538,&l_538,&l_538,&l_538,&l_538,&l_538},{&l_538,&l_538,&l_538,&l_538,&l_538,&l_538,&l_538}},{{&l_538,&l_538,&l_538,&l_538,&l_538,&l_538,&l_538},{&l_538,&l_538,&l_538,&l_538,&l_538,&l_538,&l_538},{&l_538,&l_538,&l_538,&l_538,&l_538,&l_538,&l_538},{&l_538,&l_538,&l_538,&l_538,&l_538,&l_538,&l_538}}};
        int32_t **l_542[7][1];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_542[i][j] = &l_25;
        }
        if (l_445)
            break;
        for (g_236.f0 = 5; (g_236.f0 < 22); g_236.f0 = safe_add_func_uint8_t_u_u(g_236.f0, 1))
        { 
            int16_t *l_448 = (void*)0;
            int16_t *l_449 = &g_188;
            uint8_t *l_462 = &g_411;
            const int32_t l_464[1] = {0L};
            int32_t **l_500[1];
            uint8_t ***l_503 = (void*)0;
            uint8_t ****l_502 = &l_503;
            int i;
            for (i = 0; i < 1; i++)
                l_500[i] = &l_28;
            if (((251UL == (((*l_449) = 1L) | (((0UL != (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((((((*l_462) = (p_20 | ((p_20 , (0x25L >= (safe_mul_func_int16_t_s_s(((p_20 || g_289) & l_445), g_411)))) ^ 0x591BA20A1AFD54D4LL))) & (*l_21)) && p_20) < l_463) >= p_20), 0xF3L)) , 0xCFB5L), g_125)), 0x50L)) ^ 0xE44AD5A3L) , 0x84ECL), 11)), g_74))) >= l_464[0]) != 0xDF248E5594AA72A5LL))) && 0x11L))
            { 
                struct S1 **l_465 = &g_158;
                int32_t l_472 = (-1L);
                (*l_465) = &g_159;
                for (l_463 = 1; (l_463 >= 0); l_463 -= 1)
                { 
                    int16_t l_477 = (-1L);
                    const int32_t *l_485[3][5] = {{&l_464[0],&l_464[0],&l_464[0],&l_464[0],&l_464[0]},{&l_464[0],&l_464[0],&l_464[0],&l_464[0],&l_464[0]},{&l_464[0],&l_464[0],&l_464[0],&l_464[0],&l_464[0]}};
                    const int32_t **l_484 = &l_485[2][0];
                    int i, j, k;
                    (**l_442) ^= (safe_lshift_func_uint8_t_u_s(((-8L) >= p_20), (((safe_rshift_func_int16_t_s_s((g_74 >= (l_472 <= (((safe_add_func_int64_t_s_s((((((l_475 != &l_462) > p_20) ^ p_20) != 8UL) >= p_20), (-1L))) <= 0xD5L) == 0x8B04L))), l_477)) > 0xA1D8305E03BA8366LL) , (-1L))));
                    l_472 &= (p_20 , (((((void*)0 != g_105[(l_463 + 2)][(l_463 + 1)][(l_463 + 1)]) < 0x45L) <= ((((l_482 = ((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((((*g_158) , l_477) && g_188) , p_20), 1L)), l_477)) != l_477)) | l_483[2]) >= g_125) , 0x16F9L)) && l_477));
                    (*l_484) = &l_464[0];
                }
            }
            else
            { 
                struct S1 l_493 = {492};
                int32_t l_494 = 0x2F7DF20CL;
                uint8_t ***l_496[2];
                uint8_t *** const *l_495 = &l_496[1];
                int32_t l_504 = 0x4419C105L;
                int i;
                for (i = 0; i < 2; i++)
                    l_496[i] = (void*)0;
                for (g_289 = 0; (g_289 > (-13)); --g_289)
                { 
                    struct S0 *l_490 = &l_489;
                    (*l_25) = (g_79 , (!0x76BD8C82L));
                    (*l_490) = l_489;
                    (*l_21) &= (safe_rshift_func_int16_t_s_u((l_464[0] ^ (g_33[1] , p_20)), g_86));
                    if (l_464[0])
                        break;
                    l_494 &= (((*g_158) = l_493) , l_464[0]);
                }
                (*l_31) = (l_495 == ((~(((l_494 = (safe_mul_func_int16_t_s_s((l_464[0] ^ l_493.f0), (l_500[0] != (l_501 , &l_29))))) <= (l_501.f2 , g_78)) , p_20)) , l_502));
                l_505++;
                for (g_90 = 1; (g_90 <= 5); g_90 += 1)
                { 
                    int8_t l_508[4] = {0x2CL,0x2CL,0x2CL,0x2CL};
                    int32_t l_509 = 0x1E8A26FAL;
                    struct S0 l_513 = {428,817,-10257,1494};
                    struct S0 *l_514 = &g_79;
                    uint64_t *l_527 = (void*)0;
                    int i;
                    --g_510[0];
                    (*l_514) = l_513;
                    (*l_26) = ((safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((((((((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((l_483[g_90] | (safe_sub_func_uint64_t_u_u((g_393 = p_20), ((((l_528 , (((*g_158) = l_529) , &g_90)) != (void*)0) && (p_20 , l_504)) ^ p_20)))), p_20)), 1)) ^ p_20) || 0UL) , (void*)0) == &l_475) ^ p_20) == 247UL) == (*l_25)), 3)), l_489.f2)), 0xFD7F2E3EBE484E08LL)) | g_146);
                }
                if (p_20)
                    break;
            }
            l_533++;
            l_536 = (l_528 , &g_81);
        }
        (*l_26) |= ((**l_442) &= (l_501 , (p_20 <= ((((*l_536) , (*g_158)) , &g_112[1][3][0]) != (l_542[4][0] = ((((g_541 = &l_476) == (void*)0) & 0xAAD6D039B72B157ALL) , &l_30))))));
    }
    return g_79.f3;
}



static int16_t  func_39(uint32_t  p_40, int16_t  p_41, int64_t  p_42, int32_t  p_43)
{ 
    uint32_t l_369[7][7] = {{4294967295UL,9UL,0x2B780CC1L,0x3F53076EL,0x2B780CC1L,9UL,4294967295UL},{4294967289UL,8UL,4294967289UL,4294967289UL,8UL,4294967289UL,4294967289UL},{4294967295UL,0x3F53076EL,0xC9178980L,0x3F53076EL,4294967295UL,0xE9846308L,4294967295UL},{8UL,4294967289UL,4294967289UL,8UL,4294967289UL,4294967289UL,8UL},{0x2B780CC1L,0x3F53076EL,0xC9178980L,0xE9846308L,0x2B780CC1L,0xE9846308L,0xC9178980L},{4294967289UL,4294967289UL,8UL,4294967289UL,4294967289UL,8UL,4294967289UL},{0x2B780CC1L,0xE9846308L,0xC9178980L,9UL,0xC9178980L,0xE9846308L,0x2B780CC1L}};
    int64_t *l_383 = &g_78;
    uint16_t l_384 = 0x3476L;
    int32_t l_385 = 2L;
    struct S0 l_402 = {1023,963,10951,-6937};
    int32_t l_434[5][4] = {{(-1L),0x0F93DBCCL,0x0F93DBCCL,(-1L)},{(-1L),0x0F93DBCCL,0x0F93DBCCL,(-1L)},{(-1L),0x0F93DBCCL,0x0F93DBCCL,(-1L)},{(-1L),0x0F93DBCCL,0x0F93DBCCL,(-1L)},{(-1L),0x0F93DBCCL,0x0F93DBCCL,(-1L)}};
    int i, j;
    for (g_236.f3 = 0; (g_236.f3 <= 2); g_236.f3 += 1)
    { 
        int8_t * const l_368 = &g_361[0];
        int32_t l_376 = 0L;
        int64_t *** const l_382 = (void*)0;
        int32_t *l_397 = &l_385;
        uint8_t ***l_410 = (void*)0;
        struct S1 **l_417 = &g_158;
        int32_t *l_427 = &g_22;
        int32_t *l_428 = (void*)0;
        int32_t *l_429 = &l_385;
        int32_t *l_430 = &g_22;
        int32_t *l_431 = &l_385;
        int32_t *l_432 = &l_385;
        int32_t *l_433[7][6][6] = {{{&l_385,(void*)0,(void*)0,&g_22,&l_376,&g_81},{&g_81,&g_22,&g_22,&l_376,(void*)0,&l_376},{&l_376,&g_22,&g_81,&l_385,&l_376,(void*)0},{&l_376,&l_376,&g_22,&g_81,&g_22,&g_81},{(void*)0,(void*)0,&l_385,&g_22,&g_81,&l_376},{(void*)0,&g_81,&l_376,&g_22,&g_22,&l_376}},{{(void*)0,&l_376,&l_385,(void*)0,&l_385,(void*)0},{&l_376,&l_385,&l_376,(void*)0,&l_376,&l_376},{&l_376,&g_81,&g_81,&g_22,&l_385,&g_22},{&l_376,&g_22,&g_22,&l_385,&g_22,&g_22},{&g_81,&l_376,&l_385,&l_376,&g_22,&g_22},{&l_376,&l_376,&l_376,&g_81,(void*)0,(void*)0}},{{(void*)0,&g_22,&l_376,&g_81,&l_385,&l_376},{&l_385,&g_22,&g_22,&g_81,&l_376,&l_376},{&g_22,(void*)0,&l_376,&l_376,&g_81,&l_376},{&l_385,&l_385,&l_385,&l_376,(void*)0,&g_22},{&l_376,&g_22,&l_376,&l_385,&l_385,&l_376},{(void*)0,&l_385,(void*)0,&l_385,&g_22,&l_376}},{{&l_376,&g_22,&l_385,&l_376,&g_81,&l_376},{&l_385,&l_385,&g_22,&l_376,&l_376,&l_376},{&g_22,&l_385,&g_81,&g_81,&g_22,&g_81},{&l_385,&l_385,&g_22,&g_81,&g_81,&g_81},{(void*)0,&l_376,&l_376,&g_81,&l_376,(void*)0},{&l_376,&l_376,&l_376,&l_376,&l_376,&g_22}},{{&g_81,&g_81,&l_376,&l_385,&g_22,(void*)0},{&l_376,&l_385,&g_22,&g_81,&l_376,&l_376},{&l_385,&g_81,&l_376,&g_81,&g_81,&g_22},{&l_376,&l_376,&l_376,&g_81,&g_22,(void*)0},{&g_81,&l_376,&g_22,&g_22,&l_376,&l_376},{(void*)0,&g_81,&l_385,&g_81,&l_385,&g_22}},{{&l_376,&l_376,(void*)0,(void*)0,&l_376,&l_385},{(void*)0,&g_22,&l_376,&l_385,&g_81,&g_22},{&g_81,(void*)0,(void*)0,&l_385,&l_385,&g_22},{&l_376,&g_81,&g_81,&l_385,&l_385,&g_22},{&l_376,&g_22,&l_385,&g_22,&g_22,&l_385},{&l_376,&l_376,(void*)0,&l_385,&l_376,&l_376}},{{&l_376,&l_376,&l_376,&g_22,&g_22,(void*)0},{&l_376,&l_376,&l_376,(void*)0,&l_376,&l_376},{&l_376,(void*)0,(void*)0,&l_376,&l_376,&l_385},{&l_376,&l_376,&l_385,&l_385,&l_376,&g_22},{(void*)0,&g_22,&g_81,&g_81,&l_376,&g_22},{&l_376,&g_81,(void*)0,&g_22,&g_22,&g_22}}};
        uint8_t l_435 = 0xECL;
        int i, j, k;
        l_385 |= (safe_sub_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u(((void*)0 == l_368), (l_369[5][6] == ((((safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_74 & (safe_mul_func_uint8_t_u_u(l_376, (~(safe_div_func_uint8_t_u_u((((((g_236 , (safe_div_func_uint16_t_u_u((l_382 == (void*)0), 5UL))) == 1UL) , (void*)0) != l_383) || p_43), p_42)))))), l_376)), l_376)) != l_384) != g_361[0]) < g_74)))) <= l_376) & 0x385BC1C0L) , 1L), p_43));
        if (p_43)
            break;
        if (((void*)0 == &l_368))
        { 
            struct S0 *l_390 = &g_79;
            uint64_t *l_391 = &g_82;
            uint64_t *l_392 = &g_393;
            uint8_t *l_394 = &g_236.f1;
            int32_t *l_395 = &l_385;
            (*l_395) &= ((safe_rshift_func_uint16_t_u_u(0UL, (((((g_236.f3 == l_376) && ((*l_392) = ((*l_391) = (safe_add_func_uint32_t_u_u(p_41, (((*l_390) = g_79) , p_43)))))) , (((((void*)0 != l_394) || l_384) , l_376) >= p_40)) & p_42) , g_327[3][2]))) , 2L);
            if (l_385)
                continue;
        }
        else
        { 
            int32_t **l_396[1];
            int i;
            for (i = 0; i < 1; i++)
                l_396[i] = &g_112[1][1][0];
            if (p_42)
                break;
            g_112[1][2][0] = &g_22;
            for (g_125 = 2; (g_125 >= 0); g_125 -= 1)
            { 
                uint16_t l_398 = 0UL;
                struct S1 ** const l_416 = &g_158;
                int32_t l_419 = 0x1792889DL;
                int32_t l_426 = 1L;
                l_397 = (void*)0;
                --l_398;
                for (l_376 = 2; (l_376 >= 0); l_376 -= 1)
                { 
                    int32_t *l_401 = &g_81;
                    uint64_t *l_409 = &g_82;
                    uint32_t *l_418[4][4][2] = {{{(void*)0,&g_90},{&g_90,(void*)0},{&g_90,&g_74},{&g_90,(void*)0}},{{&g_90,&g_90},{(void*)0,&l_369[1][0]},{(void*)0,&g_74},{&g_90,&g_74}},{{&g_74,&g_74},{&g_90,&g_74},{(void*)0,&l_369[1][0]},{(void*)0,&g_90}},{{&g_90,(void*)0},{&g_90,&g_74},{&g_90,(void*)0},{&g_90,&g_90}}};
                    uint16_t *l_422 = (void*)0;
                    uint16_t *l_423 = &l_398;
                    int i, j, k;
                    l_401 = &g_22;
                    l_397 = func_57(g_90, l_402, &p_43, ((g_13 , ((safe_add_func_int32_t_s_s(l_402.f3, (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(((*l_409) = 1UL), ((((0UL > p_41) > 0xB59AD6C758711323LL) , l_410) == (void*)0))), 7)))) < p_40)) || g_411));
                    if ((*l_401))
                        break;
                    l_402.f2 &= (safe_sub_func_uint32_t_u_u((l_376 && ((safe_sub_func_uint32_t_u_u((l_419 |= (p_43 , (g_74 = ((l_402.f3 == (l_416 != l_417)) > p_40)))), ((safe_lshift_func_uint16_t_u_s((++(*l_423)), g_22)) <= p_40))) & l_426)), p_43));
                }
                if (p_43)
                    break;
            }
        }
        l_435++;
    }
    for (p_40 = 0; (p_40 <= 0); p_40 += 1)
    { 
        return g_327[3][2];
    }
    (*g_158) = (*g_158);
    return l_402.f0;
}



static uint64_t  func_46(int32_t * p_47)
{ 
    uint8_t l_50[2];
    uint8_t *l_145 = &g_87;
    uint32_t l_148 = 0x10171667L;
    int32_t l_150 = 0xD340C11EL;
    int32_t *l_154 = (void*)0;
    int32_t *l_199 = &g_81;
    uint8_t ***l_215 = &g_163;
    uint8_t ****l_214 = &l_215;
    int32_t l_282[5] = {0x54F81062L,0x54F81062L,0x54F81062L,0x54F81062L,0x54F81062L};
    int8_t l_351[5];
    uint16_t l_354 = 0x6AE1L;
    struct S1 l_357[3][2][5] = {{{{269},{269},{269},{269},{269}},{{1038},{1038},{1038},{1038},{1038}}},{{{269},{269},{269},{269},{269}},{{1038},{1038},{1038},{1038},{1038}}},{{{269},{269},{269},{269},{269}},{{1038},{1038},{1038},{1038},{1038}}}};
    uint8_t l_358[4][5][5] = {{{246UL,246UL,246UL,246UL,246UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{246UL,246UL,246UL,246UL,246UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{246UL,246UL,246UL,246UL,246UL}},{{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{246UL,246UL,246UL,246UL,246UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{246UL,246UL,246UL,246UL,246UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L}},{{246UL,246UL,246UL,246UL,246UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{246UL,246UL,246UL,246UL,246UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{246UL,246UL,246UL,246UL,246UL}},{{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{246UL,246UL,246UL,246UL,246UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L},{246UL,246UL,246UL,246UL,246UL},{0xB8L,0xB8L,0xB8L,0xB8L,0xB8L}}};
    int8_t *l_359 = &g_85;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_50[i] = 0x9DL;
    for (i = 0; i < 5; i++)
        l_351[i] = 8L;
    for (g_22 = 0; (g_22 != 8); g_22 = safe_add_func_uint32_t_u_u(g_22, 4))
    { 
        int32_t *l_68 = &g_22;
        int32_t **l_69 = &l_68;
        int8_t *l_72 = &g_33[1];
        uint32_t *l_73 = &g_74;
        uint16_t l_75 = 65527UL;
        uint64_t l_76 = 0xD35EB13E27C2130BLL;
        int64_t *l_77 = &g_78;
        uint64_t l_147 = 6UL;
        int16_t *l_194 = &g_188;
        struct S1 *l_231 = &g_159;
        uint32_t l_281[1][5][5] = {{{0x90107555L,0x90107555L,0x4233826AL,0x90107555L,0x90107555L},{1UL,0x90107555L,1UL,1UL,0x90107555L},{0x90107555L,1UL,1UL,0x90107555L,1UL},{0x90107555L,0x90107555L,0x4233826AL,0x90107555L,0x90107555L},{1UL,0x90107555L,1UL,1UL,0x90107555L}}};
        union U2 l_291 = {0UL};
        int32_t l_314 = (-1L);
        int32_t l_315 = 0x23650B3EL;
        int32_t l_316 = 3L;
        int32_t l_317 = (-7L);
        int32_t l_318 = 0x4A61B79BL;
        int32_t l_319 = 0x1FCEDDF5L;
        int32_t l_321 = 1L;
        int i, j, k;
        if ((l_50[1] <= (((func_51(func_57((safe_div_func_uint64_t_u_u((((*l_77) = (((((safe_mod_func_int8_t_s_s(((((*l_73) = (safe_sub_func_uint32_t_u_u(((((*p_47) |= (((*l_69) = l_68) == &g_22)) == (l_50[0] , ((((g_22 && (safe_mod_func_int8_t_s_s(((*l_72) = (-4L)), l_50[1]))) >= l_50[1]) && l_50[1]) > l_50[1]))) && g_22), l_50[1]))) > l_75) < 0x16L), 0x9DL)) <= l_76) > g_13) | l_50[1]) == (-8L))) ^ l_50[1]), (-2L))), g_79, &g_22, l_50[1]), l_50[0], l_50[1], p_47, g_86) >= l_50[0]) && g_90) | 1UL)))
        { 
            struct S0 l_133 = {27,3276,6115,1829};
            uint8_t *l_144 = &l_50[1];
            int32_t *l_149[2][3];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_149[i][j] = &g_81;
            }
            (*p_47) = (+(((**l_69) > (safe_rshift_func_uint16_t_u_s(((l_150 |= ((l_133 , p_47) == ((((safe_rshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s(((0x0FL | l_50[1]) | ((safe_rshift_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(((*l_77) = (safe_div_func_uint32_t_u_u((((((l_145 = l_144) != ((&g_74 == l_73) , (void*)0)) , (*l_68)) == 0x2C40L) > 0L), g_146))), l_133.f3)) || (*p_47)) < 1L), l_133.f3)) & (**l_69))), l_147)) & (*p_47)) , l_148), l_50[1])) != (*l_68)) , 0UL) , p_47))) && g_79.f2), 0))) < 7UL));
        }
        else
        { 
            uint8_t *l_157 = &l_50[1];
            int32_t l_171 = 5L;
            struct S1 *l_175 = (void*)0;
            int32_t l_189[3][2][4] = {{{0x0C672968L,0x18919003L,0x18919003L,0x0C672968L},{0x18919003L,0x0C672968L,0x18919003L,0x18919003L}},{{0x0C672968L,0x0C672968L,0xA615A5E8L,0x0C672968L},{0x0C672968L,0x18919003L,0x18919003L,0x0C672968L}},{{0x18919003L,0x0C672968L,0x18919003L,0x18919003L},{0x0C672968L,0x0C672968L,0xA615A5E8L,0x0C672968L}}};
            int16_t *l_193[7][2];
            uint32_t *l_196 = (void*)0;
            int32_t l_197[2][2][1] = {{{0L},{0L}},{{0L},{0L}}};
            uint32_t *l_211 = &l_148;
            int64_t l_226 = 0x3DC9B2812D80CD15LL;
            uint32_t l_228 = 0UL;
            union U2 *l_235[1][1];
            struct S0 l_260 = {760,3075,-4541,-4659};
            uint16_t l_280 = 0x9D49L;
            uint16_t l_290 = 0UL;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                    l_193[i][j] = &g_188;
            }
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_235[i][j] = &g_236;
            }
            for (l_76 = (-19); (l_76 > 2); l_76 = safe_add_func_uint32_t_u_u(l_76, 1))
            { 
                uint32_t l_153 = 8UL;
                uint8_t **l_155 = (void*)0;
                uint8_t **l_156[4];
                uint32_t l_168 = 0xCDC9599DL;
                int32_t l_169 = 1L;
                int32_t l_170 = (-1L);
                int i;
                for (i = 0; i < 4; i++)
                    l_156[i] = &l_145;
            }
            for (g_87 = (-17); (g_87 != 20); g_87++)
            { 
                uint8_t ****l_216 = &l_215;
                int32_t l_223 = 2L;
                uint64_t *l_224 = &g_82;
                uint64_t *l_225 = &l_76;
                uint64_t *l_227[6][5] = {{&l_147,&l_147,&l_147,&l_147,&l_147},{&l_147,&l_147,&l_147,&l_147,&l_147},{&l_147,&l_147,&l_147,&l_147,&l_147},{&l_147,&l_147,&l_147,&l_147,&l_147},{&l_147,&l_147,&l_147,&l_147,&l_147},{&l_147,&l_147,&l_147,&l_147,&l_147}};
                struct S1 *l_234 = (void*)0;
                int16_t l_239 = 0x5C75L;
                uint32_t *l_242[5][7][2] = {{{&g_90,&l_148},{&g_236.f0,&g_236.f0},{&l_148,&l_148},{&g_90,&l_148},{&l_148,&g_236.f0},{&g_236.f0,&l_148},{&g_90,&g_236.f0}},{{&l_148,&g_236.f0},{&l_148,&g_236.f0},{&g_90,&l_148},{&g_236.f0,&g_236.f0},{&l_148,&l_148},{&g_90,&l_148},{&l_148,&g_236.f0}},{{&g_236.f0,&l_148},{&g_90,&g_236.f0},{&l_228,&l_148},{&l_228,&g_236.f0},{&g_236.f0,&l_228},{&g_236.f0,&l_148},{&g_90,&g_90}},{{&g_236.f0,&g_90},{&g_90,&l_148},{&g_236.f0,&l_228},{&g_236.f0,&g_236.f0},{&l_228,&l_148},{&l_228,&g_236.f0},{&g_236.f0,&l_228}},{{&g_236.f0,&l_148},{&g_90,&g_90},{&g_236.f0,&g_90},{&g_90,&l_148},{&g_236.f0,&l_228},{&g_236.f0,&g_236.f0},{&l_228,&l_148}}};
                int i, j, k;
                l_216 = l_214;
                if ((((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((((((*l_157) = 255UL) ^ ((((l_197[0][1][0] &= (((*l_225) &= ((*l_224) = ((*g_158) , l_223))) || l_226)) | l_228) != (safe_lshift_func_int8_t_s_s((0xEBE7L || (*l_68)), g_78))) ^ (*p_47))) , l_189[0][1][3]) <= (*l_68)), (*l_68))) == g_74), l_223)) , (**l_69)), g_33[1])) > 0x89BCL) != 0x9EBEL))
                { 
                    struct S1 **l_232 = (void*)0;
                    struct S1 **l_233[7] = {&l_175,&l_175,&l_175,&l_175,&l_175,&l_175,&l_175};
                    union U2 **l_237 = (void*)0;
                    int i;
                    (*l_199) = l_223;
                    g_158 = (l_234 = l_231);
                    g_238 = l_235[0][0];
                }
                else
                { 
                    uint32_t *l_240 = (void*)0;
                    uint32_t **l_241[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_241[i] = &l_240;
                    (*l_199) = ((l_239 , (l_242[1][4][1] = l_240)) == (l_223 , p_47));
                }
            }
            for (l_75 = 22; (l_75 > 11); l_75--)
            { 
                const uint64_t l_245 = 0x03474766C88365F3LL;
                int32_t l_292 = 0L;
                uint8_t ***l_297 = &g_163;
                int32_t l_310 = 0xCA21202AL;
                uint16_t *l_311 = &l_290;
                int32_t l_320 = 0x3102F565L;
                int32_t l_322 = 0xFEF3BC31L;
                int32_t l_323[6] = {0xA07CED22L,0xA07CED22L,0xA07CED22L,0xA07CED22L,0xA07CED22L,0xA07CED22L};
                struct S1 l_343[2] = {{126},{126}};
                int i;
                (*p_47) = 1L;
            }
            if (l_351[0])
                break;
        }
    }
    (*l_199) = ((safe_mul_func_uint16_t_u_u(l_354, 65534UL)) == ((((((*l_359) ^= ((l_357[2][1][4] , l_358[2][3][1]) > (*l_199))) , (*l_199)) != 0UL) <= (*l_199)) == 0x04DF98FFL));
    return (*l_199);
}



static const int16_t  func_51(int32_t * p_52, const uint8_t  p_53, int8_t  p_54, int32_t * p_55, uint8_t  p_56)
{ 
    uint16_t l_115 = 1UL;
    uint32_t l_124 = 1UL;
    int8_t l_126 = (-1L);
    const int64_t *l_128 = &g_86;
    const int64_t **l_127 = &l_128;
    const int64_t ***l_129 = &l_127;
    (*p_55) = (((g_87 && p_56) > (&g_33[2] != ((0x4A0DC95FA104C7A4LL & ((l_115 , (((safe_div_func_int32_t_s_s(((l_115 , (safe_lshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((1L & l_115), l_124)), l_115)) && 0xD1E69A06L), p_53))) >= l_124), 0x5330BC39L)) != g_125) <= l_115)) <= l_126)) , &l_126))) >= p_56);
    (*l_129) = l_127;
    return l_126;
}



static int32_t * func_57(uint32_t  p_58, struct S0  p_59, int32_t * p_60, const uint64_t  p_61)
{ 
    int32_t *l_80[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t **l_100 = (void*)0;
    int64_t **l_101 = (void*)0;
    int64_t *l_102 = (void*)0;
    int64_t *l_104 = &g_78;
    int64_t **l_103[7];
    int8_t *l_108 = &g_85;
    uint8_t *l_109 = &g_87;
    int64_t l_110 = 0x06F0504CB07E9083LL;
    int i;
    for (i = 0; i < 7; i++)
        l_103[i] = &l_104;
    g_82++;
    g_87++;
    g_90++;
    if ((((safe_lshift_func_int8_t_s_s((+((*l_109) = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(0xB00A4979765BC9E7LL, (((l_102 = &g_78) != (g_105[1][2][2] = &g_78)) , 0x0E24C2F892C2D3C6LL))) == ((p_59.f2 ^= ((safe_div_func_uint64_t_u_u(18446744073709551613UL, (((*l_108) = ((((0UL && ((l_80[3] == &g_90) , g_79.f0)) ^ 2L) & 0x88CC77C0L) ^ g_78)) ^ g_79.f1))) , (-7L))) || 0x67BCF541L)), g_13)))), 7)) ^ (*p_60)) ^ l_110))
    { 
        int32_t **l_111 = &l_80[4];
        (*l_111) = &g_81;
    }
    else
    { 
        p_60 = p_60;
    }
    return g_112[1][2][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_236.f1, "g_236.f1", print_hash_value);
    transparent_crc(g_236.f3, "g_236.f3", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_327[i][j], "g_327[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_361[i], "g_361[i]", print_hash_value);

    }
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_510[i], "g_510[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_540[i], "g_540[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_722[i], "g_722[i]", print_hash_value);

    }
    transparent_crc(g_741, "g_741", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_744[i][j], "g_744[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1735, "g_1735", print_hash_value);
    transparent_crc(g_1809, "g_1809", print_hash_value);
    transparent_crc(g_1856, "g_1856", print_hash_value);
    transparent_crc(g_1863, "g_1863", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
