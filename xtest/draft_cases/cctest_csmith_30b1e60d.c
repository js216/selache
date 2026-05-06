// SPDX-License-Identifier: MIT
// cctest_csmith_30b1e60d.c --- cctest case csmith_30b1e60d (csmith seed 816965133)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3ada8b91 */

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

// Options:   -s 816965133 -o /tmp/csmith_gen_g6speu17/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const unsigned f0 : 5;
   signed f1 : 8;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
   const uint16_t  f2;
   struct S0  f3;
   struct S0  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const unsigned f0 : 9;
};
#pragma pack(pop)

union U4 {
   const int32_t  f0;
   int64_t  f1;
   uint64_t  f2;
};


static int32_t g_2 = 1L;
static int8_t g_5 = (-5L);
static union U4 g_33 = {-9L};
static uint8_t g_44[3][3] = {{0x85L,0x85L,0x85L},{8UL,0x4DL,8UL},{0x85L,0x85L,0x85L}};
static struct S2 g_45[4][4][1] = {{{{3}},{{15}},{{15}},{{3}}},{{{15}},{{15}},{{3}},{{15}}},{{{15}},{{3}},{{15}},{{15}}},{{{3}},{{15}},{{15}},{{3}}}};
static struct S1 g_77 = {0x8E71DF66L,0x60CCD11DL,0xE253L,{3,7},{3,5}};
static int8_t g_85[1] = {(-8L)};
static int8_t g_87 = 0x0EL;
static uint32_t g_88[5] = {0xDCEDD96CL,0xDCEDD96CL,0xDCEDD96CL,0xDCEDD96CL,0xDCEDD96CL};
static uint32_t g_104 = 0UL;
static uint8_t g_108 = 0x9FL;
static uint16_t g_163 = 0x1DADL;



static struct S2  func_1(void);
static int32_t  func_6(int8_t  p_7, struct S0  p_8);
static struct S0  func_9(uint64_t  p_10, int64_t  p_11, uint32_t  p_12, struct S1  p_13, int64_t  p_14);
static uint64_t  func_15(uint64_t  p_16);




static struct S2  func_1(void)
{ 
    uint8_t l_78 = 0xC0L;
    int32_t l_209 = (-1L);
    struct S2 l_210 = {6};
    for (g_2 = (-10); (g_2 <= (-19)); g_2 = safe_sub_func_uint8_t_u_u(g_2, 4))
    { 
        uint8_t l_76 = 247UL;
        const int32_t l_193 = 8L;
        g_5 = g_2;
        if (func_6(g_5, func_9(func_15(g_5), l_76, g_5, g_77, l_78)))
        { 
            uint32_t l_191 = 0x72001B59L;
            int32_t l_192 = (-3L);
            int32_t l_194 = 0x2CDC48FAL;
            int32_t l_195 = 0x9A891246L;
            g_77.f3.f1 = ((safe_rshift_func_uint16_t_u_s(g_77.f0, 11)) <= (safe_div_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((l_194 = ((((((l_192 = ((l_191 = (g_87 ^ (g_44[2][0] & 0L))) ^ g_87)) > 0x6C6CL) < g_88[1]) & l_193) <= g_88[1]) | 0xC203F8E5C4BBE829LL)), l_195)) & 0x9F7EB3699347C118LL), g_44[1][1])));
        }
        else
        { 
            if ((safe_add_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((-1L))), 255UL)))
            { 
                return g_45[0][2][0];
            }
            else
            { 
                int8_t l_204 = 1L;
                g_77.f0 ^= (((+(safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_204 , ((g_44[1][1] == 65527UL) || ((((safe_add_func_uint16_t_u_u((l_78 | 0xD4E4L), (-1L))) && 2L) != 0x80E76C45L) || 7UL))), 0UL)), 0xCFB1L))) , l_78) == g_88[1]);
                return g_45[0][1][0];
            }
        }
    }
    l_209 ^= (g_77.f3.f1 = (safe_lshift_func_int16_t_s_u(g_77.f1, 5)));
    return l_210;
}



static int32_t  func_6(int8_t  p_7, struct S0  p_8)
{ 
    uint16_t l_149 = 6UL;
    uint32_t l_180 = 0UL;
    for (g_77.f0 = 2; (g_77.f0 >= 0); g_77.f0 -= 1)
    { 
        int8_t l_143 = (-9L);
        int32_t l_175 = 1L;
        l_143 = 5L;
        for (l_143 = 0; (l_143 <= 2); l_143 += 1)
        { 
            int32_t l_162 = 0xA1B9E14AL;
            for (g_77.f1 = 0; (g_77.f1 <= 2); g_77.f1 += 1)
            { 
                int i, j;
                g_77.f4.f1 = ((g_77.f3.f1 = g_44[g_77.f1][g_77.f0]) > (!((g_85[0] = 0L) || (safe_sub_func_int64_t_s_s(p_8.f1, (((safe_mul_func_int8_t_s_s(0xDBL, g_45[3][1][0].f0)) != l_149) || g_77.f1))))));
            }
            if ((safe_sub_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s(p_7, 9)) <= g_44[0][0]), (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(249UL, (g_108 = ((safe_mod_func_uint64_t_u_u(((l_162 || l_143) || g_88[1]), l_162)) == g_2)))) ^ p_7), 4)))) ^ 7UL), 0L)))
            { 
                const int32_t l_166 = 0x61906B43L;
                g_163--;
                if (l_166)
                    continue;
                p_8.f1 = l_162;
            }
            else
            { 
                uint8_t l_173 = 255UL;
                int32_t l_174 = 0x16656B12L;
                l_175 = ((g_77.f4.f1 ^ (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((l_174 ^= (safe_div_func_uint16_t_u_u(((0xD419D48E565183DFLL & (0x7C9149DFL & (l_173 & g_88[1]))) > g_77.f1), g_85[0]))) > 0xF6BAA5DAL), g_77.f1)), l_162))) | 0xDDD7L);
                g_77.f3.f1 = (g_77.f4.f1 |= (l_180 = ((g_77.f4.f0 || (g_44[2][2] > (safe_mul_func_uint8_t_u_u((l_175 = l_143), ((safe_mul_func_uint8_t_u_u((l_143 == 0x6E1F2821DCC64AC7LL), l_143)) != 0x03L))))) ^ g_104)));
                return g_44[1][2];
            }
        }
    }
    return g_77.f0;
}



static struct S0  func_9(uint64_t  p_10, int64_t  p_11, uint32_t  p_12, struct S1  p_13, int64_t  p_14)
{ 
    struct S1 l_79 = {0x205D6143L,4294967295UL,5UL,{1,6},{3,-6}};
    struct S2 l_82 = {12};
    struct S0 l_93[4] = {{1,-11},{1,-11},{1,-11},{1,-11}};
    union U4 l_140 = {0x67BAFF3CL};
    int i;
    if (g_77.f2)
    { 
        uint64_t l_86[1];
        int64_t l_101 = 0x4A0DC95FA104C7A4LL;
        int32_t l_102 = (-1L);
        int32_t l_107[1];
        int i;
        for (i = 0; i < 1; i++)
            l_86[i] = 0xEC0BA0D37901A93ELL;
        for (i = 0; i < 1; i++)
            l_107[i] = (-7L);
        l_79.f3.f1 = ((l_79.f0 = (l_79 , (((((safe_div_func_uint16_t_u_u(((g_85[0] = (l_82 , ((((((g_77.f3.f1 = ((l_79.f1 ^ (safe_rshift_func_uint8_t_u_u(l_79.f4.f0, g_77.f2))) >= 0x6508L)) > 0xE7F6E951L) || l_79.f4.f0) > p_10) >= p_13.f3.f0) >= p_13.f4.f0))) > l_86[0]), l_82.f0)) ^ l_86[0]) ^ p_13.f4.f1) && 0xFB6C9C462E654CDFLL) < p_11))) >= g_77.f0);
        g_88[1]++;
        if ((p_13.f3.f1 = (((safe_div_func_int8_t_s_s((l_93[1] , ((safe_sub_func_uint16_t_u_u(0x725CL, ((g_33 , p_11) != l_86[0]))) <= g_87)), l_86[0])) >= l_79.f3.f0) ^ 0x81895320L)))
        { 
            if ((safe_sub_func_uint8_t_u_u(g_45[3][1][0].f0, l_79.f0)))
            { 
                const uint32_t l_100[4][2][3] = {{{0x22E4BCF3L,18446744073709551608UL,18446744073709551606UL},{1UL,0UL,0UL}},{{0x22E4BCF3L,18446744073709551608UL,18446744073709551606UL},{1UL,0UL,0x4C7E2165L}},{{18446744073709551606UL,0x25F9EFA0L,0UL},{0UL,0x4C7E2165L,0x4C7E2165L}},{{18446744073709551606UL,0x25F9EFA0L,0UL},{0UL,0x4C7E2165L,0x4C7E2165L}}};
                int i, j, k;
                g_77.f3.f1 = ((p_13.f3.f0 > (((((safe_mul_func_int8_t_s_s(1L, g_44[1][1])) ^ g_77.f3.f0) & l_100[3][0][1]) & p_12) == p_13.f0)) | l_100[3][0][1]);
            }
            else
            { 
                int16_t l_103 = 1L;
                ++g_104;
            }
        }
        else
        { 
            ++g_108;
            for (g_77.f1 = 0; (g_77.f1 >= 7); g_77.f1 = safe_add_func_uint16_t_u_u(g_77.f1, 2))
            { 
                g_77.f4.f1 = ((safe_rshift_func_uint16_t_u_s((l_79.f0 = g_88[1]), ((251UL ^ (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s((g_33.f1 = (((4L <= (p_10 > g_44[2][1])) , g_5) ^ p_11)))) & g_77.f1), l_107[0]))) | 0x601A515FL))) , 0L);
            }
        }
    }
    else
    { 
        struct S0 l_120 = {3,7};
        return l_120;
    }
lbl_141:
    for (g_33.f2 = 17; (g_33.f2 < 52); g_33.f2 = safe_add_func_int64_t_s_s(g_33.f2, 1))
    { 
        const uint8_t l_127 = 0xBAL;
        g_77.f4.f1 &= ((g_77.f4.f0 & 1L) < (((g_77.f1 = (0xAE95L <= (safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(g_44[0][2], g_5)) , l_127), p_12)))) && p_13.f2) <= p_13.f4.f1));
        g_77.f0 &= g_77.f1;
        l_79.f3.f1 |= (safe_div_func_uint8_t_u_u(p_13.f3.f1, (safe_lshift_func_uint16_t_u_s((g_108 | ((g_45[3][1][0].f0 , g_45[3][1][0]) , 0x9D661093DF311E79LL)), p_12))));
    }
    if ((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((g_45[3][1][0].f0 == (safe_add_func_int8_t_s_s(g_45[3][1][0].f0, g_2))) >= (safe_mod_func_uint64_t_u_u((l_140 , l_79.f3.f0), g_33.f2))) <= g_77.f2) , l_79.f3.f0), 0xB8L)), p_12)))
    { 
        if (g_33.f2)
            goto lbl_141;
    }
    else
    { 
        int32_t l_142 = 2L;
        l_142 = (l_79.f1 ^ g_88[3]);
    }
    return p_13.f4;
}



static uint64_t  func_15(uint64_t  p_16)
{ 
    uint16_t l_23 = 65535UL;
    int32_t l_24 = 0xA4D9A54EL;
    int32_t l_25 = 1L;
    int32_t l_26[5][3][4] = {{{0L,1L,0xF14186E1L,0L},{(-10L),0xF14186E1L,0x5996FD0FL,0x5996FD0FL},{(-1L),(-1L),0xE6B786AEL,0x6983C17AL}},{{9L,1L,1L,0xF5EE8790L},{0xE6B786AEL,0xDBA1DD79L,0xBC98072FL,1L},{1L,0xDBA1DD79L,0L,0xF5EE8790L}},{{0xDBA1DD79L,1L,0L,0x6983C17AL},{0x9D073D4CL,(-1L),9L,0x5996FD0FL},{0L,0xF14186E1L,(-1L),0L}},{{1L,1L,1L,(-1L)},{0L,0xC63B8821L,(-10L),0x2B4CF22AL},{0xBC98072FL,1L,0L,0xC63B8821L}},{{0x694A2199L,(-10L),0L,9L},{0xBC98072FL,0x6983C17AL,(-10L),(-1L)},{0L,(-3L),1L,0xBC98072FL}}};
    uint32_t l_42 = 1UL;
    int i, j, k;
    l_26[1][1][1] = (l_25 = (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(0x1FL, 6)) ^ (safe_div_func_int8_t_s_s(g_5, ((l_24 |= l_23) & (g_5 || g_5))))), 4)));
    if ((l_26[1][1][1] <= l_23))
    { 
        uint16_t l_41 = 1UL;
        int32_t l_68[2];
        int i;
        for (i = 0; i < 2; i++)
            l_68[i] = 0xE70C497AL;
lbl_70:
        for (l_24 = 0; (l_24 > 27); ++l_24)
        { 
            uint32_t l_43 = 0UL;
            for (l_25 = 25; (l_25 > 12); l_25 = safe_sub_func_uint16_t_u_u(l_25, 4))
            { 
                g_44[1][1] = (safe_add_func_uint8_t_u_u(((1UL ^ ((g_33 , (safe_div_func_int64_t_s_s((((l_23 <= (safe_add_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(((+g_33.f0) , l_41), p_16)) || l_42), (-1L)))) || 0xC2A3DA79815C87E1LL) , l_41), l_43))) != p_16)) != p_16), g_5));
                if (p_16)
                    continue;
            }
            for (l_42 = 0; (l_42 <= 2); l_42 += 1)
            { 
                int i, j;
                return g_44[l_42][l_42];
            }
        }
        for (l_41 = 0; (l_41 <= 2); l_41 += 1)
        { 
            uint32_t l_67 = 0x4CD2740DL;
            int32_t l_69 = (-1L);
            if (((6UL | (g_45[3][1][0] , p_16)) < (safe_lshift_func_uint8_t_u_s((65535UL == g_44[1][1]), 3))))
            { 
                return l_41;
            }
            else
            { 
                const uint8_t l_66 = 1UL;
                l_68[0] ^= (l_67 = ((8L | (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((g_33.f1 = (-4L)), 0xBF9D45AA775BEB37LL)) & (safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_66 && p_16), g_45[3][1][0].f0)), g_2)), (-1L))), l_41))) >= l_26[1][1][0]), (-1L))), p_16)), 0UL)), g_44[1][1]))) , 0xCC15C487L));
                l_69 = 0x516193E9L;
                if (l_23)
                    goto lbl_70;
            }
            if ((safe_rshift_func_int16_t_s_u((l_67 | (9L == l_42)), 5)))
            { 
                return p_16;
            }
            else
            { 
                return l_67;
            }
        }
    }
    else
    { 
        uint32_t l_75 = 0UL;
        for (l_24 = 0; (l_24 > (-4)); --l_24)
        { 
            l_75 = g_44[2][0];
            if (p_16)
                break;
        }
    }
    return g_44[1][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_44[i][j], "g_44[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_45[i][j][k].f0, "g_45[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3.f0, "g_77.f3.f0", print_hash_value);
    transparent_crc(g_77.f3.f1, "g_77.f3.f1", print_hash_value);
    transparent_crc(g_77.f4.f0, "g_77.f4.f0", print_hash_value);
    transparent_crc(g_77.f4.f1, "g_77.f4.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);

    }
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
