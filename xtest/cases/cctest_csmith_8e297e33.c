// SPDX-License-Identifier: MIT
// cctest_csmith_8e297e33.c --- cctest case csmith_8e297e33 (csmith seed 2385083955)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8b3aa134 */

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

// Options:   -s 2385083955 -o /tmp/csmith_gen_z7uw2a1k/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int32_t  f1;
   int8_t  f2;
   int32_t  f3;
   uint16_t  f4;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint64_t  f1;
   int16_t  f2;
   uint64_t  f3;
   uint32_t  f4;
   int32_t  f5;
};

union U2 {
   struct S0  f0;
   const struct S0  f1;
};


static int16_t g_2 = 0x7161L;
static struct S0 g_18[4][3] = {{{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL},{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL},{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL}},{{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL},{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL},{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL}},{{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL},{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL},{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL}},{{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL},{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL},{1L,0x07800FF6L,0xE1L,0xD32DE9E5L,65529UL}}};
static int32_t g_24[1] = {(-7L)};
static uint16_t g_25 = 65531UL;
static struct S1 g_47[5][2] = {{{0L,0x022AD61797E2BD63LL,0L,0xB63B58950224C6ACLL,1UL,0x5E18B70FL},{0xBF80B7F2L,0UL,3L,0xFB09233419813DA7LL,0x3CE50763L,0xC0487CC5L}},{{-6L,0x068CF1140913DB3BLL,3L,0xC332E49D2A59A03CLL,4294967295UL,0x6AB0C02EL},{0xBF80B7F2L,0UL,3L,0xFB09233419813DA7LL,0x3CE50763L,0xC0487CC5L}},{{0L,0x022AD61797E2BD63LL,0L,0xB63B58950224C6ACLL,1UL,0x5E18B70FL},{-6L,0x068CF1140913DB3BLL,3L,0xC332E49D2A59A03CLL,4294967295UL,0x6AB0C02EL}},{{0x0EDC1697L,0x2D56B383239552BCLL,0x5D40L,0x8F4F80CF873A649ELL,3UL,0L},{0x0EDC1697L,0x2D56B383239552BCLL,0x5D40L,0x8F4F80CF873A649ELL,3UL,0L}},{{0x0EDC1697L,0x2D56B383239552BCLL,0x5D40L,0x8F4F80CF873A649ELL,3UL,0L},{-6L,0x068CF1140913DB3BLL,3L,0xC332E49D2A59A03CLL,4294967295UL,0x6AB0C02EL}}};
static union U2 g_51 = {{-5L,7L,0xA8L,0xD170163AL,7UL}};
static int16_t g_89 = 0x8152L;
static uint32_t g_95[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static uint32_t g_120[1] = {7UL};
static uint32_t g_127 = 0x66788158L;
static uint16_t g_144 = 0x3E8FL;
static int16_t g_188 = 1L;
static uint32_t g_191 = 1UL;
static uint32_t g_253 = 4294967295UL;
static uint16_t g_255 = 0x5DA1L;
static int16_t g_267[1][5] = {{(-8L),(-8L),(-8L),(-8L),(-8L)}};
static int16_t g_290 = 0x4D11L;
static int32_t g_293 = 0x4FF035ADL;
static uint32_t g_294[3] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static int64_t g_299 = 4L;



static uint8_t  func_1(void);
static struct S0  func_7(union U2  p_8, int16_t  p_9, int8_t  p_10);
static union U2  func_11(uint16_t  p_12, uint16_t  p_13);
static const uint16_t  func_14(struct S0  p_15, struct S0  p_16, int8_t  p_17);




static uint8_t  func_1(void)
{ 
    int32_t l_3[5][5][2] = {{{3L,0x11015AA9L},{0x11015AA9L,0x11015AA9L},{3L,1L},{0x141E4F1FL,1L},{(-6L),3L}},{{0x141E4F1FL,1L},{1L,0x06887E08L},{1L,1L},{0x141E4F1FL,0x11015AA9L},{1L,0x9CF1813FL}},{{4L,3L},{0x11015AA9L,0x673292C5L},{0x673292C5L,0x673292C5L},{0x11015AA9L,3L},{4L,0x9CF1813FL}},{{1L,0x11015AA9L},{0x141E4F1FL,1L},{1L,0x06887E08L},{1L,1L},{0x141E4F1FL,0x11015AA9L}},{{1L,0x9CF1813FL},{4L,3L},{0x11015AA9L,0x673292C5L},{0x673292C5L,0x673292C5L},{0x11015AA9L,3L}}};
    const uint8_t l_96[4] = {255UL,255UL,255UL,255UL};
    uint64_t l_158 = 18446744073709551615UL;
    int32_t l_178 = 0xFE19D36EL;
    struct S0 l_184[1] = {{-1L,0xC4747A78L,0L,0xDF2B7E3AL,0x2593L}};
    int8_t l_209[4];
    uint32_t l_210[1];
    const int16_t l_211 = 0x890BL;
    int32_t l_218 = (-1L);
    uint32_t l_300 = 1UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_209[i] = 0xD4L;
    for (i = 0; i < 1; i++)
        l_210[i] = 0xCF231785L;
    if ((l_3[3][2][0] ^= g_2))
    { 
        uint16_t l_4 = 4UL;
        struct S0 l_79[3][4][1] = {{{{1L,0L,0x13L,0x62D75D4BL,0xAF2FL}},{{0x3FB787705A97E966LL,0x6590C650L,-1L,0L,2UL}},{{0x77F73882F6EF7C0ELL,0x51DE08EFL,0x73L,-1L,9UL}},{{0x3FB787705A97E966LL,0x6590C650L,-1L,0L,2UL}}},{{{1L,0L,0x13L,0x62D75D4BL,0xAF2FL}},{{0x95D173CA94711538LL,0x44CA3D7BL,-1L,0x32ECC1E8L,0xF1BAL}},{{1L,0L,0x13L,0x62D75D4BL,0xAF2FL}},{{0x3FB787705A97E966LL,0x6590C650L,-1L,0L,2UL}}},{{{0x77F73882F6EF7C0ELL,0x51DE08EFL,0x73L,-1L,9UL}},{{0x3FB787705A97E966LL,0x6590C650L,-1L,0L,2UL}},{{1L,0L,0x13L,0x62D75D4BL,0xAF2FL}},{{0x95D173CA94711538LL,0x44CA3D7BL,-1L,0x32ECC1E8L,0xF1BAL}}}};
        int8_t l_97 = 0xF2L;
        int i, j, k;
        --l_4;
        for (l_4 = 0; (l_4 <= 1); l_4 += 1)
        { 
            struct S0 l_19 = {0xD9C8C74C3EEC73F5LL,4L,0x4EL,4L,65527UL};
            int32_t l_28 = 1L;
            l_79[1][0][0] = func_7(func_11((l_28 = (0x4BF748DCL >= ((func_14(g_18[2][0], (l_19 = l_19), g_2) <= l_4) == 1L))), g_18[2][0].f4), l_3[0][2][1], l_3[3][2][0]);
            for (l_19.f3 = 1; (l_19.f3 >= 0); l_19.f3 -= 1)
            { 
                uint32_t l_86 = 0xCA617A08L;
                const uint16_t l_90 = 0x7420L;
                g_18[2][0].f3 = ((safe_div_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((g_2 &= 9L), (safe_add_func_uint32_t_u_u((g_18[2][0] , (18446744073709551615UL != (g_51.f0.f0 = ((l_86++) || (g_89 = 0x26L))))), 0xD2D4BDACL)))) < l_90), g_47[3][1].f0)) <= l_3[3][2][0]);
            }
            for (l_19.f4 = 0; (l_19.f4 <= 1); l_19.f4 += 1)
            { 
                int16_t l_94 = (-7L);
                int8_t l_98 = 0xC3L;
                l_98 |= (((~0xCB85L) > (((g_25 != (1UL >= (safe_add_func_int8_t_s_s((l_3[3][2][0] = ((((g_95[3] = ((l_94 < 0UL) , l_94)) , l_3[3][2][0]) , 4294967294UL) ^ l_96[2])), g_51.f1.f4)))) <= 0x8C6BL) ^ l_97)) != l_96[2]);
            }
        }
    }
    else
    { 
        struct S0 l_104[4] = {{0x088D6ADFE8D4ABBELL,0L,0xF6L,7L,0x9DAFL},{0x088D6ADFE8D4ABBELL,0L,0xF6L,7L,0x9DAFL},{0x088D6ADFE8D4ABBELL,0L,0xF6L,7L,0x9DAFL},{0x088D6ADFE8D4ABBELL,0L,0xF6L,7L,0x9DAFL}};
        union U2 l_136 = {{0x99809853766640BCLL,5L,0xE0L,0xBB9ED89FL,0x139FL}};
        uint32_t l_141[3][3];
        int32_t l_159 = 0xA86E02FAL;
        int32_t l_160[2];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_141[i][j] = 1UL;
        }
        for (i = 0; i < 2; i++)
            l_160[i] = 0x7CA2DBAEL;
        for (g_2 = (-8); (g_2 < (-16)); g_2--)
        { 
            int32_t l_118 = (-1L);
            int32_t l_131 = 0L;
            int8_t l_165[5];
            int i;
            for (i = 0; i < 5; i++)
                l_165[i] = 0x96L;
            for (g_51.f0.f0 = 7; (g_51.f0.f0 > 7); g_51.f0.f0 = safe_add_func_int32_t_s_s(g_51.f0.f0, 1))
            { 
                struct S0 l_103 = {0L,0L,-7L,0xFAD3D248L,1UL};
                int32_t l_119 = 0x9CC764A6L;
                uint32_t l_130 = 0xC7511D3AL;
                l_104[3] = l_103;
                l_3[3][2][0] = (safe_mod_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((((((--g_47[3][1].f1) | (g_47[3][1].f3 = ((l_119 = (safe_lshift_func_int8_t_s_u((((safe_unary_minus_func_int16_t_s((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u(0xE585F6FCF51EDEC6LL, ((((((((++g_120[0]) & (((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((g_127 == (safe_div_func_int32_t_s_s(g_47[3][1].f5, g_51.f1.f1))), 7)) , g_51.f0.f3), g_2)) , l_104[3].f3) < g_51.f1.f1)) > l_103.f4) || l_96[2]) | l_130) >= l_103.f2) <= 1L) | l_103.f4))), g_18[2][0].f2)))) <= g_2) || g_47[3][1].f2), 5))) >= g_18[2][0].f0))) , g_18[2][0].f2) >= (-1L)) == 18446744073709551615UL), g_47[3][1].f4)) != g_47[3][1].f4) == l_103.f4), 0x7170L));
                if (g_51.f1.f1)
                    break;
            }
            l_131 = (l_104[3].f3 &= g_18[2][0].f1);
            if ((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_47[3][1].f1, ((l_136 , (g_47[3][1].f2 = ((safe_div_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((l_96[2] && g_24[0]), l_96[2])) , l_3[3][2][0]), 9UL)) != 0x9915209B59D214D0LL))) & 65532UL))), 0xC9E7L)))
            { 
                int64_t l_145 = 0x347C6FEB477BFD40LL;
                int32_t l_146 = 0xD4F5A8E4L;
                g_18[2][0].f3 = (l_141[2][1] , (l_146 = (l_3[2][3][1] = ((((safe_mod_func_int64_t_s_s((g_2 == g_144), (l_145 &= g_18[2][0].f3))) >= g_144) != g_51.f1.f2) & g_89))));
                l_160[1] = (g_47[3][1].f5 == (((((((l_159 |= (safe_rshift_func_int16_t_s_s((l_136.f0.f3 = (((safe_add_func_int64_t_s_s((l_104[3].f3 = ((safe_lshift_func_int8_t_s_s((!(((safe_rshift_func_uint16_t_u_u((+l_118), 10)) | (safe_unary_minus_func_int32_t_s((0x1830AA8D3F6459BDLL == ((-1L) < 0xBDL))))) , 0xF87B7020862D8E3CLL)), g_127)) , l_96[2])), l_136.f0.f0)) , l_158) >= g_51.f0.f2)), 14))) != l_158) && g_120[0]) , g_51.f1.f2) & 4UL) ^ 0xDCB8F5414D47E205LL) < g_120[0]));
                l_3[3][2][0] = (safe_mod_func_int64_t_s_s(g_51.f0.f3, (safe_sub_func_int16_t_s_s((l_165[0] = (g_47[3][1].f2 <= (g_89 = ((g_18[2][0].f3 >= l_136.f1.f4) , g_51.f1.f1)))), l_104[3].f2))));
            }
            else
            { 
                if (g_47[3][1].f1)
                    break;
                return g_47[3][1].f0;
            }
        }
        l_3[3][2][0] |= g_51.f0.f4;
        for (g_144 = 9; (g_144 < 1); g_144--)
        { 
            g_47[3][1] = g_47[3][1];
            g_18[2][0].f3 ^= ((l_178 |= (safe_add_func_int32_t_s_s(g_25, (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_104[3].f3, (l_3[2][4][1] < (((safe_lshift_func_int16_t_s_s(g_120[0], l_141[1][1])) > l_3[3][2][0]) == 4UL)))), g_51.f1.f0)), 0x7AL))))) , (-1L));
        }
    }
    for (g_2 = (-25); (g_2 == (-24)); g_2 = safe_add_func_int16_t_s_s(g_2, 7))
    { 
        int64_t l_187[5];
        int32_t l_189 = 1L;
        int32_t l_190 = 0x0F97F4C8L;
        int i;
        for (i = 0; i < 5; i++)
            l_187[i] = 0xA41D34E961A171FBLL;
        for (g_127 = 0; (g_127 <= 0); g_127 += 1)
        { 
            struct S1 l_181 = {-2L,0x3D628086BC5B7331LL,0xF3D0L,0UL,0xA5EFBF45L,-1L};
            int i;
            for (g_51.f0.f4 = 0; (g_51.f0.f4 <= 1); g_51.f0.f4 += 1)
            { 
                int i, j, k;
                return l_3[(g_127 + 2)][(g_51.f0.f4 + 2)][g_51.f0.f4];
            }
            if (g_120[g_127])
                break;
            l_181 = g_47[4][0];
            for (l_181.f3 = 0; (l_181.f3 <= 1); l_181.f3 += 1)
            { 
                int i, j, k;
                l_3[(g_127 + 2)][(l_181.f3 + 1)][g_127] = 0x43C66CA5L;
            }
        }
        for (g_51.f0.f1 = (-17); (g_51.f0.f1 <= 21); g_51.f0.f1 = safe_add_func_int8_t_s_s(g_51.f0.f1, 6))
        { 
            l_184[0] = g_51.f1;
            for (l_158 = (-9); (l_158 <= 20); l_158++)
            { 
                if (g_24[0])
                    break;
                if (g_51.f1.f0)
                    continue;
            }
        }
        g_191--;
    }
    if ((safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((~((safe_mod_func_uint16_t_u_u(0xE4C8L, ((g_47[3][1].f3 , ((g_47[3][1].f0 < (safe_mul_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_s((l_184[0].f3 = (safe_lshift_func_int8_t_s_s(0x20L, l_209[3]))), 9)) , 1UL) || g_51.f0.f0) == 0xC3L) , g_47[3][1].f4), l_96[2]))) < g_24[0])) || l_209[3]))) | g_51.f1.f3)), l_210[0])) != 0xBF919A26L), l_211)), g_127)))
    { 
        int32_t l_246 = 0x69176DB3L;
        int32_t l_247 = 0xC2F411FCL;
        for (g_51.f0.f3 = (-1); (g_51.f0.f3 <= (-8)); g_51.f0.f3--)
        { 
            int16_t l_230 = 0x4E51L;
            for (l_178 = 0; (l_178 <= 18); l_178 = safe_add_func_int8_t_s_s(l_178, 6))
            { 
                g_18[2][0].f3 = (safe_sub_func_int16_t_s_s(g_51.f0.f2, l_218));
            }
            if (l_96[2])
                break;
            if (((l_3[0][1][0] >= ((safe_div_func_int8_t_s_s((g_120[0] , g_191), (safe_lshift_func_uint16_t_u_s((0x8951L > 0x1BD2L), 15)))) || 0xD601C4F47248C8BDLL)) || 3UL))
            { 
                return g_51.f1.f3;
            }
            else
            { 
                int32_t l_245 = (-1L);
                l_247 ^= (safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((+l_230), ((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((l_3[3][2][0] = (safe_lshift_func_uint16_t_u_s(((((((-3L) <= (safe_rshift_func_uint16_t_u_s(0x4CAFL, 8))) == (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((0xAEL & g_127), l_245)), l_209[3])), 7))) || 0x4856E435L) , (-5L)) < 248UL), l_230))), l_210[0])), 0L)) <= 0x28A8D11BL))) || 0x9BF2L), 5)) == l_246) & g_51.f0.f4), l_245));
            }
        }
        for (g_51.f0.f1 = 19; (g_51.f0.f1 < (-2)); g_51.f0.f1--)
        { 
            int32_t l_252 = 0L;
            g_253 = (l_252 = (g_18[2][0].f3 = ((safe_lshift_func_uint16_t_u_u(l_252, 11)) ^ (g_47[3][1].f1 = 0xDB401B76CC970ECALL))));
        }
    }
    else
    { 
        uint8_t l_254[1];
        struct S1 l_264 = {0L,18446744073709551613UL,8L,0UL,0x17ABD9C1L,-5L};
        int32_t l_268 = (-10L);
        int8_t l_269[3][3] = {{0x65L,0x65L,0x65L},{8L,8L,8L},{0x65L,0x65L,0x65L}};
        uint8_t l_287 = 255UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_254[i] = 0UL;
        l_3[3][2][0] = l_254[0];
        for (g_127 = 0; (g_127 <= 3); g_127 += 1)
        { 
            int32_t l_284 = 0x2C5CBB9FL;
            int i;
            g_51.f0.f3 |= l_209[g_127];
            --g_255;
            if ((((safe_div_func_uint64_t_u_u(((g_47[3][1].f1 = (((safe_add_func_uint16_t_u_u(g_18[2][0].f4, (safe_lshift_func_int8_t_s_u(((g_120[0] > (((l_264 , (l_268 = (safe_div_func_uint64_t_u_u(((g_51.f0.f2 = (((-1L) > 65535UL) > g_267[0][3])) ^ l_264.f1), g_188)))) || g_89) | g_18[2][0].f4)) < 0x1DL), l_209[g_127])))) < l_209[g_127]) , l_269[0][1])) | l_264.f1), 18446744073709551606UL)) && 0xCC5FA31A845F293ALL) <= l_209[g_127]))
            { 
                int64_t l_272 = 0x5E74F07F468553DELL;
                if (g_51.f0.f2)
                    break;
                if (g_51.f0.f4)
                    continue;
                g_18[2][0].f3 = ((safe_mod_func_uint64_t_u_u(l_272, (g_18[2][0].f0 = g_24[0]))) == (l_209[3] && (l_268 = (safe_add_func_int8_t_s_s(((g_51.f0.f0 = (0xC13E1532L <= 0xB20811E1L)) || (-4L)), 6UL)))));
            }
            else
            { 
                int8_t l_285 = (-6L);
                int32_t l_286 = 0x67F3BF8DL;
                l_285 ^= ((safe_rshift_func_uint8_t_u_u(248UL, g_127)) >= (g_51.f0.f0 ^= (safe_mod_func_int64_t_s_s(((+(((safe_lshift_func_int8_t_s_u(((0xE43D9FBBL || (safe_add_func_int64_t_s_s((l_284 = ((-6L) > g_188)), 0xD8679B8138001BA6LL))) & g_47[3][1].f0), g_2)) < g_191) == 1L)) != 0UL), g_18[2][0].f1))));
                l_286 ^= 1L;
                g_18[2][0].f3 |= ((l_287--) == (-1L));
            }
            for (g_51.f0.f4 = 0; (g_51.f0.f4 <= 1); g_51.f0.f4 += 1)
            { 
                int32_t l_291 = 0xCB8C2FD8L;
                int32_t l_292[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_292[i] = 0xE6B636FBL;
                g_18[2][0].f3 ^= 0x18D4BEC7L;
                g_294[2]--;
                l_300 |= (g_47[3][1].f0 | (safe_lshift_func_int8_t_s_u((g_299 != l_284), (g_267[0][3] >= l_291))));
            }
        }
    }
    return g_144;
}



static struct S0  func_7(union U2  p_8, int16_t  p_9, int8_t  p_10)
{ 
    uint16_t l_61 = 0x2293L;
    int32_t l_71 = 8L;
    int32_t l_72 = 1L;
    if ((safe_lshift_func_int8_t_s_u(1L, (l_61 = (0x154CL ^ (((safe_div_func_uint16_t_u_u(((p_8.f0.f0 = (safe_mod_func_int16_t_s_s(((g_18[2][0].f3 <= (((~(g_51.f1.f4 , 0L)) & p_9) < 0x017AB3EDL)) | 0x48ED3424908F88A6LL), (-8L)))) <= 0x949B8DC114A32183LL), 65535UL)) , g_47[3][1].f1) <= 1L))))))
    { 
        uint8_t l_68[5];
        struct S0 l_77 = {1L,1L,-1L,0x286A5854L,0UL};
        int i;
        for (i = 0; i < 5; i++)
            l_68[i] = 0xB3L;
        l_72 |= (((safe_add_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(p_8.f1.f4, 1L)) == (((l_68[4] ^= 0x28E06257L) <= (((safe_lshift_func_uint8_t_u_u(((--g_25) < 65535UL), 5)) & 4294967295UL) , 0L)) != 0x142351F1L)) < p_8.f1.f4), l_61)) || p_10) , (-6L));
        for (g_51.f0.f4 = 0; (g_51.f0.f4 != 20); g_51.f0.f4++)
        { 
            g_18[2][0].f3 = 1L;
            return l_77;
        }
        return p_8.f0;
    }
    else
    { 
        struct S0 l_78 = {0xB20D6D55563F5056LL,0L,-6L,0x4F5E2A8BL,1UL};
        l_78 = g_51.f0;
    }
    return p_8.f1;
}



static union U2  func_11(uint16_t  p_12, uint16_t  p_13)
{ 
    uint16_t l_29[3];
    int32_t l_32[2];
    struct S1 l_50[1][1][3] = {{{{-1L,0xBC3860FE7B97028ALL,0x0AF0L,18446744073709551615UL,0xB1420985L,0L},{-1L,0xBC3860FE7B97028ALL,0x0AF0L,18446744073709551615UL,0xB1420985L,0L},{-1L,0xBC3860FE7B97028ALL,0x0AF0L,18446744073709551615UL,0xB1420985L,0L}}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_29[i] = 0xBAC4L;
    for (i = 0; i < 2; i++)
        l_32[i] = 1L;
    l_32[1] ^= (g_25 == ((p_13 != l_29[0]) != (safe_div_func_int16_t_s_s((0x4D7D9C74L ^ 0x34EF9DEAL), l_29[0]))));
    for (g_2 = 0; (g_2 <= 0); g_2 += 1)
    { 
        int32_t l_43 = 0xD0676DFAL;
        struct S1 l_49[3] = {{0L,18446744073709551615UL,0x2441L,1UL,0x4231C6F7L,0x76835008L},{0L,18446744073709551615UL,0x2441L,1UL,0x4231C6F7L,0x76835008L},{0L,18446744073709551615UL,0x2441L,1UL,0x4231C6F7L,0x76835008L}};
        int i;
        if ((safe_div_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(l_32[(g_2 + 1)], (safe_rshift_func_int8_t_s_u(l_29[(g_2 + 1)], (safe_add_func_int16_t_s_s(((l_43 = g_18[2][0].f2) || (safe_add_func_uint32_t_u_u(g_18[2][0].f4, g_18[2][0].f2))), p_12)))))) == 0x8C87C631L), p_12)), l_29[0])))
        { 
            const int16_t l_46 = 0xAFF4L;
            for (p_13 = 0; (p_13 <= 0); p_13 += 1)
            { 
                if (g_24[0])
                    break;
            }
            if (l_46)
                continue;
        }
        else
        { 
            for (p_13 = 0; (p_13 <= 2); p_13 += 1)
            { 
                struct S1 l_48 = {0xE6A76871L,18446744073709551609UL,0x5ACFL,0xE1B1CD7F696D9C50LL,0x9BCC685AL,3L};
                l_48 = g_47[3][1];
            }
        }
        for (p_13 = 0; (p_13 <= 0); p_13 += 1)
        { 
            l_50[0][0][2] = (g_47[1][0] = l_49[2]);
        }
    }
    return g_51;
}



static const uint16_t  func_14(struct S0  p_15, struct S0  p_16, int8_t  p_17)
{ 
    int16_t l_20[1][3][5] = {{{1L,0x90B8L,0x90B8L,1L,0x90B8L},{(-6L),(-6L),0x9CC0L,(-6L),(-6L)},{0x90B8L,1L,0x90B8L,0x90B8L,1L}}};
    int32_t l_21 = 0xFA2E85C6L;
    int32_t l_22 = (-5L);
    int32_t l_23 = 6L;
    int i, j, k;
    g_25--;
    return l_23;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_18[i][j].f0, "g_18[i][j].f0", print_hash_value);
            transparent_crc(g_18[i][j].f1, "g_18[i][j].f1", print_hash_value);
            transparent_crc(g_18[i][j].f2, "g_18[i][j].f2", print_hash_value);
            transparent_crc(g_18[i][j].f3, "g_18[i][j].f3", print_hash_value);
            transparent_crc(g_18[i][j].f4, "g_18[i][j].f4", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_24[i], "g_24[i]", print_hash_value);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_47[i][j].f0, "g_47[i][j].f0", print_hash_value);
            transparent_crc(g_47[i][j].f1, "g_47[i][j].f1", print_hash_value);
            transparent_crc(g_47[i][j].f2, "g_47[i][j].f2", print_hash_value);
            transparent_crc(g_47[i][j].f3, "g_47[i][j].f3", print_hash_value);
            transparent_crc(g_47[i][j].f4, "g_47[i][j].f4", print_hash_value);
            transparent_crc(g_47[i][j].f5, "g_47[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(g_51.f0.f0, "g_51.f0.f0", print_hash_value);
    transparent_crc(g_51.f0.f1, "g_51.f0.f1", print_hash_value);
    transparent_crc(g_51.f0.f2, "g_51.f0.f2", print_hash_value);
    transparent_crc(g_51.f0.f3, "g_51.f0.f3", print_hash_value);
    transparent_crc(g_51.f0.f4, "g_51.f0.f4", print_hash_value);
    transparent_crc(g_51.f1.f0, "g_51.f1.f0", print_hash_value);
    transparent_crc(g_51.f1.f1, "g_51.f1.f1", print_hash_value);
    transparent_crc(g_51.f1.f2, "g_51.f1.f2", print_hash_value);
    transparent_crc(g_51.f1.f3, "g_51.f1.f3", print_hash_value);
    transparent_crc(g_51.f1.f4, "g_51.f1.f4", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);

    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_267[i][j], "g_267[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_294[i], "g_294[i]", print_hash_value);

    }
    transparent_crc(g_299, "g_299", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
