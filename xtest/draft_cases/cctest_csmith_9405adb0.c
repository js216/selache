// SPDX-License-Identifier: MIT
// cctest_csmith_9405adb0.c --- cctest case csmith_9405adb0 (csmith seed 2483400112)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9deffb0 */

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

// Options:   -s 2483400112 -o /tmp/csmith_gen_3f7oll36/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
   unsigned f1 : 10;
   uint8_t  f2;
   uint64_t  f3;
   struct S0  f4;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   int8_t  f1;
   int16_t  f2;
   uint8_t  f3;
};

union U3 {
   const int32_t  f0;
   int16_t  f1;
   int64_t  f2;
};

union U4 {
   int64_t  f0;
   const uint16_t  f1;
   unsigned f2 : 30;
};


static int32_t g_2[4] = {0xD8F8F576L,0xD8F8F576L,0xD8F8F576L,0xD8F8F576L};
static int32_t g_7 = 0x6B17B722L;
static int8_t g_36 = 0L;
static uint32_t g_44 = 4294967295UL;
static int8_t g_53 = 1L;
static uint32_t g_54 = 0xF1D39FA4L;
static union U4 g_77 = {0L};
static uint8_t g_79 = 0x4CL;
static uint32_t g_81 = 0x68985BB2L;
static struct S0 g_85 = {0};
static uint64_t g_107 = 18446744073709551615UL;
static uint32_t g_150 = 4294967295UL;
static int8_t g_158 = 3L;
static int32_t g_159[4][5] = {{1L,1L,0x07E85E60L,4L,0x07E85E60L},{0x49C76149L,0x49C76149L,0L,3L,0L},{1L,1L,0x07E85E60L,4L,0x07E85E60L},{0x49C76149L,0x49C76149L,0L,3L,0L}};
static int8_t g_160 = 0x60L;
static uint32_t g_162 = 4294967289UL;
static struct S1 g_166[3][4][3] = {{{{0x87L,10,7UL,0x833B97862B190C61LL,{5}},{0x87L,10,7UL,0x833B97862B190C61LL,{5}},{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}}},{{-3L,26,0x58L,1UL,{-3}},{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}},{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}}},{{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}},{1L,30,0xAFL,18446744073709551615UL,{-5}},{6L,24,255UL,0x29D60EDB9B34ADFALL,{-0}}},{{-3L,26,0x58L,1UL,{-3}},{1L,30,0xAFL,18446744073709551615UL,{-5}},{-3L,26,0x58L,1UL,{-3}}}},{{{0x87L,10,7UL,0x833B97862B190C61LL,{5}},{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}},{6L,24,255UL,0x29D60EDB9B34ADFALL,{-0}}},{{0x87L,10,7UL,0x833B97862B190C61LL,{5}},{0x87L,10,7UL,0x833B97862B190C61LL,{5}},{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}}},{{-3L,26,0x58L,1UL,{-3}},{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}},{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}}},{{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}},{0x87L,10,7UL,0x833B97862B190C61LL,{5}},{1L,30,0xAFL,18446744073709551615UL,{-5}}}},{{{6L,24,255UL,0x29D60EDB9B34ADFALL,{-0}},{0x87L,10,7UL,0x833B97862B190C61LL,{5}},{6L,24,255UL,0x29D60EDB9B34ADFALL,{-0}}},{{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}},{-3L,26,0x58L,1UL,{-3}},{1L,30,0xAFL,18446744073709551615UL,{-5}}},{{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}},{6L,12,246UL,0xCA29FBB944C1B7AFLL,{-3}},{-3L,26,0x58L,1UL,{-3}}},{{6L,24,255UL,0x29D60EDB9B34ADFALL,{-0}},{-3L,26,0x58L,1UL,{-3}},{-3L,26,0x58L,1UL,{-3}}}}};
static uint8_t g_186 = 0xE8L;
static int8_t g_194 = 0x00L;
static uint32_t g_195 = 3UL;
static uint32_t g_198 = 4294967292UL;
static uint16_t g_224 = 65532UL;
static uint32_t g_225[1][2] = {{0xFD093CF0L,0xFD093CF0L}};
static int64_t g_272 = 0x396B67929D46EDA8LL;
static const uint32_t g_287 = 0x503595D0L;
static const uint16_t g_307 = 65527UL;
static int16_t g_388 = 0x71D9L;



static const uint32_t  func_1(void);
static uint8_t  func_8(uint32_t  p_9, union U2  p_10, int8_t  p_11, uint32_t  p_12);
static int16_t  func_13(int8_t  p_14);
static int64_t  func_17(union U3  p_18, const int32_t  p_19);




static const uint32_t  func_1(void)
{ 
    uint32_t l_6[2][5] = {{0xBC9C3D06L,0xBC9C3D06L,0xBC9C3D06L,0xBC9C3D06L,0xBC9C3D06L},{18446744073709551615UL,9UL,18446744073709551615UL,9UL,18446744073709551615UL}};
    int64_t l_282 = 9L;
    struct S1 l_324 = {0xACL,31,0x9BL,0UL,{-5}};
    int32_t l_355 = 0x28862067L;
    uint8_t l_411[3][2][5] = {{{0x93L,255UL,255UL,0x93L,0x93L},{1UL,1UL,1UL,1UL,1UL}},{{0x93L,0x93L,255UL,255UL,0x93L},{0x19L,1UL,0x19L,1UL,0x19L}},{{0x93L,255UL,255UL,0x93L,0x93L},{1UL,1UL,1UL,1UL,1UL}}};
    int i, j, k;
lbl_286:
    for (g_2[1] = 0; (g_2[1] >= (-7)); --g_2[1])
    { 
        uint16_t l_5 = 65529UL;
        union U2 l_173 = {4294967295UL};
        if (l_5)
            break;
        for (l_5 = 0; (l_5 <= 1); l_5 += 1)
        { 
            for (g_7 = 1; (g_7 >= 0); g_7 -= 1)
            { 
                int32_t l_273 = 0x62CEF5FAL;
                int i, j;
                l_273 = (func_8((0xA4129B85755261FCLL | (l_6[g_7][l_5] ^ func_13(l_5))), l_173, g_53, g_159[1][0]) ^ g_2[2]);
            }
        }
        g_7 = (((0UL >= (l_173.f0 != (safe_mod_func_uint64_t_u_u(18446744073709551608UL, g_44)))) & 1L) , g_224);
    }
    if ((0x1A74C5E4DCB4F3F1LL ^ ((!(((~(safe_sub_func_int8_t_s_s((1L == 0x3ECEL), (safe_add_func_uint64_t_u_u(18446744073709551613UL, l_282))))) || g_198) == g_159[3][0])) || l_282)))
    { 
        struct S0 l_283 = {6};
        l_283 = l_283;
        for (g_160 = 0; (g_160 == (-11)); g_160--)
        { 
            if (l_283.f0)
                goto lbl_286;
            for (g_150 = 0; (g_150 <= 2); g_150 += 1)
            { 
                int i, j;
                l_283.f0 |= g_159[g_150][(g_150 + 2)];
                l_283.f0 |= l_6[0][2];
                return g_287;
            }
        }
        if ((g_85.f0 = (safe_rshift_func_uint16_t_u_s(((1UL >= (((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(l_283.f0, (((safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((!((0x0968CA8CL != (safe_div_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s(g_44, 0xDD971F16L)) ^ 2UL) | l_283.f0) < g_198), g_166[2][3][1].f0))) >= g_2[1])), 2UL)), g_195)), 0x1C72E30379E35B24LL)), 8)) == g_225[0][1]) && g_77.f2))), 65535UL)) ^ 0xEB5E6DA3L) & l_283.f0)) == g_307), 3))))
        { 
            g_85.f0 = l_283.f0;
        }
        else
        { 
            int64_t l_314[4][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
            int32_t l_315 = (-5L);
            int i, j;
            l_315 = (safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((-1L), ((0xBEF0L >= (safe_rshift_func_int8_t_s_u((l_314[0][0] , g_159[3][2]), 1))) ^ l_6[1][2]))) != l_283.f0), 0x2CBDL));
        }
    }
    else
    { 
        uint32_t l_316[3];
        struct S1 l_317[5][4][5] = {{{{0x89L,6,0x54L,18446744073709551615UL,{-2}},{0x65L,13,251UL,0x3C84784CF4E84C1DLL,{6}},{0x8AL,5,0x99L,0x7040179BD662E902LL,{-1}},{0x73L,23,252UL,18446744073709551615UL,{6}},{0x44L,21,253UL,0x79D3253132326A62LL,{-2}}},{{-9L,19,1UL,18446744073709551615UL,{4}},{2L,8,249UL,0x897FFBABD686F3C0LL,{7}},{0x8AL,5,0x99L,0x7040179BD662E902LL,{-1}},{0L,9,0xBAL,0xD400F96E11731A21LL,{7}},{0xE7L,24,0x20L,0UL,{-6}}},{{1L,23,0x79L,0xBD40102855B81632LL,{-0}},{0L,4,250UL,18446744073709551615UL,{3}},{0x15L,14,2UL,18446744073709551610UL,{5}},{1L,5,0xC3L,18446744073709551615UL,{1}},{0L,31,0x5EL,18446744073709551608UL,{-7}}},{{1L,9,255UL,0xCF346CF623B8A31FLL,{7}},{-1L,11,0UL,0x03459CE884C05448LL,{-7}},{0x53L,23,0UL,1UL,{7}},{-1L,11,0UL,0x03459CE884C05448LL,{-7}},{1L,9,255UL,0xCF346CF623B8A31FLL,{7}}}},{{{0x89L,10,255UL,0x288609CC275588F0LL,{-3}},{0x00L,25,0x8FL,0x13E6207B4A4A15ADLL,{-7}},{0xC1L,10,0x0AL,0x5EDD2B928BA42434LL,{-3}},{0xB8L,17,0x85L,0xA16F0D455061D599LL,{-6}},{-3L,3,0x65L,9UL,{-0}}},{{9L,20,255UL,18446744073709551614UL,{-3}},{0xC9L,27,1UL,0x7FF8A4D8716988ADLL,{6}},{0L,4,0x38L,0xD2E449F472009605LL,{3}},{0x65L,13,251UL,0x3C84784CF4E84C1DLL,{6}},{1L,2,0x11L,0UL,{-2}}},{{-1L,14,255UL,18446744073709551615UL,{5}},{0xB5L,10,0xF9L,0x72E8BEF140DDB9D4LL,{6}},{0x3BL,30,0UL,0x55B06E9F9F4B5799LL,{3}},{0x00L,25,0x8FL,0x13E6207B4A4A15ADLL,{-7}},{-3L,3,0x65L,9UL,{-0}}},{{0x00L,25,0x8FL,0x13E6207B4A4A15ADLL,{-7}},{0x65L,13,251UL,0x3C84784CF4E84C1DLL,{6}},{0x73L,23,252UL,18446744073709551615UL,{6}},{0x46L,24,0xF4L,18446744073709551615UL,{4}},{1L,9,255UL,0xCF346CF623B8A31FLL,{7}}}},{{{-3L,3,0x65L,9UL,{-0}},{1L,23,0x79L,0xBD40102855B81632LL,{-0}},{0L,29,0x01L,18446744073709551606UL,{6}},{0L,9,0xBAL,0xD400F96E11731A21LL,{7}},{0L,31,0x5EL,18446744073709551608UL,{-7}}},{{2L,8,249UL,0x897FFBABD686F3C0LL,{7}},{9L,20,255UL,18446744073709551614UL,{-3}},{0xB5L,10,0xF9L,0x72E8BEF140DDB9D4LL,{6}},{0x8AL,5,0x99L,0x7040179BD662E902LL,{-1}},{0xE7L,24,0x20L,0UL,{-6}}},{{1L,9,255UL,0xCF346CF623B8A31FLL,{7}},{-1L,10,1UL,0x7C61B3FF6D9E332CLL,{-3}},{0x50L,18,0x78L,18446744073709551611UL,{2}},{0x89L,6,0x54L,18446744073709551615UL,{-2}},{0x44L,21,253UL,0x79D3253132326A62LL,{-2}}},{{0x15L,14,2UL,18446744073709551610UL,{5}},{-1L,10,1UL,0x7C61B3FF6D9E332CLL,{-3}},{0xC1L,10,0x0AL,0x5EDD2B928BA42434LL,{-3}},{0x02L,1,1UL,0x62B6A1B3597BFAF3LL,{0}},{9L,20,255UL,18446744073709551614UL,{-3}}}},{{{0xC9L,27,1UL,0x7FF8A4D8716988ADLL,{6}},{9L,20,255UL,18446744073709551614UL,{-3}},{0xE7L,24,0x20L,0UL,{-6}},{1L,9,255UL,0xCF346CF623B8A31FLL,{7}},{1L,2,0x11L,0UL,{-2}}},{{1L,18,0xFFL,1UL,{1}},{1L,23,0x79L,0xBD40102855B81632LL,{-0}},{1L,23,0x79L,0xBD40102855B81632LL,{-0}},{1L,18,0xFFL,1UL,{1}},{0xC9L,27,1UL,0x7FF8A4D8716988ADLL,{6}}},{{-1L,10,1UL,0x7C61B3FF6D9E332CLL,{-3}},{0x65L,13,251UL,0x3C84784CF4E84C1DLL,{6}},{1L,5,0xC3L,18446744073709551615UL,{1}},{0x96L,9,0UL,1UL,{1}},{0xA9L,13,252UL,0xB511B0AF793924C3LL,{7}}},{{-1L,7,1UL,18446744073709551615UL,{-2}},{0xB5L,10,0xF9L,0x72E8BEF140DDB9D4LL,{6}},{0x96L,9,0UL,1UL,{1}},{0L,9,0xBAL,0xD400F96E11731A21LL,{7}},{0L,4,0x38L,0xD2E449F472009605LL,{3}}}},{{{0x3BL,30,0UL,0x55B06E9F9F4B5799LL,{3}},{0xC9L,27,1UL,0x7FF8A4D8716988ADLL,{6}},{2L,8,249UL,0x897FFBABD686F3C0LL,{7}},{0x96L,9,0UL,1UL,{1}},{0x50L,18,0x78L,18446744073709551611UL,{2}}},{{1L,9,255UL,0xCF346CF623B8A31FLL,{7}},{0x00L,25,0x8FL,0x13E6207B4A4A15ADLL,{-7}},{0L,31,0x5EL,18446744073709551608UL,{-7}},{1L,18,0xFFL,1UL,{1}},{0x65L,13,251UL,0x3C84784CF4E84C1DLL,{6}}},{{6L,14,255UL,0x15890436ECE72C06LL,{6}},{-1L,11,0UL,0x03459CE884C05448LL,{-7}},{0xC1L,10,0x0AL,0x5EDD2B928BA42434LL,{-3}},{1L,9,255UL,0xCF346CF623B8A31FLL,{7}},{-1L,7,1UL,18446744073709551615UL,{-2}}},{{0xC1L,10,0x0AL,0x5EDD2B928BA42434LL,{-3}},{0L,4,250UL,18446744073709551615UL,{3}},{-10L,16,0x8DL,0x3544DA8E2CCA2613LL,{-4}},{0x02L,1,1UL,0x62B6A1B3597BFAF3LL,{0}},{1L,2,0x11L,0UL,{-2}}}}};
        int32_t l_357 = 0L;
        uint32_t l_358 = 0UL;
        int8_t l_400 = (-10L);
        uint16_t l_415[4][4][2] = {{{0xEEDAL,0xDFD1L},{0xDFD1L,0xEEDAL},{0xDFD1L,0xDFD1L},{0xEEDAL,0xDFD1L}},{{0xDFD1L,0xEEDAL},{0xDFD1L,0xDFD1L},{0xEEDAL,0xDFD1L},{0xDFD1L,0xEEDAL}},{{0xDFD1L,0xDFD1L},{0xEEDAL,0xDFD1L},{0xDFD1L,0xEEDAL},{0xDFD1L,0xDFD1L}},{{0xEEDAL,0xDFD1L},{0xDFD1L,65535UL},{0xEEDAL,0xEEDAL},{65535UL,0xEEDAL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_316[i] = 0xA5562F0FL;
        if (((l_316[2] && (l_317[4][2][2] , (safe_lshift_func_uint16_t_u_u((g_224 = (g_166[2][3][1].f1 > l_6[0][0])), g_107)))) || 0x4865413634BA4E07LL))
        { 
            uint8_t l_329 = 0x8DL;
            uint16_t l_330 = 0x8001L;
            l_330 |= (safe_add_func_int8_t_s_s((g_194 = (safe_div_func_int32_t_s_s(((l_324 = g_166[0][2][2]) , (((g_150 != ((l_324.f0 & (safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(l_329, l_282)) == 0xA8C29DD9L), g_159[2][4]))) && g_77.f0)) ^ g_53) != 1UL)), l_329))), l_329));
        }
        else
        { 
            const uint8_t l_331 = 0x65L;
            g_2[1] = (l_282 <= g_287);
            return l_331;
        }
        l_317[4][2][2].f4.f0 |= (((g_7 & (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((6UL == g_2[3]) & 3L), g_77.f1)), 0xC9L))) ^ 0x559AL) > 2UL);
        for (g_36 = 0; (g_36 <= 2); g_36 += 1)
        { 
            const uint16_t l_343 = 0xF5B2L;
            union U2 l_348[2] = {{0xE0EA1205L},{0xE0EA1205L}};
            int32_t l_352[4][3] = {{1L,1L,3L},{(-6L),3L,3L},{3L,0x71829D1AL,0xE9977FC4L},{(-6L),0x71829D1AL,(-6L)}};
            int32_t l_353 = (-5L);
            int32_t l_393[2][4][1] = {{{0x65B07240L},{0x65B07240L},{0x2B277425L},{0x65B07240L}},{{0x65B07240L},{0x2B277425L},{0x65B07240L},{0x65B07240L}}};
            int i, j, k;
            if ((((safe_unary_minus_func_uint16_t_u((l_317[4][2][2] , (safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((1UL < ((l_343 , (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_343 > g_224), g_44)), (-8L)))) != 0x6CL)), 0x4DL)), 0xF5L)) , l_324.f1), l_324.f4.f0))))) > l_317[4][2][2].f3) , 3L))
            { 
                int32_t l_354[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_354[i] = 0x7565D6A2L;
                l_354[2] |= (l_353 = (l_348[0] , (l_352[0][2] |= (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((7UL ^ (-6L)))), 65535UL)))));
            }
            else
            { 
                int16_t l_356 = 1L;
                l_358--;
                g_166[2][3][1].f4.f0 = (g_307 & (0x0814F4F9EC15FA3FLL & l_348[0].f0));
                g_2[0] |= (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u((~((safe_sub_func_int16_t_s_s(l_356, (safe_sub_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((0x9AFE914E7A1AFC6BLL <= ((((g_107 & ((safe_lshift_func_int16_t_s_s((g_388 ^= (safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(((!((g_54 > g_307) <= l_348[0].f2)) >= g_166[2][3][1].f4.f0), 0L)), l_6[1][1]))), g_307)) >= l_356)) ^ l_352[1][2]) & l_348[0].f0) , g_44)), 0x7E9FL)) || l_356), l_317[4][2][2].f1)), l_348[0].f1)), l_352[0][2])), 0x03F6L)))) > l_282)))) > l_352[1][1]) | g_186), l_282)) >= 0x18116297L) , 0x0C19D5F814490910LL) ^ l_356), 14)), 5));
            }
            for (l_357 = 0; (l_357 <= 2); l_357 += 1)
            { 
                int32_t l_401 = 0xEA63802CL;
                int i;
                g_85.f0 |= (safe_add_func_uint64_t_u_u((g_166[2][3][1].f3 ^= l_316[g_36]), (safe_rshift_func_int8_t_s_u(1L, l_393[1][3][0]))));
                l_401 &= ((g_186 ^ (l_355 & ((safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(l_316[g_36], ((safe_mul_func_uint16_t_u_u(0x92EFL, 0x34E5L)) & (-1L)))) | g_307), l_400)) ^ g_159[2][1]))) <= l_316[g_36]);
            }
            for (l_282 = 2; (l_282 >= 0); l_282 -= 1)
            { 
                uint8_t l_410 = 0x05L;
                int32_t l_414 = 0x3C9DEEECL;
                l_353 = (((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u((g_186 & ((g_388 | (l_352[2][1] = 0xE3C937039E12FE5CLL)) | (safe_mod_func_int8_t_s_s((((safe_add_func_int8_t_s_s(l_348[0].f0, l_324.f1)) || g_225[0][1]) != g_77.f0), l_348[0].f1)))), l_317[4][2][2].f3)), 8L)) > 0x27L) == l_410);
                l_411[0][1][4]--;
                --l_415[2][0][1];
            }
        }
    }
    l_355 = (g_77.f1 ^ (safe_lshift_func_int8_t_s_s((-1L), (safe_div_func_int32_t_s_s(g_307, (l_411[0][1][4] | g_388))))));
    return g_166[2][3][1].f3;
}



static uint8_t  func_8(uint32_t  p_9, union U2  p_10, int8_t  p_11, uint32_t  p_12)
{ 
    int64_t l_174 = 1L;
    int32_t l_176 = 0x4888C0F7L;
    int32_t l_179 = 0L;
    int32_t l_181 = 6L;
    int32_t l_184 = 0xC1B1B48EL;
    union U2 l_243 = {0x2C164ED7L};
lbl_226:
    for (p_10.f2 = 0; (p_10.f2 <= 3); p_10.f2 += 1)
    { 
        int8_t l_175 = (-1L);
        int32_t l_177 = (-1L);
        int32_t l_178 = (-2L);
        int32_t l_180 = 4L;
        int32_t l_182 = 0x99690810L;
        int32_t l_183 = 0x514E9446L;
        int32_t l_185 = 0xE805C0E4L;
        g_186++;
        if ((p_9 > (safe_add_func_int64_t_s_s((((l_179 ^= g_166[2][3][1].f3) < (((g_162 || (+(safe_mul_func_uint16_t_u_u((l_176 = (g_195 = (((g_194 &= g_77.f0) , 246UL) >= (-10L)))), p_10.f3)))) ^ l_180) ^ l_184)) == p_10.f3), p_10.f3))))
        { 
            int32_t l_196[4] = {9L,9L,9L,9L};
            int32_t l_197 = (-1L);
            int i;
            l_197 = l_196[2];
            for (g_53 = 2; (g_53 >= 0); g_53 -= 1)
            { 
                int i;
                --g_198;
                if (l_180)
                    goto lbl_226;
            }
        }
        else
        { 
            uint16_t l_213 = 65532UL;
            for (g_198 = 0; (g_198 <= 3); g_198 += 1)
            { 
                int32_t l_205 = 0xFC215280L;
                int32_t l_223[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_223[i] = (-1L);
                g_166[1][0][1] = g_166[0][2][0];
                g_166[2][3][1].f4.f0 = ((((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((g_53 = ((l_205 = 0x087AE741E8B384F3LL) == (!(safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s((g_225[0][1] = (safe_mod_func_int32_t_s_s(((((--l_213) | (g_224 = (safe_mul_func_int16_t_s_s(g_159[g_198][(g_198 + 1)], (+(safe_lshift_func_int8_t_s_u(0x18L, (l_223[0] = (safe_rshift_func_uint16_t_u_s(0UL, 15)))))))))) && g_53) < g_150), 8UL))), 65535UL)), g_150))))), g_7)), g_159[3][1])) ^ 0x8159CCD5L) & 0xBAC6L) == g_166[2][3][1].f2);
            }
        }
    }
    for (g_160 = 29; (g_160 <= 24); g_160 = safe_sub_func_uint64_t_u_u(g_160, 1))
    { 
        uint16_t l_246[2];
        int32_t l_247 = 0xE451EC3EL;
        int32_t l_248[5][4] = {{0x4A9C1BF1L,0x60EE2D55L,(-5L),0x60EE2D55L},{0x60EE2D55L,(-6L),(-1L),0x60EE2D55L},{(-1L),0x60EE2D55L,(-1L),(-1L)},{0xD20D79F7L,0xD20D79F7L,(-5L),0x4A9C1BF1L},{0xD20D79F7L,(-6L),(-1L),0xD20D79F7L}};
        uint32_t l_249 = 0UL;
        int64_t l_258 = 0xEF6D558A1B903DA8LL;
        uint32_t l_259 = 4294967295UL;
        uint32_t l_269 = 0x4C0952EEL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_246[i] = 0x6676L;
        if ((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((((l_248[0][1] ^= (l_184 && (l_247 = (safe_lshift_func_int8_t_s_s(0x5BL, (~(l_246[0] = (safe_rshift_func_int16_t_s_u((~(l_243 , (safe_lshift_func_uint16_t_u_s(((0xC5DC2C40DF291984LL && p_12) && p_10.f1), g_159[2][3])))), 6))))))))) < 0xDA610F45062F4E5ELL) | l_184), l_249)) < p_9), p_10.f3)) < l_249), g_7)), g_85.f0)))
        { 
            uint64_t l_257 = 0xFFF55306404F5728LL;
            l_179 = (((p_10.f2 , (+((safe_div_func_int8_t_s_s(((p_10.f2 != ((((5UL || (((((safe_div_func_int32_t_s_s((l_257 = (safe_sub_func_int32_t_s_s(g_54, 0x192DAD55L))), l_258)) ^ p_9) != 1L) , l_257) | p_11)) & l_259) > 0xC6L) != g_53)) , g_2[1]), p_9)) || g_195))) || 0x09L) > 4294967295UL);
        }
        else
        { 
            const int32_t l_268 = 0L;
            g_166[2][3][1].f4.f0 = ((safe_rshift_func_int16_t_s_u((((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(g_77.f1, p_9)) , 65532UL), 6)) == g_166[2][3][1].f0), 0x7656AE97L)) != l_268) <= l_268), g_54)) && 1L);
            ++l_269;
        }
    }
    l_179 = p_10.f3;
    return g_272;
}



static int16_t  func_13(int8_t  p_14)
{ 
    union U3 l_20 = {0x831966C4L};
    uint64_t l_95[4] = {9UL,9UL,9UL,9UL};
    int32_t l_106 = 1L;
    int32_t l_130 = 0xB5E453FCL;
    int32_t l_132 = 0xA1CE40C6L;
    int32_t l_161 = 1L;
    int32_t l_172[2][2] = {{0x727779B4L,0x727779B4L},{0x727779B4L,0x727779B4L}};
    int i, j;
    if ((l_95[3] |= (safe_mod_func_int64_t_s_s(func_17(l_20, l_20.f1), l_20.f0))))
    { 
        uint32_t l_104 = 4294967295UL;
        const int32_t l_105 = 0L;
        struct S0 l_129 = {-2};
        uint32_t l_131 = 18446744073709551615UL;
        uint32_t l_149 = 1UL;
        int32_t l_151 = 4L;
        uint32_t l_155 = 18446744073709551615UL;
        g_85.f0 = (g_77.f2 || (((g_107 = ((l_106 ^= (safe_mod_func_uint64_t_u_u(((0x7538C74BL != ((l_104 = (safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(p_14, 3)) && g_2[1]) ^ 0UL), l_95[3]))) != 0xC7L)) <= 1UL), l_105))) < 0UL)) > 0x62F11252BC438EE5LL) >= g_85.f0));
        if (((l_132 = ((safe_mul_func_uint16_t_u_u(p_14, ((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((g_77.f0 = (((safe_lshift_func_int16_t_s_u(((l_106 = (l_105 >= (~((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint16_t_u_s((((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(g_79, (safe_lshift_func_int16_t_s_u((l_129 , p_14), 15)))), g_85.f0)) , l_130) <= g_107), 7)) && 0xEC2C21BE7324BB92LL) >= 65535UL) < 0xDFAC948D72D27105LL), p_14)) , 9L)))) , 0x1546L), p_14)) ^ 18446744073709551615UL) < 0xA8BAL)) && 0L), l_131)) >= 0x09B7AB548CD50E3CLL), 6)) && 1L), l_104)) & 0x679C7D36L))) == p_14)) > p_14))
        { 
            uint32_t l_135 = 0x3C5D46ADL;
            g_85 = ((((((safe_div_func_uint32_t_u_u((l_135 && (((safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s((p_14 != (safe_sub_func_int64_t_s_s((g_85 , (g_7 != 0xD19C51062BF17702LL)), p_14))), p_14)), p_14)) && p_14) & l_106)), g_81)) ^ g_77.f1) , (-10L)) || l_20.f1) , p_14) , l_129);
            for (g_79 = 0; (g_79 <= 3); g_79 += 1)
            { 
                int i;
                l_151 ^= (safe_sub_func_uint16_t_u_u((g_150 = ((safe_lshift_func_int8_t_s_u(l_95[g_79], (l_95[g_79] & ((l_135 , ((!(g_85.f0 = (safe_mul_func_int8_t_s_s((p_14 = l_149), l_135)))) >= l_129.f0)) ^ l_132)))) , l_129.f0)), l_129.f0));
            }
            for (l_106 = 8; (l_106 >= (-6)); l_106 = safe_sub_func_uint32_t_u_u(l_106, 4))
            { 
                struct S1 l_154 = {0x9EL,23,1UL,0xD097A5E0311020B4LL,{5}};
                l_154.f4 = ((l_154 , (l_129.f0 = (g_85.f0 = (l_155 |= g_44)))) , g_85);
            }
        }
        else
        { 
            int16_t l_156 = 0xDCD5L;
            int32_t l_157[4][5][2] = {{{0xC48D9708L,4L},{0x858CEDA5L,0x61AE0EBFL},{8L,0xEAABCA9CL},{0xEAABCA9CL,0xEAABCA9CL},{8L,0x61AE0EBFL}},{{0x858CEDA5L,4L},{0xC48D9708L,8L},{0x35B14A6EL,0xC48D9708L},{0x29C1E949L,0x73E3C2ACL},{0x29C1E949L,0xC48D9708L}},{{0x35B14A6EL,8L},{0xC48D9708L,4L},{0x858CEDA5L,0x61AE0EBFL},{8L,0xEAABCA9CL},{0xEAABCA9CL,0xEAABCA9CL}},{{8L,0x61AE0EBFL},{0x858CEDA5L,4L},{0xC48D9708L,8L},{0x35B14A6EL,0xC48D9708L},{0x29C1E949L,0x73E3C2ACL}}};
            struct S1 l_165 = {0x88L,9,249UL,18446744073709551611UL,{-2}};
            int i, j, k;
            ++g_162;
            l_165.f4.f0 = (g_85.f0 = ((g_77.f2 , l_131) <= (((l_151 = ((g_166[2][3][1] = l_165) , l_161)) & g_158) >= g_160)));
        }
    }
    else
    { 
        uint64_t l_171 = 0UL;
        g_85.f0 ^= (l_132 ^= (safe_rshift_func_uint8_t_u_u(p_14, (safe_lshift_func_int8_t_s_u((l_20 , l_171), (((g_162 != p_14) <= 0xF3C386943B6AC625LL) ^ 0L))))));
    }
    return l_172[1][1];
}



static int64_t  func_17(union U3  p_18, const int32_t  p_19)
{ 
    uint32_t l_34 = 18446744073709551608UL;
    int16_t l_35 = (-1L);
    union U2 l_39 = {0x95DFEA44L};
    int32_t l_40[5][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
    union U3 l_94 = {0x2A541E78L};
    int i, j;
    g_36 = (safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((((p_19 ^ 4294967287UL) != (((safe_div_func_uint32_t_u_u(((((~((safe_rshift_func_uint8_t_u_s((((g_7 == (safe_div_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(l_34, p_18.f0)) < g_2[1]) , p_19), 0x7C58L))) & 0UL) >= p_18.f0), l_34)) , 0xA8D1D9D65FE96F77LL)) >= 2UL) , 0x071C19CDL) ^ l_34), l_34)) , g_2[3]) > l_34)) >= p_19) <= l_34), g_2[1])) | l_35), p_18.f1));
    if ((((safe_lshift_func_int16_t_s_u(g_2[1], (((p_18.f1 == ((l_39 , (l_40[0][1] |= g_7)) == l_39.f2)) || g_2[1]) ^ g_2[1]))) < g_2[2]) < l_39.f0))
    { 
        uint8_t l_41[4][2][1];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_41[i][j][k] = 0xB8L;
            }
        }
        l_41[0][1][0] = p_18.f1;
    }
    else
    { 
        int16_t l_45 = 0x723FL;
        int32_t l_46 = 0L;
        int32_t l_50 = (-9L);
        struct S0 l_84 = {2};
        if ((l_50 = (safe_div_func_int8_t_s_s(((l_40[2][1] = (l_46 = ((g_44 = p_18.f1) && (p_18.f1 > l_45)))) && (safe_unary_minus_func_int32_t_s((((safe_div_func_int16_t_s_s((0x9AA6B35ED357DCCCLL || g_2[1]), g_2[1])) || 0UL) <= g_36)))), 1UL))))
        { 
            int8_t l_82 = 0x73L;
            int32_t l_83 = 8L;
            for (l_39.f2 = 17; (l_39.f2 == (-12)); --l_39.f2)
            { 
                int32_t l_78 = 1L;
                int32_t l_80 = 1L;
                g_54++;
                l_50 = ((safe_div_func_uint32_t_u_u(g_7, (safe_add_func_uint8_t_u_u((0x4BL && ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((g_79 = (safe_rshift_func_int16_t_s_s(((((l_46 ^= l_45) || (l_78 ^= (g_77 , g_53))) < p_18.f0) > g_7), 4))), 4)) | l_35), g_77.f0)), g_77.f0)) != p_18.f0), p_18.f0)), g_53)), 4)), p_19)) > l_80)), p_18.f0)))) <= g_7);
                l_50 = (l_50 , (g_81 = p_19));
            }
            l_83 = l_82;
        }
        else
        { 
            int8_t l_86 = (-1L);
            g_85 = l_84;
            l_50 = l_86;
        }
        for (g_44 = 0; (g_44 >= 41); ++g_44)
        { 
            l_50 = 0x55FA7FFFL;
        }
    }
    for (p_18.f1 = 0; (p_18.f1 <= (-2)); --p_18.f1)
    { 
        uint8_t l_93 = 0x13L;
        g_85.f0 |= (l_34 > (safe_div_func_int8_t_s_s((((p_19 == ((l_40[0][1] |= (((((l_93 && (l_94 , 65534UL)) || l_94.f1) || l_35) != g_2[0]) ^ p_18.f1)) <= l_93)) <= p_19) ^ g_44), l_93)));
        return g_85.f0;
    }
    return g_77.f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_159[i][j], "g_159[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_166[i][j][k].f0, "g_166[i][j][k].f0", print_hash_value);
                transparent_crc(g_166[i][j][k].f1, "g_166[i][j][k].f1", print_hash_value);
                transparent_crc(g_166[i][j][k].f2, "g_166[i][j][k].f2", print_hash_value);
                transparent_crc(g_166[i][j][k].f3, "g_166[i][j][k].f3", print_hash_value);
                transparent_crc(g_166[i][j][k].f4.f0, "g_166[i][j][k].f4.f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_225[i][j], "g_225[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
