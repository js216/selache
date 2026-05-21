// SPDX-License-Identifier: MIT
// cctest_csmith_c471ccc7.c --- cctest case csmith_c471ccc7 (csmith seed 3295792327)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6cda1e8a */

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

// Options:   -s 3295792327 -o /tmp/csmith_gen_2dcfvf2r/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
};

union U5 {
   uint32_t  f0;
   const int64_t  f1;
};

union U6 {
   int32_t  f0;
   struct S0  f1;
};

union U7 {
   const uint32_t  f0;
   struct S0  f1;
   const uint8_t  f2;
   struct S0  f3;
};

union U8 {
   const int64_t  f0;
};


static int32_t g_2 = 1L;
static int32_t g_6 = 0L;
static int32_t g_7 = 0x4B0BF246L;
static union U6 g_14 = {0x562B994BL};
static int32_t g_51 = 1L;
static int32_t g_83 = 0x30B13CFFL;
static struct S0 g_86[2][5] = {{{0x80B3897EL},{0x80B3897EL},{0x80B3897EL},{0x80B3897EL},{0x80B3897EL}},{{-5L},{-5L},{-5L},{-5L},{-5L}}};
static uint8_t g_101 = 0xA0L;
static uint64_t g_102 = 0xA3708275CA95679DLL;
static int32_t g_107 = 2L;
static union U5 g_138 = {0UL};
static union U7 g_141 = {0xB90AA376L};
static uint32_t g_146 = 18446744073709551615UL;
static int8_t g_167 = 0xCBL;



static uint32_t  func_1(void);
static struct S0  func_12(union U6  p_13);
static int32_t  func_19(int32_t  p_20, union U1  p_21, struct S0  p_22, int32_t  p_23);
static uint32_t  func_24(uint32_t  p_25, int16_t  p_26);




static uint32_t  func_1(void)
{ 
    int8_t l_11 = 0x0CL;
    struct S0 l_108[1][2] = {{{1L},{1L}}};
    uint16_t l_121 = 65534UL;
    int32_t l_122 = 0xA315420AL;
    int16_t l_123 = 0x3CEDL;
    int32_t l_126 = 0x7A6C7913L;
    uint32_t l_144 = 8UL;
    int32_t l_145 = 7L;
    uint64_t l_158 = 0UL;
    uint16_t l_185 = 0xB3DBL;
    int i, j;
    for (g_2 = 0; (g_2 < 13); g_2 = safe_add_func_uint64_t_u_u(g_2, 3))
    { 
        struct S0 l_5[1][3][1] = {{{{0L}},{{0L}},{{0L}}}};
        int32_t l_10 = 1L;
        int32_t l_124[4] = {0xFD513F79L,0xFD513F79L,0xFD513F79L,0xFD513F79L};
        int32_t l_125 = 0L;
        int i, j, k;
        for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
        { 
            uint32_t l_100[2];
            union U8 l_105 = {0x12FA99DB6AB3148BLL};
            int i;
            for (i = 0; i < 2; i++)
                l_100[i] = 0xB8A71A37L;
            for (g_7 = 0; (g_7 <= 0); g_7 += 1)
            { 
                int i, j, k;
                l_11 = (safe_rshift_func_uint8_t_u_u(l_10, 3));
                l_5[g_6][(g_7 + 1)][g_7] = func_12(g_14);
                g_102 |= ((g_101 &= ((g_86[1][0].f0 != 0x5332L) ^ (safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((!(g_7 > (safe_add_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((func_12(g_14) , g_86[1][0].f0), 2)) > 0xB8AB48F0L), l_100[0])) , l_100[0]), l_10)))), l_10)) | 0x6A2EEAF0C93A8B8ELL), g_2)) > g_2), l_100[0])))) && l_10);
            }
            g_7 = ((safe_mul_func_int8_t_s_s(l_11, (l_105 , (((g_107 = ((~(g_83 ^ (((g_51 < g_2) > l_100[0]) >= 0x37L))) || l_100[1])) <= l_11) && l_11)))) == 8UL);
            for (g_14.f1.f0 = 0; (g_14.f1.f0 >= 0); g_14.f1.f0 -= 1)
            { 
                return l_100[0];
            }
        }
        l_108[0][0] = func_12(g_14);
        l_126 &= (safe_sub_func_uint32_t_u_u((((((((((l_125 ^= ((safe_rshift_func_uint16_t_u_u(l_11, 15)) < (((safe_mod_func_int32_t_s_s((l_10 = ((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((0xF93A2F2406E9E1E6LL < ((l_122 |= ((l_121 = 0L) > g_86[1][0].f0)) | l_10)), g_7)), g_14.f0)), g_101)) >= g_6)), l_123)) | l_124[0]) | 0x8215L))) , 0x9321C95261AE0F1BLL) < l_11) & l_124[0]) <= 0x4B5AL) || 0UL) == 4294967295UL) | g_14.f1.f0) & g_101), l_123));
    }
    for (l_121 = 28; (l_121 < 23); l_121--)
    { 
        int8_t l_131 = 0x04L;
        uint32_t l_165 = 0x2A8B0C0BL;
        int32_t l_166 = 0x7B1C5A9DL;
        struct S0 l_177 = {0xD0950DC5L};
        g_7 = (safe_mul_func_int16_t_s_s(l_131, 65533UL));
        if ((((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((g_146 = (safe_add_func_uint32_t_u_u(l_108[0][0].f0, (l_126 ^= (g_138 , (safe_add_func_int32_t_s_s((l_144 = (g_141 , (safe_add_func_uint16_t_u_u(g_102, l_123)))), l_145))))))) <= l_11), l_131)), g_107)) < g_86[1][0].f0) < g_2))
        { 
            int32_t l_151 = 0x3505F385L;
            struct S0 l_170 = {4L};
            if ((safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s(l_151, g_138.f0)), (safe_sub_func_int8_t_s_s(1L, ((safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(18446744073709551611UL, g_141.f0)) > l_151), l_126)) <= l_158))))))
            { 
                return l_131;
            }
            else
            { 
                int32_t l_168 = 0xCAA5DFADL;
                uint64_t l_169 = 0x274765F4E788166BLL;
                uint16_t l_171[3][3] = {{0xA16EL,0xA16EL,0xA16EL},{0x27D1L,0x27D1L,0x27D1L},{0xA16EL,0xA16EL,0xA16EL}};
                int i, j;
                l_169 &= ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(1UL, 7)), ((safe_mod_func_int64_t_s_s(l_165, (g_167 = ((l_166 = 0x20EFL) ^ g_2)))) , l_168))) , 0xCC82D11AL);
                l_170 = l_108[0][1];
                l_171[0][0]--;
            }
        }
        else
        { 
            uint64_t l_174 = 18446744073709551615UL;
            l_174 = 1L;
            for (l_166 = 0; (l_166 == (-12)); l_166 = safe_sub_func_uint8_t_u_u(l_166, 4))
            { 
                l_177 = l_108[0][1];
                if (l_166)
                    break;
                l_145 |= ((g_101 = 0xE3L) >= 0x29L);
            }
            l_126 |= (safe_mul_func_uint8_t_u_u((18446744073709551612UL < ((((~(safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((((l_185 <= ((0x7483L || (l_145 = (safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(g_83, l_121)) > g_167), 4)))) < g_138.f0)) > 0x4EFAD5DA70D91B73LL) >= 0x84L), g_141.f1.f0)) | 0UL) , l_165), 0))) > g_138.f0) && g_14.f1.f0) < g_167)), g_51));
        }
    }
    return g_141.f3.f0;
}



static struct S0  func_12(union U6  p_13)
{ 
    int8_t l_28 = 0x65L;
    const uint32_t l_29 = 0UL;
    union U1 l_31 = {0xC760FC5CL};
    int32_t l_84 = 0x7F45EA77L;
    struct S0 l_85 = {0xDC0630FCL};
    l_84 = (safe_mod_func_int64_t_s_s((g_83 = (safe_rshift_func_int16_t_s_u((func_19((func_24((((!g_14.f1.f0) < (l_28 <= ((((p_13.f0 && l_28) <= g_2) != p_13.f1.f0) , l_29))) != l_28), g_2) , p_13.f0), l_31, p_13.f1, p_13.f0) & l_29), 7))), g_6));
    l_85 = l_85;
    l_85 = g_14.f1;
    return g_86[1][0];
}



static int32_t  func_19(int32_t  p_20, union U1  p_21, struct S0  p_22, int32_t  p_23)
{ 
    uint64_t l_34 = 0UL;
    struct S0 l_35 = {0x29CC0276L};
    uint32_t l_81 = 0UL;
    for (p_22.f0 = 0; (p_22.f0 < 17); p_22.f0 = safe_add_func_uint64_t_u_u(p_22.f0, 6))
    { 
        uint32_t l_36 = 1UL;
        uint8_t l_53 = 6UL;
        int32_t l_79 = 1L;
        struct S0 l_82 = {1L};
        if (l_34)
        { 
            l_35 = g_14.f1;
        }
        else
        { 
            int32_t l_80[3][2];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_80[i][j] = 0x4E8D7FF0L;
            }
            --l_36;
            for (p_21.f0 = 0; (p_21.f0 <= 60); p_21.f0 = safe_add_func_int64_t_s_s(p_21.f0, 7))
            { 
                uint32_t l_48 = 0x48FFD526L;
                int32_t l_52 = 0x870B3783L;
                l_53 = ((p_20 = (safe_rshift_func_int8_t_s_u(0x82L, 4))) > (safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((!l_48) >= ((l_52 = ((safe_rshift_func_uint8_t_u_u(((g_51 = (0x13F8L < g_6)) == g_7), l_48)) & g_14.f0)) ^ g_14.f1.f0)), l_35.f0)), g_2)));
                g_51 = ((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_51 & ((safe_rshift_func_uint8_t_u_u((l_79 |= ((safe_mul_func_uint8_t_u_u((!(safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(0xA9D242EC213DB237LL, (((safe_div_func_int32_t_s_s((0xFCL && (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((g_14.f0 < l_48), (-5L))), 0x8243C00EL))), g_14.f0)) || p_20) != p_20))), g_6)) >= p_21.f0), 2L))), 1L)) | g_14.f1.f0)), 5)) , l_80[2][1])), 5)), l_53)) != l_81) | g_6), g_2)) > p_22.f0), g_2)) >= 0xA73DL);
            }
            return l_79;
        }
        if (p_23)
            continue;
        l_82 = g_14.f1;
    }
    return p_21.f0;
}



static uint32_t  func_24(uint32_t  p_25, int16_t  p_26)
{ 
    struct S0 l_30 = {5L};
    l_30 = (g_14.f1 = l_30);
    return p_26;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1.f0, "g_14.f1.f0", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_86[i][j].f0, "g_86[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_141.f1.f0, "g_141.f1.f0", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_141.f3.f0, "g_141.f3.f0", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
