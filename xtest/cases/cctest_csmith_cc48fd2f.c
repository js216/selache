// SPDX-License-Identifier: MIT
// cctest_csmith_cc48fd2f.c --- cctest case csmith_cc48fd2f (csmith seed 3427335471)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf1fcf87e */

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

// Options:   -s 3427335471 -o /tmp/csmith_gen_2v1sadxq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int64_t  f0;
   uint16_t  f1;
   struct S0  f2;
   int64_t  f3;
   struct S0  f4;
};
#pragma pack(pop)

struct S2 {
   uint32_t  f0;
   int64_t  f1;
};

union U3 {
   struct S0  f0;
};

union U4 {
   const uint8_t  f0;
   int64_t  f1;
   uint16_t  f2;
   int32_t  f3;
};

union U5 {
   int16_t  f0;
   int64_t  f1;
   int16_t  f2;
};


static uint32_t g_2 = 5UL;
static const struct S1 g_18 = {-1L,3UL,{0xD92426F3L},0x911B9C6FEC1B16EBLL,{1UL}};
static struct S2 g_19 = {0x0BE6286CL,0xA81D5F49DCB7BE74LL};
static int32_t g_29[5][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
static union U4 g_43 = {1UL};
static uint32_t g_128 = 4294967294UL;
static struct S0 g_157 = {4294967295UL};
static int32_t g_177 = 0xB0C8D9F5L;



static uint32_t  func_1(void);
static uint64_t  func_8(uint32_t  p_9, uint16_t  p_10, const struct S1  p_11, struct S2  p_12, int64_t  p_13);
static struct S0  func_20(int8_t  p_21);
static int32_t  func_22(uint32_t  p_23, struct S2  p_24, uint64_t  p_25, const uint32_t  p_26);




static uint32_t  func_1(void)
{ 
    int64_t l_3 = 5L;
    int32_t l_17 = 0xB91E60E7L;
    int8_t l_175[3][2] = {{1L,1L},{1L,1L},{1L,1L}};
    int32_t l_176 = 0xF4B4AC7EL;
    int i, j;
    l_3 |= g_2;
    for (g_2 = 0; (g_2 == 14); ++g_2)
    { 
        int64_t l_14 = 0x3403CA955A63A74ALL;
        int32_t l_159 = 0x6D42877FL;
        if ((safe_mod_func_int64_t_s_s(((l_159 = func_8((l_17 = (l_14 , ((safe_div_func_int16_t_s_s(g_2, g_2)) != (-1L)))), g_2, g_18, g_19, g_19.f1)) != g_18.f1), 7UL)))
        { 
            int32_t l_174 = 0x6DDA51A4L;
            for (l_14 = 0; l_14 < 5; l_14 += 1)
            {
                for (g_43.f2 = 0; g_43.f2 < 3; g_43.f2 += 1)
                {
                    g_29[l_14][g_43.f2] = 0x52A6C9F1L;
                }
            }
            l_176 &= (safe_add_func_int16_t_s_s(((l_175[1][1] ^= ((safe_lshift_func_int8_t_s_u(((g_2 && (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0xDFL, ((((safe_mod_func_int64_t_s_s((g_19.f1 = ((((safe_add_func_uint64_t_u_u(((((safe_mod_func_int32_t_s_s((g_29[3][0] = ((g_18.f4.f0 , (((g_43.f2 = 0xB54CL) , g_29[0][0]) | g_18.f3)) == l_3)), g_18.f4.f0)) , l_17) && g_19.f1) > 1L), g_19.f0)) , 0x2FC288D6L) == g_18.f2.f0) >= l_159)), 18446744073709551615UL)) & 0x96L) < l_174) ^ g_18.f3))), 2UL))) & g_18.f0), 5)) <= g_18.f2.f0)) && 0x6ADF050DL), (-1L)));
        }
        else
        { 
            union U3 l_178[5][4][4] = {{{{{0x4F3C4D6EL}},{{0xEA70BF62L}},{{0x783F6A3DL}},{{0xBA8154FDL}}},{{{0xBA8154FDL}},{{4294967295UL}},{{1UL}},{{0xEA70BF62L}}},{{{4294967288UL}},{{1UL}},{{1UL}},{{4294967288UL}}},{{{0xBA8154FDL}},{{4294967293UL}},{{0x783F6A3DL}},{{0xE805CA6DL}}}},{{{{0x4F3C4D6EL}},{{4294967295UL}},{{0xE805CA6DL}},{{4294967295UL}}},{{{0xE805CA6DL}},{{4294967295UL}},{{4294967291UL}},{{4294967295UL}}},{{{1UL}},{{0x783F6A3DL}},{{4294967295UL}},{{0xEA70BF62L}}},{{{0xE805CA6DL}},{{4294967295UL}},{{0x4F3C4D6EL}},{{4294967295UL}}}},{{{{4294967295UL}},{{4294967288UL}},{{1UL}},{{1UL}}},{{{4294967295UL}},{{4294967295UL}},{{0x4F3C4D6EL}},{{4294967293UL}}},{{{0xE805CA6DL}},{{1UL}},{{4294967295UL}},{{4294967295UL}}},{{{4294967288UL}},{{0xBA8154FDL}},{{0xD3F73289L}},{{4294967295UL}}}},{{{{0xEA70BF62L}},{{0xBA8154FDL}},{{0xEA70BF62L}},{{4294967295UL}}},{{{0xBA8154FDL}},{{1UL}},{{4294967291UL}},{{4294967293UL}}},{{{4294967293UL}},{{4294967295UL}},{{4294967288UL}},{{1UL}}},{{{4294967295UL}},{{4294967288UL}},{{4294967288UL}},{{4294967295UL}}}},{{{{4294967293UL}},{{4294967295UL}},{{4294967291UL}},{{0xEA70BF62L}}},{{{0xBA8154FDL}},{{0x783F6A3DL}},{{0xEA70BF62L}},{{0x4F3C4D6EL}}},{{{0xEA70BF62L}},{{0x4F3C4D6EL}},{{0xD3F73289L}},{{0x4F3C4D6EL}}},{{{4294967288UL}},{{0x783F6A3DL}},{{4294967295UL}},{{0xEA70BF62L}}}}};
            int i, j, k;
            for (g_43.f3 = 0; (g_43.f3 <= 2); g_43.f3 += 1)
            { 
                int i, j;
                g_29[(g_43.f3 + 2)][g_43.f3] = (((g_177 |= g_29[(g_43.f3 + 2)][g_43.f3]) < (l_178[2][2][3] , (7L && (0x0EL <= g_43.f3)))) & l_178[2][2][3].f0.f0);
            }
        }
    }
    return l_3;
}



static uint64_t  func_8(uint32_t  p_9, uint16_t  p_10, const struct S1  p_11, struct S2  p_12, int64_t  p_13)
{ 
    uint64_t l_158 = 0x568E968EFB81438DLL;
    g_157 = func_20(p_12.f0);
    return l_158;
}



static struct S0  func_20(int8_t  p_21)
{ 
    int32_t l_30 = 0L;
    const union U5 l_102[5] = {{0L},{0L},{0L},{0L},{0L}};
    int32_t l_105 = 1L;
    uint8_t l_116 = 0x32L;
    struct S2 l_141[1] = {{9UL,0x0600712A71348BD3LL}};
    struct S0 l_156 = {0xD08F565DL};
    int i;
    if (func_22(g_2, g_19, (safe_rshift_func_int16_t_s_u((g_29[0][1] ^= (-1L)), l_30)), p_21))
    { 
        int16_t l_117 = 0x1957L;
        int32_t l_119 = (-4L);
        uint32_t l_138[3];
        int i;
        for (i = 0; i < 3; i++)
            l_138[i] = 0xA57FB1E3L;
lbl_118:
        g_29[3][1] |= (safe_sub_func_uint32_t_u_u((l_102[1] , (g_19.f1 , (safe_rshift_func_int16_t_s_s((g_18.f4.f0 != (l_105 ^= (g_19.f0 = l_30))), 9)))), 0x95DB7A71L));
        for (g_43.f3 = 0; (g_43.f3 <= 2); g_43.f3 += 1)
        { 
            l_30 &= (safe_mod_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s((g_29[4][0] = (((l_102[1].f2 <= (safe_lshift_func_int16_t_s_u((g_19.f0 <= ((l_116 &= (g_43.f3 >= (safe_mod_func_uint16_t_u_u(l_105, g_18.f4.f0)))) | g_2)), g_43.f2))) >= l_117) > p_21)), (-7L))), p_21)) > p_21), l_102[1].f0));
            for (l_117 = 2; (l_117 >= 0); l_117 -= 1)
            { 
                int i, j;
                g_29[(l_117 + 2)][g_43.f3] = g_29[g_43.f3][l_117];
                if (g_19.f1)
                    goto lbl_118;
                l_119 = l_30;
            }
        }
        if ((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u(0x152B013A5848C367LL, p_21)) | (safe_add_func_uint64_t_u_u((--g_128), ((safe_add_func_int32_t_s_s(0x76BCC78BL, (((g_43 , 0xFFDE101195FD4EE7LL) && l_117) & 0xE8L))) < (-1L))))) | (-1L)), 0UL)) , g_43.f3), l_117)))
        { 
            for (g_43.f2 = 0; (g_43.f2 <= 19); g_43.f2 = safe_add_func_uint16_t_u_u(g_43.f2, 9))
            { 
                int16_t l_135[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_135[i] = (-1L);
                if (l_135[0])
                    break;
                l_30 |= g_19.f0;
            }
            for (g_19.f1 = (-27); (g_19.f1 < 0); g_19.f1 = safe_add_func_int8_t_s_s(g_19.f1, 3))
            { 
                if (l_117)
                    break;
            }
        }
        else
        { 
            struct S0 l_148 = {0xBEA04750L};
            for (g_43.f1 = 2; (g_43.f1 >= 0); g_43.f1 -= 1)
            { 
                ++l_138[0];
                l_141[0] = g_19;
            }
            g_29[0][1] = (safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((p_21 < 4294967295UL), (((l_105 = ((((l_148 , (safe_sub_func_uint8_t_u_u((l_30 &= ((safe_div_func_uint64_t_u_u((0x82BCC5AAL && l_119), 9L)) >= p_21)), p_21))) ^ l_148.f0) == l_119) > l_138[0])) <= g_19.f0) , l_148.f0))) > l_102[1].f0), g_43.f2)), g_43.f0));
        }
    }
    else
    { 
        uint16_t l_153 = 0xBE0CL;
        l_153--;
    }
    return l_156;
}



static int32_t  func_22(uint32_t  p_23, struct S2  p_24, uint64_t  p_25, const uint32_t  p_26)
{ 
    int8_t l_44[3];
    int16_t l_54 = (-9L);
    int32_t l_56 = 0x8612730CL;
    int32_t l_60 = 0x9084C010L;
    int32_t l_62 = 9L;
    int32_t l_68[3];
    int8_t l_69 = 0xB3L;
    uint8_t l_78 = 0x5EL;
    union U3 l_81 = {{0xAE622E34L}};
    union U4 l_84 = {0xE4L};
    uint32_t l_94 = 0UL;
    int i;
    for (i = 0; i < 3; i++)
        l_44[i] = 7L;
    for (i = 0; i < 3; i++)
        l_68[i] = 0x62E52AB2L;
    for (p_24.f1 = 0; (p_24.f1 >= (-17)); --p_24.f1)
    { 
        int16_t l_45[1];
        int32_t l_52 = 0L;
        int32_t l_55 = (-8L);
        int32_t l_58 = 0x44AADAB7L;
        int16_t l_61 = 0x7DC8L;
        int32_t l_65 = 0x1DEE1550L;
        int32_t l_66 = 1L;
        int32_t l_67 = (-1L);
        int32_t l_70 = (-10L);
        int32_t l_72 = 1L;
        int32_t l_73 = 6L;
        int32_t l_74 = 4L;
        int32_t l_76 = 0x5370A27EL;
        int32_t l_77[2][4][1] = {{{0xA2EA94A5L},{1L},{0xA2EA94A5L},{1L}},{{0xA2EA94A5L},{1L},{0xA2EA94A5L},{1L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_45[i] = (-4L);
        if ((safe_add_func_int64_t_s_s((safe_div_func_uint64_t_u_u(g_18.f2.f0, (safe_sub_func_int16_t_s_s((l_45[0] &= (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_44[1] = (g_43 , 65533UL)), g_18.f2.f0)), g_18.f1)) , g_2) && p_24.f0)), 0xF75DL)))), g_2)))
        { 
            struct S1 l_53 = {-5L,0x672FL,{1UL},0x3944077424270207LL,{0x89B64D43L}};
            g_43.f3 = (safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((((l_44[0] == ((safe_lshift_func_uint16_t_u_u((l_52 < 18446744073709551615UL), 8)) && (l_53 , l_53.f3))) >= 1L) >= l_53.f3) ^ 0L), p_24.f0)) >= p_24.f0), g_2));
        }
        else
        { 
            int32_t l_57 = 0L;
            int32_t l_59 = (-1L);
            int32_t l_63 = 0x82C1B334L;
            int32_t l_64[5] = {0x43983B7CL,0x43983B7CL,0x43983B7CL,0x43983B7CL,0x43983B7CL};
            int16_t l_71 = 0x05C6L;
            int64_t l_75 = (-1L);
            const struct S0 l_91 = {6UL};
            int i;
            --l_78;
            l_64[0] ^= (l_81 , (safe_add_func_uint8_t_u_u((l_84 , ((safe_mul_func_uint16_t_u_u((l_66 |= (safe_sub_func_uint64_t_u_u((l_59 = (((((safe_div_func_uint16_t_u_u((g_43.f2 = (((l_63 = (((l_91 , ((g_29[0][1] = (safe_mod_func_int64_t_s_s(0L, l_94))) < g_18.f3)) == p_24.f1) , 0x70L)) <= 0L) > p_25)), 0x55C7L)) && g_2) > 4294967293UL) , p_25) || p_24.f1)), 0UL))), l_74)) != p_23)), l_91.f0)));
        }
        l_60 = 0x328DBD82L;
        for (l_69 = (-20); (l_69 < 24); l_69 = safe_add_func_int64_t_s_s(l_69, 1))
        { 
            for (l_65 = 27; (l_65 > (-15)); l_65--)
            { 
                int64_t l_99 = (-1L);
                if (l_99)
                    break;
            }
        }
    }
    return g_19.f1;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2.f0, "g_18.f2.f0", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4.f0, "g_18.f4.f0", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_29[i][j], "g_29[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
