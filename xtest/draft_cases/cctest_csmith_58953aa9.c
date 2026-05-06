// SPDX-License-Identifier: MIT
// cctest_csmith_58953aa9.c --- cctest case csmith_58953aa9 (csmith seed 1486174889)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf57f2c63 */

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

// Options:   -s 1486174889 -o /tmp/csmith_gen_kb300io3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   unsigned f1 : 30;
   unsigned f2 : 9;
   unsigned f3 : 16;
};
#pragma pack(pop)

union U1 {
   uint64_t  f0;
   const int32_t  f1;
};

union U2 {
   int16_t  f0;
   uint64_t  f1;
   int16_t  f2;
};

union U3 {
   int32_t  f0;
   int64_t  f1;
};

union U4 {
   int32_t  f0;
};


static int32_t g_13 = 3L;
static int16_t g_14 = (-3L);
static uint64_t g_15 = 0x42AFA017779A7B44LL;
static struct S0 g_29 = {0x9716E289L,1098,14,229};
static uint32_t g_79 = 18446744073709551613UL;
static union U3 g_124 = {0x35086CD1L};
static union U2 g_142 = {0x9C23L};
static uint8_t g_144 = 9UL;
static union U1 g_250 = {18446744073709551615UL};
static int32_t g_260[2][4][4] = {{{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}},{{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}}};
static uint64_t g_283 = 0xDB1603EDA3869ADELL;
static int32_t g_341 = 0x5C10D9C3L;
static uint32_t g_344 = 0UL;
static int8_t g_347 = 0L;
static uint8_t g_348[2][5] = {{0UL,3UL,3UL,0UL,3UL},{0UL,0UL,0xF0L,0UL,0UL}};
static uint64_t g_354 = 0xB502ABD1A8F1CCBCLL;
static int32_t g_355 = 7L;



static uint32_t  func_1(void);
static int32_t  func_2(uint16_t  p_3);
static const uint64_t  func_7(int64_t  p_8, int32_t  p_9, uint32_t  p_10);
static union U3  func_18(uint8_t  p_19, struct S0  p_20, uint16_t  p_21);




static uint32_t  func_1(void)
{ 
    uint32_t l_6 = 0x2D3F5047L;
    int32_t l_27 = 0L;
    uint8_t l_28 = 0UL;
    int32_t l_191 = 0xC2221820L;
    g_355 |= (g_354 |= func_2(((safe_mul_func_int16_t_s_s((l_6 || (l_191 = (func_7((((safe_sub_func_int16_t_s_s(1L, (--g_15))) != ((func_18((safe_add_func_uint64_t_u_u((g_13 < ((safe_add_func_int32_t_s_s((((l_27 &= (((safe_unary_minus_func_int16_t_s(0x21FAL)) > g_14) != 0xDCL)) || l_28) == l_6), l_6)) > 4L)), g_14)), g_29, l_6) , g_144) == g_142.f2)) <= l_6), g_124.f0, l_28) | (-1L)))), g_142.f2)) & 0x3E043930L)));
    return g_79;
}



static int32_t  func_2(uint16_t  p_3)
{ 
    int16_t l_192 = 2L;
    int32_t l_211[4][3] = {{0x42DAB2CCL,0x42DAB2CCL,0x42DAB2CCL},{0xCF62B27BL,0xCF62B27BL,0xCF62B27BL},{0x42DAB2CCL,0x42DAB2CCL,0x42DAB2CCL},{0xCF62B27BL,0xCF62B27BL,0xCF62B27BL}};
    int32_t l_212 = 0xFBB45D56L;
    uint64_t l_213 = 18446744073709551615UL;
    int32_t l_214[3];
    int32_t l_215 = 0x38EFF3EBL;
    struct S0 l_216 = {-1L,32078,17,1};
    uint32_t l_261 = 0x13517DEDL;
    uint8_t l_266 = 0UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_214[i] = (-1L);
    l_192 ^= p_3;
    if ((((((safe_add_func_int16_t_s_s((l_192 != (((safe_div_func_int8_t_s_s(p_3, ((l_215 = (safe_add_func_int8_t_s_s((l_214[1] = (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(g_29.f0, (safe_rshift_func_int16_t_s_u((((l_213 &= (((l_212 &= ((((safe_add_func_int64_t_s_s(((l_211[3][1] = l_192) & 0UL), g_144)) | l_192) >= p_3) && g_124.f0)) <= p_3) < (-5L))) && g_79) >= g_29.f1), p_3)))) | 0x2436L) < p_3), l_192)), 2)) == l_192), p_3))), 0UL))) & l_192))) > g_144) >= 0x93EC2190L)), g_79)) <= g_29.f1) & g_29.f0) | 0xCC00A57CL) <= g_144))
    { 
        l_216 = l_216;
        for (l_213 = 0; (l_213 <= 2); l_213 += 1)
        { 
            int64_t l_217 = 0L;
            return l_217;
        }
        for (g_142.f1 = 0; (g_142.f1 <= 2); g_142.f1 += 1)
        { 
            int i;
            return l_214[g_142.f1];
        }
    }
    else
    { 
        uint8_t l_243 = 0UL;
        int32_t l_254 = 0x63498478L;
        int32_t l_264 = (-5L);
        int32_t l_265[1];
        int i;
        for (i = 0; i < 1; i++)
            l_265[i] = 0x14CF4170L;
        for (g_144 = (-2); (g_144 >= 19); g_144++)
        { 
            union U3 l_242[2][5] = {{{0x05CABCBAL},{0x05CABCBAL},{0x05CABCBAL},{0x05CABCBAL},{0x05CABCBAL}},{{0x6B7AEDB7L},{0xACACA34AL},{0x6B7AEDB7L},{0xACACA34AL},{0x6B7AEDB7L}}};
            int32_t l_255[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_255[i] = 0x75BB4AD5L;
            if ((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_29.f2, 3)), (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(g_15, 0)) <= (((g_124 , (l_242[0][3] , 0x574A8081L)) == l_243) != p_3)), l_243)), 2L)), p_3)))), 0UL)), g_29.f2)), 0UL)), 0xA230L)))
            { 
                uint16_t l_253[4][1][5] = {{{1UL,0x2B5AL,1UL,1UL,2UL}},{{0UL,0xC3EEL,2UL,0xC3EEL,0UL}},{{1UL,0xC3EEL,0x2B5AL,0UL,0x2B5AL}},{{0x2B5AL,0x2B5AL,2UL,0UL,0xE032L}}};
                int32_t l_259[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_259[i] = 0L;
                l_255[0] &= ((l_254 = (safe_lshift_func_int8_t_s_u(p_3, (safe_lshift_func_int16_t_s_s(l_242[0][3].f0, ((g_29.f3 &= ((((safe_mul_func_int8_t_s_s((g_250 , ((safe_lshift_func_int8_t_s_s(((g_250 , l_253[3][0][3]) == l_215), 6)) <= g_250.f1)), (-1L))) , l_243) & g_142.f2) >= g_142.f0)) , g_29.f1)))))) == l_253[3][0][3]);
                l_259[1] ^= (g_142.f0 & (p_3 < ((safe_add_func_uint32_t_u_u(g_250.f1, (!4294967295UL))) <= p_3)));
            }
            else
            { 
                l_261++;
            }
            --l_266;
        }
    }
    if (((safe_sub_func_int8_t_s_s((g_283 = ((safe_div_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(g_260[1][1][0], (l_211[1][0] = (((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_212 | (((safe_div_func_uint8_t_u_u(0UL, (safe_lshift_func_int8_t_s_u(g_260[0][0][2], p_3)))) || g_250.f1) & g_142.f2)), 3)), p_3)) <= p_3) | p_3)))) ^ g_260[1][1][0]) | 4294967292UL), p_3)) > l_216.f1)), 249UL)) >= g_29.f2))
    { 
        union U2 l_285 = {-1L};
        uint8_t l_290 = 0x1BL;
        int32_t l_321 = 0xBBA22A9CL;
        struct S0 l_325 = {0x82D2773BL,31360,7,8};
        for (p_3 = 0; (p_3 <= 2); p_3 += 1)
        { 
            const int32_t l_315 = 0xC7CFD098L;
            int32_t l_316 = 1L;
            int32_t l_317 = 0x2E962152L;
            int i;
            l_290 = (~((((((l_214[p_3] = (l_285 , 0L)) & l_216.f3) == ((safe_mul_func_uint8_t_u_u((g_144 &= ((safe_sub_func_uint16_t_u_u(p_3, g_29.f1)) , p_3)), g_283)) & (-1L))) <= 0x5B17L) < g_260[1][1][0]) && 1UL));
            if (((safe_mul_func_int8_t_s_s((((safe_sub_func_int64_t_s_s((l_317 ^= (safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(6UL, 3)), (l_316 &= (safe_rshift_func_uint16_t_u_u((((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(0x51EFL, ((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((+(!(p_3 >= (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((((l_214[p_3] = (l_285.f2 > p_3)) | 0x24A0B941L) != g_142.f0), l_285.f2)) && l_266), g_144))))), l_315)), 8)) & g_142.f0))) , 0x92F7L), 0x1C18L)) & l_315) < l_285.f0), l_212)))))), l_211[3][1])) == 0UL) <= l_216.f0), 0x0FL)) > 8L))
            { 
                uint64_t l_318 = 0xFA29A9D7D5A0AE62LL;
                l_214[p_3] ^= p_3;
                --l_318;
            }
            else
            { 
                g_260[1][1][2] = g_250.f0;
                g_29 = g_29;
            }
            for (l_266 = 0; (l_266 <= 1); l_266 += 1)
            { 
                uint32_t l_322 = 4294967289UL;
                int i, j;
                l_322--;
                if (l_211[l_266][p_3])
                    break;
                return l_211[(l_266 + 1)][p_3];
            }
        }
        l_325 = l_325;
    }
    else
    { 
        struct S0 l_337 = {0x4213E9DEL,28816,18,58};
        int32_t l_339 = (-10L);
        int32_t l_342 = (-1L);
        int8_t l_343[4][2];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_343[i][j] = 1L;
        }
        for (g_142.f2 = 0; (g_142.f2 < 3); g_142.f2 = safe_add_func_uint32_t_u_u(g_142.f2, 7))
        { 
            uint32_t l_338[1][1];
            int16_t l_340[3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_338[i][j] = 0x2D3900B7L;
            }
            for (i = 0; i < 3; i++)
                l_340[i] = (-3L);
            l_211[1][0] = (((((g_341 = (l_340[0] = ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_213, (g_144 ^ (l_339 = (((~(safe_mul_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((g_124 , (l_337 , l_216.f3)) | g_29.f1), 0x5CL)) >= 0xD6A78B01L) == l_338[0][0]), p_3))) >= p_3) >= 0x9B663F66142BF08DLL))))), l_338[0][0])) >= l_337.f2))) >= l_216.f3) > g_283) & p_3) >= (-1L));
        }
        l_212 ^= (((-4L) <= l_261) | (1L != ((++g_344) , (g_348[0][1]--))));
        l_211[3][1] = (g_13 = (l_337.f2 | (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((l_343[1][0] & g_14))), l_337.f1))));
    }
    return l_212;
}



static const uint64_t  func_7(int64_t  p_8, int32_t  p_9, uint32_t  p_10)
{ 
    int32_t l_186 = 3L;
    int32_t l_187[3][3] = {{0x5C9C59BDL,0x5C9C59BDL,0x5C9C59BDL},{0x31AE2F7CL,0x31AE2F7CL,0x31AE2F7CL},{0x5C9C59BDL,0x5C9C59BDL,0x5C9C59BDL}};
    struct S0 l_190 = {7L,6365,9,238};
    int i, j;
    for (g_29.f0 = 0; (g_29.f0 != 25); g_29.f0 = safe_add_func_uint64_t_u_u(g_29.f0, 1))
    { 
        if (l_186)
            break;
    }
    l_190 = (func_18((g_144--), l_190, g_124.f0) , g_29);
    return p_10;
}



static union U3  func_18(uint8_t  p_19, struct S0  p_20, uint16_t  p_21)
{ 
    struct S0 l_38 = {3L,26379,15,49};
    union U4 l_43 = {4L};
    int32_t l_71 = (-4L);
    int32_t l_72 = 0xB3C83373L;
    int32_t l_75 = 0x884E0B59L;
    int32_t l_76 = (-8L);
    int32_t l_77 = 0L;
    int32_t l_78 = (-3L);
    union U3 l_93 = {0x317453A3L};
    int32_t l_96 = 9L;
    uint64_t l_97 = 0UL;
    union U4 l_161 = {-9L};
    uint8_t l_165 = 0UL;
    uint32_t l_183[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_183[i][j] = 18446744073709551615UL;
    }
    if (((safe_lshift_func_uint16_t_u_s(((((safe_add_func_uint64_t_u_u(((((((safe_lshift_func_int16_t_s_s((g_14 = (safe_mod_func_uint8_t_u_u(((g_29 = l_38) , (((safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(l_38.f2, (l_43 , l_38.f1))), g_14)) , l_38.f0) == g_29.f3)), 3L))), l_43.f0)) && g_29.f2) > l_38.f2) > p_20.f3) ^ l_38.f0) | 0x501494D8L), l_38.f0)) < 0x92A1DD6BL) < g_13) , l_38.f1), g_13)) || g_29.f3))
    { 
        uint32_t l_54 = 18446744073709551612UL;
        l_54 = ((safe_add_func_int16_t_s_s(((g_29.f1 <= ((0xE07F0936L & (((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_div_func_uint64_t_u_u(((((l_43 , ((safe_mul_func_int16_t_s_s(0x7FB6L, p_20.f0)) && l_38.f2)) || g_29.f1) > 0UL) <= 0x231B3DFAL), 0x88BB1B5B3A04BB84LL)) & p_20.f1) && l_43.f0) || l_38.f3), 4294967287UL)), p_20.f3)) & p_20.f0) ^ 4L)) != 0UL)) > g_14), p_21)) || p_20.f3);
    }
    else
    { 
        int32_t l_70 = 0x14709020L;
        int32_t l_73 = 8L;
        int32_t l_74[4];
        union U3 l_92 = {0x63E176CBL};
        union U4 l_160 = {0L};
        int i;
        for (i = 0; i < 4; i++)
            l_74[i] = 0xC0D0DA96L;
        if (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u(((((((~p_21) < (safe_add_func_int8_t_s_s(((255UL != (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((++g_79) != (safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((((l_96 = (safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((l_93 = l_92) , (safe_mul_func_uint8_t_u_u((0UL & g_29.f0), 3UL))), l_70)), g_29.f2))) & p_20.f0) == l_97) ^ 0xCECC5629L), 0x37FBL)) || l_97), l_92.f0)) < p_20.f2), l_74[0]))), 0x17L)) || p_21), (-4L))), g_13))) & 0x8D17825FA2FCAAFALL), 1L))) < g_29.f0) <= g_14) >= g_29.f1) != l_38.f1), g_14)) != g_29.f0), l_75)), g_14)) >= p_21))
        { 
            g_13 = (-2L);
            for (p_20.f0 = (-16); (p_20.f0 != (-12)); p_20.f0++)
            { 
                uint64_t l_100 = 18446744073709551610UL;
                if (l_100)
                    break;
                if (g_13)
                    continue;
                g_29 = l_38;
            }
            g_13 = (l_71 &= (0L <= ((safe_sub_func_uint64_t_u_u(l_77, g_29.f3)) == ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(p_21, p_20.f0)) , g_79) ^ (-5L)), g_29.f3)), g_29.f1)) == 0x0BL))));
        }
        else
        { 
            uint16_t l_137 = 0x6D6EL;
            int32_t l_150 = 0x7CC70ECFL;
            for (p_20.f0 = 3; (p_20.f0 >= 0); p_20.f0 -= 1)
            { 
                struct S0 l_109 = {0L,1911,0,154};
                l_109 = l_38;
            }
            if ((~(safe_lshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((g_14 , (l_92 , (safe_mod_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u((safe_div_func_int32_t_s_s((l_77 = (g_124 , (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((l_74[0] = g_29.f3), g_29.f0)), l_38.f0)))), g_13)))), 5UL)), l_38.f1)))), l_38.f2)), g_79)) | 0x2E66L), g_29.f1))))
            { 
                int16_t l_143 = 0xAAD8L;
                union U2 l_147 = {0xC95CL};
                l_74[0] = ((safe_mod_func_int64_t_s_s((g_144 &= (safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((l_137 == ((safe_mul_func_int8_t_s_s(0xECL, (safe_mul_func_uint16_t_u_u((g_142 , p_19), p_20.f3)))) ^ g_13)) >= g_29.f2), 0UL)), l_143)) | l_137), l_137))), l_143)) ^ 0x14308392L);
                g_13 = ((l_150 = ((safe_lshift_func_int16_t_s_u((l_147 , l_96), (safe_div_func_int32_t_s_s(g_29.f2, 0x376B33B0L)))) ^ (-1L))) <= 0x6F5FL);
            }
            else
            { 
                uint8_t l_151 = 0UL;
                l_151 = l_70;
                l_74[0] = 0xBFDE95A6L;
                return l_92;
            }
            for (l_38.f0 = 0; (l_38.f0 <= 3); l_38.f0 += 1)
            { 
                union U4 l_162 = {0xEC998684L};
                int32_t l_163 = 0x64F14847L;
                int32_t l_164 = 0x1990186BL;
                int i;
                l_164 |= (((safe_div_func_uint8_t_u_u(((-5L) || 0x5786L), (l_163 = (g_144 = ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_74[l_38.f0] = (safe_rshift_func_uint8_t_u_u(((l_162 = (l_74[l_38.f0] , (l_161 = l_160))) , 0xCCL), l_74[l_38.f0]))), p_20.f0)), 0x9C47L)) , g_142.f2))))) & g_29.f2) & 0xAD97L);
                l_160.f0 |= 4L;
                g_29 = p_20;
            }
        }
    }
    l_165++;
    for (l_93.f0 = 7; (l_93.f0 >= (-29)); --l_93.f0)
    { 
        int64_t l_170 = (-4L);
        uint32_t l_182 = 4294967295UL;
        l_170 = 0L;
        g_13 = (safe_mul_func_uint8_t_u_u((g_29.f2 < ((+l_170) , (((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((4UL >= (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(g_29.f3, g_144)) || g_142.f2), p_20.f3))), l_182)), 0x12L)) == p_20.f3) ^ l_183[0][0]))), g_13));
    }
    return l_93;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
    transparent_crc(g_29.f3, "g_29.f3", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_250.f0, "g_250.f0", print_hash_value);
    transparent_crc(g_250.f1, "g_250.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_260[i][j][k], "g_260[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_348[i][j], "g_348[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
