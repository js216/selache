// SPDX-License-Identifier: MIT
// cctest_csmith_b18e0fc7.c --- cctest case csmith_b18e0fc7 (csmith seed 2978877383)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x382b20bd */
/* @exp_ticks 0x387e */

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

// Options:   -s 2978877383 -o /tmp/csmith_gen_1pjbrvfv/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   uint32_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   struct S0  f1;
};

union U2 {
   const int8_t  f0;
   const struct S0  f1;
   uint8_t  f2;
};

union U3 {
   int64_t  f0;
   const int32_t  f1;
   int64_t  f2;
};


static int32_t g_7 = 0x434678DCL;
static int32_t g_8 = 0x10AA43B2L;
static int16_t g_37 = (-9L);
static union U2 g_38 = {0xA4L};
static uint32_t g_42 = 1UL;
static int8_t g_45 = (-1L);
static uint16_t g_46 = 0x8784L;
static union U1 g_53 = {1UL};
static int64_t g_67 = 0xE61A645CCAEA4CC7LL;
static uint8_t g_69 = 0x66L;
static uint32_t g_76 = 0xCFF85525L;
static uint32_t g_81 = 1UL;
static const struct S0 g_88 = {4294967291UL,0x23EDE1F3L,0x6E3A6DCE4D36899ALL,18446744073709551615UL,-8L};
static uint64_t g_119 = 1UL;
static uint32_t g_121 = 1UL;
static int8_t g_124 = 0L;
static uint32_t g_125 = 0x048F23FEL;
static uint8_t g_136 = 4UL;
static union U3 g_141 = {0L};
static uint32_t g_144 = 4294967292UL;
static int32_t g_167 = 1L;
static uint32_t g_168 = 4294967292UL;
static int32_t g_181[3] = {0x31347A97L,0x31347A97L,0x31347A97L};
static int8_t g_182 = 0x4BL;
static uint64_t g_185 = 3UL;
static int32_t g_191 = 0x7A35014FL;
static int16_t g_211 = (-1L);
static uint8_t g_212 = 0UL;



static uint64_t  func_1(void);
static uint8_t  func_4(int64_t  p_5, uint32_t  p_6);
static union U2  func_33(const uint64_t  p_34, union U3  p_35);
static int16_t  func_50(union U1  p_51, uint64_t  p_52);




static uint64_t  func_1(void)
{ 
    uint32_t l_79 = 0x89AA37C3L;
    const int32_t l_80 = 0x3897E00CL;
    int32_t l_82 = 9L;
    int32_t l_93 = 0xF3D1A1A3L;
    int8_t l_108[1][5][5] = {{{0xC4L,0xC4L,0xC4L,0xC4L,0xC4L},{0xBEL,0xBEL,0xBEL,0xBEL,0xBEL},{0xC4L,0xC4L,0xC4L,0xC4L,0xC4L},{0xBEL,0xBEL,0xBEL,0xBEL,0xBEL},{0xC4L,0xC4L,0xC4L,0xC4L,0xC4L}}};
    int64_t l_117[5];
    uint64_t l_175 = 1UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_117[i] = 0x28EFC35FD513F79CLL;
lbl_188:
    g_81 &= (safe_sub_func_int8_t_s_s((func_4((g_7 = (-7L)), g_8) , ((safe_lshift_func_int16_t_s_u((l_79 |= g_69), l_80)) != 4294967288UL)), 0L));
    if (((l_82 = 0UL) < (g_8 < (!(safe_mul_func_int8_t_s_s(((l_93 = ((safe_mod_func_uint8_t_u_u((g_88 , ((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(9UL, g_69)), g_67)) > l_79)), g_76)) , g_42)) && 0x2EEAL), g_42))))))
    { 
        int32_t l_109 = 0xBFA59640L;
        int32_t l_140[5];
        uint16_t l_183 = 2UL;
        int i;
        for (i = 0; i < 5; i++)
            l_140[i] = 0xF3773156L;
        if ((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((g_53.f0 ^= (safe_sub_func_int32_t_s_s((0x8A1895B1L && (safe_mul_func_int8_t_s_s((g_45 = (safe_lshift_func_uint8_t_u_s((g_69 |= ((safe_add_func_uint16_t_u_u(0xAB31L, 0xBB49L)) <= (l_82 = (g_88.f1 || l_82)))), g_88.f4))), 0L))), l_108[0][2][0]))), 0x5E00L)) , g_7), l_93)) & 0x481B4007L) && g_81), l_109)))
        { 
            const int8_t l_118 = 0x61L;
            int32_t l_139 = 0x70AA81E9L;
            if ((l_109 = 0x735B57BDL))
            { 
                int32_t l_116 = 0x9D0C5B63L;
                int32_t l_120[4][1][5] = {{{(-1L),(-1L),0x85DA9DFCL,(-1L),(-1L)}},{{0x0CFAF67AL,0x877144E5L,0x0CFAF67AL,0x0CFAF67AL,0x877144E5L}},{{(-1L),(-6L),(-6L),(-1L),(-6L)}},{{0x877144E5L,0x877144E5L,0xCA50A4B5L,0x0CFAF67AL,0x0CFAF67AL}}};
                int i, j, k;
                g_119 |= (((0x570527DF68D3435DLL & ((0xC818L & ((((((safe_add_func_int8_t_s_s((g_45 ^= (safe_mod_func_uint8_t_u_u(((((0x2F63B645L | (((g_53.f0 |= (safe_mod_func_uint8_t_u_u((l_79 ^ g_7), l_109))) | 0xE08AL) == 0x33L)) || g_42) < g_8) != g_38.f0), 1UL))), l_82)) || l_116) | l_109) || l_109) == 0x9D43L) < l_117[2])) , l_109)) <= l_118) | l_116);
                g_121--;
            }
            else
            { 
lbl_128:
                ++g_125;
            }
            if (l_109)
                goto lbl_128;
            for (g_38.f2 = (-25); (g_38.f2 == 29); g_38.f2++)
            { 
                int16_t l_131 = 0x3477L;
                l_140[1] = (((l_131 || (l_109 = (l_131 >= ((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((l_139 = (g_136 <= (safe_sub_func_uint16_t_u_u(0xC100L, g_69)))) | 5L), l_118)) ^ 0x98B08B8FL), 0x07AFL)) < 9L)))) , g_45) , g_38.f0);
                g_144 = (((g_38.f2 , g_141) , ((g_8 || ((safe_mul_func_int16_t_s_s(l_117[2], l_140[3])) , g_141.f2)) & l_93)) , 1L);
                return l_140[0];
            }
        }
        else
        { 
            int16_t l_162 = 0L;
            for (g_45 = (-20); (g_45 == 16); g_45 = safe_add_func_int64_t_s_s(g_45, 8))
            { 
                l_93 = l_93;
            }
            g_167 = (((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((g_38.f2 = (--g_136)), (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_119, (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(0xCBE333C2L, (~l_162))), 6)) , ((safe_add_func_uint64_t_u_u((((l_82 ^= (l_93 = (l_140[1] = ((safe_lshift_func_uint16_t_u_u(g_88.f3, 11)) > 0x3A16EC97L)))) & 0x7597L) , g_42), l_79)) || l_108[0][4][4])) , l_82))), (-1L))))), 0xDCL)) , g_121) | 4294967292UL);
            g_168++;
        }
        if ((g_37 && 0x9F91L))
        { 
            const uint8_t l_180 = 250UL;
            g_182 ^= (g_181[2] = (safe_add_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u(0xDEL, 3)) != ((l_175 | (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((l_140[1] = (g_124 = ((l_93 &= g_45) , ((l_109 = (0x7F314E3BL && l_79)) ^ 0L)))) < g_141.f1), g_125)), 6)) && g_46) >= 254UL)) <= g_136)) , l_82) & l_180), g_125)));
        }
        else
        { 
            int16_t l_184 = 1L;
            l_183 |= (((g_141.f1 <= (g_53.f1.f0 = (65535UL < l_140[1]))) , g_141) , l_108[0][2][0]);
            --g_185;
        }
        if (g_168)
            goto lbl_188;
    }
    else
    { 
        uint32_t l_189 = 0x9BC1C916L;
        uint32_t l_190[1][2];
        int32_t l_197 = 0x49CAA41AL;
        struct S0 l_198[1] = {{4294967295UL,0xD3DFD4C6L,0x6471088D65414BF2LL,2UL,-1L}};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_190[i][j] = 1UL;
        }
        l_189 = g_181[2];
        if (l_190[0][1])
        { 
            int32_t l_192 = 0L;
            uint32_t l_196[4];
            int i;
            for (i = 0; i < 4; i++)
                l_196[i] = 0x7B3754A3L;
            for (g_119 = 0; (g_119 <= 0); g_119 += 1)
            { 
                struct S0 l_193 = {4294967295UL,0xEBA01D3DL,1L,0x42DA0BF8L,-1L};
                g_191 ^= g_181[0];
                l_197 = ((g_88 , l_192) <= (((((l_193 , (safe_mod_func_int64_t_s_s(g_121, g_88.f3))) & g_185) <= l_196[3]) >= l_193.f3) & g_185));
            }
        }
        else
        { 
            int8_t l_210 = 0x8DL;
            g_53.f1 = l_198[0];
            l_82 ^= (((safe_div_func_int64_t_s_s((-8L), (l_197 = g_181[2]))) , (safe_sub_func_int32_t_s_s((l_197 = (((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((0x1E26L ^ (+l_190[0][0])), 0xB8A3C79E369C8CF9LL)), g_81)), g_53.f1.f0)) , 0x6D58L) <= g_88.f2)), 4294967295UL))) , l_210);
        }
    }
    g_212--;
    return l_117[2];
}



static uint8_t  func_4(int64_t  p_5, uint32_t  p_6)
{ 
    uint8_t l_20 = 0x39L;
    int32_t l_23 = (-6L);
    int32_t l_44 = 0x9945C66BL;
    union U1 l_70[1][3] = {{{0xA59AL},{0xA59AL},{0xA59AL}}};
    int i, j;
lbl_72:
    for (g_7 = 0; (g_7 == 9); g_7++)
    { 
        uint32_t l_25 = 0x1639956AL;
        uint32_t l_26[1][4][4] = {{{0x7A30B913L,0x7A30B913L,0xE428464DL,0x7A30B913L},{0x7A30B913L,4294967287UL,4294967287UL,0x7A30B913L},{4294967287UL,0x7A30B913L,4294967287UL,4294967287UL},{0x7A30B913L,0x7A30B913L,0xE428464DL,0x7A30B913L}}};
        int32_t l_30 = 1L;
        int32_t l_31[2][3];
        int32_t l_32[1];
        union U3 l_36 = {-2L};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_31[i][j] = 7L;
        }
        for (i = 0; i < 1; i++)
            l_32[i] = 0x2739425AL;
        if (((p_5 , (safe_lshift_func_uint16_t_u_s(p_6, 2))) != (safe_unary_minus_func_int32_t_s((safe_mod_func_int64_t_s_s(((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(g_8, 2)), (l_20 , g_7))) | 0xBF0CF8651162F630LL), g_8))))))
        { 
            struct S0 l_24 = {0x582BA8D7L,0UL,-5L,0UL,1L};
            int32_t l_29 = 0x597618DEL;
            l_32[0] ^= ((safe_mod_func_int16_t_s_s((((l_23 = 0x335CL) > (l_31[1][2] ^= (l_30 = (l_24 , (l_25 , (l_29 = (((l_26[0][3][0]++) , (p_5 = g_8)) | g_7))))))) >= g_8), g_7)) , 0x21C760FCL);
        }
        else
        { 
            if (g_8)
            { 
                uint64_t l_39 = 18446744073709551615UL;
                l_39 = (func_33(l_23, l_36) , p_5);
            }
            else
            { 
                g_42 = (safe_rshift_func_int16_t_s_u(p_5, 6));
            }
        }
        for (p_5 = 0; (p_5 >= 0); p_5 -= 1)
        { 
            int32_t l_43 = 0xBFEDE048L;
            int32_t l_49 = 0x0E9EE194L;
            int i;
            g_46--;
            l_30 |= (g_69 = ((l_49 &= (g_46 ^= l_32[p_5])) | func_50(g_53, ((l_31[1][2] ^ ((safe_rshift_func_int16_t_s_s(p_6, p_6)) , 1L)) , p_5))));
        }
    }
    for (g_46 = 0; (g_46 <= 0); g_46 += 1)
    { 
        uint16_t l_71 = 0x2284L;
        l_71 &= 7L;
        for (l_23 = 0; (l_23 <= 0); l_23 += 1)
        { 
            int32_t l_75 = 0L;
            if (g_46)
                goto lbl_72;
            g_76 |= (l_75 = (safe_div_func_int16_t_s_s(7L, ((p_6 && g_46) ^ l_75))));
            return p_6;
        }
    }
    return p_6;
}



static union U2  func_33(const uint64_t  p_34, union U3  p_35)
{ 
    g_37 = p_35.f1;
    return g_38;
}



static int16_t  func_50(union U1  p_51, uint64_t  p_52)
{ 
    uint32_t l_56[3];
    int32_t l_68[2];
    int i;
    for (i = 0; i < 3; i++)
        l_56[i] = 0UL;
    for (i = 0; i < 2; i++)
        l_68[i] = (-1L);
    g_67 = ((p_51.f0 <= (g_53.f1.f2 = l_56[0])) > (((safe_mul_func_uint8_t_u_u(0UL, (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(g_8, 1)), 0xABB57DDDL)), g_7)) || l_56[0]) | g_38.f2), 0x27CDL)))) ^ 0x669673C8243C00EELL) != 0x5C408CDCL));
    l_68[1] = p_51.f0;
    return g_38.f0;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_88.f3, "g_88.f3", print_hash_value);
    transparent_crc(g_88.f4, "g_88.f4", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_141.f1, "g_141.f1", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_181[i], "g_181[i]", print_hash_value);

    }
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
