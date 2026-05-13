// SPDX-License-Identifier: MIT
// cctest_csmith_e4e991e9.c --- cctest case csmith_e4e991e9 (csmith seed 3840512489)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa6e2b150 */

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

// Options:   -s 3840512489 -o /tmp/csmith_gen_pxx2q0b_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint16_t  f1;
   int16_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

struct S1 {
   uint16_t  f0;
};

union U2 {
   uint32_t  f0;
   uint16_t  f1;
};

union U3 {
   const uint64_t  f0;
   uint32_t  f1;
   const uint16_t  f2;
   uint16_t  f3;
};


static int64_t g_3[5] = {0x9A57B5BF2D3F5047LL,0x9A57B5BF2D3F5047LL,0x9A57B5BF2D3F5047LL,0x9A57B5BF2D3F5047LL,0x9A57B5BF2D3F5047LL};
static int32_t g_25 = 0x09CA4F06L;
static int32_t g_28 = 0x2FD89D68L;
static int64_t g_29 = 1L;
static int8_t g_30[1] = {0x4FL};
static int16_t g_32 = 0x1295L;
static int8_t g_33[3] = {0x4FL,0x4FL,0x4FL};
static uint32_t g_34 = 0x946CB4F5L;
static uint8_t g_43 = 5UL;
static int16_t g_53[2][2][2] = {{{0xA74AL,1L},{0xA74AL,1L}},{{0xA74AL,1L},{0xA74AL,1L}}};
static int16_t g_60 = 1L;
static uint32_t g_61 = 4294967295UL;
static uint32_t g_74 = 0x9A040D4FL;
static uint8_t g_77 = 1UL;
static struct S1 g_83 = {65526UL};
static uint32_t g_89 = 0x7F729B20L;
static struct S1 g_92 = {0xC904L};
static int32_t g_104[2] = {0x5F5C31AFL,0x5F5C31AFL};
static int64_t g_106 = 8L;
static union U2 g_107 = {0x742C0441L};
static int64_t g_137 = 0xF6D39C238541C8EDLL;
static uint16_t g_139 = 65534UL;
static int64_t g_172 = 0xDFFA464F14847B1ALL;
static int32_t g_175 = 0x810B6CD3L;
static int8_t g_226 = (-1L);
static uint16_t g_246 = 0xA979L;
static int8_t g_261 = 0x8CL;
static uint32_t g_277 = 4294967288UL;
static int8_t g_281 = 5L;
static int64_t g_282 = (-1L);
static int16_t g_285 = 3L;
static int32_t g_297 = 0x010D8202L;
static uint16_t g_299 = 65532UL;
static uint8_t g_304[4] = {0x22L,0x22L,0x22L,0x22L};
static uint16_t g_320 = 0UL;
static uint8_t g_332 = 255UL;
static uint8_t g_333[2] = {0xC7L,0xC7L};
static const struct S0 g_338[4][3] = {{{-7L,0x06E5L,0x0684L,0xBB8BD90CL},{-7L,0x06E5L,0x0684L,0xBB8BD90CL},{-7L,0x06E5L,0x0684L,0xBB8BD90CL}},{{-7L,0x06E5L,0x0684L,0xBB8BD90CL},{-7L,0x06E5L,0x0684L,0xBB8BD90CL},{-7L,0x06E5L,0x0684L,0xBB8BD90CL}},{{-7L,0x06E5L,0x0684L,0xBB8BD90CL},{-7L,0x06E5L,0x0684L,0xBB8BD90CL},{-7L,0x06E5L,0x0684L,0xBB8BD90CL}},{{-7L,0x06E5L,0x0684L,0xBB8BD90CL},{-7L,0x06E5L,0x0684L,0xBB8BD90CL},{-7L,0x06E5L,0x0684L,0xBB8BD90CL}}};
static int32_t g_353 = (-10L);
static uint8_t g_354 = 249UL;
static int32_t g_357 = 0x87760D45L;
static uint16_t g_358 = 1UL;



static int8_t  func_1(void);
static union U2  func_4(union U3  p_5, int64_t  p_6, uint32_t  p_7, int32_t  p_8);
static union U3  func_9(uint32_t  p_10);
static const uint64_t  func_11(union U2  p_12, uint32_t  p_13);




static int8_t  func_1(void)
{ 
    uint32_t l_2[4][2][1] = {{{0x6C74AA0DL},{0x6C74AA0DL}},{{0UL},{0x6C74AA0DL}},{{0x6C74AA0DL},{0UL}},{{0x6C74AA0DL},{0x6C74AA0DL}}};
    int i, j, k;
    if (((-1L) | l_2[2][1][0]))
    { 
        return g_3[0];
    }
    else
    { 
        int16_t l_147 = (-7L);
        uint32_t l_330 = 18446744073709551615UL;
        int64_t l_351[2];
        int32_t l_352[4] = {0xA8D5824CL,0xA8D5824CL,0xA8D5824CL,0xA8D5824CL};
        int i;
        for (i = 0; i < 2; i++)
            l_351[i] = 0x33B764B8550A6A30LL;
        if ((func_4(func_9(l_2[2][1][0]), ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_147 >= (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(0x75L, l_147)), 0xB33B0C632DA6A282LL))), 3)), l_2[2][1][0])) | 0L), g_3[0], g_33[2]) , l_2[2][1][0]))
        { 
            struct S1 l_323 = {8UL};
            for (g_60 = 1; (g_60 >= 0); g_60 -= 1)
            { 
                int i;
                g_320--;
                if (g_104[g_60])
                    continue;
                if (g_32)
                    continue;
            }
            l_323 = g_83;
        }
        else
        { 
            const uint64_t l_331 = 0x094EE7D0B9ABF42DLL;
            g_333[1] = (safe_sub_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_330, ((1L & ((((l_2[3][1][0] , g_304[2]) || l_331) || l_331) != (-1L))) <= g_277))), 65535UL)) && g_297) <= g_332) != g_299), 0x16A7L));
            for (g_172 = 18; (g_172 == (-12)); g_172--)
            { 
                uint8_t l_350 = 0x6CL;
                if (l_330)
                    break;
                l_352[2] = ((safe_mul_func_int8_t_s_s(0xBBL, (g_338[3][1] , (!((((((safe_div_func_int32_t_s_s((((g_139 >= (safe_rshift_func_uint8_t_u_u((g_333[1] |= ((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(g_33[2], g_43)), l_2[0][0][0])), g_172)) && l_350)), g_33[1]))) != 18446744073709551615UL) <= g_332), g_83.f0)) != g_32) <= g_92.f0) , g_28) < l_351[0]) >= l_350))))) == l_330);
                g_354++;
            }
            if ((g_43 || g_261))
            { 
                g_358++;
            }
            else
            { 
                g_357 = g_353;
            }
        }
    }
    return g_32;
}



static union U2  func_4(union U3  p_5, int64_t  p_6, uint32_t  p_7, int32_t  p_8)
{ 
    uint8_t l_167 = 0x95L;
    int32_t l_174 = 1L;
    struct S0 l_222 = {0xAB0F4296L,65535UL,1L,18446744073709551609UL};
    uint32_t l_275 = 0x2B736085L;
    struct S1 l_314[3][2] = {{{65535UL},{65535UL}},{{0UL},{65535UL}},{{65535UL},{0UL}}};
    int i, j;
lbl_152:
    for (g_83.f0 = 0; (g_83.f0 <= 4); g_83.f0 += 1)
    { 
        for (g_106 = 1; (g_106 >= 0); g_106 -= 1)
        { 
            int i;
            if (g_3[(g_106 + 1)])
                break;
            if (g_106)
                goto lbl_152;
        }
        return g_107;
    }
    for (g_107.f1 = (-13); (g_107.f1 > 15); g_107.f1++)
    { 
        int64_t l_173 = 0x6C188A167226A680LL;
        struct S1 l_176 = {65535UL};
        int32_t l_228 = (-10L);
        int32_t l_260 = 1L;
        int32_t l_263 = 0xDAB6F810L;
        g_175 &= (((++g_92.f0) & (safe_sub_func_int16_t_s_s(g_137, (safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s((l_167 > (l_174 = (((1L == (safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((g_172 && l_167), l_167)) ^ p_7), 0x22L))) , 255UL) <= l_173))), 8)) < 0L) >= g_29) , p_5.f3), 1L)), g_104[0])), p_6))))) , l_174);
        p_8 = 9L;
        if ((p_8 = p_5.f2))
        { 
            uint32_t l_186 = 18446744073709551613UL;
            int64_t l_224 = 0xBDA24A5CBDD7E790LL;
            int64_t l_225 = 0L;
            g_92 = l_176;
            if (((g_32 < g_175) & (safe_mul_func_int16_t_s_s(l_167, (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((~(l_186 ^= (safe_sub_func_uint64_t_u_u((g_61 > g_3[4]), l_167)))) && g_30[0]) , 0x5AL), g_34)), p_6))))))
            { 
                uint32_t l_223 = 1UL;
                int32_t l_227 = 0x9B74624CL;
                p_8 = g_53[1][0][1];
                l_228 = ((((((l_227 = (((((safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(0xD3E55B4935913664LL, ((safe_div_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((g_137 == (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((((safe_mul_func_int8_t_s_s(l_176.f0, (safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u(((((safe_unary_minus_func_int32_t_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0xB8L, l_173)), 4UL)))) <= 1L) , g_25) && p_6), (-3L))) != p_6) > l_176.f0) < 0x2DABL) < g_30[0]), l_173)), 6UL)))) , l_222) , p_5.f2) ^ g_92.f0), l_186)), 0UL)) < l_223) != l_224) | p_5.f0), 7)), p_8)), p_8))) | l_224) > g_30[0]) <= l_225), g_226)), 0xAAL)) > p_7), p_5.f2)) | g_25) || g_53[0][0][0]) != l_224), p_5.f1)) , l_176.f0))), 4UL)) ^ 0xCC7DL) , 0x24A8259F37106151LL) , l_222.f1) > g_104[1])) < l_223) | 0xF4F35B7FL) & 1UL) | g_30[0]) != 0x5DEC445B8245084BLL);
            }
            else
            { 
                p_8 = (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((g_107 , ((safe_add_func_uint8_t_u_u((l_222.f2 > 255UL), g_106)) ^ 0L)) >= l_186), g_89)), 0UL));
                if (g_107.f1)
                    break;
            }
        }
        else
        { 
            uint64_t l_240 = 0UL;
            int32_t l_247 = (-6L);
            if (p_5.f2)
            { 
                int32_t l_243 = 0x3BD2C5A2L;
                l_243 ^= (safe_add_func_uint8_t_u_u(p_5.f2, ((g_61 , (~((safe_lshift_func_uint8_t_u_s(l_240, (safe_sub_func_uint8_t_u_u(g_30[0], g_3[0])))) , 0xFDDC11C7L))) == g_77)));
                l_247 = (g_246 ^= (safe_rshift_func_uint8_t_u_s((l_243 < (0xB26E6833L < ((-5L) <= g_104[0]))), g_106)));
                p_8 = p_6;
            }
            else
            { 
                int32_t l_262 = (-1L);
                l_222.f0 = ((safe_mul_func_int16_t_s_s((l_263 |= (l_262 = (((g_261 = (((safe_sub_func_int32_t_s_s((l_260 = (safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(0x73232EF9L, (((l_228 = ((safe_rshift_func_uint16_t_u_u((l_222.f2 != (safe_rshift_func_uint16_t_u_s((l_247 = ((g_34 = ((-1L) > 0x4A06L)) , l_222.f2)), 2))), g_89)) ^ p_8)) || g_107.f1) < 1UL))) <= g_3[0]), p_5.f2))), 0xDC2EDBB1L)) != p_5.f2) != 0x2BL)) , g_172) && p_8))), l_222.f0)) ^ g_28);
                return g_107;
            }
        }
    }
    for (p_7 = 14; (p_7 <= 51); p_7++)
    { 
        int64_t l_280 = 0xCFDC2693B0AE3407LL;
        int32_t l_283[3];
        uint32_t l_284 = 4294967294UL;
        union U2 l_287 = {0x020C0331L};
        int64_t l_319 = 1L;
        int i;
        for (i = 0; i < 3; i++)
            l_283[i] = 0x9EC0A325L;
        for (g_83.f0 = (-29); (g_83.f0 == 20); g_83.f0++)
        { 
            int32_t l_276[3][3][4] = {{{0L,0L,0x879045E9L,(-3L)},{0L,0xD5396BCCL,0x8556C135L,0L},{0x11109A14L,(-3L),0x11109A14L,0x8556C135L}},{{0xC6D96F22L,(-3L),0x879045E9L,0L},{(-3L),0xD5396BCCL,0xD5396BCCL,(-3L)},{0x11109A14L,0L,0xD5396BCCL,0x8556C135L}},{{(-3L),0xC6D96F22L,0x879045E9L,0xC6D96F22L},{0xC6D96F22L,0xD5396BCCL,0x11109A14L,0xC6D96F22L},{0x11109A14L,0xC6D96F22L,0x8556C135L,0x8556C135L}}};
            int32_t l_286[1][1][4];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_286[i][j][k] = (-1L);
                }
            }
            g_277 = (safe_lshift_func_uint16_t_u_s((4294967289UL != ((g_53[0][1][1] = (g_29 < (safe_div_func_int8_t_s_s((~(g_107 , l_275)), l_276[1][2][0])))) & 0UL)), 3));
            l_286[0][0][0] = ((safe_mul_func_uint8_t_u_u((0x0D3425632B76836BLL ^ (g_34 >= l_280)), ((l_284 = ((((l_283[0] = (g_282 |= (g_281 = 0x3E64B6092985AA2BLL))) ^ l_280) > 0xBEL) , l_275)) < g_285))) >= g_83.f0);
            return l_287;
        }
        for (p_6 = 0; (p_6 <= 1); p_6 += 1)
        { 
            int32_t l_295 = 1L;
            int32_t l_298 = (-1L);
        }
    }
    return g_107;
}



static union U3  func_9(uint32_t  p_10)
{ 
    union U2 l_14 = {18446744073709551608UL};
    int32_t l_15 = 1L;
    const uint32_t l_16 = 0x73D5943EL;
    uint16_t l_17 = 0xA37DL;
    int32_t l_31[5][3][1] = {{{(-6L)},{9L},{(-6L)}},{{9L},{(-6L)},{9L}},{{(-6L)},{9L},{(-6L)}},{{9L},{(-6L)},{9L}},{{(-6L)},{9L},{(-6L)}}};
    int16_t l_46 = (-4L);
    int64_t l_85 = (-1L);
    union U3 l_142 = {0xF45203A911143083LL};
    int i, j, k;
    if ((l_17 = (func_11((l_14 = l_14), l_15) | (((p_10 < g_3[0]) >= l_16) && 2L))))
    { 
        uint16_t l_41[1][4][5] = {{{0x98BAL,0x98BAL,0UL,0x98BAL,0x98BAL},{9UL,0x98BAL,9UL,9UL,0x98BAL},{0x98BAL,9UL,9UL,0x98BAL,9UL},{0x98BAL,0x98BAL,0UL,0x98BAL,0x98BAL}}};
        int32_t l_88 = 0xBFBCC831L;
        int i, j, k;
        for (l_17 = (-5); (l_17 <= 12); l_17 = safe_add_func_uint32_t_u_u(l_17, 2))
        { 
            int64_t l_24 = (-10L);
            int32_t l_26[1][1][3];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_26[i][j][k] = 0x372585FAL;
                }
            }
            for (l_15 = 21; (l_15 > 2); l_15 = safe_sub_func_int8_t_s_s(l_15, 4))
            { 
                int16_t l_22 = 0x43E5L;
                int32_t l_23 = 0x1521FAFBL;
                int32_t l_27[4][5][1] = {{{0xFE2499E6L},{0xA81D68C2L},{8L},{8L},{0xA81D68C2L}},{{0xFE2499E6L},{(-10L)},{0xFE2499E6L},{0xA81D68C2L},{8L}},{{8L},{0xA81D68C2L},{0xFE2499E6L},{(-10L)},{0xFE2499E6L}},{{0xA81D68C2L},{8L},{8L},{0xA81D68C2L},{0xFE2499E6L}}};
                int8_t l_42 = 0x0BL;
                int i, j, k;
                g_34++;
                g_43 &= (safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s((((p_10 , g_32) != g_28) , l_41[0][3][2]), l_42)), l_41[0][2][1]));
                if (g_30[0])
                    break;
            }
            g_53[1][1][0] = (safe_add_func_int16_t_s_s(l_46, (safe_mul_func_uint16_t_u_u((((l_41[0][3][2] != ((0xC18CC907L | (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((((0x646D9140931BC1F9LL != g_34) ^ (-1L)) && p_10) != 0x575E0AD5834D56B8LL), l_26[0][0][2])), 2))) || g_33[1])) < p_10) < (-7L)), g_25))));
        }
        for (g_32 = 0; (g_32 != 27); g_32 = safe_add_func_uint8_t_u_u(g_32, 3))
        { 
            int16_t l_56 = 0xBB84L;
            int32_t l_57 = 0xB0D72699L;
            int32_t l_58 = 0x05F634C5L;
            int32_t l_59 = (-1L);
            g_61++;
        }
        if ((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((safe_div_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((l_31[3][1][0] = ((g_74 ^= (+(safe_sub_func_uint32_t_u_u(p_10, g_53[1][1][1])))) , l_41[0][2][1])), (safe_div_func_uint32_t_u_u(g_32, g_53[1][0][0])))) == l_17), l_41[0][3][2])))), l_15)))
        { 
            uint8_t l_84 = 249UL;
            if ((65535UL != 0xE340L))
            { 
                g_77--;
            }
            else
            { 
                uint64_t l_80 = 18446744073709551615UL;
                l_31[3][0][0] = l_80;
            }
            if ((l_85 = (((p_10 > ((safe_rshift_func_uint16_t_u_u((g_83 , (l_15 = (g_83.f0 |= ((4294967295UL != ((p_10 != l_14.f1) | p_10)) <= p_10)))), p_10)) || l_84)) == 1L) && 0xD9B3EEACL)))
            { 
                uint32_t l_86 = 0xB8FA7600L;
                l_86 = (-1L);
            }
            else
            { 
                int32_t l_87[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_87[i] = (-6L);
                ++g_89;
                g_92 = (g_83 = g_83);
            }
        }
        else
        { 
            int32_t l_105[4][1][3];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_105[i][j][k] = 0L;
                }
            }
            g_106 ^= (l_88 = ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((+(safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(g_28, (g_53[1][1][0] = g_32))), (g_104[1] = ((l_31[1][1][0] == (safe_rshift_func_int8_t_s_s(g_43, 0))) , 0x825FA2FCAAFA3536LL))))), p_10)) < p_10), l_41[0][3][2])) | l_105[1][0][0]));
        }
    }
    else
    { 
        int8_t l_114 = 0x9CL;
        int32_t l_115 = 4L;
        l_115 = (g_107 , (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_16 >= 0L), (safe_lshift_func_int16_t_s_s((((g_107.f0 , g_53[1][1][0]) , (-1L)) == p_10), 15)))), l_114)));
        for (l_14.f1 = 0; (l_14.f1 <= 16); l_14.f1 = safe_add_func_int8_t_s_s(l_14.f1, 4))
        { 
            uint64_t l_128 = 9UL;
            int32_t l_135 = (-1L);
            int32_t l_138[2][5] = {{(-1L),0xF030F790L,0x3AF3587EL,0xF030F790L,(-1L)},{(-1L),0xF030F790L,0x3AF3587EL,0xF030F790L,(-1L)}};
            int i, j;
            l_15 = ((g_29 = (l_31[3][0][0] ^= ((safe_lshift_func_int16_t_s_u((g_53[1][1][0] | ((g_25 = (safe_add_func_uint32_t_u_u(g_104[1], (safe_rshift_func_int8_t_s_s(0x3AL, 3))))) , (safe_div_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((g_92.f0 && g_30[0]), 7UL)) && p_10), g_25)))), 9)) <= l_128))) != l_114);
            for (g_34 = 23; (g_34 <= 55); g_34 = safe_add_func_uint32_t_u_u(g_34, 1))
            { 
                int32_t l_136[2][5][1] = {{{0x77E331CAL},{(-10L)},{0x77E331CAL},{(-10L)},{0x77E331CAL}},{{(-10L)},{0x77E331CAL},{(-10L)},{0x77E331CAL},{(-10L)}}};
                int i, j, k;
                l_135 |= (safe_add_func_int16_t_s_s(((g_30[0] = ((0xCBL && g_53[1][1][0]) , (safe_mul_func_uint16_t_u_u((0x79CEL > ((((((l_128 > l_16) & p_10) , p_10) < p_10) , l_128) != 0x54766949L)), l_115)))) || 0x35L), g_34));
                g_139++;
            }
        }
    }
    return l_142;
}



static const uint64_t  func_11(union U2  p_12, uint32_t  p_13)
{ 
    return p_12.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_30[i], "g_30[i]", print_hash_value);

    }
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);

    }
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_53[i][j][k], "g_53[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_104[i], "g_104[i]", print_hash_value);

    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_304[i], "g_304[i]", print_hash_value);

    }
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_333[i], "g_333[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_338[i][j].f0, "g_338[i][j].f0", print_hash_value);
            transparent_crc(g_338[i][j].f1, "g_338[i][j].f1", print_hash_value);
            transparent_crc(g_338[i][j].f2, "g_338[i][j].f2", print_hash_value);
            transparent_crc(g_338[i][j].f3, "g_338[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
