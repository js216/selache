// SPDX-License-Identifier: MIT
// cctest_csmith_fbdea741.c --- cctest case csmith_fbdea741 (csmith seed 4225673025)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2e83c62d */

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

// Options:   -s 4225673025 -o /tmp/csmith_gen_5be25ztd/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int32_t  f1;
   int8_t  f2;
   uint32_t  f3;
   uint8_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

union U1 {
   const struct S0  f0;
   uint16_t  f1;
   int64_t  f2;
};


static int32_t g_2 = 0x37B1891FL;
static int64_t g_16 = 0L;
static uint64_t g_55 = 0xB7B20295D0C5FD78LL;
static struct S0 g_87 = {0UL,5L,0x1CL,0x8C9C9652L,0xB0L,6UL};
static uint8_t g_116 = 250UL;
static struct S0 g_133 = {0UL,0x0C049AA4L,0xC1L,0UL,0x27L,18446744073709551608UL};
static uint8_t g_147[3][2] = {{255UL,255UL},{255UL,255UL},{255UL,255UL}};
static int16_t g_162[2] = {(-1L),(-1L)};
static int16_t g_197 = (-6L);
static uint32_t g_199 = 0x77956EE4L;
static int16_t g_271[2] = {1L,1L};
static int16_t g_275 = 0L;
static uint32_t g_276 = 0xB29AFF89L;
static int32_t g_296 = (-10L);
static uint32_t g_298 = 0xC72776EEL;
static int32_t g_342 = 9L;
static uint16_t g_344[4][3][4] = {{{0xD3EFL,1UL,0xC0B1L,65534UL},{0x1850L,0UL,0xC0B1L,0x92DFL},{0xD3EFL,0x8CD4L,0x8CD4L,0xD3EFL}},{{1UL,0x1850L,65527UL,65526UL},{65527UL,65526UL,65534UL,0UL},{0UL,65535UL,1UL,0UL}},{{8UL,65526UL,0UL,65526UL},{0x3D4BL,0x1850L,0x4A90L,0xD3EFL},{65534UL,0x8CD4L,8UL,0x92DFL}},{{65526UL,65535UL,8UL,0UL},{65526UL,0x8CD4L,65527UL,65527UL},{0UL,0UL,0UL,1UL}}};



static uint64_t  func_1(void);
static int32_t  func_7(union U1  p_8, int8_t  p_9, int64_t  p_10, int16_t  p_11, int32_t  p_12);
static struct S0  func_18(int64_t  p_19, int64_t  p_20, struct S0  p_21, union U1  p_22, union U1  p_23);
static int64_t  func_24(union U1  p_25, const uint16_t  p_26, union U1  p_27, uint16_t  p_28, uint8_t  p_29);




static uint64_t  func_1(void)
{ 
    const int64_t l_17[3][4] = {{0x10E6B6CD33356370LL,0x10E6B6CD33356370LL,1L,0x10E6B6CD33356370LL},{0x10E6B6CD33356370LL,(-4L),(-4L),0x10E6B6CD33356370LL},{(-4L),0x10E6B6CD33356370LL,(-4L),(-4L)}};
    int32_t l_264 = (-6L);
    int32_t l_269 = (-9L);
    int32_t l_273 = 0x487BCEC8L;
    int32_t l_305 = 0x65B9B7F2L;
    int64_t l_307 = 0L;
    uint8_t l_315[4][2][3];
    const uint16_t l_321 = 0x9C37L;
    struct S0 l_355[4] = {{65535UL,5L,1L,6UL,0x5AL,0UL},{65535UL,5L,1L,6UL,0x5AL,0UL},{65535UL,5L,1L,6UL,0x5AL,0UL},{65535UL,5L,1L,6UL,0x5AL,0UL}};
    struct S0 l_356[1][2] = {{{65532UL,-8L,0x19L,0UL,1UL,0xF0D8ED3679061F16LL},{65532UL,-8L,0x19L,0UL,1UL,0xF0D8ED3679061F16LL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
                l_315[i][j][k] = 0x83L;
        }
    }
    for (g_2 = (-18); (g_2 == (-8)); g_2++)
    { 
        union U1 l_13[2] = {{{0x3717L,0xE9FB1C03L,0x09L,0UL,0x78L,0x328A062B000CD9D7LL}},{{0x3717L,0xE9FB1C03L,0x09L,0UL,0x78L,0x328A062B000CD9D7LL}}};
        int32_t l_270 = (-1L);
        int32_t l_272 = 1L;
        int32_t l_297[3][5] = {{0L,0xC005C314L,0L,0L,0xC005C314L},{0xC005C314L,0L,0L,0xC005C314L,0L},{0xC005C314L,0xC005C314L,0x7469F826L,0xC005C314L,0xC005C314L}};
        union U1 l_308[3] = {{{0x9263L,0L,-9L,0x50AA39C7L,0UL,18446744073709551615UL}},{{0x9263L,0L,-9L,0x50AA39C7L,0UL,18446744073709551615UL}},{{0x9263L,0L,-9L,0x50AA39C7L,0UL,18446744073709551615UL}}};
        struct S0 l_322[2] = {{0xA000L,0x44F0659CL,-1L,0xCDA0F30DL,0x63L,0x8669378A79BD23F3LL},{0xA000L,0x44F0659CL,-1L,0xCDA0F30DL,0x63L,0x8669378A79BD23F3LL}};
        int i, j;
        l_264 ^= ((safe_div_func_int32_t_s_s(func_7(l_13[1], (safe_add_func_uint64_t_u_u(((g_16 &= g_2) || l_17[0][3]), ((((18446744073709551615UL && l_17[0][2]) , l_13[1].f0.f1) ^ g_2) && 0x5EL))), l_17[2][1], l_17[1][2], l_17[0][3]), l_17[0][3])) , 3L);
        for (l_264 = 20; (l_264 < 12); l_264 = safe_sub_func_int64_t_s_s(l_264, 4))
        { 
            int64_t l_279 = (-9L);
            int32_t l_293[3][1][5];
            int16_t l_295[2];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_293[i][j][k] = (-1L);
                }
            }
            for (i = 0; i < 2; i++)
                l_295[i] = 0x6CF7L;
            for (g_133.f0 = 0; (g_133.f0 != 14); g_133.f0 = safe_add_func_int32_t_s_s(g_133.f0, 7))
            { 
                int8_t l_274 = (-9L);
                g_276--;
                return l_279;
            }
            if (((l_279 | (((l_264 && ((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((g_162[0] && ((g_55 <= 253UL) < l_17[0][3])) , l_264) > l_270), g_147[1][0])), g_162[1])) || g_2)) <= l_13[1].f0.f4) < l_279)) || l_269))
            { 
                uint16_t l_292 = 0UL;
                int32_t l_294[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_294[i][j] = 0xC6A2E218L;
                }
                g_133.f1 = ((safe_div_func_int8_t_s_s((((g_133.f5 &= l_279) > (safe_div_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((g_147[0][0] || (g_275 = l_292)), l_13[1].f0.f4)) != g_271[1]) && g_133.f2), g_55))) < g_87.f0), l_292)) , l_17[0][0]);
                g_298++;
            }
            else
            { 
                uint32_t l_306 = 0xD82B2063L;
                g_87.f1 = (safe_sub_func_uint64_t_u_u((g_133.f3 <= (l_273 |= ((((((((((g_298 = (((g_87.f2 = (4UL ^ (((safe_add_func_uint32_t_u_u((0x16L || 0x38L), 0xB217F77EL)) , g_87.f0) , l_305))) , g_87.f5) , g_271[1])) ^ g_16) <= l_306) | 2UL) , g_147[0][0]) , l_293[1][0][1]) == g_55) && g_147[0][0]) || l_305) & (-6L)))), g_133.f2));
                return l_307;
            }
            if ((l_264 == (((l_308[1] , g_87.f2) > ((safe_div_func_uint32_t_u_u((l_297[0][4] , 0xD0E7BC49L), g_55)) > g_133.f4)) && g_133.f0)))
            { 
                uint32_t l_320[5] = {0xC82502EBL,0xC82502EBL,0xC82502EBL,0xC82502EBL,0xC82502EBL};
                int i;
                g_87.f1 = l_279;
                g_133.f1 |= (safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(l_279, l_315[1][1][1])) || (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_87.f2, l_320[2])), l_321))), 2L));
                g_133 = (l_322[1] = (g_87 = g_133));
            }
            else
            { 
                uint16_t l_341 = 5UL;
                int32_t l_343 = 0x9D3C9604L;
                l_305 = (0xE8L != (g_133.f4 = (safe_sub_func_uint8_t_u_u((l_273 = (((safe_mod_func_int16_t_s_s(((l_293[1][0][0] = ((safe_lshift_func_uint8_t_u_s((1UL | (g_133.f2 &= (safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((g_16 , (((((safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((g_133.f1 = l_341) <= 0x4332C901L), 4)), 4294967295UL)), g_133.f5)) , g_199), g_116)) || g_87.f3) < g_147[0][0]) | g_2) <= 9L)) & (-5L)), l_293[0][0][1])), g_199)))), g_87.f3)) , l_341)) || g_147[2][0]), 0x421EL)) > g_275) , l_17[0][0])), g_16))));
                ++g_344[1][2][1];
            }
        }
    }
    if (((g_344[1][2][0] = (g_296 == (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_315[1][1][1], (((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(g_344[1][2][1], l_315[1][1][1])) != g_275), 0xF975L)) ^ l_321) != l_307))), 7UL)))) != g_133.f4))
    { 
        int32_t l_359 = 0xBEA9577AL;
        g_87 = (l_356[0][1] = l_355[1]);
        l_359 = ((safe_lshift_func_int8_t_s_s(g_271[1], 0)) , g_2);
    }
    else
    { 
        uint32_t l_367 = 0UL;
        if ((safe_rshift_func_uint8_t_u_s(((l_273 | 0xDB7CL) ^ (((safe_add_func_int32_t_s_s(5L, (~(safe_sub_func_int16_t_s_s((g_271[0] = l_269), 65535UL))))) < l_367) | 4294967295UL)), g_276)))
        { 
            return g_298;
        }
        else
        { 
            return g_162[1];
        }
    }
    return g_87.f2;
}



static int32_t  func_7(union U1  p_8, int8_t  p_9, int64_t  p_10, int16_t  p_11, int32_t  p_12)
{ 
    int32_t l_34 = 0x04E5477AL;
    union U1 l_35 = {{1UL,0L,0xF8L,7UL,0x84L,18446744073709551615UL}};
    union U1 l_118 = {{6UL,1L,1L,0x64424CFBL,249UL,18446744073709551614UL}};
    struct S0 l_125 = {0xAE84L,0x8BE40C26L,0xF7L,0x1603581DL,0x1FL,0xB503822D717118E0LL};
    int16_t l_169[5][4] = {{(-1L),2L,(-1L),2L},{(-1L),2L,(-1L),2L},{(-1L),2L,(-1L),2L},{(-1L),2L,(-1L),2L},{(-1L),2L,(-1L),2L}};
    uint8_t l_216[2][4] = {{0x68L,0x3FL,0x68L,0x3FL},{0x68L,0x3FL,0x68L,0x3FL}};
    int i, j;
    l_125 = func_18(g_16, func_24(p_8, g_16, ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((g_2 , l_34), 0x1C73B017290B1C5ALL)) <= l_34), 0)) , l_35), p_8.f0.f5, l_34), p_8.f0, l_35, l_118);
    for (g_87.f4 = 4; (g_87.f4 < 42); g_87.f4 = safe_add_func_int64_t_s_s(g_87.f4, 8))
    { 
        int64_t l_128[2][5][3];
        int32_t l_131 = 0xD54BCFCBL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 3; k++)
                    l_128[i][j][k] = 0x0AE64C0ED61D3EE1LL;
            }
        }
        l_125.f1 = 0L;
        for (l_118.f2 = 1; (l_118.f2 >= 0); l_118.f2 -= 1)
        { 
            int16_t l_132 = 1L;
        }
    }
    if (((g_87.f2 ^= (l_118.f1 , (l_125.f1 = ((((((safe_add_func_uint32_t_u_u(g_133.f4, l_35.f1)) ^ ((safe_lshift_func_int16_t_s_s((((g_2 <= 9UL) , g_87.f1) == l_34), g_55)) > 8L)) != 5UL) == p_8.f2) <= 0x7289F41D23F08B23LL) >= p_10)))) == p_8.f0.f0))
    { 
        const uint64_t l_163 = 1UL;
        g_87.f1 = (!(safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((g_147[0][0]++) == ((safe_add_func_int32_t_s_s((((g_16 <= (safe_lshift_func_int16_t_s_u((!p_8.f0.f3), (p_8.f0 , (safe_rshift_func_uint16_t_u_s((((--g_87.f0) && (+((g_162[1] = (safe_sub_func_int8_t_s_s((p_8.f0.f1 | 0x78E06A8BL), 0L))) <= 0xA5E185815793E417LL))) > l_163), 10)))))) ^ 0xD0BA1924A4583ED9LL) , g_16), l_35.f0.f4)) < 0x2204A484L)), 9L)), p_11)));
    }
    else
    { 
        const uint64_t l_180 = 0x188DFEB7701912ACLL;
        const union U1 l_204 = {{65534UL,0L,2L,18446744073709551614UL,255UL,18446744073709551615UL}};
        uint32_t l_226 = 0x7069160EL;
        int32_t l_227 = 0x636EEB13L;
        int32_t l_228 = 0xEB641AC3L;
        int32_t l_256[1];
        int i;
        for (i = 0; i < 1; i++)
            l_256[i] = 0xE32BAB41L;
        for (g_133.f0 = 0; (g_133.f0 == 29); g_133.f0 = safe_add_func_int64_t_s_s(g_133.f0, 1))
        { 
            int32_t l_168 = 0x84CD6FD9L;
            uint64_t l_181 = 0x707BADF9921E08C4LL;
            int32_t l_182 = 0L;
            const int32_t l_187 = 0x4DEADDEDL;
            g_133.f1 &= (g_87.f4 & ((safe_lshift_func_int8_t_s_s((g_133.f2 = (p_9 = (g_147[0][0] , 0L))), 4)) ^ (((l_168 , l_169[4][0]) ^ 65526UL) , p_8.f1)));
        }
        l_125.f1 &= g_162[1];
        if ((safe_sub_func_int64_t_s_s(p_9, ((l_125.f1 = (p_8.f0.f3 & 18446744073709551608UL)) != (g_162[0] , g_147[0][0])))))
        { 
            uint32_t l_207 = 4294967291UL;
            int32_t l_235[2][3];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_235[i][j] = (-1L);
            }
            if ((((l_204 , (safe_mod_func_uint64_t_u_u(l_207, (safe_mod_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((l_125.f1 = (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(1L, 0)) <= l_180) == l_207), g_16))), l_204.f0.f5)) , l_216[1][0]) ^ (-9L)), l_125.f2))))) != 0x24FFL) || l_204.f0.f2))
            { 
                int32_t l_224 = 0x5394E2B8L;
                uint32_t l_225 = 0x30B8F8A4L;
                l_228 = (((g_133.f1 , (l_227 ^= ((((safe_div_func_int32_t_s_s(p_8.f0.f0, (safe_lshift_func_int16_t_s_u((+((safe_lshift_func_int8_t_s_s(((l_226 = (p_8.f0.f4 != ((p_9 >= l_224) | l_225))) < g_133.f0), g_147[0][0])) && 0x66L)), 3)))) & 0xCF38L) ^ 0x0FCB306CL) != p_11))) || 1L) != p_8.f0.f5);
            }
            else
            { 
                g_133.f1 = g_87.f4;
                p_12 = ((l_125.f1 = ((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((g_55 = (l_235[0][1] = (safe_rshift_func_uint8_t_u_u((g_133.f5 >= g_87.f1), 3)))) && (g_16 = (g_199 >= (safe_mul_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u(3UL, 0xA5L)) || g_133.f4) , 0xA92DL) == p_8.f0.f4), 0L))))), g_147[0][0])), p_8.f0.f4)) , g_55)) , 0x3657E3DCL);
            }
        }
        else
        { 
            uint8_t l_257 = 0xADL;
            const int32_t l_262 = (-4L);
            int32_t l_263 = 0xEE24FA20L;
            l_263 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((l_227 &= ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((65535UL > (safe_mul_func_int16_t_s_s((p_11 = (safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(l_256[0], 0x2788L)), ((++l_257) >= ((safe_mul_func_int16_t_s_s(((((g_55 && p_9) , l_226) >= g_147[2][0]) != (-3L)), l_262)) ^ g_87.f2)))) & l_204.f0.f1), 8))), g_133.f0))) == g_162[1]), g_147[1][0])), l_262)) || l_35.f1)), 5)), p_10));
        }
    }
    return p_11;
}



static struct S0  func_18(int64_t  p_19, int64_t  p_20, struct S0  p_21, union U1  p_22, union U1  p_23)
{ 
    uint32_t l_124 = 6UL;
    for (p_22.f1 = 0; (p_22.f1 != 18); ++p_22.f1)
    { 
        struct S0 l_121 = {0xDE0DL,-4L,0L,1UL,0x62L,0x7916956DD9FC9C22LL};
        g_87 = l_121;
        l_121.f1 = ((safe_lshift_func_int16_t_s_s((g_116 == ((l_124 >= (l_124 || (p_21.f2 || 0x1594L))) >= p_23.f0.f2)), 15)) ^ 0xD4A0L);
    }
    return g_87;
}



static int64_t  func_24(union U1  p_25, const uint16_t  p_26, union U1  p_27, uint16_t  p_28, uint8_t  p_29)
{ 
    int32_t l_36 = 1L;
    int32_t l_49 = 0L;
    int32_t l_54 = 0L;
    if (l_36)
    { 
        uint32_t l_37[5];
        int i;
        for (i = 0; i < 5; i++)
            l_37[i] = 4294967295UL;
        l_37[4] |= p_25.f2;
        if ((((l_49 &= (!(((p_27.f0.f2 > g_16) && l_37[4]) ^ (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((p_25 , g_2), l_37[4])), g_2)), l_37[4])), l_37[4])), p_29))))) | l_37[4]) && 0UL))
        { 
            int32_t l_50 = 0L;
            int32_t l_51 = 1L;
            l_51 &= (l_50 = 1L);
        }
        else
        { 
            for (l_49 = 0; (l_49 < 1); ++l_49)
            { 
                int16_t l_72[2][2][1];
                int32_t l_73 = 0xF9695FF7L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_72[i][j][k] = (-2L);
                    }
                }
                g_55--;
                l_73 |= (safe_mod_func_uint32_t_u_u(g_16, ((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((l_54 |= (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_37[4], p_27.f0.f1)) | (l_72[0][1][0] || 0x255FL)), p_25.f0.f4)), l_37[0]))) >= l_49) > 0x3FE74C19FD8DD93FLL), 0x0AL)), g_16)) | g_55), 5)) && p_27.f0.f0)));
            }
        }
    }
    else
    { 
        uint32_t l_74[5] = {0x12EC3887L,0x12EC3887L,0x12EC3887L,0x12EC3887L,0x12EC3887L};
        int i;
        ++l_74[1];
    }
    for (l_36 = 0; (l_36 > (-25)); l_36 = safe_sub_func_int64_t_s_s(l_36, 2))
    { 
        int32_t l_79 = 0xB98B5DB2L;
        int16_t l_86[4][2] = {{0x1A6FL,0x1A6FL},{0L,0x1A6FL},{0x1A6FL,0L},{0x1A6FL,0x1A6FL}};
        const uint64_t l_117 = 0xC56116C195823B32LL;
        int i, j;
    }
    return p_27.f0.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_87.f2, "g_87.f2", print_hash_value);
    transparent_crc(g_87.f3, "g_87.f3", print_hash_value);
    transparent_crc(g_87.f4, "g_87.f4", print_hash_value);
    transparent_crc(g_87.f5, "g_87.f5", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1, "g_133.f1", print_hash_value);
    transparent_crc(g_133.f2, "g_133.f2", print_hash_value);
    transparent_crc(g_133.f3, "g_133.f3", print_hash_value);
    transparent_crc(g_133.f4, "g_133.f4", print_hash_value);
    transparent_crc(g_133.f5, "g_133.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_147[i][j], "g_147[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_162[i], "g_162[i]", print_hash_value);

    }
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_271[i], "g_271[i]", print_hash_value);

    }
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_344[i][j][k], "g_344[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
