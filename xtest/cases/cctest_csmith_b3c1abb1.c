// SPDX-License-Identifier: MIT
// cctest_csmith_b3c1abb1.c --- cctest case csmith_b3c1abb1 (csmith seed 3015814065)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x41bc3190 */

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

// Options:   -s 3015814065 -o /tmp/csmith_gen_8n29cvqd/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const uint64_t  f1;
   int32_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   uint64_t  f1;
   const int32_t  f2;
   struct S0  f3;
   uint8_t  f4;
   const int32_t  f5;
};

union U2 {
   uint16_t  f0;
   const uint64_t  f1;
   uint8_t  f2;
};


static int16_t g_15 = 9L;
static int16_t g_17 = 0x0BECL;
static int64_t g_18 = 0x6660B25631CD1AC8LL;
static const union U2 g_23 = {6UL};
static struct S0 g_33 = {-1L,8UL,-9L,0x458D81C9L};
static uint16_t g_39 = 0xAD8EL;
static int16_t g_84 = 3L;
static int16_t g_101 = (-1L);
static struct S1 g_109 = {0x259FC79BL,18446744073709551614UL,0x826EC486L,{0xE95B6698L,18446744073709551610UL,8L,0xCE4FA1A2L},0UL,-1L};
static uint32_t g_143 = 0UL;
static int32_t g_148 = 7L;
static int32_t g_149 = (-1L);
static uint64_t g_150 = 8UL;
static int8_t g_157 = 1L;
static uint32_t g_159 = 0xAA8C2C0CL;
static uint8_t g_169 = 0x49L;
static int64_t g_183 = (-9L);
static int32_t g_210 = 0xE7B76762L;
static int16_t g_211 = 1L;
static int16_t g_212[4] = {1L,1L,1L,1L};
static uint32_t g_213[3][5][2] = {{{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L}},{{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L}},{{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L},{0xFF8E19E8L,0xFF8E19E8L}}};
static int32_t g_247 = 0x80A1DA36L;
static int8_t g_248[2][1][1] = {{{0L}},{{0L}}};
static uint8_t g_250 = 253UL;
static uint32_t g_255 = 0xDE0F6341L;



static uint32_t  func_1(void);
static const int8_t  func_21(const union U2  p_22);
static int8_t  func_24(struct S0  p_25, uint32_t  p_26, struct S0  p_27, const int32_t  p_28);
static union U2  func_29(uint32_t  p_30, struct S0  p_31);




static uint32_t  func_1(void)
{ 
    int32_t l_2 = 0xC3A0B8EEL;
    struct S1 l_14 = {0UL,1UL,0xE3E45BBBL,{0xEBF889E0L,8UL,-1L,0L},0UL,0L};
    uint8_t l_16 = 0xACL;
    int32_t l_178 = 0xB40B985CL;
    int32_t l_179[3][1];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_179[i][j] = 0x72F705CCL;
    }
lbl_216:
    g_18 = (l_2 , (safe_mod_func_uint64_t_u_u((g_17 = ((((~(safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((18446744073709551615UL == (l_14 , (l_2 = (l_14.f3.f3 , 0x96559653E3F36A5BLL)))) && g_15) < g_15), 3)), g_15)), g_15)), l_14.f1))) & l_16) > l_14.f0) | g_15)), l_14.f0)));
    l_178 |= (l_14.f3.f0 = ((safe_sub_func_int8_t_s_s((func_21(g_23) & (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(l_2, ((((safe_rshift_func_int8_t_s_u(0x9AL, 4)) && g_149) > g_33.f2) ^ (-5L)))), g_109.f3.f1))), g_109.f4)) <= l_14.f5));
    for (g_84 = 0; (g_84 <= 0); g_84 += 1)
    { 
        uint8_t l_180 = 255UL;
        int32_t l_184 = 0L;
        int32_t l_209 = 1L;
        union U2 l_225 = {65535UL};
        l_180 = l_16;
        g_33.f0 = (safe_add_func_uint64_t_u_u((l_184 ^= ((g_183 = (g_109 , (18446744073709551612UL <= g_23.f2))) , (((g_150 | 1L) || 0x956B61A9CCBCD5FBLL) && g_15))), g_33.f1));
        for (g_109.f4 = 0; (g_109.f4 <= 0); g_109.f4 += 1)
        { 
            int8_t l_193 = 0x08L;
            int32_t l_203 = (-7L);
            int64_t l_204 = 0L;
            int i, j;
            l_178 ^= ((((g_109 , 0x8FL) || (safe_mul_func_uint8_t_u_u(l_179[(g_84 + 1)][g_84], l_179[(g_109.f4 + 2)][g_84]))) , 0xA5L) && l_179[g_84][g_84]);
            if (l_184)
            { 
                const uint32_t l_194 = 1UL;
                g_109.f3.f0 = ((safe_add_func_uint64_t_u_u(g_109.f4, ((safe_mul_func_uint16_t_u_u(65535UL, (((safe_lshift_func_int8_t_s_s(l_179[(g_84 + 1)][g_84], l_179[(g_109.f4 + 2)][g_84])) == l_193) ^ 2UL))) , 0x8ACBC52F4FCE7EEALL))) <= l_194);
                if (l_14.f4)
                    continue;
                g_109.f3.f0 ^= (((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(0xE3L, (l_203 = 0x2FL))) > (g_15 = l_204)), (safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s(g_23.f2, l_14.f0)), 0L)))), 0x9FCF80EE9E06837CLL)), g_109.f2)) > g_109.f2) != 0x722B247686F9EF08LL);
            }
            else
            { 
                --g_213[2][2][1];
                if (l_14.f0)
                    goto lbl_216;
            }
        }
        for (g_169 = 0; (g_169 <= 0); g_169 += 1)
        { 
            int i, j;
            if ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_179[(g_84 + 2)][g_169], ((safe_add_func_int8_t_s_s((l_225 , (255UL | 0x1BL)), g_109.f3.f1)) == 0x2106L))), g_148)) , g_33.f0), g_109.f4)))
            { 
                if (l_179[(g_84 + 2)][g_169])
                    break;
            }
            else
            { 
                uint16_t l_226 = 65535UL;
                l_226--;
            }
            for (g_39 = 14; (g_39 > 60); g_39++)
            { 
                int32_t l_249 = 6L;
                g_33.f0 = ((((g_212[3] <= (safe_rshift_func_uint16_t_u_s(l_179[(g_84 + 2)][g_169], (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((((g_109.f4 = (0x763AL | ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(g_15, 3)), g_109.f3.f0)) && 0xDE58L) < g_148) || l_179[(g_84 + 2)][g_169]))) == g_143) != g_15), 4294967289UL)), l_225.f2))))) >= g_109.f3.f3) , 1L) , l_179[(g_84 + 2)][g_169]);
                g_109.f3.f0 = (((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_33.f2, (g_109.f4--))), g_211)) , (++g_250)) && (safe_rshift_func_uint8_t_u_s((g_250 &= g_255), l_249)));
            }
        }
    }
    return g_148;
}



static const int8_t  func_21(const union U2  p_22)
{ 
    int16_t l_32 = 0L;
    struct S0 l_40 = {0xCA6F77A3L,0UL,1L,0xCC39B987L};
    int64_t l_57[2];
    uint32_t l_64 = 0x89CFDD8CL;
    int32_t l_142 = (-1L);
    int32_t l_147 = 0x709DEB9BL;
    int i;
    for (i = 0; i < 2; i++)
        l_57[i] = 0x074591F806EB7662LL;
    if ((func_24((((func_29(l_32, g_33) , ((-9L) > 0UL)) ^ 255UL) , l_40), l_40.f1, l_40, g_33.f1) ^ g_23.f2))
    { 
        uint32_t l_66 = 18446744073709551615UL;
        uint32_t l_67 = 0xE2FFC3EBL;
lbl_70:
        for (g_17 = 0; (g_17 <= 1); g_17 += 1)
        { 
            l_67 = (safe_mul_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((0x769EL && ((safe_lshift_func_int16_t_s_u((l_64 == ((l_40.f0 = (safe_unary_minus_func_uint8_t_u(0xD5L))) != (((l_66 , 1L) || g_33.f1) ^ l_66))), 7)) | l_32)), 0xDF72L)) & g_33.f0) | 1UL), l_66));
        }
        for (l_40.f2 = 0; (l_40.f2 != (-5)); l_40.f2 = safe_sub_func_int8_t_s_s(l_40.f2, 5))
        { 
            int64_t l_82 = 0x9BFF94FF55BD23A2LL;
            int32_t l_85 = 5L;
            struct S0 l_88 = {-10L,0x12068ECBDE39F743LL,0xCF52F597L,0xB88EAD42L};
            if (l_40.f2)
                goto lbl_70;
            for (g_39 = 0; (g_39 == 20); ++g_39)
            { 
                uint8_t l_83 = 0xDAL;
                g_33.f0 = (((l_85 = ((safe_mod_func_int8_t_s_s((g_84 = (((safe_mod_func_int8_t_s_s(p_22.f2, (safe_rshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s(((~p_22.f0) , 0x6CF9L), (p_22 , l_82))) , p_22.f0) , l_40.f1), p_22.f2)))) == l_83) & 0x3907L)), 0x7CL)) ^ 0UL)) < p_22.f2) , p_22.f2);
            }
            for (g_17 = 0; (g_17 >= 6); g_17 = safe_add_func_int16_t_s_s(g_17, 5))
            { 
                int32_t l_89 = 0x7EE71932L;
                g_33.f0 = (g_33.f0 && (((l_88 , (g_23.f2 && ((l_89 == p_22.f0) >= 0x47384F12L))) , (-7L)) == l_88.f1));
                l_88.f0 = ((((g_23.f0 || (p_22.f0 < g_23.f0)) , (safe_sub_func_int8_t_s_s(l_89, l_89))) | 255UL) || g_33.f3);
                if (g_23.f0)
                    break;
            }
        }
        l_40.f0 = (-6L);
    }
    else
    { 
        int8_t l_92 = (-7L);
        int32_t l_110[1];
        int32_t l_131 = (-1L);
        int32_t l_146 = (-9L);
        int i;
        for (i = 0; i < 1; i++)
            l_110[i] = 0x874C7D6EL;
        if ((l_92 && ((safe_lshift_func_int16_t_s_u(p_22.f0, 14)) , (safe_mod_func_uint8_t_u_u(g_23.f2, (safe_div_func_uint32_t_u_u((l_64 & g_84), g_23.f2)))))))
        { 
            uint32_t l_107 = 0UL;
            int32_t l_111 = 1L;
            for (g_33.f0 = (-26); (g_33.f0 >= (-13)); ++g_33.f0)
            { 
                uint8_t l_108 = 0xDBL;
                g_101 = g_17;
                l_110[0] = (safe_sub_func_int16_t_s_s((((l_108 = (safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((p_22.f2 > (g_15 ^ 0x762AA916L)) >= l_32))) , l_107), g_23.f0))) , g_109) , g_33.f0), p_22.f2));
                return g_15;
            }
            l_111 = 0L;
            for (g_109.f3.f3 = 25; (g_109.f3.f3 > (-17)); g_109.f3.f3 = safe_sub_func_int8_t_s_s(g_109.f3.f3, 9))
            { 
                uint16_t l_114 = 0xAF77L;
                int32_t l_130[5] = {0x486E1DBDL,0x486E1DBDL,0x486E1DBDL,0x486E1DBDL,0x486E1DBDL};
                int i;
                --l_114;
                l_131 |= ((g_109.f2 || (l_130[0] &= ((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint8_t_u(((+1UL) <= (safe_lshift_func_uint16_t_u_s(((g_109.f1 = (((((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((l_110[0] = p_22.f2))) , (safe_lshift_func_uint8_t_u_u(((l_110[0] = (safe_lshift_func_uint8_t_u_s(((g_109.f0 , (-1L)) ^ p_22.f2), p_22.f0))) | g_23.f0), 5))), p_22.f0)) == l_111) != 0x4D0A3929L) & l_114) | g_39)) & l_114), 8))))) && g_33.f3), 0)) && p_22.f2))) , p_22.f2);
                if (l_40.f1)
                    continue;
            }
        }
        else
        { 
            const int16_t l_141 = (-1L);
            for (l_92 = 0; (l_92 >= 0); l_92 -= 1)
            { 
                int i;
                l_110[l_92] = (safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(l_110[l_92], (safe_mod_func_uint16_t_u_u((p_22.f2 > (safe_unary_minus_func_int64_t_s((((p_22.f2 > p_22.f2) || p_22.f0) ^ l_141)))), p_22.f0)))), 0x678AA32F28BEF3D6LL)), g_33.f2));
                ++g_143;
                if (l_110[0])
                    continue;
            }
        }
        --g_150;
        for (l_92 = 0; (l_92 > (-26)); l_92 = safe_sub_func_uint64_t_u_u(l_92, 2))
        { 
            int8_t l_155 = 0xE2L;
            int32_t l_156 = 0x83122935L;
            int32_t l_158 = (-1L);
            g_109.f3.f0 = l_32;
            g_159++;
            for (g_109.f0 = 0; (g_109.f0 <= 1); g_109.f0 += 1)
            { 
                int32_t l_167 = 0xAE2B492AL;
                const struct S1 l_168 = {0x06970B5AL,0x59394A59180C45E7LL,4L,{-1L,0x606E3EF0F463998ELL,0x181CDD84L,0xC9872C40L},249UL,0xAE4149FEL};
                int i;
                g_33.f0 |= l_57[g_109.f0];
                l_156 |= (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(l_57[g_109.f0], (+0L))) == (l_167 = p_22.f0)), (l_168 , 1UL)));
                ++g_169;
            }
        }
    }
    return g_39;
}



static int8_t  func_24(struct S0  p_25, uint32_t  p_26, struct S0  p_27, const int32_t  p_28)
{ 
    uint32_t l_41 = 0x75F713ECL;
    int32_t l_44 = 0xF7E48FFCL;
    int32_t l_45 = 0xDD7081DCL;
    uint64_t l_46 = 0UL;
    l_41--;
    ++l_46;
    g_33.f0 = ((safe_div_func_int64_t_s_s(((((safe_div_func_int16_t_s_s(p_25.f3, (g_39 = p_27.f3))) <= (p_27.f1 && ((l_46 != l_45) && 0L))) | 0L) || 0xA66BL), (-1L))) ^ 0x53L);
    return l_44;
}



static union U2  func_29(uint32_t  p_30, struct S0  p_31)
{ 
    int32_t l_36 = 0xCDCEC458L;
    g_39 = (safe_sub_func_uint8_t_u_u(((p_31.f1 == p_31.f3) | ((l_36 | ((safe_mul_func_uint8_t_u_u(252UL, (-4L))) || p_31.f2)) & p_31.f3)), (-1L)));
    return g_23;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_23.f2, "g_23.f2", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3.f0, "g_109.f3.f0", print_hash_value);
    transparent_crc(g_109.f3.f1, "g_109.f3.f1", print_hash_value);
    transparent_crc(g_109.f3.f2, "g_109.f3.f2", print_hash_value);
    transparent_crc(g_109.f3.f3, "g_109.f3.f3", print_hash_value);
    transparent_crc(g_109.f4, "g_109.f4", print_hash_value);
    transparent_crc(g_109.f5, "g_109.f5", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_212[i], "g_212[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_213[i][j][k], "g_213[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_247, "g_247", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_248[i][j][k], "g_248[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
