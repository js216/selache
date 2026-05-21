// SPDX-License-Identifier: MIT
// cctest_csmith_68af757b.c --- cctest case csmith_68af757b (csmith seed 1756329339)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4191d91d */

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

// Options:   -s 1756329339 -o /tmp/csmith_gen_y_2aw9u8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   const uint8_t  f1;
   int32_t  f2;
   const uint32_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U1 {
   const int16_t  f0;
   uint32_t  f1;
};


static int32_t g_2 = 0x97A888ADL;
static uint32_t g_5 = 0x5A5EFA20L;
static int8_t g_63 = 0xEDL;
static int32_t g_86 = (-9L);
static int32_t g_87[2][2] = {{1L,1L},{1L,1L}};
static uint16_t g_88 = 0x3F4DL;
static uint8_t g_245 = 1UL;
static uint32_t g_282[3] = {0x1769429AL,0x1769429AL,0x1769429AL};
static int16_t g_284 = 7L;
static int32_t g_285 = (-8L);
static uint8_t g_286 = 1UL;



static int64_t  func_1(void);
static uint16_t  func_24(const int8_t  p_25);
static int8_t  func_26(int16_t  p_27, uint64_t  p_28, int8_t  p_29);
static const int64_t  func_30(int64_t  p_31, uint64_t  p_32, uint8_t  p_33);




static int64_t  func_1(void)
{ 
    int64_t l_226 = 0x6FCC0EDDC4DC97BALL;
    int8_t l_227 = 0x0EL;
    int32_t l_232 = (-5L);
    int8_t l_260 = 0x71L;
    int64_t l_289[2];
    int16_t l_293 = (-9L);
    int32_t l_295 = 2L;
    int32_t l_296 = 0L;
    int32_t l_299 = 0x9466FFC8L;
    int32_t l_301 = 0x911B730CL;
    int32_t l_307 = 0L;
    int32_t l_315 = 0xEFAC64C0L;
    int32_t l_316 = (-2L);
    int32_t l_317[4][2] = {{0xB4032FCFL,0xB4032FCFL},{0xB4032FCFL,0xB4032FCFL},{0xB4032FCFL,0xB4032FCFL},{0xB4032FCFL,0xB4032FCFL}};
    int8_t l_318 = 0x38L;
    uint32_t l_319 = 1UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_289[i] = 7L;
    for (g_2 = 0; (g_2 < (-16)); --g_2)
    { 
        int8_t l_8 = 0xF6L;
        uint8_t l_20 = 8UL;
        int32_t l_233 = 0x7A7B67DEL;
        int32_t l_234[4][3] = {{1L,0xEFA42DB3L,1L},{1L,1L,1L},{1L,0xEFA42DB3L,1L},{1L,1L,1L}};
        int i, j;
        g_5++;
        l_227 = (((l_8 ^ (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((~l_20) && ((!0x246CL) & (safe_add_func_uint16_t_u_u(func_24(func_26(g_2, g_2, l_8)), g_2)))), l_226)), g_2)), 9L)), 0xCD3C57D3L)), 5))) , l_226) || l_20);
        if (((((g_86 < ((l_8 >= (((safe_mod_func_uint32_t_u_u((g_5 = (safe_mul_func_uint16_t_u_u(g_86, 0L))), 0x51E4EA56L)) , l_226) == 0x04F4L)) || l_227)) == l_8) <= 0xC389L) != l_227))
        { 
            uint32_t l_235 = 0xEAC549D7L;
            l_232 = g_87[1][1];
            --l_235;
        }
        else
        { 
            uint32_t l_259 = 4UL;
            for (l_232 = 0; (l_232 == (-22)); l_232 = safe_sub_func_uint32_t_u_u(l_232, 8))
            { 
                int64_t l_261 = 0x818B2649211A307CLL;
                g_87[1][0] |= (+((g_245 &= (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_88 != (0x3C6EL >= 0xF1E1L)), l_232)), l_227))) , l_234[0][1]));
                g_86 |= (safe_sub_func_uint32_t_u_u(0x13267D71L, (0xEC173A89DF1001EELL <= ((safe_lshift_func_uint16_t_u_u((+(((g_87[0][1] , ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((l_261 = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((l_259 < l_260), g_88)), g_5))), 6)), 0xFE24285D8874FF5FLL)) ^ g_87[1][1])) , g_5) & l_234[3][0])), l_234[0][0])) <= g_5))));
            }
        }
    }
    for (g_86 = 1; (g_86 >= 0); g_86 -= 1)
    { 
        int8_t l_266 = 0x17L;
        int32_t l_267[3][2] = {{0xEBED4AC5L,0xEBED4AC5L},{0xEBED4AC5L,0xEBED4AC5L},{0xEBED4AC5L,0xEBED4AC5L}};
        uint32_t l_268 = 0x11E3A59EL;
        int16_t l_305 = 0x190DL;
        uint64_t l_308[3][1][4] = {{{0xC93218F0C7B7B65CLL,18446744073709551609UL,0xC93218F0C7B7B65CLL,18446744073709551609UL}},{{0xC93218F0C7B7B65CLL,18446744073709551609UL,0xC93218F0C7B7B65CLL,18446744073709551609UL}},{{0xC93218F0C7B7B65CLL,18446744073709551609UL,0xC93218F0C7B7B65CLL,18446744073709551609UL}}};
        int i, j, k;
        if ((safe_mul_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(g_245, (l_268 = (l_267[2][0] = (l_266 >= g_88))))) || 1UL) & 0xF0CEL), 0x0DL)))
        { 
            int64_t l_269 = 1L;
            g_2 = l_269;
        }
        else
        { 
            uint32_t l_283 = 1UL;
            int32_t l_288 = 0x031B584BL;
            int32_t l_292 = 0xEB0FD5B6L;
            int32_t l_300 = (-1L);
            int32_t l_302 = 1L;
            int32_t l_304 = (-4L);
            int32_t l_306[3][3] = {{9L,9L,9L},{0x5BBF7725L,0x5BBF7725L,0x5BBF7725L},{9L,9L,9L}};
            int i, j;
            for (g_88 = 0; (g_88 <= 1); g_88 += 1)
            { 
                int i, j;
                g_87[g_86][g_88] = g_87[g_86][g_88];
                g_2 ^= 0xD1160CFAL;
            }
            for (l_227 = 1; (l_227 >= 0); l_227 -= 1)
            { 
                int i, j;
                if (g_87[l_227][g_86])
                    break;
            }
            if (((safe_rshift_func_uint8_t_u_u(0UL, l_266)) & ((safe_rshift_func_int8_t_s_s(((g_286 = ((g_285 = (g_284 = (((safe_lshift_func_int8_t_s_s(((g_245 = (((safe_lshift_func_uint16_t_u_u((g_88 == (((((g_282[1] = (-6L)) , g_87[1][0]) ^ g_87[0][1]) | g_87[1][1]) < g_2)), g_63)) , g_245) < 0x8E38L)) == g_88), 5)) | l_283) , g_63))) ^ l_268)) < l_232), 6)) == 8L)))
            { 
                int32_t l_287 = 9L;
                int32_t l_290 = 0L;
                int32_t l_291 = 0xA5E5B53FL;
                int32_t l_294 = 1L;
                int32_t l_297 = 0xBC829ADCL;
                int32_t l_298 = 5L;
                int32_t l_303[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_303[i][j] = 0xEB42813DL;
                }
                ++l_308[1][0][0];
            }
            else
            { 
                uint32_t l_312 = 0xA95AFFB8L;
                g_87[1][1] ^= ((g_88 = (l_300 |= g_284)) || (g_284 |= (~g_5)));
                ++l_312;
            }
        }
        for (l_293 = 0; (l_293 <= 1); l_293 += 1)
        { 
            int i, j;
            g_87[l_293][l_293] ^= 0L;
            for (g_88 = 0; (g_88 <= 1); g_88 += 1)
            { 
                int i, j;
                return g_87[g_86][g_88];
            }
        }
    }
    l_319--;
    return l_299;
}



static uint16_t  func_24(const int8_t  p_25)
{ 
    int32_t l_182[5];
    const int32_t l_188 = 0x2757DA90L;
    int32_t l_191 = 0x502811D3L;
    int32_t l_192 = (-2L);
    int32_t l_193 = 0x54CC1AE1L;
    int32_t l_196 = 0xBCCD47DFL;
    int32_t l_202[1];
    int i;
    for (i = 0; i < 5; i++)
        l_182[i] = 1L;
    for (i = 0; i < 1; i++)
        l_202[i] = (-1L);
    if (g_88)
    { 
        uint32_t l_190 = 7UL;
        int32_t l_198 = 0xE16DA6D5L;
        int32_t l_200 = (-8L);
        int32_t l_201[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_201[i][j] = 0xB0A2725AL;
        }
        if (g_88)
        { 
            int32_t l_181 = 0x9CCBA0E5L;
            int32_t l_194 = (-7L);
            int32_t l_195 = (-4L);
            int32_t l_197 = (-7L);
            int32_t l_199[4][5][2] = {{{0x638DCB38L,0x15D7F043L},{0xCD7E4973L,0xF02DCEE3L},{0xA31CAC5CL,0x9105A86EL},{0x9105A86EL,0x9105A86EL},{0xA31CAC5CL,0xF02DCEE3L}},{{0xCD7E4973L,0x15D7F043L},{0x638DCB38L,0xA31CAC5CL},{0xDF7CF63EL,0x638DCB38L},{1L,0x2DFE0259L},{1L,0x638DCB38L}},{{0xDF7CF63EL,0xA31CAC5CL},{0x638DCB38L,0x15D7F043L},{0xCD7E4973L,0xF02DCEE3L},{0xA31CAC5CL,0x9105A86EL},{0x9105A86EL,0x9105A86EL}},{{0xA31CAC5CL,0xF02DCEE3L},{0xCD7E4973L,0x15D7F043L},{0x638DCB38L,0xA31CAC5CL},{0xDF7CF63EL,0x638DCB38L},{1L,0x2DFE0259L}}};
            uint16_t l_203[4][1][3] = {{{0x425DL,0x425DL,0x425DL}},{{0xD490L,0xD490L,0xD490L}},{{0x425DL,0x425DL,0x425DL}},{{0xD490L,0xD490L,0xD490L}}};
            int i, j, k;
            l_182[3] = l_181;
            for (l_181 = 0; (l_181 <= 1); l_181 += 1)
            { 
                uint16_t l_189 = 0x25C2L;
                l_190 = (~(safe_div_func_uint8_t_u_u(g_88, (safe_mul_func_uint8_t_u_u((l_188 == (((l_189 = ((-2L) == l_181)) || p_25) || g_2)), p_25)))));
            }
            l_203[1][0][0]++;
        }
        else
        { 
            int32_t l_206 = 0xEC708496L;
            l_206 = g_87[0][1];
        }
    }
    else
    { 
        uint32_t l_219 = 0xE4B57269L;
        uint32_t l_222 = 4294967291UL;
        int32_t l_225 = (-10L);
        for (g_88 = 0; (g_88 != 18); ++g_88)
        { 
            uint32_t l_220[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
            int16_t l_221 = 0L;
            int i;
            l_221 = ((g_88 & ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(p_25, (l_193 = ((((safe_mul_func_int16_t_s_s(1L, (((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0x0074L, l_219)), l_220[0])) , g_88) < l_196))) && 0xB313L) ^ g_5) == g_5)))) && p_25), l_202[0])) <= g_87[0][0])) , g_87[1][1]);
            l_202[0] |= p_25;
        }
        l_225 = (l_222 , (safe_mul_func_uint16_t_u_u((p_25 != (-1L)), ((p_25 , p_25) && g_63))));
    }
    return l_196;
}



static int8_t  func_26(int16_t  p_27, uint64_t  p_28, int8_t  p_29)
{ 
    int16_t l_40 = 0x51D7L;
    int32_t l_41 = (-1L);
    uint64_t l_50 = 18446744073709551615UL;
    uint32_t l_72 = 1UL;
    union U1 l_104 = {0L};
    int64_t l_117 = (-7L);
    uint16_t l_120 = 1UL;
    int32_t l_131[4][2][4] = {{{(-10L),1L,0xB2CF06DCL,0xB2CF06DCL},{(-8L),(-8L),0xB2CF06DCL,0x5DCBD5DFL}},{{(-10L),3L,0xB921A34FL,1L},{0x3F6C24A6L,0xB921A34FL,0x5DCBD5DFL,0xB921A34FL}},{{0x5DCBD5DFL,0xB921A34FL,0x3F6C24A6L,1L},{0xB921A34FL,3L,(-10L),0x5DCBD5DFL}},{{0xB2CF06DCL,(-8L),(-8L),0xB2CF06DCL},{0xB2CF06DCL,1L,(-10L),(-2L)}}};
    int32_t l_180 = 1L;
    int i, j, k;
    if ((func_30(p_28, (safe_lshift_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(l_40, 18446744073709551615UL)) | (((l_41 = l_40) , 0x4BC4L) <= 0L)), 1)), g_5) <= 0x928F0BD907C4E7CCLL))
    { 
        uint16_t l_56 = 65535UL;
        int32_t l_57 = 0x54F90BF5L;
        int32_t l_58 = 0L;
        uint8_t l_95[1];
        int32_t l_138 = 0L;
        int32_t l_139 = 0x5606FA12L;
        int32_t l_142 = (-4L);
        int32_t l_145 = 7L;
        int32_t l_146[5][2] = {{6L,0xCEFA7544L},{6L,6L},{0xCEFA7544L,6L},{6L,0xCEFA7544L},{6L,6L}};
        uint32_t l_147 = 0UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_95[i] = 1UL;
        if ((((g_2 < (safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u(((-1L) != p_28), 2)) < (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(p_29, l_41)), l_50))) == p_27) , g_5), 2))) == p_27) || 0x4D0043D4L))
        { 
            uint32_t l_55 = 0x86397847L;
            struct S0 l_61 = {0L,0x85L,-5L,0xDE5A1AE2L,1L};
            int32_t l_77 = 0L;
            l_41 = (((safe_div_func_int8_t_s_s((g_63 = ((safe_sub_func_int32_t_s_s(((l_55 ^ (l_58 = (l_57 = l_56))) == (safe_sub_func_uint16_t_u_u(((l_61 , (((+(((-1L) || l_40) || 18446744073709551608UL)) , l_56) == 9L)) <= 0x743FL), 0xB4D0L))), 3L)) <= 4294967290UL)), 246UL)) != p_29) | p_27);
            for (g_5 = 9; (g_5 <= 26); ++g_5)
            { 
                int64_t l_71 = 0L;
                l_77 = (l_61.f4 |= (((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_63, (((safe_unary_minus_func_uint8_t_u((l_71 < (l_72 & ((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_27, p_29)), p_27)) != l_71))))) <= (-7L)) | l_58))), 0x6DEAL)) <= p_27) >= g_2));
                g_87[1][1] = ((safe_mul_func_int16_t_s_s(((p_27 < ((safe_sub_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((~((((!p_27) , (g_88++)) < (safe_sub_func_uint64_t_u_u(p_27, (safe_mod_func_int64_t_s_s((0x09L || 8L), g_86))))) && l_56)), p_27)) & l_40), 4UL)) && 4UL)) , 0x65E7L), p_28)) || p_27);
                g_86 = ((l_95[0] & (!g_88)) && g_87[1][1]);
            }
            return p_28;
        }
        else
        { 
lbl_101:
            for (g_5 = (-5); (g_5 == 55); g_5 = safe_add_func_uint64_t_u_u(g_5, 6))
            { 
                if (p_28)
                    break;
            }
        }
        for (p_28 = 0; (p_28 >= 11); p_28 = safe_add_func_int64_t_s_s(p_28, 2))
        { 
            int32_t l_112[4][5] = {{0x5A844804L,0xEC1DFBCBL,0x5A844804L,0xEC1DFBCBL,0x5A844804L},{0xAE354A5AL,0xAE354A5AL,0x134511E0L,0x134511E0L,0xAE354A5AL},{(-1L),0xEC1DFBCBL,(-1L),0xEC1DFBCBL,(-1L)},{0xAE354A5AL,0x134511E0L,0x134511E0L,0xAE354A5AL,0xAE354A5AL}};
            int i, j;
            if (g_5)
                goto lbl_101;
            if ((safe_lshift_func_uint16_t_u_s((((l_112[3][1] = (l_104 , (l_57 = (6UL <= ((!((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((-1L), (l_58 = (p_27 < l_112[0][0])))), g_5)), g_2)) & p_28)) < 0xCE14L))))) != g_87[1][1]) , p_27), l_41)))
            { 
                if (g_5)
                    break;
                g_87[1][1] = (p_27 <= g_86);
            }
            else
            { 
                return g_87[1][1];
            }
            l_58 ^= (safe_mod_func_int16_t_s_s(l_112[2][0], g_2));
        }
        for (g_5 = 0; (g_5 <= 0); g_5 += 1)
        { 
            int32_t l_127 = (-1L);
            int32_t l_129 = (-4L);
            int32_t l_132 = (-1L);
            int32_t l_135 = 1L;
            int32_t l_137 = 0x58679535L;
            int32_t l_141 = 0xFAFF4B71L;
            int32_t l_144[1][5] = {{1L,1L,1L,1L,1L}};
            int i, j;
            for (l_40 = 1; (l_40 >= 0); l_40 -= 1)
            { 
                int i, j;
                g_87[l_40][(g_5 + 1)] = l_95[g_5];
                if (g_87[(g_5 + 1)][l_40])
                    continue;
                l_58 = ((3UL == (safe_lshift_func_int8_t_s_s(((l_117 = p_27) >= (safe_mod_func_int32_t_s_s((l_120 , ((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(p_28, 2)), l_127)) > l_104.f0) < p_29), g_86)) & g_87[(g_5 + 1)][l_40])), g_2))), 4))) && g_87[1][1]);
            }
            for (p_28 = 0; (p_28 <= 0); p_28 += 1)
            { 
                int32_t l_128 = 0x70CD436FL;
                int32_t l_130 = (-1L);
                int32_t l_133 = 0L;
                int32_t l_134 = (-6L);
                int32_t l_136 = 0x993E3A24L;
                int32_t l_140 = 0x5745E929L;
                int32_t l_143[2][4] = {{0x34421CF7L,0x34421CF7L,0x34421CF7L,0x34421CF7L},{0x34421CF7L,0x34421CF7L,0x34421CF7L,0x34421CF7L}};
                int i, j;
                if (l_95[p_28])
                    break;
                l_147--;
            }
        }
    }
    else
    { 
        uint64_t l_150 = 3UL;
        int32_t l_160 = 0x1C995BFDL;
        int32_t l_173 = 0xE01A2308L;
        ++l_150;
        for (g_5 = 0; (g_5 <= 1); g_5 += 1)
        { 
            int64_t l_157 = 0x91B13FB221D915B7LL;
            int32_t l_158 = (-3L);
            l_158 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(l_150, (l_131[0][0][0] = 0xEA64L))) && l_157), (p_29 < g_87[1][1])));
            for (g_88 = 0; (g_88 <= 1); g_88 += 1)
            { 
                uint32_t l_159 = 1UL;
                int i, j;
                l_159 = (-1L);
                l_160 = g_87[g_88][g_5];
                g_87[1][1] = (l_158 &= ((0x1EL >= (p_29 = (safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_87[g_5][g_88], l_150)), (l_160 = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(p_29, 0x56AD494AE63F1C0ELL)) ^ p_29), 0x6AC6L)), (-1L)))))) & g_87[0][1]), l_173)))) ^ p_27));
            }
        }
    }
    g_87[1][0] &= (safe_lshift_func_int8_t_s_u((p_27 == l_131[2][0][3]), (safe_mod_func_int64_t_s_s(((p_29 != ((safe_div_func_int64_t_s_s(1L, p_28)) ^ 0x39D61DCCL)) >= 1L), 0x683EEDB4BB63C672LL))));
    return l_180;
}



static const int64_t  func_30(int64_t  p_31, uint64_t  p_32, uint8_t  p_33)
{ 
    return p_33;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_87[i][j], "g_87[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_282[i], "g_282[i]", print_hash_value);

    }
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
