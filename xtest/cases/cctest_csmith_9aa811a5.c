// SPDX-License-Identifier: MIT
// cctest_csmith_9aa811a5.c --- cctest case csmith_9aa811a5 (csmith seed 2594705829)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x420263da */

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

// Options:   -s 2594705829 -o /tmp/csmith_gen_3uwlujdr/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint8_t  f1;
   int32_t  f2;
   int8_t  f3;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   struct S0  f1;
   int16_t  f2;
   const int8_t  f3;
};

union U2 {
   int16_t  f0;
   int64_t  f1;
   const struct S0  f2;
   const uint8_t  f3;
};

union U3 {
   int16_t  f0;
};


static int32_t g_2 = 0xC4AB274BL;
static uint16_t g_6 = 0x9B95L;
static int16_t g_14 = (-1L);
static uint8_t g_24 = 0xAAL;
static uint16_t g_37[3] = {0xC6A6L,0xC6A6L,0xC6A6L};
static uint32_t g_43[5][1][3] = {{{0xA6CE2E7CL,0UL,0xA6CE2E7CL}},{{0x85DC32C7L,0xB5B06A83L,0x25AC89D6L}},{{0x85DC32C7L,0x85DC32C7L,0xB5B06A83L}},{{0xA6CE2E7CL,0xB5B06A83L,0xB5B06A83L}},{{0xB5B06A83L,0UL,0x25AC89D6L}}};
static int32_t g_56 = 0x655505F4L;
static uint32_t g_60[3] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
static uint32_t g_61 = 1UL;
static int32_t g_63[4] = {0x91CD3C6EL,0x91CD3C6EL,0x91CD3C6EL,0x91CD3C6EL};
static union U1 g_80 = {{0x254C1C085588CB35LL,0x2DL,0L,0x1EL}};
static uint32_t g_105 = 0x75F205D5L;
static int16_t g_110[2][5][1] = {{{4L},{4L},{0xD65FL},{4L},{4L}},{{0xD65FL},{4L},{4L},{0xD65FL},{4L}}};
static uint64_t g_122 = 0x7259F99B685FDE15LL;
static union U3 g_140 = {-1L};
static int64_t g_143[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
static uint16_t g_156 = 0x2230L;



static uint32_t  func_1(void);
static int32_t  func_15(uint32_t  p_16);
static uint16_t  func_30(uint32_t  p_31, int32_t  p_32, int32_t  p_33, union U3  p_34, uint8_t  p_35);
static uint16_t  func_44(uint16_t  p_45);




static uint32_t  func_1(void)
{ 
    int8_t l_17 = 0x0BL;
    int32_t l_125 = 0x18CC4BB8L;
    int32_t l_130 = 0x1B6DC083L;
    int32_t l_179 = 0x417017BCL;
lbl_168:
    for (g_2 = 0; (g_2 < (-9)); g_2--)
    { 
        uint32_t l_109 = 0x16D361F4L;
        int32_t l_111 = 0L;
        struct S0 l_124 = {0x184C74488338C196LL,0x43L,0x1BEE42B7L,0x43L};
        if ((safe_unary_minus_func_uint16_t_u(((g_6--) >= g_2))))
        { 
            l_111 = (safe_add_func_int64_t_s_s((+8UL), (safe_div_func_int32_t_s_s((g_14 ^= g_2), (g_110[0][1][0] &= (l_109 = func_15(l_17)))))));
        }
        else
        { 
            const int64_t l_123 = (-10L);
            g_56 ^= (l_17 ^ ((g_80.f2 > ((safe_sub_func_int16_t_s_s((0x206E4EE9L < ((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((((((((safe_lshift_func_uint8_t_u_u(((g_122 &= 0x3B0092DB2509B59BLL) <= g_80.f0.f1), l_123)) & g_80.f1.f0) < g_61) , l_124) , 0xE2L) & g_2) > l_124.f3), g_80.f3)), 5L)), l_125)) && g_110[0][1][0])), 2UL)) < 0L)) , l_125));
            return g_43[4][0][2];
        }
        for (g_80.f0.f3 = 3; (g_80.f0.f3 >= 0); g_80.f0.f3 -= 1)
        { 
            const uint16_t l_135 = 3UL;
            uint8_t l_148 = 255UL;
            int32_t l_153 = 0L;
            for (g_105 = 0; (g_105 <= 3); g_105 += 1)
            { 
                int i;
                g_56 |= ((g_63[g_105] >= (safe_unary_minus_func_int32_t_s(1L))) ^ ((l_125 = ((~(0x4BFD8C34014C235FLL <= (l_130 != 0x06A4L))) && g_105)) , g_80.f2));
            }
            for (l_125 = 0; (l_125 <= 0); l_125 += 1)
            { 
                g_56 ^= g_61;
                return g_80.f2;
            }
            for (g_61 = 0; (g_61 <= 3); g_61 += 1)
            { 
                int16_t l_150 = 1L;
                g_56 = ((safe_add_func_uint32_t_u_u((0xE9L == (l_109 ^ (safe_mul_func_uint8_t_u_u(l_135, (((251UL >= g_80.f0.f1) > 1UL) | 0x8CL))))), g_80.f0.f1)) | l_124.f0);
                g_143[0] = (g_56 = (safe_add_func_uint64_t_u_u(l_17, ((safe_lshift_func_uint16_t_u_u(g_56, 2)) >= (g_140 , (safe_rshift_func_uint8_t_u_u((g_43[1][0][0] <= l_124.f2), 2)))))));
                g_56 = (g_80 , (l_125 = ((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(l_148, (18446744073709551615UL >= ((((!0x9745L) || g_80.f1.f2) >= l_150) != g_80.f3)))) ^ 1UL) , 9UL), g_61)) >= l_111)));
            }
            for (l_124.f3 = 0; (l_124.f3 >= 0); l_124.f3 -= 1)
            { 
                g_56 = (((g_80.f0.f2 <= ((18446744073709551609UL && (safe_add_func_uint64_t_u_u(((--g_24) > ((-2L) == (((l_153 = g_110[0][1][0]) | 0x24L) , l_148))), l_148))) >= 4294967289UL)) < 0x3B1CCB9073E8D0C3LL) || g_24);
            }
        }
        g_156++;
    }
    if (l_130)
    { 
        uint32_t l_161 = 0xB3F44D47L;
        g_56 |= (g_143[4] != (safe_rshift_func_uint8_t_u_s(4UL, 5)));
        --l_161;
    }
    else
    { 
        struct S0 l_164 = {4L,255UL,0xF3143B9AL,-1L};
        for (g_80.f0.f1 = 0; (g_80.f0.f1 <= 0); g_80.f0.f1 += 1)
        { 
            struct S0 l_165 = {1L,0x00L,0x5EF769B8L,0xE4L};
            l_165 = l_164;
            for (g_156 = 0; (g_156 <= 0); g_156 += 1)
            { 
                int i;
                g_56 = ((safe_div_func_int8_t_s_s((g_143[(g_156 + 3)] , g_80.f1.f2), 0x0BL)) & l_164.f3);
                if (g_6)
                    goto lbl_168;
            }
        }
    }
    if ((((--g_24) < (l_125 > (g_56 ^= (safe_lshift_func_int8_t_s_s((l_179 &= (l_130 &= (safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((g_122 <= ((safe_rshift_func_uint8_t_u_u(l_125, 3)) <= l_17)), 0xC0100DB2DB7845B2LL)), g_60[0])))), 2))))) <= l_17))
    { 
        l_125 &= (g_80.f1.f2 = 7L);
    }
    else
    { 
        int8_t l_192 = 0L;
        union U2 l_198 = {0L};
        int32_t l_202 = (-1L);
        for (g_80.f0.f0 = 0; (g_80.f0.f0 > (-24)); g_80.f0.f0--)
        { 
            int64_t l_193 = 0xDE25B27661964D51LL;
            int32_t l_201 = 0L;
            for (g_105 = 6; (g_105 != 37); ++g_105)
            { 
                int16_t l_199 = 0x9DBCL;
                l_193 = ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((g_80.f1.f2 > (safe_rshift_func_int8_t_s_u((g_80.f3 & (g_80.f1.f0 != ((g_24 , l_192) , g_80.f0.f2))), g_60[1]))), 0x93L)), 5)) && l_192);
                l_130 &= (l_199 ^= (safe_rshift_func_int16_t_s_s((g_80.f0 , ((safe_sub_func_int8_t_s_s(((l_198 , l_198) , (g_80.f3 ^ (-6L))), g_156)) , (-1L))), g_122)));
            }
            g_56 = (~(--g_24));
        }
        g_56 = (+l_130);
    }
    return l_17;
}



static int32_t  func_15(uint32_t  p_16)
{ 
    int64_t l_22 = (-1L);
    union U3 l_36[5][3] = {{{0x55C5L},{0x55C5L},{0x55C5L}},{{0x55C5L},{0x55C5L},{0x55C5L}},{{0x55C5L},{0x55C5L},{0x55C5L}},{{0x55C5L},{0x55C5L},{0x55C5L}},{{0x55C5L},{0x55C5L},{0x55C5L}}};
    uint16_t l_108 = 1UL;
    int i, j;
    for (p_16 = 1; (p_16 <= 46); p_16++)
    { 
        int64_t l_20 = 0x12A30A4CCFD66C4ALL;
        int32_t l_21 = 0xBB2F1448L;
        int32_t l_23 = 0x133F29C8L;
        uint32_t l_29 = 0x4868FDADL;
        g_24--;
        l_23 = ((safe_mul_func_uint16_t_u_u(((l_29 , (p_16 && func_30((((0UL ^ ((0x97L == p_16) , l_22)) & p_16) || 0xAC8EF34EA885C82FLL), p_16, l_22, l_36[3][1], p_16))) && p_16), 65535UL)) , l_29);
    }
    g_105++;
    return l_108;
}



static uint16_t  func_30(uint32_t  p_31, int32_t  p_32, int32_t  p_33, union U3  p_34, uint8_t  p_35)
{ 
    int16_t l_94 = 0x41E6L;
    int8_t l_104 = 0xADL;
    for (p_35 = 0; (p_35 <= 2); p_35 += 1)
    { 
        int32_t l_103 = (-1L);
        int i;
        l_94 = (safe_lshift_func_uint8_t_u_u((~(((g_37[p_35] && (((g_80.f0.f1 = ((g_43[1][0][0] = 0xAD31FC531364F2CALL) , (0x7E90L || func_44(g_37[1])))) && p_31) > g_37[p_35])) | p_34.f0) > g_37[p_35])), 6));
        l_103 |= (safe_div_func_uint64_t_u_u(g_80.f1.f2, (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u(p_33, 0xB5L)) < g_60[0]) == 9L) , 1UL), 1L)), l_94))));
        for (p_33 = 2; (p_33 >= 0); p_33 -= 1)
        { 
            l_103 = (0x1A1E5F5605658C46LL & (-1L));
        }
    }
    return l_104;
}



static uint16_t  func_44(uint16_t  p_45)
{ 
    uint32_t l_50 = 0x6BBBD28AL;
    int32_t l_59 = 0x94C655EFL;
    int32_t l_62 = 0x60F1B639L;
    int32_t l_82 = 0L;
    int32_t l_84 = 0x2691D145L;
    g_63[2] = (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((l_50 = p_45), (l_59 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((!(p_45 < (g_61 = (g_60[1] &= ((g_56 = g_37[1]) || (safe_mod_func_uint16_t_u_u(0x6066L, l_59))))))), 7)), g_43[1][0][0]))))) & l_62), p_45));
    if (((safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_u(g_6, ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((p_45 && (l_62 = g_61)), ((l_59 & p_45) != l_59))), p_45)) != 0L))))) <= 9L))
    { 
        uint32_t l_81 = 0xBA9E7339L;
        int32_t l_83 = 0xD2D5FA56L;
        l_84 = (safe_div_func_uint16_t_u_u((((l_82 = (safe_lshift_func_int8_t_s_s((l_62 = (l_59 = (safe_div_func_uint8_t_u_u(255UL, (l_81 = (~(safe_lshift_func_int8_t_s_u((g_2 , (-8L)), ((g_80 , l_59) >= g_6))))))))), g_2))) | p_45) & l_83), 0x302AL));
    }
    else
    { 
        struct S0 l_85 = {0xA3E9F7A6BAE6AC69LL,0UL,0L,0xD3L};
        g_80.f1.f2 = g_6;
        g_80.f1.f2 = (l_85 , (safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((g_80.f0.f2 , (g_80.f0.f3 ^ l_85.f1)), 0xC19EL)) && p_45), g_80.f1.f3)) & p_45) | l_59) ^ g_80.f1.f0) , 0x4FD4L), g_60[0])), p_45)));
        return l_62;
    }
    return p_45;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_37[i], "g_37[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_43[i][j][k], "g_43[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);

    }
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    transparent_crc(g_80.f0.f0, "g_80.f0.f0", print_hash_value);
    transparent_crc(g_80.f0.f1, "g_80.f0.f1", print_hash_value);
    transparent_crc(g_80.f0.f2, "g_80.f0.f2", print_hash_value);
    transparent_crc(g_80.f0.f3, "g_80.f0.f3", print_hash_value);
    transparent_crc(g_80.f1.f0, "g_80.f1.f0", print_hash_value);
    transparent_crc(g_80.f1.f1, "g_80.f1.f1", print_hash_value);
    transparent_crc(g_80.f1.f2, "g_80.f1.f2", print_hash_value);
    transparent_crc(g_80.f1.f3, "g_80.f1.f3", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    transparent_crc(g_80.f3, "g_80.f3", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_110[i][j][k], "g_110[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    transparent_crc(g_156, "g_156", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
