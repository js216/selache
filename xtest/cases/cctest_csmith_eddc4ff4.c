// SPDX-License-Identifier: MIT
// cctest_csmith_eddc4ff4.c --- cctest case csmith_eddc4ff4 (csmith seed 3990638580)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x61a02a5f */

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

// Options:   -s 3990638580 -o /tmp/csmith_gen_8hpg8b29/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int16_t  f1;
   int32_t  f2;
   int32_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   struct S0  f1;
   const uint32_t  f2;
   int32_t  f3;
   int32_t  f4;
   const uint64_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint8_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

union U3 {
   uint16_t  f0;
};

union U4 {
   uint8_t  f0;
   int16_t  f1;
   const uint16_t  f2;
};

union U5 {
   int32_t  f0;
   const struct S2  f1;
};

union U6 {
   int32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint16_t  f3;
};


static uint16_t g_11 = 0x193FL;
static int32_t g_18 = (-4L);
static int32_t g_28 = 0x4F412F3AL;
static struct S2 g_35[1] = {{1UL,5UL}};
static uint32_t g_43 = 0x773635D5L;
static int8_t g_50[5] = {7L,7L,7L,7L,7L};
static int32_t g_51 = 0x9D40DD2CL;
static uint16_t g_52 = 65533UL;
static uint32_t g_60 = 4294967286UL;
static uint16_t g_70 = 0x0160L;
static union U6 g_85 = {1L};
static int64_t g_95[2] = {0x3B08BCBAD6A7F728LL,0x3B08BCBAD6A7F728LL};
static uint32_t g_96 = 4294967294UL;
static union U5 g_108 = {0x73DCF354L};
static uint64_t g_113 = 0xFAA2BCA0CB05F298LL;
static int64_t g_132 = 0x4F9C2C93F04C9F34LL;
static int64_t g_133 = 0xE3425DD3928CDBBALL;
static const struct S0 g_150[4] = {{1UL,-5L,0xE1EFB666L,0x4592D3BFL,0x37D9CE7FL},{1UL,-5L,0xE1EFB666L,0x4592D3BFL,0x37D9CE7FL},{1UL,-5L,0xE1EFB666L,0x4592D3BFL,0x37D9CE7FL},{1UL,-5L,0xE1EFB666L,0x4592D3BFL,0x37D9CE7FL}};



static struct S0  func_1(void);
static uint32_t  func_2(union U6  p_3, struct S1  p_4, const int32_t  p_5, uint64_t  p_6);
static union U6  func_8(int16_t  p_9, int32_t  p_10);
static uint32_t  func_12(union U6  p_13);




static struct S0  func_1(void)
{ 
    struct S2 l_7[1] = {{0x1BL,0x6B42BE19L}};
    union U6 l_14 = {0x1DD2E91CL};
    struct S1 l_86 = {8UL,{1UL,0x8D99L,-6L,-1L,0xFDDE4D78L},0x1D698337L,0x2E33F915L,0xDED78560L,0xA185305F7132E543LL};
    struct S0 l_124 = {0x1945E40BL,0xBE37L,0L,9L,0x6F6173B2L};
    int i;
    if ((func_2((l_7[0] , func_8(l_7[0].f1, ((g_11 = g_11) <= (func_12(l_14) >= l_14.f2)))), l_86, l_86.f1.f3, l_7[0].f1) & 0x6AA72210L))
    { 
        return l_124;
    }
    else
    { 
        uint32_t l_130 = 1UL;
        int32_t l_131 = 1L;
        struct S0 l_141[3][5][2] = {{{{0x096D4882L,0xDD94L,0L,-1L,18446744073709551615UL},{0xD92AE5AEL,0x9F93L,0x22E02E4CL,0xB560D96EL,0x8CD386D9L}},{{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL},{0xD92AE5AEL,0x9F93L,0x22E02E4CL,0xB560D96EL,0x8CD386D9L}},{{0x096D4882L,0xDD94L,0L,-1L,18446744073709551615UL},{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL}},{{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL},{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL}},{{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL},{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL}}},{{{0x096D4882L,0xDD94L,0L,-1L,18446744073709551615UL},{0xD92AE5AEL,0x9F93L,0x22E02E4CL,0xB560D96EL,0x8CD386D9L}},{{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL},{0xD92AE5AEL,0x9F93L,0x22E02E4CL,0xB560D96EL,0x8CD386D9L}},{{0x096D4882L,0xDD94L,0L,-1L,18446744073709551615UL},{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL}},{{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL},{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL}},{{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL},{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL}}},{{{0x096D4882L,0xDD94L,0L,-1L,18446744073709551615UL},{0xD92AE5AEL,0x9F93L,0x22E02E4CL,0xB560D96EL,0x8CD386D9L}},{{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL},{0xD92AE5AEL,0x9F93L,0x22E02E4CL,0xB560D96EL,0x8CD386D9L}},{{0x096D4882L,0xDD94L,0L,-1L,18446744073709551615UL},{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL}},{{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL},{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL}},{{0x4585397BL,0x59C8L,0x5190E703L,0xE88BD6EBL,18446744073709551609UL},{18446744073709551615UL,0x8BE6L,-5L,0xB03EBDBDL,18446744073709551614UL}}}};
        struct S2 l_143[5][4] = {{{0UL,0x029CE55DL},{1UL,18446744073709551610UL},{0UL,0x029CE55DL},{1UL,18446744073709551610UL}},{{0UL,0x029CE55DL},{1UL,18446744073709551610UL},{0UL,0x029CE55DL},{1UL,18446744073709551610UL}},{{0UL,0x029CE55DL},{1UL,18446744073709551610UL},{0UL,0x029CE55DL},{1UL,18446744073709551610UL}},{{0UL,0x029CE55DL},{1UL,18446744073709551610UL},{0UL,0x029CE55DL},{1UL,18446744073709551610UL}},{{0UL,0x029CE55DL},{1UL,18446744073709551610UL},{0UL,0x029CE55DL},{1UL,18446744073709551610UL}}};
        int i, j, k;
        for (l_86.f1.f0 = 0; (l_86.f1.f0 == 53); ++l_86.f1.f0)
        { 
            uint32_t l_134 = 0x3723A680L;
            g_85.f2 = (g_18 || (func_8((g_133 |= (g_132 ^= (((!((g_108 , ((safe_mul_func_int16_t_s_s((((l_131 ^= l_130) || (g_35[0] , l_124.f0)) != g_28), 0x197FL)) ^ g_52)) & l_7[0].f0)) || l_131) == l_7[0].f0))), l_134) , 0xAA9AA2B5L));
            if (((g_96 &= g_113) && (safe_rshift_func_uint8_t_u_u((+(g_113 <= (safe_mul_func_int16_t_s_s((l_131 = ((+g_95[1]) | ((g_50[2] ^= g_52) , 0x794BL))), l_130)))), 0))))
            { 
                return l_141[2][0][1];
            }
            else
            { 
                uint32_t l_142[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_142[i] = 0xFF993564L;
                l_14.f2 = l_142[2];
            }
            g_18 = l_134;
        }
        g_35[0] = l_143[2][0];
        l_131 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((l_7[0].f1 || l_124.f1), g_11)), 11));
    }
    g_18 &= ((safe_sub_func_int8_t_s_s((0xDAL | (((g_150[1] , (safe_mul_func_int16_t_s_s(((l_86 , (l_14.f2 = ((safe_unary_minus_func_int16_t_s((0x433CC307L && g_51))) ^ l_86.f2))) == 0x81C0EB34L), 1UL))) > 248UL) > g_28)), 0x97L)) > 0x2F4EEEBA4ED1C8C2LL);
    return l_86.f1;
}



static uint32_t  func_2(union U6  p_3, struct S1  p_4, const int32_t  p_5, uint64_t  p_6)
{ 
    int64_t l_91 = 0x317E307078AD4A5CLL;
    int32_t l_92 = 0L;
    int32_t l_94[5][3];
    uint8_t l_121[4][3] = {{0x53L,0x53L,0x53L},{0UL,0UL,0UL},{0x53L,0x53L,0x53L},{0UL,0UL,0UL}};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_94[i][j] = 0x1B697508L;
    }
    g_18 = 0x8067FC1DL;
    if ((p_4.f4 == ((safe_rshift_func_uint8_t_u_u((((((p_4.f1.f4 < (safe_add_func_uint64_t_u_u((g_43 && (0L || l_91)), g_85.f3))) == g_85.f2) , l_91) ^ 2UL) < 0x1CL), g_43)) || l_91)))
    { 
        int8_t l_93[2][5];
        int16_t l_110[5][5] = {{(-1L),6L,0x40D4L,0x40D4L,6L},{(-1L),6L,0x40D4L,0x40D4L,6L},{(-1L),6L,0x40D4L,0x40D4L,6L},{(-1L),6L,0x40D4L,0x40D4L,6L},{(-1L),6L,0x40D4L,0x40D4L,6L}};
        struct S2 l_115[3][4] = {{{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL}},{{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL}},{{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL},{0x2EL,18446744073709551610UL}}};
        int32_t l_116[4] = {0L,0L,0L,0L};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_93[i][j] = 1L;
        }
        g_96++;
        for (g_85.f3 = (-17); (g_85.f3 <= 56); ++g_85.f3)
        { 
            uint32_t l_109 = 1UL;
            p_4.f1.f3 &= (((l_94[0][0] ^ 0xF7C917CCL) , (((((((safe_mod_func_uint16_t_u_u((((((safe_rshift_func_int16_t_s_s((-8L), (safe_add_func_uint64_t_u_u(((+((g_108 , l_91) && l_91)) && g_18), p_4.f0)))) ^ 7UL) == 0xE4CF6FCF68907D73LL) | l_109) <= l_91), g_28)) >= 0xD85B24B6L) , l_93[1][4]) || l_94[4][0]) >= p_3.f3) <= 1UL) <= l_110[3][0])) > p_4.f1.f0);
        }
        for (g_52 = 4; (g_52 > 12); g_52 = safe_add_func_uint16_t_u_u(g_52, 7))
        { 
            int32_t l_117 = 0x5FDB6488L;
            uint64_t l_118 = 18446744073709551615UL;
            if ((g_113 && (0xE6100BB5L && 4294967286UL)))
            { 
                union U4 l_114 = {2UL};
                g_35[0] = (l_114 , l_115[0][0]);
            }
            else
            { 
                l_116[3] |= p_4.f5;
                l_118--;
            }
            ++l_121[3][0];
        }
    }
    else
    { 
        return l_121[1][0];
    }
    return g_28;
}



static union U6  func_8(int16_t  p_9, int32_t  p_10)
{ 
    int64_t l_84[2][5][2] = {{{1L,(-1L)},{0L,0L},{0xC49EEE8C1B3C7CD6LL,0L},{0L,(-1L)},{1L,0xC9DB8D8D308ECB2ALL}},{{0xC49EEE8C1B3C7CD6LL,1L},{0xC9DB8D8D308ECB2ALL,(-1L)},{0xC9DB8D8D308ECB2ALL,1L},{0xC49EEE8C1B3C7CD6LL,0xC9DB8D8D308ECB2ALL},{1L,(-1L)}}};
    int i, j, k;
    g_18 = g_35[0].f1;
    l_84[1][2][1] = g_60;
    return g_85;
}



static uint32_t  func_12(union U6  p_13)
{ 
    int32_t l_15[4][3][5] = {{{0L,(-9L),0xE0F758FCL,0L,0L},{0x4AB10079L,0x12F8BA79L,0x4AB10079L,0x72D50FA8L,0xD9751230L},{0L,0x914A3A6DL,0x040B319BL,(-9L),0x914A3A6DL}},{{9L,0x12F8BA79L,0xDCAB3915L,0x12F8BA79L,9L},{0x914A3A6DL,(-9L),0x040B319BL,0x914A3A6DL,0L},{0xD9751230L,0x72D50FA8L,0x4AB10079L,0x12F8BA79L,0x4AB10079L}},{{0L,0L,0xE0F758FCL,(-9L),0L},{0xE352601CL,0x12F8BA79L,0xE352601CL,0x72D50FA8L,9L},{0L,0x040B319BL,0x040B319BL,0L,0x914A3A6DL}},{{0xD9751230L,0x12F8BA79L,0x99643747L,0x12F8BA79L,0xD9751230L},{0x914A3A6DL,0L,0x040B319BL,0x040B319BL,0L},{9L,0x72D50FA8L,0xE352601CL,0x12F8BA79L,0xE352601CL}}};
    struct S2 l_36[5][2] = {{{7UL,0x35F31A33L},{7UL,0x35F31A33L}},{{7UL,0x35F31A33L},{7UL,0x35F31A33L}},{{7UL,0x35F31A33L},{7UL,0x35F31A33L}},{{7UL,0x35F31A33L},{7UL,0x35F31A33L}},{{7UL,0x35F31A33L},{7UL,0x35F31A33L}}};
    union U5 l_73 = {-6L};
    union U4 l_74 = {252UL};
    struct S0 l_83 = {0x09021D5EL,0x8CE2L,0xF52E1657L,-6L,18446744073709551612UL};
    int i, j, k;
lbl_66:
    l_15[3][2][2] = (-1L);
    for (p_13.f3 = 27; (p_13.f3 >= 38); ++p_13.f3)
    { 
        uint8_t l_30 = 0UL;
        const struct S2 l_33[2][5][1] = {{{{251UL,0xA6CBABA2L}},{{255UL,0x119B5F81L}},{{251UL,0xA6CBABA2L}},{{255UL,0x119B5F81L}},{{251UL,0xA6CBABA2L}}},{{{255UL,0x119B5F81L}},{{251UL,0xA6CBABA2L}},{{255UL,0x119B5F81L}},{{251UL,0xA6CBABA2L}},{{255UL,0x119B5F81L}}}};
        struct S2 l_37 = {0x4FL,0x0F898D4EL};
        int32_t l_69 = 9L;
        int i, j, k;
        if (l_15[3][2][2])
            break;
        for (g_18 = (-22); (g_18 < 17); g_18 = safe_add_func_uint8_t_u_u(g_18, 9))
        { 
            int32_t l_26[1];
            int32_t l_27 = (-1L);
            int32_t l_29[5][4][3];
            union U3 l_40 = {1UL};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_26[i] = (-7L);
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_29[i][j][k] = 0x284A8988L;
                }
            }
            if (p_13.f3)
                break;
            if ((((!(g_18 < (0x9A2FL ^ (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(0x61L, g_18)) , 0x98BE49C906054615LL), 18446744073709551615UL))))) != 0xAC5ADF6FL) == p_13.f3))
            { 
                struct S2 l_34 = {9UL,5UL};
                l_30++;
                if (l_30)
                    continue;
                l_34 = l_33[0][2][0];
            }
            else
            { 
                const int32_t l_42[4][5] = {{0x855BD1B8L,0x38CF8356L,0x855BD1B8L,0x855BD1B8L,0x38CF8356L},{0x38CF8356L,0x855BD1B8L,0x855BD1B8L,0x38CF8356L,0x855BD1B8L},{0x38CF8356L,0x38CF8356L,0x7FFC8BABL,0x38CF8356L,0x38CF8356L},{0x855BD1B8L,0x38CF8356L,0x855BD1B8L,0x855BD1B8L,0x38CF8356L}};
                int i, j;
                l_37 = (l_36[4][0] = g_35[0]);
                g_43 &= (safe_rshift_func_uint16_t_u_s((l_40 , ((p_13.f3 >= ((0xE6L & ((safe_unary_minus_func_uint64_t_u(g_28)) || l_42[3][4])) | (-1L))) < g_28)), p_13.f3));
            }
        }
        if (((safe_mod_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(g_35[0].f0, (0x91F9L || (safe_add_func_int32_t_s_s((((g_52++) != (safe_sub_func_int32_t_s_s((+(((p_13.f3 && ((p_13.f3 != p_13.f3) > l_15[3][2][2])) , g_51) >= l_36[4][0].f1)), 9L))) & 0UL), g_28))))) <= g_35[0].f1) & g_35[0].f0), g_43)) <= 0xCCB6L))
        { 
            g_60 = (g_18 = (g_43 != (safe_rshift_func_uint16_t_u_s((g_52 |= ((0x057BL ^ (l_37.f1 & p_13.f3)) & g_35[0].f0)), 12))));
            for (l_30 = 23; (l_30 > 33); l_30 = safe_add_func_uint16_t_u_u(l_30, 6))
            { 
                uint64_t l_63 = 0x5DFDCAF09E5C5CB2LL;
                return l_63;
            }
            if ((safe_lshift_func_int8_t_s_u(p_13.f3, 6)))
            { 
                if (g_51)
                    goto lbl_66;
            }
            else
            { 
                int32_t l_67 = 0x1CB9B5B5L;
                int32_t l_68 = 0x386FCCF6L;
                g_70--;
            }
        }
        else
        { 
            if (g_35[0].f1)
                break;
        }
    }
    l_83.f3 = ((l_73 , ((((l_74 , (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(0xD27CF1A457CE1196LL, (safe_add_func_int8_t_s_s((l_15[1][1][0] = (l_83 , (-2L))), g_50[2])))), 11)), 9)) || g_50[2]) < 0L)) || 255UL) || p_13.f3) != l_83.f4)) < l_83.f2);
    return g_51;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_35[i].f0, "g_35[i].f0", print_hash_value);
        transparent_crc(g_35[i].f1, "g_35[i].f1", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);

    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_150[i].f0, "g_150[i].f0", print_hash_value);
        transparent_crc(g_150[i].f1, "g_150[i].f1", print_hash_value);
        transparent_crc(g_150[i].f2, "g_150[i].f2", print_hash_value);
        transparent_crc(g_150[i].f3, "g_150[i].f3", print_hash_value);
        transparent_crc(g_150[i].f4, "g_150[i].f4", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
