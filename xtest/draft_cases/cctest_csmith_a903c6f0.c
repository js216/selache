// SPDX-License-Identifier: MIT
// cctest_csmith_a903c6f0.c --- cctest case csmith_a903c6f0 (csmith seed 2835597040)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x92a3a8d3 */

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

// Options:   -s 2835597040 -o /tmp/csmith_gen_d5010nkg/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 6;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const unsigned f0 : 27;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   int32_t  f1;
   int8_t  f2;
   int64_t  f3;
};

union U3 {
   const int32_t  f0;
   const int32_t  f1;
   int8_t * f2;
};


static int8_t g_4 = 0x1DL;
static int32_t g_35 = 0x7AEBB1BBL;
static int32_t g_67[5] = {1L,1L,1L,1L,1L};
static uint64_t g_80 = 18446744073709551609UL;
static int64_t g_91 = 9L;
static int64_t g_92[4] = {(-1L),(-1L),(-1L),(-1L)};
static int8_t *g_99 = &g_4;
static int8_t **g_98[6] = {&g_99,&g_99,&g_99,&g_99,&g_99,&g_99};
static int8_t ***g_97[6][1] = {{&g_98[5]},{&g_98[5]},{&g_98[5]},{&g_98[5]},{&g_98[5]},{&g_98[5]}};
static int16_t g_100 = (-8L);
static struct S0 g_105 = {1};
static int8_t g_118[6][1] = {{7L},{0x20L},{0x20L},{7L},{0x20L},{0x20L}};
static union U2 g_125 = {0L};
static int32_t *g_134 = (void*)0;
static int32_t **g_133 = &g_134;
static uint16_t g_139 = 0x5610L;
static int8_t * const *g_149 = &g_99;
static int8_t * const **g_148 = &g_149;
static uint32_t g_205 = 0x6C3776CDL;
static struct S1 g_241 = {6199};
static struct S1 *g_240[2] = {&g_241,&g_241};
static uint8_t g_273 = 1UL;
static uint8_t g_278 = 255UL;
static int16_t g_288 = 0xE9B9L;
static int32_t g_304 = (-2L);
static const int32_t *g_312 = &g_67[1];
static const int32_t **g_311 = &g_312;
static const int32_t *** const g_310 = &g_311;
static const int32_t *** const *g_309 = &g_310;
static union U2 g_321 = {0x3812A125L};
static union U2 *g_320 = &g_321;
static const uint16_t *g_363 = &g_139;
static const uint16_t **g_362 = &g_363;
static uint8_t g_377 = 0x20L;
static uint64_t g_453 = 0x84BA11D4C092481FLL;
static uint16_t g_520 = 0UL;
static int64_t g_525 = 0x3D8D72F7C87E3B5DLL;
static struct S0 *g_539 = &g_105;
static struct S0 **g_538 = &g_539;
static int16_t g_597[3] = {0x2B4EL,0x2B4EL,0x2B4EL};
static const int64_t g_640[6] = {0x7D70C282ABA05EC2LL,0x9CFDE55B9474084CLL,0x9CFDE55B9474084CLL,0x7D70C282ABA05EC2LL,0x9CFDE55B9474084CLL,0x9CFDE55B9474084CLL};
static int16_t g_657 = 0x9A08L;
static int8_t **g_690 = &g_99;
static int8_t g_695 = (-1L);
static uint32_t g_705 = 0x073DC0F2L;
static uint16_t *g_723[4] = {&g_520,&g_520,&g_520,&g_520};
static uint16_t **g_722 = &g_723[3];
static uint16_t ***g_721 = &g_722;
static union U3 g_761 = {0x2036B83BL};
static uint32_t g_766 = 0x96DD4881L;
static uint32_t g_768 = 1UL;
static uint32_t g_808 = 18446744073709551615UL;
static uint16_t ****g_846[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static const int8_t *g_869 = &g_695;
static const int8_t **g_868 = &g_869;
static const int8_t ***g_867[6][6] = {{&g_868,(void*)0,(void*)0,&g_868,(void*)0,&g_868},{&g_868,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_868,&g_868,(void*)0,&g_868,(void*)0,(void*)0},{&g_868,(void*)0,&g_868,&g_868,&g_868,&g_868},{(void*)0,(void*)0,(void*)0,&g_868,(void*)0,&g_868},{(void*)0,&g_868,&g_868,(void*)0,(void*)0,(void*)0}};
static const int8_t ****g_866 = &g_867[2][3];
static const int8_t *****g_865 = &g_866;
static int8_t * const ** const * const g_871 = &g_148;
static int8_t * const ** const * const *g_870 = &g_871;
static struct S1 **g_878[5] = {&g_240[0],&g_240[0],&g_240[0],&g_240[0],&g_240[0]};
static uint32_t g_900 = 18446744073709551615UL;
static int64_t g_928[4] = {0L,0L,0L,0L};
static uint32_t g_984 = 4294967288UL;



static uint32_t  func_1(void);
static int8_t ** func_2(int64_t  p_3);
static const int8_t * func_16(int8_t ** p_17, struct S1  p_18, int32_t  p_19);
static uint16_t  func_26(int8_t * p_27, int8_t *** p_28);
static const struct S0  func_36(const uint32_t  p_37, int64_t  p_38, int8_t ** p_39);
static int16_t  func_42(const int64_t  p_43, const uint16_t  p_44, const int8_t  p_45, int8_t *** p_46);
static uint16_t  func_47(uint16_t  p_48, int8_t ** p_49, int32_t * p_50, int16_t  p_51, const int8_t  p_52);
static uint16_t  func_53(union U3  p_54);




static uint32_t  func_1(void)
{ 
    int64_t *l_731 = &g_92[1];
    int8_t ****l_739 = &g_97[3][0];
    int8_t *****l_738 = &l_739;
    int32_t l_743 = 0x21E75D40L;
    uint64_t *l_744 = (void*)0;
    int32_t l_745 = 0L;
    int16_t *l_746 = &g_597[2];
    int16_t *l_747 = &g_100;
    int32_t l_748 = 6L;
    int32_t l_749 = 0xCEB325BEL;
    struct S1 l_770 = {3317};
    uint8_t *l_773[7];
    int8_t **l_809 = &g_99;
    int32_t l_841[2][7] = {{0x8EAA094FL,0x8EAA094FL,0x8EAA094FL,0x8EAA094FL,0x8EAA094FL,0x8EAA094FL,0x8EAA094FL},{1L,1L,1L,1L,1L,1L,1L}};
    uint16_t ****l_847[2];
    const int16_t l_887 = 0xC6D7L;
    struct S1 ***l_946[2][4][4];
    const uint32_t l_963 = 18446744073709551609UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_773[i] = &g_273;
    for (i = 0; i < 2; i++)
        l_847[i] = &g_721;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
                l_946[i][j][k] = &g_878[1];
        }
    }
    return g_768;
}



static int8_t ** func_2(int64_t  p_3)
{ 
    int64_t l_7 = 0x05B2906C902DAFBBLL;
    int8_t *l_21[2];
    int8_t **l_20 = &l_21[1];
    int8_t ***l_22[5];
    int8_t **l_23 = &l_21[0];
    struct S1 l_24 = {9567};
    uint16_t *l_678 = &g_139;
    struct S0 l_680[7] = {{2},{2},{2},{2},{2},{2},{2}};
    uint64_t *l_681 = &g_80;
    int32_t *l_694[1];
    int32_t l_713[7][3] = {{0x27BB8B33L,0x49A9E73DL,0x49A9E73DL},{0xAC81547CL,0x49A9E73DL,1L},{2L,0x27BB8B33L,(-2L)},{0xAC81547CL,0xAC81547CL,(-2L)},{0x27BB8B33L,2L,1L},{0x49A9E73DL,0xAC81547CL,0x49A9E73DL},{0x49A9E73DL,0x27BB8B33L,0xAC81547CL}};
    uint32_t *l_714 = &g_205;
    uint16_t ****l_724 = &g_721;
    int16_t l_725 = 1L;
    uint8_t *l_726[2][4][3] = {{{&g_273,&g_273,&g_273},{&g_278,&g_278,&g_278},{&g_273,&g_273,&g_273},{&g_278,&g_278,&g_278}},{{&g_273,&g_273,&g_273},{&g_278,&g_278,&g_278},{&g_273,&g_273,&g_273},{&g_278,&g_278,&g_278}}};
    int8_t **l_727 = &l_21[0];
    int8_t **l_728 = &l_21[1];
    int8_t **l_729[1][4][5] = {{{&l_21[1],&l_21[1],&l_21[1],&l_21[1],&l_21[1]},{(void*)0,&l_21[1],(void*)0,&l_21[1],&l_21[1]},{&l_21[1],&l_21[1],&l_21[1],&l_21[1],&l_21[1]},{&l_21[1],&l_21[1],&l_21[1],&l_21[1],&l_21[1]}}};
    int8_t **l_730 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_21[i] = &g_4;
    for (i = 0; i < 5; i++)
        l_22[i] = &l_20;
    for (i = 0; i < 1; i++)
        l_694[i] = &g_67[1];
    if ((safe_rshift_func_int16_t_s_u((l_7 < ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_3, g_4)), (safe_sub_func_uint16_t_u_u(((*l_678) = (safe_mod_func_int16_t_s_s(((&g_4 == (p_3 , func_16((l_23 = l_20), l_24, p_3))) , l_24.f0), 0x516CL))), p_3)))) , p_3)), p_3)))
    { 
        int8_t **l_679 = &g_99;
        return l_679;
    }
    else
    { 
        int16_t *l_688 = &g_100;
        int16_t *l_689 = &g_597[2];
        int32_t *l_693 = &g_67[4];
        int8_t * const *l_698 = &l_21[0];
        uint32_t *l_699 = &g_205;
        uint32_t *l_704 = &g_705;
        const int32_t l_706 = 8L;
        int32_t l_707 = 0L;
        (**g_538) = func_36((l_680[0] , ((void*)0 != l_681)), (l_24.f0 , (safe_lshift_func_int16_t_s_u(((*l_689) ^= ((*l_688) = ((1L <= ((safe_mod_func_int16_t_s_s(0L, (safe_add_func_uint16_t_u_u((0xBFL > p_3), p_3)))) & g_640[5])) == (**g_362)))), 4))), g_690);
        (*l_693) |= (0x8653L && (safe_rshift_func_int8_t_s_u(0x27L, 4)));
        (**g_310) = l_694[0];
        (*l_693) |= g_695;
        l_707 ^= (safe_sub_func_uint32_t_u_u((((((*g_148) != l_698) & ((*l_699) = (*l_693))) ^ 0x01C551F6L) < (((0UL == (p_3 > (safe_lshift_func_uint8_t_u_s(((((*l_704) &= ((safe_mul_func_uint8_t_u_u(((p_3 , (*l_693)) != 0x942CL), (***g_148))) ^ g_525)) < (-4L)) || p_3), (***g_148))))) || l_706) != p_3)), (*l_693)));
    }
    g_240[0] = &l_24;
    g_67[1] ^= (+((p_3 ^ (safe_rshift_func_uint8_t_u_u(p_3, 3))) != (g_377 = (((safe_div_func_uint32_t_u_u(l_713[3][1], ((*l_714) = g_105.f0))) < (safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s(0x9DL, (((**g_722) = (((((*l_724) = g_721) == &g_722) >= 0L) >= 6UL)) | g_241.f0))) > 5L) <= 1L) < g_525), 1UL)), l_725))) & 0x2FE4L))));
    return l_730;
}



static const int8_t * func_16(int8_t ** p_17, struct S1  p_18, int32_t  p_19)
{ 
    int8_t l_25[5][7] = {{0xFCL,0L,0x96L,1L,0xC4L,0x47L,0x42L},{1L,0x79L,0x71L,0x47L,0x47L,0x71L,0x79L},{0xFCL,1L,0L,0x4BL,6L,0x71L,0x95L},{(-2L),0L,(-1L),0x96L,(-4L),0x47L,(-4L)},{0x4BL,(-4L),(-4L),0x4BL,0x44L,0x95L,0x96L}};
    uint32_t l_523 = 4294967295UL;
    int64_t *l_526 = &g_525;
    const int8_t *l_563[6] = {&g_118[2][0],&g_321.f2,&g_321.f2,&g_118[2][0],&g_321.f2,&g_321.f2};
    int32_t * const l_564 = (void*)0;
    uint8_t l_601 = 0xA1L;
    int8_t **l_602 = &g_99;
    uint16_t *l_615 = &g_139;
    uint16_t **l_614 = &l_615;
    int8_t ****l_656 = &g_97[1][0];
    int32_t l_669 = 0L;
    int32_t l_671 = (-1L);
    int32_t l_672 = (-1L);
    int32_t l_673[4] = {0L,0L,0L,0L};
    int32_t *l_677 = &g_67[1];
    int i, j;
    for (p_19 = 0; (p_19 <= 4); p_19 += 1)
    { 
        int8_t *l_31 = (void*)0;
        int8_t **l_30 = &l_31;
        int8_t ***l_29 = &l_30;
        uint16_t *l_519 = &g_520;
        int64_t *l_524 = &g_525;
        int32_t l_527 = 0xCE44BD02L;
        int32_t l_569[3][3];
        union U2 *l_572[5];
        uint32_t *l_573[4];
        uint32_t *l_574 = &g_205;
        int32_t *l_577 = &g_67[1];
        uint8_t *l_582 = &g_377;
        int16_t *l_598 = &g_597[2];
        uint8_t *l_599 = (void*)0;
        uint8_t *l_600[3];
        int16_t *l_608 = (void*)0;
        uint8_t l_641 = 0x54L;
        int32_t l_670 = 3L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_569[i][j] = 1L;
        }
        for (i = 0; i < 5; i++)
            l_572[i] = &g_125;
        for (i = 0; i < 4; i++)
            l_573[i] = &g_205;
        for (i = 0; i < 3; i++)
            l_600[i] = &g_278;
    }
    (*l_677) ^= (-8L);
    return (*p_17);
}



static uint16_t  func_26(int8_t * p_27, int8_t *** p_28)
{ 
    int32_t *l_34 = &g_35;
    union U3 l_55 = {-5L};
    int8_t **l_57 = (void*)0;
    const uint64_t l_161 = 0x05FA698E65B96844LL;
    uint32_t *l_512 = &g_205;
    struct S0 *l_514 = &g_105;
    int32_t l_515 = 0x7D77C0FCL;
    (*l_34) = (safe_lshift_func_int8_t_s_s((*p_27), 6));
    (*l_514) = func_36(((*l_512) = (safe_mod_func_int16_t_s_s((func_42(g_35, func_47(func_53(l_55), l_57, &g_35, (safe_rshift_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((&g_4 == (**p_28)), g_35)) | (*l_34)), (*l_34))), (*p_27)), l_161, g_97[3][0]) | (*l_34)), (*l_34)))), (*l_34), (*p_28));
    (*l_514) = (*l_514);
    return l_515;
}



static const struct S0  func_36(const uint32_t  p_37, int64_t  p_38, int8_t ** p_39)
{ 
    const struct S0 l_513[4] = {{-3},{-3},{-3},{-3}};
    int i;
    return l_513[1];
}



static int16_t  func_42(const int64_t  p_43, const uint16_t  p_44, const int8_t  p_45, int8_t *** p_46)
{ 
    struct S0 l_167 = {-1};
    const struct S1 l_177 = {5574};
    int8_t *l_211 = (void*)0;
    uint16_t l_217[5];
    int32_t l_224 = 0x5F229590L;
    int32_t l_225[6];
    uint32_t l_248 = 0x6348B1DDL;
    union U2 l_289 = {0x8A31F780L};
    int32_t ***l_291 = &g_133;
    int32_t ****l_290[1][3][7] = {{{&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291}}};
    int64_t l_303 = 0L;
    const uint16_t *l_361 = &l_217[2];
    const uint16_t **l_360 = &l_361;
    const uint32_t l_385 = 0x352624A3L;
    uint32_t l_454 = 0x27B02F82L;
    int64_t l_482[5][7] = {{0x7E3C8A001506C4F2LL,0x82778B136FE55A46LL,0xFE7A89DF4B1FA80BLL,0x7E3C8A001506C4F2LL,(-7L),(-1L),0x82778B136FE55A46LL},{0L,2L,(-1L),(-1L),(-1L),2L,0L},{2L,0x82778B136FE55A46LL,0x833D4720638FEC1CLL,(-1L),0L,2L,(-1L)},{0x7E3C8A001506C4F2LL,(-7L),(-1L),0x82778B136FE55A46LL,0x82778B136FE55A46LL,(-1L),(-7L)},{0x82778B136FE55A46LL,0xC46A3FA146107DB0LL,0x833D4720638FEC1CLL,(-1L),0xC46A3FA146107DB0LL,(-1L),(-7L)}};
    int64_t l_507 = 0x2191CCB3189EFC51LL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_217[i] = 1UL;
    for (i = 0; i < 6; i++)
        l_225[i] = 8L;
    for (g_125.f3 = (-22); (g_125.f3 < 16); g_125.f3 = safe_add_func_int16_t_s_s(g_125.f3, 6))
    { 
        int8_t *l_166 = &g_118[0][0];
        int32_t l_180 = 0xDE1E5EACL;
        int32_t l_212[1];
        int32_t l_226 = 0x0C104093L;
        union U3 l_256[2] = {{8L},{8L}};
        int64_t l_257 = 0xB11C7D0813B3EB5ELL;
        const struct S1 *l_296 = &g_241;
        struct S0 l_333 = {-7};
        int i;
        for (i = 0; i < 1; i++)
            l_212[i] = 1L;
    }
    g_362 = ((safe_mul_func_uint16_t_u_u(5UL, (safe_sub_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s(1L, (safe_mul_func_uint8_t_u_u(0xB3L, (safe_mul_func_uint16_t_u_u(g_273, 0x5F81L)))))), (safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(g_35, ((safe_mod_func_uint8_t_u_u(g_125.f1, g_125.f3)) >= 0UL))), 3)))))) && (***g_148)) & g_205), g_67[4])))) , l_360);
lbl_376:
    (*g_133) = (*g_133);
    for (g_125.f2 = 0; (g_125.f2 < (-18)); --g_125.f2)
    { 
        int64_t *l_370 = &g_92[0];
        int8_t *l_371 = &g_118[2][0];
        int32_t l_382 = 0L;
        struct S1 l_461 = {2412};
        struct S0 *l_468 = &l_167;
        if ((p_44 >= (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((*l_371) &= ((g_67[1] & (((*l_370) |= ((void*)0 != &g_100)) >= 0x464219A541FFAFB9LL)) == (p_44 | (p_44 & 0x403EBEA6L)))), g_241.f0)), (**g_311)))))
        { 
            uint32_t l_383 = 0x515674DFL;
            int32_t *l_384[3][7][4] = {{{&l_289.f1,&g_321.f1,&l_289.f0,&l_289.f1},{&g_304,(void*)0,(void*)0,&l_289.f0},{&l_289.f0,(void*)0,(void*)0,&l_289.f1},{(void*)0,&g_321.f1,&l_289.f0,&l_289.f0},{&g_321.f1,&g_321.f1,&g_321.f1,&g_321.f1},{&l_289.f0,&l_289.f1,&g_321.f1,&l_289.f0},{(void*)0,&g_321.f1,&g_304,&g_321.f0}},{{(void*)0,(void*)0,(void*)0,&g_304},{&g_321.f1,&l_289.f0,&l_289.f1,&l_289.f0},{&l_289.f1,&g_321.f0,&g_321.f1,&l_289.f0},{&g_321.f1,&g_321.f1,&g_321.f1,(void*)0},{&l_289.f1,&g_321.f1,&l_289.f1,&l_289.f1},{&g_321.f1,&l_289.f0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_304,&g_321.f0}},{{(void*)0,&g_321.f1,&g_321.f1,&l_289.f0},{&l_289.f0,&g_321.f1,&g_321.f1,&l_289.f0},{&g_321.f1,&l_289.f1,&l_289.f0,(void*)0},{(void*)0,&l_289.f0,(void*)0,&g_321.f0},{&l_289.f0,&l_289.f0,(void*)0,&g_321.f0},{&g_304,&l_289.f0,&l_289.f0,(void*)0},{&l_289.f1,&l_289.f1,(void*)0,&l_289.f0}}};
            int32_t l_412 = 0x362B28E3L;
            uint16_t *l_422[7][7] = {{&g_139,&l_217[3],&l_217[3],&g_139,&l_217[3],&l_217[3],&g_139},{&l_217[3],&g_139,&l_217[3],&l_217[3],&g_139,&l_217[3],&l_217[3]},{&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139},{&g_139,&l_217[3],&l_217[3],&g_139,&l_217[3],&l_217[3],&g_139},{&l_217[3],&g_139,&l_217[3],&l_217[3],&g_139,&l_217[3],&l_217[3]},{&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139},{&g_139,&l_217[3],&l_217[3],&g_139,&l_217[3],&l_217[3],&g_139}};
            uint16_t **l_421[2];
            uint32_t *l_427 = &l_248;
            struct S0 *l_469[3][5][2] = {{{&g_105,&g_105},{(void*)0,(void*)0},{(void*)0,&g_105},{&g_105,&g_105},{&g_105,&g_105}},{{(void*)0,&g_105},{&g_105,&g_105},{&g_105,&g_105},{(void*)0,(void*)0},{&g_105,(void*)0}},{{(void*)0,&g_105},{&g_105,&g_105},{&g_105,&g_105},{(void*)0,(void*)0},{&g_105,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_421[i] = &l_422[4][3];
            for (g_91 = (-24); (g_91 <= 1); g_91++)
            { 
                for (l_224 = 13; (l_224 < (-23)); l_224--)
                { 
                    if (g_35)
                        goto lbl_376;
                    return g_377;
                }
            }
            if ((safe_div_func_int32_t_s_s(((((p_44 & ((safe_div_func_int16_t_s_s((-1L), (l_382 || ((g_278 <= l_383) == ((((g_304 = (((**l_291) = (**l_291)) != (void*)0)) , (*g_99)) > (***g_148)) > l_383))))) , 3UL)) > p_43) != l_385) , (*g_312)), g_118[2][0])))
            { 
                for (g_273 = 0; (g_273 > 15); g_273++)
                { 
                    if ((***g_310))
                        break;
                    if ((**g_311))
                        continue;
                }
            }
            else
            { 
                union U2 ** const l_409 = (void*)0;
                for (l_382 = 26; (l_382 <= 1); l_382 = safe_sub_func_int64_t_s_s(l_382, 5))
                { 
                    int8_t l_398[6] = {0x1FL,0x05L,0x1FL,0x1FL,0x05L,0x1FL};
                    uint32_t l_410 = 9UL;
                    int64_t l_411 = (-8L);
                    const struct S0 * const l_413 = &l_167;
                    const struct S0 *l_415 = &g_105;
                    const struct S0 **l_414 = &l_415;
                    uint16_t *l_419 = &l_217[2];
                    uint16_t **l_418 = &l_419;
                    int32_t l_420 = 0x4CE6D024L;
                    int i;
                    (***g_309) = (***g_309);
                    l_412 = (safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(0xB3F1L, (g_118[3][0] ^ (((((safe_mul_func_uint8_t_u_u(p_45, (0UL && l_398[5]))) , (safe_sub_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((-7L), 2)), ((void*)0 != l_409))), p_43)) && 255UL) & l_410), l_383)) , (*g_363)) > g_241.f0), l_398[0]))) & (-7L)) & g_118[4][0]) <= 0xAD2A6084L)))), l_411));
                    (*l_414) = l_413;
                    l_420 = (0xC15BA14C7D38188DLL | (g_67[1] | (((safe_rshift_func_uint16_t_u_u((&g_377 == &g_273), 13)) , l_418) != (void*)0)));
                }
            }
            l_412 |= (((void*)0 == (*g_309)) && (((((void*)0 != l_421[1]) == (safe_mod_func_uint32_t_u_u(((*l_427) = ((safe_rshift_func_int16_t_s_s(((**l_291) != &l_382), p_43)) > g_92[0])), 0x6A7C08CAL))) > 65528UL) , l_382));
            for (l_303 = (-15); (l_303 >= 25); l_303 = safe_add_func_uint64_t_u_u(l_303, 9))
            { 
                int32_t l_449[7][4][1] = {{{1L},{(-4L)},{(-4L)},{1L}},{{(-4L)},{(-4L)},{1L},{(-4L)}},{{(-4L)},{1L},{(-4L)},{(-4L)}},{{1L},{(-4L)},{(-4L)},{1L}},{{(-4L)},{(-4L)},{1L},{(-4L)}},{{(-4L)},{1L},{(-4L)},{(-4L)}},{{1L},{(-4L)},{(-4L)},{1L}}};
                int32_t l_451 = 1L;
                int32_t l_462 = 0xA0E87853L;
                struct S0 l_463 = {3};
                uint8_t *l_474 = &g_278;
                int i, j, k;
            }
        }
        else
        { 
            union U2 l_490 = {-1L};
            uint64_t *l_504 = &g_453;
            int16_t *l_508 = &g_288;
            uint32_t *l_509 = &g_205;
            int32_t l_510 = (-3L);
            uint32_t **l_511 = &l_509;
            l_510 |= (g_67[1] = ((*g_312) & ((*l_509) = ((18446744073709551614UL >= (safe_mul_func_int8_t_s_s(((l_490 , ((((((safe_div_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((l_490.f2 & (((*l_508) = (safe_rshift_func_int16_t_s_u(((((+(p_45 & ((safe_sub_func_uint8_t_u_u(g_35, (safe_rshift_func_uint8_t_u_s(((((--(*l_504)) && ((((((((-10L) != 1UL) , p_44) != 1UL) ^ p_45) && g_321.f2) != 18446744073709551615UL) ^ l_461.f0)) == l_490.f2) < (*g_99)), l_507)))) | l_490.f0))) && 0x0B20C2C47D8770A7LL) , (-1L)) | 0x9AL), 2))) , p_45)), l_490.f0)) && p_44), g_321.f2)) > l_382), g_241.f0)) & (**g_362)) > l_490.f1) | (*g_363)) && p_44) || p_44)) , 0x4DL), 251UL))) != p_43))));
            l_511 = &l_509;
            (*g_133) = (**l_291);
        }
        for (g_453 = 0; (g_453 <= 0); g_453 += 1)
        { 
            return p_43;
        }
        return l_382;
    }
    return g_139;
}



static uint16_t  func_47(uint16_t  p_48, int8_t ** p_49, int32_t * p_50, int16_t  p_51, const int8_t  p_52)
{ 
    int16_t l_72 = (-3L);
    int32_t l_74 = 5L;
    int32_t l_75 = (-1L);
    int32_t l_76 = (-5L);
    int32_t l_77 = 1L;
    int32_t l_78 = 4L;
    int32_t l_79 = 8L;
    int8_t ** const l_101 = &g_99;
    struct S0 l_106 = {-6};
    for (p_48 = 0; (p_48 != 50); p_48 = safe_add_func_int32_t_s_s(p_48, 5))
    { 
        int64_t l_68 = 0xE3C69BB0CEA4F543LL;
        int32_t l_69 = 7L;
        int32_t l_70 = 0x2A889E4EL;
        int32_t l_71[3];
        int8_t ***l_102 = &g_98[4];
        int8_t *l_119 = &g_4;
        int i;
        for (i = 0; i < 3; i++)
            l_71[i] = 1L;
        for (p_51 = (-13); (p_51 <= 3); p_51 = safe_add_func_int32_t_s_s(p_51, 6))
        { 
            int32_t *l_66[5];
            int8_t l_73 = 0xAFL;
            uint64_t *l_93 = &g_80;
            struct S0 l_96 = {1};
            int i;
            for (i = 0; i < 5; i++)
                l_66[i] = &g_67[1];
            g_80--;
            g_100 ^= (((safe_mod_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((l_69 ^= ((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((g_91 = 0x2C7FL), (-1L))), 11)) != g_67[1])), (((g_92[0] = (g_80 && g_4)) || (((++(*l_93)) , l_96) , ((void*)0 != g_97[3][0]))) != 0xA56D442F441AF38FLL))) >= g_67[0]), p_52)) == l_71[0]) != g_67[1]);
        }
        (*l_102) = l_101;
        for (g_91 = 0; (g_91 <= 14); g_91 = safe_add_func_int16_t_s_s(g_91, 4))
        { 
            int8_t *l_117 = &g_118[3][0];
            int32_t *l_120 = &l_79;
            struct S0 l_130 = {-7};
            int8_t * const **l_151 = &g_149;
            uint32_t l_158 = 4294967291UL;
            int32_t *l_160 = &l_69;
            l_106 = (g_35 , g_105);
            if (((*l_120) &= ((((safe_mul_func_uint8_t_u_u((((g_67[1] >= ((l_78 , (safe_mul_func_int16_t_s_s(g_67[3], (((*p_50) < (safe_unary_minus_func_uint64_t_u((safe_sub_func_uint32_t_u_u(l_106.f0, (safe_rshift_func_uint8_t_u_u((((*l_117) = (~1UL)) | ((l_119 == (void*)0) < 0x92A5F0EF6F4DFAC9LL)), g_67[4]))))))) ^ g_91)))) , 0x8A2DDD9115465196LL)) ^ p_51) && l_76), l_75)) , (void*)0) == &g_80) , 0x1763EEA7L)))
            { 
                int32_t **l_121 = &l_120;
                (*l_121) = &g_67[1];
            }
            else
            { 
                int32_t *l_126 = &l_77;
                uint16_t *l_138 = &g_139;
                int8_t * const ***l_150[1][7] = {{&g_148,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148}};
                int32_t *l_155 = &l_78;
                int i, j;
                if (((void*)0 != &g_67[1]))
                { 
                    int32_t **l_123 = &l_120;
                    int32_t ***l_122[5] = {&l_123,&l_123,&l_123,&l_123,&l_123};
                    int32_t **l_124 = &l_120;
                    int i;
                    l_124 = &p_50;
                }
                else
                { 
                    int32_t **l_127 = &l_120;
                    (*l_120) |= (g_125 , (-1L));
                    p_50 = ((*l_127) = (l_126 = &l_75));
                    (*l_127) = p_50;
                    (*l_126) = (safe_mod_func_uint64_t_u_u(g_125.f1, 18446744073709551613UL));
                }
                for (l_76 = 0; (l_76 <= 3); l_76 += 1)
                { 
                    struct S0 *l_131 = &l_106;
                    struct S0 *l_132 = &l_130;
                    int32_t l_135 = 7L;
                    int i;
                    (*l_132) = ((*l_131) = l_130);
                    l_135 ^= (((*l_120) , ((void*)0 == g_133)) | g_125.f1);
                    l_77 &= (*p_50);
                    (*l_126) ^= ((g_98[(l_76 + 1)] == ((safe_lshift_func_uint8_t_u_u(((void*)0 == &g_80), 7)) , &l_117)) || 0x63L);
                }
                (*l_155) = ((++(*l_138)) & ((safe_rshift_func_uint8_t_u_u(0x24L, ((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((*l_126) = ((l_151 = g_148) != &p_49)), (p_51 | (((safe_add_func_int32_t_s_s((0UL & (((((!0xD0DCD5FEL) | 1UL) , p_50) != (*g_133)) == 0xA9CEL)), l_72)) > p_51) & 0x3E3C2ACCL)))), 0x335BL)) > p_51))) <= p_48));
            }
            (*l_160) ^= ((***g_148) <= ((((p_52 , g_125.f2) , (safe_rshift_func_int8_t_s_s(l_71[0], l_158))) && (safe_unary_minus_func_int16_t_s(((*l_120) == (l_77 || 0x49C76149L))))) , p_51));
        }
    }
    return l_79;
}



static uint16_t  func_53(union U3  p_54)
{ 
    int64_t l_56[5][6][5] = {{{0x45F0A86225270510LL,1L,0x45F0A86225270510LL,0xAC46406CCCE42BF6LL,(-6L)},{(-7L),(-7L),(-9L),0x8B1495DD68647D02LL,(-4L)},{0L,1L,0L,0xAC46406CCCE42BF6LL,0x9FF1DB06D673C042LL},{(-7L),0xAB95DFEA44E0C42ELL,(-9L),(-4L),(-4L)},{0x45F0A86225270510LL,1L,0x45F0A86225270510LL,0xAC46406CCCE42BF6LL,(-6L)},{(-7L),(-7L),(-9L),0x8B1495DD68647D02LL,(-4L)}},{{0L,1L,0L,0xAC46406CCCE42BF6LL,0x9FF1DB06D673C042LL},{(-7L),0xAB95DFEA44E0C42ELL,(-9L),(-4L),(-4L)},{0x45F0A86225270510LL,1L,0x45F0A86225270510LL,0xAC46406CCCE42BF6LL,(-6L)},{(-7L),(-7L),(-9L),0x8B1495DD68647D02LL,(-4L)},{0L,1L,0L,0xAC46406CCCE42BF6LL,0x9FF1DB06D673C042LL},{(-7L),0xAB95DFEA44E0C42ELL,(-9L),(-4L),(-4L)}},{{0x45F0A86225270510LL,1L,0x45F0A86225270510LL,0xAC46406CCCE42BF6LL,(-6L)},{(-7L),(-7L),(-9L),0x8B1495DD68647D02LL,(-4L)},{0L,1L,0L,0xAC46406CCCE42BF6LL,0x9FF1DB06D673C042LL},{(-7L),0xAB95DFEA44E0C42ELL,(-9L),(-4L),(-4L)},{0x45F0A86225270510LL,1L,0x45F0A86225270510LL,0xAC46406CCCE42BF6LL,(-6L)},{(-7L),(-7L),(-9L),0x8B1495DD68647D02LL,(-4L)}},{{0L,1L,0L,0xAC46406CCCE42BF6LL,0x9FF1DB06D673C042LL},{(-7L),0xAB95DFEA44E0C42ELL,(-9L),(-4L),(-4L)},{0x45F0A86225270510LL,1L,0x45F0A86225270510LL,0xAC46406CCCE42BF6LL,(-6L)},{(-7L),(-7L),(-9L),0x8B1495DD68647D02LL,(-4L)},{0L,1L,0L,0xAC46406CCCE42BF6LL,0x9FF1DB06D673C042LL},{(-7L),0xAB95DFEA44E0C42ELL,(-9L),(-4L),(-4L)}},{{0x45F0A86225270510LL,1L,0x45F0A86225270510LL,0xAC46406CCCE42BF6LL,(-6L)},{0xE0BBE0E206F6EC37LL,(-10L),0xFD17BA7DA828C040LL,(-9L),(-7L)},{(-7L),0x39980A6F85D55A9DLL,(-7L),(-4L),0L},{0xE0BBE0E206F6EC37LL,(-10L),0xFD17BA7DA828C040LL,(-7L),(-7L)},{(-5L),0x39980A6F85D55A9DLL,(-5L),(-4L),0x45F0A86225270510LL},{0xE0BBE0E206F6EC37LL,(-10L),0xFD17BA7DA828C040LL,(-9L),(-7L)}}};
    int i, j, k;
    return l_56[4][5][1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_67[i], "g_67[i]", print_hash_value);

    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_92[i], "g_92[i]", print_hash_value);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_118[i][j], "g_118[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_125.f0, "g_125.f0", print_hash_value);
    transparent_crc(g_125.f1, "g_125.f1", print_hash_value);
    transparent_crc(g_125.f2, "g_125.f2", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_241.f0, "g_241.f0", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_321.f0, "g_321.f0", print_hash_value);
    transparent_crc(g_321.f1, "g_321.f1", print_hash_value);
    transparent_crc(g_321.f2, "g_321.f2", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_597[i], "g_597[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_640[i], "g_640[i]", print_hash_value);

    }
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_761.f0, "g_761.f0", print_hash_value);
    transparent_crc(g_761.f1, "g_761.f1", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_928[i], "g_928[i]", print_hash_value);

    }
    transparent_crc(g_984, "g_984", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
