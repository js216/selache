// SPDX-License-Identifier: MIT
// cctest_csmith_5693a3d7.c --- cctest case csmith_5693a3d7 (csmith seed 1452516311)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4d69192d */

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

// Options:   -s 1452516311 -o /tmp/csmith_gen_o59gw0lj/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 10;
};
#pragma pack(pop)

union U1 {
   int8_t * f0;
   const uint32_t  f1;
   const uint32_t  f2;
   uint8_t  f3;
};


static int32_t g_2 = 0xF506E60BL;
static uint8_t g_7[3][5] = {{0x7AL,0xCAL,0x7AL,0x7AL,0xCAL},{0xCAL,0x7AL,0x7AL,0xCAL,0x7AL},{0xCAL,0xCAL,1UL,0xCAL,0xCAL}};
static int16_t g_8 = 0x54A2L;
static union U1 g_43[6] = {{0},{0},{0},{0},{0},{0}};
static int32_t g_50[7] = {1L,1L,1L,1L,1L,1L,1L};
static int32_t *g_49[4][6][7] = {{{&g_50[2],&g_50[0],&g_50[5],&g_50[5],&g_2,&g_50[2],&g_50[2]},{&g_50[5],&g_50[0],&g_50[2],&g_50[0],&g_50[5],&g_50[5],&g_2},{&g_50[5],(void*)0,&g_50[0],&g_50[5],(void*)0,&g_2,&g_2},{&g_50[2],&g_50[2],&g_2,&g_50[5],&g_50[5],&g_50[0],&g_50[2]},{&g_50[2],&g_2,&g_2,&g_2,&g_2,&g_50[2],(void*)0},{&g_50[5],&g_2,&g_2,(void*)0,&g_50[5],&g_50[5],(void*)0}},{{&g_50[5],&g_2,&g_50[5],&g_50[0],(void*)0,&g_50[5],&g_50[2]},{&g_2,&g_2,&g_50[5],&g_50[0],&g_50[5],&g_2,&g_2},{&g_2,&g_2,&g_50[2],(void*)0,&g_50[2],&g_50[5],&g_50[2]},{&g_2,&g_50[2],&g_50[2],&g_2,&g_50[5],&g_50[5],&g_50[0]},{&g_2,&g_50[5],&g_50[2],&g_50[5],&g_50[5],&g_50[2],&g_50[5]},{&g_50[5],&g_2,&g_50[5],&g_2,&g_50[2],&g_50[0],&g_50[0]}},{{&g_50[5],&g_2,&g_50[5],&g_2,&g_50[5],&g_2,&g_50[2]},{&g_50[2],&g_50[5],&g_2,&g_2,(void*)0,&g_2,&g_2},{&g_50[2],&g_50[2],&g_2,&g_50[5],&g_50[5],&g_50[0],&g_50[2]},{&g_50[2],&g_2,&g_2,&g_2,&g_2,&g_50[2],(void*)0},{&g_50[5],&g_2,&g_2,(void*)0,&g_50[5],&g_50[5],(void*)0},{&g_50[5],&g_2,&g_50[5],&g_50[0],(void*)0,&g_50[5],&g_50[2]}},{{&g_2,&g_2,&g_50[5],&g_50[0],&g_50[5],&g_2,&g_2},{&g_2,&g_2,&g_50[2],(void*)0,&g_50[2],&g_50[5],&g_50[2]},{&g_2,&g_50[2],&g_50[2],&g_2,&g_50[5],&g_50[5],&g_50[0]},{&g_2,&g_50[5],&g_50[2],&g_50[5],&g_50[5],&g_50[2],&g_50[5]},{&g_50[5],&g_2,&g_50[5],&g_2,&g_50[2],&g_50[0],&g_50[0]},{&g_50[5],&g_2,&g_50[5],&g_2,&g_50[5],&g_2,&g_50[2]}}};
static int8_t g_54 = 0xAFL;
static int8_t *g_53 = &g_54;
static int16_t g_73 = (-1L);
static int16_t g_79 = 0x1E84L;
static const struct S0 g_138 = {-21};
static struct S0 g_139 = {22};
static int32_t g_160 = 0L;
static uint16_t g_228[6] = {65535UL,65535UL,1UL,65535UL,65535UL,1UL};
static uint32_t g_233 = 4294967295UL;
static uint64_t g_237 = 0x5EF55CF0B89F9E0ALL;
static int32_t **g_247 = &g_49[3][0][1];
static uint8_t g_284 = 0xF0L;
static uint8_t *g_283 = &g_284;
static int32_t g_299 = 0xEB55DCB3L;
static int64_t g_302 = 0x91BFC4F0110EF242LL;
static struct S0 g_320[3] = {{-18},{-18},{-18}};
static struct S0 *g_319 = &g_320[0];
static struct S0 **g_318[7][1][6] = {{{&g_319,&g_319,&g_319,&g_319,&g_319,&g_319}},{{&g_319,&g_319,&g_319,&g_319,&g_319,&g_319}},{{&g_319,&g_319,&g_319,&g_319,&g_319,&g_319}},{{&g_319,&g_319,&g_319,&g_319,&g_319,&g_319}},{{&g_319,&g_319,&g_319,&g_319,&g_319,&g_319}},{{&g_319,&g_319,&g_319,&g_319,&g_319,&g_319}},{{&g_319,&g_319,&g_319,&g_319,&g_319,&g_319}}};
static struct S0 **g_322[3][6] = {{(void*)0,&g_319,(void*)0,&g_319,(void*)0,&g_319},{&g_319,&g_319,&g_319,&g_319,&g_319,&g_319},{(void*)0,&g_319,(void*)0,&g_319,(void*)0,&g_319}};
static const struct S0 *g_366 = &g_138;
static const struct S0 **g_365 = &g_366;
static const struct S0 ***g_364[4][5][1] = {{{&g_365},{&g_365},{&g_365},{&g_365},{&g_365}},{{(void*)0},{&g_365},{&g_365},{&g_365},{&g_365}},{{&g_365},{(void*)0},{&g_365},{&g_365},{&g_365}},{{&g_365},{&g_365},{(void*)0},{&g_365},{&g_365}}};
static uint16_t g_405 = 1UL;
static int32_t g_428 = 0x0C8D6C63L;
static int16_t g_465 = (-1L);
static int64_t g_491 = 1L;
static int8_t *g_492[4][5][6] = {{{&g_54,&g_54,(void*)0,(void*)0,&g_54,&g_54},{(void*)0,&g_54,(void*)0,(void*)0,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,(void*)0,&g_54},{&g_54,&g_54,&g_54,(void*)0,(void*)0,&g_54},{(void*)0,&g_54,&g_54,(void*)0,&g_54,&g_54}},{{&g_54,(void*)0,&g_54,&g_54,&g_54,(void*)0},{&g_54,&g_54,(void*)0,&g_54,&g_54,&g_54},{&g_54,(void*)0,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,(void*)0,&g_54,&g_54},{&g_54,(void*)0,&g_54,(void*)0,&g_54,&g_54}},{{&g_54,&g_54,(void*)0,&g_54,&g_54,(void*)0},{(void*)0,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,(void*)0,&g_54},{&g_54,&g_54,&g_54,(void*)0,(void*)0,&g_54}},{{&g_54,&g_54,(void*)0,&g_54,&g_54,&g_54},{&g_54,&g_54,(void*)0,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,(void*)0,&g_54,&g_54,&g_54,&g_54}}};
static union U1 g_537 = {0};
static int64_t *g_546 = &g_491;
static int64_t **g_701 = &g_546;
static int64_t ** const *g_700 = &g_701;
static union U1 g_723 = {0};
static union U1 *g_722 = &g_723;
static struct S0 ***g_829 = (void*)0;
static struct S0 ****g_828 = &g_829;
static struct S0 *****g_827[4] = {&g_828,&g_828,&g_828,&g_828};
static union U1 g_834 = {0};
static union U1 *g_833 = &g_834;
static int64_t ****g_874 = (void*)0;
static int64_t ***g_876 = &g_701;
static int64_t ****g_875 = &g_876;
static uint32_t g_970 = 0x5D2C3BFBL;
static int64_t *g_1050 = (void*)0;
static int64_t **g_1049 = &g_1050;
static int16_t g_1058 = 0x3D6DL;
static uint32_t g_1077[7] = {0UL,0UL,5UL,0UL,0UL,5UL,0UL};
static uint32_t g_1079[2] = {4294967295UL,4294967295UL};
static uint64_t g_1080 = 18446744073709551615UL;
static uint16_t *g_1095[4] = {&g_228[5],&g_228[5],&g_228[5],&g_228[5]};
static uint64_t *g_1118[4][4][6] = {{{&g_237,&g_237,&g_1080,&g_1080,&g_237,&g_1080},{&g_237,&g_1080,&g_237,&g_1080,&g_1080,&g_1080},{&g_1080,&g_237,&g_237,&g_237,&g_237,&g_1080},{&g_237,&g_237,&g_1080,&g_1080,&g_237,&g_1080}},{{&g_1080,&g_237,&g_1080,&g_1080,&g_1080,&g_1080},{&g_1080,&g_1080,&g_1080,&g_1080,&g_237,&g_1080},{&g_237,&g_237,&g_1080,&g_237,&g_1080,&g_1080},{&g_1080,&g_237,&g_1080,&g_1080,&g_1080,&g_1080}},{{&g_237,&g_237,&g_1080,&g_1080,&g_237,&g_1080},{&g_237,&g_1080,&g_237,&g_1080,&g_1080,&g_1080},{&g_1080,&g_237,&g_237,&g_237,&g_237,&g_1080},{&g_237,&g_237,&g_1080,&g_1080,&g_237,&g_1080}},{{&g_1080,&g_237,&g_1080,&g_1080,&g_1080,&g_1080},{&g_1080,&g_1080,&g_1080,&g_1080,&g_237,&g_1080},{&g_237,&g_237,&g_1080,&g_237,&g_1080,&g_1080},{&g_1080,&g_237,&g_1080,&g_1080,&g_1080,&g_1080}}};
static uint64_t **g_1117 = &g_1118[1][1][4];
static union U1 **g_1128 = (void*)0;
static union U1 ***g_1127 = &g_1128;
static uint32_t g_1182[5][5] = {{0UL,0x35DB60E9L,0x35DB60E9L,0UL,0x50209B1CL},{0UL,0UL,0x3D6CE919L,0x3D6CE919L,0UL},{0x50209B1CL,0x35DB60E9L,0x3D6CE919L,4UL,4UL},{0x35DB60E9L,0x50209B1CL,0x35DB60E9L,0x3D6CE919L,4UL},{0UL,0UL,4UL,0UL,0UL}};
static const int32_t g_1278[2] = {0x045247D5L,0x045247D5L};
static uint8_t g_1286 = 0UL;
static const uint64_t g_1340 = 0UL;
static union U1 g_1360 = {0};
static uint16_t g_1409 = 65534UL;
static int32_t * const **g_1435 = (void*)0;
static int32_t * const ***g_1434 = &g_1435;
static uint32_t g_1471 = 1UL;



static uint8_t  func_1(void);
static int32_t * func_9(uint8_t * p_10, int64_t  p_11, int16_t  p_12, uint8_t * p_13);
static uint8_t * func_14(uint8_t * p_15, int8_t  p_16);
static struct S0 * func_21(uint16_t  p_22, int32_t  p_23, int32_t  p_24);
static uint16_t  func_25(int16_t  p_26);
static uint16_t  func_29(uint32_t  p_30);
static int32_t * func_31(int8_t  p_32, uint8_t * p_33);
static uint64_t  func_39(const int32_t  p_40, int8_t  p_41, uint8_t  p_42);




static uint8_t  func_1(void)
{ 
    int16_t l_1059 = (-5L);
    int32_t l_1178 = (-1L);
    int32_t l_1179 = 0x8FE68665L;
    int32_t l_1181 = 0x9688CF37L;
    uint8_t *l_1201 = &g_7[1][3];
    int32_t l_1220[1];
    int64_t l_1233 = (-1L);
    struct S0 ****l_1275 = (void*)0;
    int32_t l_1285 = (-1L);
    struct S0 l_1314 = {-27};
    union U1 *l_1315 = &g_537;
    uint64_t l_1332 = 18446744073709551607UL;
    const uint64_t l_1333 = 4UL;
    const uint64_t *l_1338 = &l_1333;
    const uint64_t **l_1337 = &l_1338;
    const uint64_t *l_1339 = &g_1340;
    int8_t l_1350 = 0xAEL;
    int64_t l_1357 = 0xB879809274D6D595LL;
    int16_t *l_1358 = &g_465;
    int32_t l_1416 = 0xF456007BL;
    int32_t l_1422 = 0x8702D962L;
    uint64_t l_1423[1][3][5];
    int16_t l_1429 = (-7L);
    int32_t ****l_1430[4];
    int16_t l_1440 = (-1L);
    int32_t l_1489 = 0xB3A8AF3FL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1220[i] = 0x7EF94A55L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
                l_1423[i][j][k] = 1UL;
        }
    }
    for (i = 0; i < 4; i++)
        l_1430[i] = (void*)0;
    for (g_2 = (-26); (g_2 == (-16)); ++g_2)
    { 
        uint8_t *l_5 = (void*)0;
        uint8_t *l_6 = &g_7[1][3];
        int32_t l_1045 = (-2L);
        int16_t l_1199 = (-7L);
        uint32_t l_1209 = 1UL;
        int32_t l_1231 = 0xE3AB9893L;
        int32_t l_1283[1];
        int16_t l_1301 = 0x8A0FL;
        int32_t l_1303 = 0L;
        uint32_t l_1305 = 4294967288UL;
        uint16_t l_1309 = 0x09E5L;
        struct S0 l_1318 = {-12};
        struct S0 **l_1331 = &g_319;
        int32_t *l_1334 = &g_50[6];
        int i;
        for (i = 0; i < 1; i++)
            l_1283[i] = 0xE73FF9C7L;
    }
    if ((0UL <= (((*l_1358) = (((safe_lshift_func_int8_t_s_u((((*g_1117) = (*g_1117)) != (l_1339 = ((*l_1337) = &l_1332))), (((+(safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0xA6B1L, (l_1350 == (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_add_func_uint8_t_u_u((*g_283), (18446744073709551612UL > 4L))) , 0xD294CE916EDB6337LL) , l_1333), l_1314.f0)), g_1079[0]))))), 7)), 13)) <= 0xAEDF3C24E5CC2698LL), l_1233))) & l_1181) > l_1350))) || l_1357) | l_1220[0])) > 0xA1DCL)))
    { 
        union U1 *l_1359 = &g_1360;
        l_1359 = l_1315;
    }
    else
    { 
        int64_t ****l_1379 = &g_876;
        int32_t l_1384 = 0xA0ACCF05L;
        int32_t l_1417 = 1L;
        int32_t l_1418 = 0x829B521BL;
        int32_t l_1419 = (-3L);
        int32_t l_1420 = 0x6AF67BEDL;
        int32_t l_1421[4];
        int32_t ***l_1433 = &g_247;
        int32_t ****l_1432 = &l_1433;
        struct S0 l_1442 = {3};
        uint32_t l_1445 = 0x2F2C9485L;
        uint64_t l_1446 = 0xD92352679C3493C9LL;
        int32_t l_1465 = 0x4E1FDC2FL;
        uint64_t l_1467 = 0UL;
        uint8_t *l_1470 = &g_7[1][3];
        int i;
        for (i = 0; i < 4; i++)
            l_1421[i] = 0x095AD4E5L;
        for (l_1233 = 0; (l_1233 <= 3); l_1233 += 1)
        { 
            uint32_t l_1364[4][4][4] = {{{6UL,4294967287UL,6UL,0x188F0006L},{0xFCA66D36L,4294967295UL,3UL,4294967295UL},{4294967295UL,6UL,0x9BCD9BC4L,4294967295UL},{0UL,4294967295UL,0x9BCD9BC4L,0UL}},{{4294967295UL,7UL,3UL,3UL},{0xFCA66D36L,0xFCA66D36L,6UL,0UL},{6UL,0UL,0xF7B30BB2L,4294967287UL},{4294967287UL,4294967289UL,0xFCA66D36L,0xF7B30BB2L}},{{0x1C9A5B9BL,4294967289UL,0xF9AD5ACFL,4294967287UL},{4294967289UL,0UL,0x188F0006L,0UL},{2UL,0xFCA66D36L,4294967295UL,3UL},{0x188F0006L,7UL,4294967295UL,0UL}},{{3UL,4294967295UL,4294967289UL,4294967295UL},{3UL,6UL,4294967295UL,4294967295UL},{0x188F0006L,4294967295UL,4294967295UL,0x188F0006L},{2UL,4294967287UL,0x188F0006L,0x9BCD9BC4L}}};
            struct S0 l_1403[7][1][7] = {{{{2},{8},{6},{-7},{17},{-11},{24}}},{{{16},{-11},{-7},{-21},{-21},{-7},{24}}},{{{8},{-5},{4},{29},{-21},{-11},{-17}}},{{{-28},{-3},{-5},{2},{6},{19},{4}}},{{{-4},{17},{29},{29},{17},{-4},{-28}}},{{{-5},{4},{29},{-21},{-11},{-17},{17}}},{{{-17},{6},{-5},{-4},{16},{17},{16}}}};
            const uint64_t *l_1410[6][4] = {{&g_1340,&l_1333,&l_1333,&g_1340},{&l_1333,&g_1340,&g_237,&g_1080},{&l_1333,&g_237,&l_1333,&g_1080},{&g_1340,&g_1080,&g_1080,&g_1080},{&g_237,&g_237,&g_1080,&g_1080},{&g_1080,&g_1340,&g_1080,&g_1340}};
            int32_t *l_1412 = &l_1220[0];
            int32_t *l_1413 = &g_160;
            int32_t *l_1414 = &l_1178;
            int32_t *l_1415[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1415[i] = &g_2;
            for (l_1285 = 0; (l_1285 <= 3); l_1285 += 1)
            { 
                int32_t *l_1362 = (void*)0;
                int32_t l_1385 = (-1L);
                const uint32_t l_1388 = 1UL;
            }
            for (g_428 = 3; (g_428 >= 0); g_428 -= 1)
            { 
                int32_t l_1392[2];
                uint16_t *l_1404 = &g_405;
                uint16_t *l_1405 = &g_228[3];
                uint64_t *l_1407 = &l_1332;
                uint16_t *l_1408 = &g_1409;
                int32_t *l_1411[5][2][3] = {{{&g_2,&g_2,(void*)0},{&l_1181,&l_1181,&l_1220[0]}},{{&g_2,&g_2,(void*)0},{&l_1181,&l_1181,&l_1220[0]}},{{&g_2,&g_2,(void*)0},{&l_1181,&l_1181,&l_1220[0]}},{{&g_2,&g_2,(void*)0},{&l_1181,&l_1181,&l_1220[0]}},{{&g_2,&g_2,(void*)0},{&l_1181,&l_1181,&l_1220[0]}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1392[i] = 2L;
                l_1181 = (((safe_add_func_uint8_t_u_u(((((!((*l_1408) ^= (l_1392[1] , (safe_mod_func_uint16_t_u_u((&g_247 == (void*)0), ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s(l_1392[1], (((*l_1407) ^= (l_1403[1][0][1] , (((*l_1405) = ((*l_1404) ^= l_1392[0])) & ((+l_1392[0]) , l_1364[0][3][0])))) < 18446744073709551612UL))) & l_1220[0]), l_1364[0][3][0])) >= l_1384) != 0x5508L), l_1403[1][0][1].f0)), 0)) || 0x669D344FA0E5911DLL)))))) && l_1392[1]) == l_1392[0]) == 0x9FL), l_1364[0][3][0])) , (*g_1117)) != l_1410[2][2]);
                l_1181 = (l_1333 & 0xCAL);
                if (l_1384)
                    continue;
                l_1384 ^= l_1350;
            }
            l_1423[0][2][3]++;
        }
        if (l_1417)
        { 
            const uint8_t l_1426 = 1UL;
            if (l_1426)
            { 
                uint32_t l_1439 = 18446744073709551612UL;
                struct S0 *l_1441 = &g_320[0];
                for (l_1418 = 0; (l_1418 <= 3); l_1418 += 1)
                { 
                    int32_t *****l_1431[6] = {(void*)0,(void*)0,&l_1430[1],(void*)0,(void*)0,&l_1430[1]};
                    int32_t * const ****l_1436 = &g_1434;
                    int i;
                    l_1421[l_1418] &= 0xA23A67F2L;
                    l_1441 = func_21(((**g_365) , l_1426), ((safe_lshift_func_int16_t_s_u(l_1429, 9)) && l_1421[l_1418]), (((l_1432 = l_1430[1]) == ((*l_1436) = g_1434)) ^ ((safe_add_func_int16_t_s_s(g_1080, l_1439)) ^ l_1440)));
                    (*g_247) = (void*)0;
                }
                return l_1439;
            }
            else
            { 
                l_1417 |= l_1426;
            }
            (*g_319) = l_1442;
        }
        else
        { 
            int16_t l_1443 = 1L;
            int32_t l_1444[5][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
            uint32_t l_1469 = 0x6DC3AB63L;
            struct S0 l_1475[1][6][4] = {{{{-24},{-24},{-24},{-24}},{{-24},{-24},{-24},{-24}},{{-24},{-24},{-24},{-24}},{{-24},{-24},{-24},{-24}},{{-24},{-24},{-24},{-24}},{{-24},{-24},{-24},{-24}}}};
            int32_t **l_1484 = &g_49[3][0][1];
            int32_t * const *l_1485 = &g_49[3][0][1];
            int64_t l_1491 = 0L;
            int i, j, k;
lbl_1490:
            l_1444[0][1] ^= (l_1443 | (-1L));
            for (g_428 = 3; (g_428 >= 0); g_428 -= 1)
            { 
                uint64_t *l_1447 = &l_1332;
                int16_t l_1468[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1468[i] = 0x2DC3L;
                if ((l_1421[g_428] | ((*l_1447) = ((((8L ^ (*g_283)) | l_1445) , l_1444[2][1]) != l_1446))))
                { 
                    uint16_t *l_1455 = &g_1409;
                    const int16_t *l_1464 = (void*)0;
                    const int16_t **l_1463 = &l_1464;
                    int32_t l_1466 = (-1L);
                    if (l_1444[0][1])
                        break;
                    (*g_247) = func_31((safe_add_func_int16_t_s_s((l_1421[g_428] = (((4L ^ (safe_add_func_uint32_t_u_u(((!((safe_mod_func_int32_t_s_s((g_50[5] , ((((g_465 != (((--(*l_1455)) < (l_1444[0][1] > ((l_1444[0][1] == 65530UL) | (safe_mod_func_uint32_t_u_u((+((safe_div_func_int16_t_s_s(((((((*l_1463) = &g_79) == (void*)0) && 3UL) ^ l_1465) < l_1421[g_428]), l_1466)) == l_1444[0][1])), (-1L)))))) >= l_1443)) > (*g_283)) && g_970) || l_1421[g_428])), 0x6CCE8F6EL)) , l_1421[g_428])) & l_1467), l_1468[0]))) == l_1469) != l_1443)), 0L)), l_1470);
                }
                else
                { 
                    int32_t *l_1474 = &l_1421[g_428];
                    int32_t * const **l_1486 = &l_1485;
                    int i;
                    ++g_1471;
                    l_1474 = (*g_247);
                    l_1384 ^= (l_1475[0][1][1] , l_1465);
                    l_1489 = (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((l_1484 = &g_49[0][0][0]) == ((*l_1486) = l_1485)) > l_1469), (safe_mul_func_int16_t_s_s(l_1421[g_428], ((*l_1358) = g_320[0].f0))))), 1)), 2L)), 1));
                }
            }
            if (g_299)
                goto lbl_1490;
            l_1444[0][2] |= l_1491;
            (*g_319) = (*g_366);
        }
    }
    return (*g_283);
}



static int32_t * func_9(uint8_t * p_10, int64_t  p_11, int16_t  p_12, uint8_t * p_13)
{ 
    int32_t *l_1060 = &g_160;
    int32_t l_1061[3];
    int32_t *l_1062 = &g_160;
    int32_t l_1063 = 1L;
    int32_t *l_1064 = &l_1061[2];
    int32_t *l_1065[7] = {&g_50[5],&g_2,&g_50[5],&g_50[5],&g_2,&g_50[5],&g_50[5]};
    int8_t l_1066 = 0L;
    uint64_t l_1067 = 0UL;
    uint32_t *l_1072 = &g_233;
    int32_t l_1075 = 0xBEB0BFC2L;
    uint32_t *l_1076 = &g_1077[0];
    uint32_t *l_1078 = &g_1079[0];
    int32_t **l_1083 = &l_1060;
    int16_t *l_1084 = (void*)0;
    int16_t *l_1085[1][3];
    struct S0 l_1086 = {4};
    uint16_t **l_1114 = &g_1095[0];
    int64_t l_1122 = (-9L);
    int64_t ***** const l_1130 = &g_875;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1061[i] = 1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1085[i][j] = &g_73;
    }
    ++l_1067;
lbl_1090:
    (*g_319) = ((safe_sub_func_uint32_t_u_u(((*l_1064) = (g_1080 = ((*l_1078) = ((*l_1076) |= (l_1075 = (--(*l_1072))))))), (safe_mul_func_uint16_t_u_u((((*l_1062) = ((l_1083 == &l_1064) <= 65529UL)) ^ p_12), 0L)))) , (l_1086 , l_1086));
    (*l_1064) |= (!g_970);
    for (g_405 = 0; (g_405 <= 46); g_405 = safe_add_func_int16_t_s_s(g_405, 1))
    { 
        uint16_t * const l_1091[7] = {&g_228[5],&g_228[5],&g_228[5],&g_228[5],&g_228[5],&g_228[5],&g_228[5]};
        uint16_t *l_1092 = &g_405;
        uint16_t **l_1093 = (void*)0;
        uint16_t **l_1094[5][5][2];
        const int32_t l_1101 = 7L;
        int32_t l_1119 = 0x7CFBAE5EL;
        uint32_t l_1120 = 0xE2EA0BEDL;
        int32_t l_1121 = 0L;
        int32_t *l_1124 = &g_2;
        int64_t *****l_1129 = (void*)0;
        union U1 **l_1136 = &g_833;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1094[i][j][k] = &l_1092;
            }
        }
        for (p_12 = 0; (p_12 <= 2); p_12 += 1)
        { 
            if (g_233)
                goto lbl_1090;
        }
        if ((l_1091[2] == (g_1095[0] = l_1092)))
        { 
            int32_t *l_1096 = (void*)0;
            int32_t l_1102 = 0x08B7AEC2L;
            uint64_t *l_1123 = &g_237;
            (*l_1064) = p_12;
            (*l_1083) = l_1096;
            if (p_12)
                continue;
            if ((((*l_1123) = ((safe_lshift_func_uint16_t_u_s((((safe_div_func_int32_t_s_s((l_1101 | (l_1102 | p_11)), (((((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(l_1101, (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(l_1101, 13)) & ((~(l_1114 != ((safe_lshift_func_uint8_t_u_s(((g_1117 == (void*)0) & p_11), 2)) , (void*)0))) && l_1119)) & 247UL), p_12)))), 18446744073709551613UL)) | l_1119), 5)) <= (-2L)) & p_11) < l_1120) , l_1121))) && l_1122) | 0x8E8E165DC3BCFF48LL), 6)) ^ 0xDA549479AAA497A0LL)) ^ 6UL))
            { 
                return l_1124;
            }
            else
            { 
                uint16_t l_1133[6][1][3] = {{{0xCE68L,0xC1E5L,0xC1E5L}},{{0xCE68L,0xC1E5L,0xC1E5L}},{{0xCE68L,0xC1E5L,0xC1E5L}},{{0xCE68L,0xC1E5L,0xC1E5L}},{{0xCE68L,0xC1E5L,0xC1E5L}},{{0xCE68L,0xC1E5L,0xC1E5L}}};
                int i, j, k;
                (*l_1083) = ((safe_rshift_func_int8_t_s_u(((void*)0 == g_1127), ((*l_1124) < ((((l_1129 = &g_874) == l_1130) > (0x8C8DA433CF10C3D2LL || ((((safe_add_func_int16_t_s_s(p_12, g_228[5])) ^ p_11) >= p_11) != p_12))) > l_1133[1][0][2])))) , &l_1102);
                (*l_1062) = p_11;
            }
            if ((*l_1064))
            { 
                const uint64_t l_1141 = 18446744073709551615UL;
                for (l_1102 = 0; (l_1102 <= 21); l_1102 = safe_add_func_int8_t_s_s(l_1102, 7))
                { 
                    int64_t l_1144[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1144[i] = 0L;
                    (*g_1127) = l_1136;
                    l_1144[0] |= ((safe_add_func_int16_t_s_s((-1L), ((safe_rshift_func_uint16_t_u_s((l_1141 == p_11), 9)) < ((((**l_1083) && (safe_sub_func_uint8_t_u_u((((p_11 & ((void*)0 == &g_1095[0])) , p_11) > 5UL), p_11))) && 0x8E93BB27C679F964LL) , p_11)))) & (*g_283));
                }
            }
            else
            { 
                uint16_t l_1148 = 65530UL;
                for (g_1058 = 0; (g_1058 > 19); g_1058 = safe_add_func_int64_t_s_s(g_1058, 1))
                { 
                    int16_t l_1147 = (-1L);
                    l_1096 = &l_1102;
                    ++l_1148;
                }
            }
        }
        else
        { 
            uint64_t l_1151 = 0x0D2B6B77C9C1671ELL;
            l_1151++;
        }
    }
    return &g_2;
}



static uint8_t * func_14(uint8_t * p_15, int8_t  p_16)
{ 
    struct S0 l_17 = {-5};
    struct S0 *l_18 = &l_17;
    uint64_t l_324 = 18446744073709551615UL;
    int32_t *l_731 = &g_299;
    int32_t l_732[7][2][4] = {{{(-2L),0x6F556872L,(-3L),4L},{0x715ECA90L,0xF9A4A79EL,0x715ECA90L,(-3L)}},{{(-6L),(-1L),(-3L),(-6L)},{(-2L),(-3L),7L,0x715ECA90L}},{{1L,0x6F556872L,0xD576ECA0L,0xD576ECA0L},{(-3L),(-3L),(-6L),0x27C173A6L}},{{7L,(-5L),0L,0x715ECA90L},{0L,0x715ECA90L,1L,0L}},{{(-3L),0x715ECA90L,0xF9A4A79EL,0x715ECA90L},{0x715ECA90L,(-5L),0xD576ECA0L,0x27C173A6L}},{{(-3L),(-3L),1L,0xD576ECA0L},{7L,0x6F556872L,4L,0x715ECA90L}},{{7L,1L,1L,7L},{(-3L),0x715ECA90L,0xD576ECA0L,1L}}};
    int32_t *l_733 = &l_732[6][1][1];
    int32_t *l_734 = &l_732[3][1][1];
    int32_t *l_735 = &g_299;
    int32_t *l_736 = &l_732[5][0][1];
    int32_t *l_737[2][1][5] = {{{&g_50[5],&g_50[5],&g_50[5],&g_50[5],&g_50[5]}},{{&g_50[3],&g_50[3],&g_50[3],&g_50[3],&g_50[3]}}};
    uint32_t l_738[5][7][6] = {{{0x80B02F7FL,0x9CED95AEL,0UL,0x363A316BL,0xD9035986L,1UL},{4294967290UL,1UL,0x508F44D8L,4294967292UL,0xA4CD4BADL,0xA4CD4BADL},{0x7383ED6BL,1UL,1UL,0x7383ED6BL,0xD9035986L,4294967295UL},{4294967295UL,0x9CED95AEL,4294967290UL,0x80B02F7FL,4294967295UL,4294967287UL},{4294967290UL,0xC4CAA763L,0xBFAD1D19L,0xF5F97A25L,4294967295UL,0xA4CD4BADL},{0xFA279486L,0x9CED95AEL,0xFA2D44B8L,0xA1D0BCE2L,0xD9035986L,0xBFAD1D19L},{0UL,1UL,0UL,0x80B02F7FL,0xA4CD4BADL,0xC4CAA763L}},{{0x363CC5E2L,1UL,0xBFAD1D19L,0x363CC5E2L,0xD9035986L,4294967290UL},{0x7383ED6BL,0x9CED95AEL,4294967287UL,0xFA279486L,4294967295UL,4294967295UL},{0UL,0xC4CAA763L,4294967295UL,0x363A316BL,4294967295UL,0xC4CAA763L},{4294967292UL,0x9CED95AEL,0x508F44D8L,0xF5F97A25L,0xD9035986L,4294967295UL},{0x78BAC314L,1UL,0xFA2D44B8L,0xFA279486L,0xA4CD4BADL,0x07BF3EC9L},{4294967295UL,1UL,4294967295UL,4294967295UL,0xD9035986L,4294967287UL},{0x363CC5E2L,0x9CED95AEL,4294967295UL,4294967292UL,4294967295UL,4294967290UL}},{{0x78BAC314L,0xC4CAA763L,1UL,0xA1D0BCE2L,4294967295UL,0x07BF3EC9L},{0x80B02F7FL,0x9CED95AEL,0UL,0x363A316BL,0xD9035986L,1UL},{4294967290UL,1UL,0x508F44D8L,4294967292UL,0xA4CD4BADL,0xA4CD4BADL},{0x7383ED6BL,1UL,1UL,0x7383ED6BL,0xD9035986L,4294967295UL},{4294967295UL,0x9CED95AEL,4294967290UL,0x80B02F7FL,4294967295UL,4294967287UL},{4294967290UL,0xC4CAA763L,0xBFAD1D19L,0xF5F97A25L,4294967295UL,0xA4CD4BADL},{0xFA279486L,0x9CED95AEL,0xFA2D44B8L,0xA1D0BCE2L,0xD9035986L,0xBFAD1D19L}},{{0UL,1UL,0UL,0x80B02F7FL,0xA4CD4BADL,0xC4CAA763L},{0x363CC5E2L,1UL,0xBFAD1D19L,0x363CC5E2L,0xD9035986L,4294967290UL},{0x7383ED6BL,0x9CED95AEL,0x60B4DA61L,4294967287UL,0x3E855817L,0xBE1D88D2L},{0xBFAD1D19L,0xA02AFA6DL,0x3E855817L,4294967295UL,0x3E855817L,0xA02AFA6DL},{4294967290UL,0x3BD6F450L,4294967295UL,0xD9035986L,0xC78702E7L,0x3E855817L},{1UL,4294967286UL,1UL,4294967287UL,0x1F376BE1L,0UL},{0x508F44D8L,4294967286UL,0x3E855817L,0x508F44D8L,0xC78702E7L,0x60B4DA61L}},{{0UL,0x3BD6F450L,0xBE1D88D2L,4294967290UL,0x3E855817L,0x5D72EB27L},{1UL,0xA02AFA6DL,4294967286UL,0x9CED95AEL,0x3E855817L,0UL},{4294967295UL,0x3BD6F450L,0xF56BB364L,4294967295UL,0xC78702E7L,4294967286UL},{4294967295UL,4294967286UL,4294967295UL,4294967290UL,0x1F376BE1L,0x1F376BE1L},{0xFA2D44B8L,4294967286UL,4294967286UL,0xFA2D44B8L,0xC78702E7L,0xBE1D88D2L},{0x508F44D8L,0x3BD6F450L,0x5D72EB27L,4294967295UL,0x3E855817L,0x60B4DA61L},{4294967295UL,0xA02AFA6DL,0x970642DEL,0xD9035986L,0x3E855817L,0x1F376BE1L}}};
    const union U1 *l_748 = &g_43[5];
    union U1 *l_749[2];
    union U1 **l_750 = &g_722;
    uint16_t *l_753 = &g_228[5];
    uint32_t *l_762 = &l_738[4][5][3];
    int64_t *l_763 = &g_491;
    const int64_t *l_782 = &g_491;
    const int64_t **l_781 = &l_782;
    const int64_t ***l_780 = &l_781;
    const int64_t ****l_779 = &l_780;
    int64_t ****l_877 = &g_876;
    struct S0 ***l_878 = (void*)0;
    uint32_t l_968 = 0x9919FDECL;
    int16_t l_1024 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_749[i] = &g_43[5];
    (*l_18) = l_17;
    for (p_16 = 0; (p_16 <= (-20)); p_16--)
    { 
        struct S0 ***l_321 = &g_318[0][0][5];
        int32_t l_323 = 5L;
        uint8_t *l_730 = &g_7[1][0];
        (*g_365) = func_21(func_25((((safe_div_func_uint16_t_u_u(((func_29(p_16) == (safe_add_func_uint16_t_u_u((((+1UL) >= (safe_mod_func_int64_t_s_s((((((-10L) <= (+g_302)) > (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((((*l_321) = g_318[1][0][1]) != (g_322[0][5] = &l_18)), 4)) && l_323), 0x9AFDL))) <= g_284) ^ 3UL), g_228[5]))) & 0xB52FC771L), g_320[0].f0))) == p_16), 0x0471L)) <= l_324) , g_54)), g_138.f0, g_2);
        return l_730;
    }
    l_738[4][5][3]--;
lbl_890:
    (*g_247) = (*g_247);
    if (((!((((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(p_16, ((l_748 = l_748) != ((*l_750) = l_749[1])))) , (safe_mod_func_uint16_t_u_u(p_16, ((*l_753) |= g_302)))), ((*g_283) |= (safe_mul_func_uint16_t_u_u(((((((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((*l_762) |= (safe_rshift_func_int8_t_s_s((*l_731), 6))), p_16)), (-7L))) , (**g_700)) == l_763) , g_43[0]) , p_16) , (*l_734)), (-9L)))))), p_16)) == 0x19A6L) <= g_160) <= (*p_15))) | 0L))
    { 
        int32_t l_769 = (-4L);
        struct S0 *** const *l_821 = (void*)0;
        uint32_t l_867 = 0x5A3DCF7EL;
        for (g_79 = (-11); (g_79 >= (-11)); g_79 = safe_add_func_int64_t_s_s(g_79, 1))
        { 
            uint8_t l_770 = 0x8FL;
            for (g_233 = 0; (g_233 < 42); g_233 = safe_add_func_int16_t_s_s(g_233, 5))
            { 
                for (g_73 = 0; (g_73 <= 2); g_73 += 1)
                { 
                    uint8_t l_768 = 9UL;
                    (*g_247) = (*g_247);
                    if (p_16)
                        continue;
                    if (p_16)
                        break;
                    if (l_768)
                        continue;
                    if ((*l_733))
                        break;
                }
            }
            l_770++;
            for (l_770 = (-18); (l_770 < 7); l_770 = safe_add_func_int8_t_s_s(l_770, 9))
            { 
                return p_15;
            }
        }
        for (g_428 = (-24); (g_428 <= 10); ++g_428)
        { 
            return p_15;
        }
        if (((safe_rshift_func_uint16_t_u_s(((*l_753) &= (l_779 == (p_16 , &g_700))), 14)) != (0x808E5FF3B4B6AF82LL | g_73)))
        { 
            (*l_18) = (*l_18);
        }
        else
        { 
            return p_15;
        }
        if ((*l_733))
        { 
            int64_t ***l_790 = &g_701;
            int64_t ****l_789 = &l_790;
            int64_t *****l_788 = &l_789;
            int32_t l_793 = 0xF0B743B2L;
            (*l_733) |= ((+(safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((*l_788) = (void*)0) != (void*)0), p_16)), (safe_mod_func_uint32_t_u_u((((void*)0 == &l_779) != (0x79056E729399B11CLL >= (p_16 != l_793))), p_16))))) , (-1L));
        }
        else
        { 
            uint32_t l_797 = 0UL;
            int32_t l_818 = 0x21045D6BL;
            int32_t *l_832 = &l_732[4][1][2];
            uint64_t *l_855[1][4][3];
            int64_t l_863 = 1L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_855[i][j][k] = &g_237;
                }
            }
            (*l_734) = 0L;
            if ((g_320[0].f0 <= g_2))
            { 
                struct S0 l_796 = {19};
                for (g_233 = 0; (g_233 > 59); g_233 = safe_add_func_int32_t_s_s(g_233, 9))
                { 
                    (*g_319) = l_796;
                }
                for (g_237 = 0; (g_237 <= 5); g_237 += 1)
                { 
                    int64_t ***l_807 = &g_701;
                    int64_t ****l_806 = &l_807;
                    struct S0 *** const **l_822 = (void*)0;
                    struct S0 *** const **l_823 = (void*)0;
                    struct S0 *** const **l_824 = &l_821;
                    struct S0 *****l_830[6] = {(void*)0,&g_828,&g_828,(void*)0,&g_828,&g_828};
                    int16_t *l_831 = &g_465;
                    int i;
                    l_797++;
                    l_818 ^= (((*l_736) = (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((void*)0 != l_806), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(g_228[g_237], (safe_mul_func_uint16_t_u_u(g_491, 4L)))) >= l_796.f0), l_796.f0)) != p_16) == g_79), p_16)), 3)))) , (*g_53)), (*g_53))), 0xBFL))) < 0x7D0D7902L);
                    l_832 = (l_769 , (((safe_mod_func_int16_t_s_s(0xE06BL, (((*l_831) = (((((void*)0 == (*g_247)) , (void*)0) == ((*l_824) = l_821)) , (safe_rshift_func_int8_t_s_s(((l_830[2] = g_827[0]) == (void*)0), 7)))) || p_16))) | (*l_731)) , &l_732[2][0][1]));
                    return &g_284;
                }
            }
            else
            { 
                uint8_t l_843 = 0xE4L;
                struct S0 l_845 = {-26};
                g_833 = &g_723;
                for (g_79 = 6; (g_79 >= 0); g_79 -= 1)
                { 
                    struct S0 l_844[6][3][7] = {{{{2},{-20},{-8},{-2},{-9},{-8},{15}},{{6},{0},{17},{-0},{14},{-1},{14}},{{8},{-9},{-9},{8},{2},{-22},{21}}},{{{-0},{17},{0},{6},{2},{12},{-18}},{{-2},{-8},{-20},{2},{19},{26},{21}},{{-18},{-3},{20},{20},{-3},{-18},{14}}},{{{10},{-2},{-8},{-8},{-9},{-28},{15}},{{-19},{-22},{-23},{23},{-0},{12},{-16}},{{23},{-2},{2},{3},{3},{2},{-2}}},{{{2},{-3},{-10},{12},{-9},{-21},{12}},{{23},{-8},{15},{26},{-22},{27},{-9}},{{-10},{17},{12},{12},{-23},{-23},{12}}},{{{19},{-9},{19},{3},{15},{23},{8}},{{-30},{0},{14},{23},{-1},{-3},{-11}},{{-9},{-20},{27},{-8},{-7},{23},{23}}},{{{-21},{20},{23},{20},{-21},{-23},{-0}},{{1},{-8},{-8},{-9},{-2},{-8},{-20}},{{12},{-3},{-0},{-16},{2},{17},{-11}}}};
                    int i, j, k;
                    l_845 = (((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((((-1L) < (safe_sub_func_int64_t_s_s(((g_50[g_79] , ((((safe_sub_func_uint32_t_u_u((&g_834 == (void*)0), g_50[g_79])) , g_7[1][3]) | 0x8B9268C2L) == 0xB0A1BE53L)) , l_843), l_769))) , (*g_53)) , p_16) || p_16), p_16)), p_16)) > g_50[g_79]) , l_844[0][2][6]);
                    return p_15;
                }
            }
            for (l_769 = (-28); (l_769 == (-9)); l_769++)
            { 
                if (p_16)
                    break;
            }
            if ((((((*g_833) , ((*l_733) != ((safe_mod_func_uint8_t_u_u((((*g_53) = (safe_div_func_uint64_t_u_u((l_769 = (safe_lshift_func_uint8_t_u_u((!l_769), 7))), p_16))) , (safe_rshift_func_int8_t_s_u(((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_16, (safe_unary_minus_func_int8_t_s(l_769)))), (p_16 && (*l_734)))) >= p_16) | 0xE512L) != 0xF20327E66657E05CLL), (*g_283)))), (*l_832))) == 1UL))) <= l_863) && 7UL) >= g_237))
            { 
                int16_t l_864 = 0x4848L;
                int32_t l_865 = 1L;
                int32_t l_866 = (-9L);
                --l_867;
            }
            else
            { 
                uint8_t *l_870[1][7] = {{(void*)0,&g_7[2][1],&g_7[2][1],(void*)0,&g_7[2][1],&g_7[2][1],(void*)0}};
                int i, j;
                return l_870[0][5];
            }
        }
    }
    else
    { 
        int64_t ***l_872 = &g_701;
        int64_t ****l_871 = &l_872;
        int64_t *****l_873[7];
        int32_t **l_895 = &l_737[0][0][1];
        int8_t **l_907 = (void*)0;
        int32_t l_943 = 0L;
        int32_t ***l_1037 = &g_247;
        int32_t ****l_1036 = &l_1037;
        uint8_t *l_1044 = (void*)0;
        int i;
        for (i = 0; i < 7; i++)
            l_873[i] = &l_871;
        if (((((g_874 = l_871) == (l_877 = g_875)) > (0xD28DL != ((void*)0 == l_878))) >= (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((p_16 <= ((~((void*)0 == &l_779)) < p_16)), p_16)), 15)) >= p_16) || 0xC806L), 3L)) || g_2), g_405)) == p_16), 0x22L))))
        { 
            return &g_284;
        }
        else
        { 
            uint8_t l_925[7];
            struct S0 l_926 = {16};
            int32_t ***l_934 = &g_247;
            int32_t **** const l_933 = &l_934;
            int32_t l_936 = 0x4ED4E0C4L;
            int32_t l_942 = 0x446EF467L;
            int32_t l_944 = 0L;
            uint32_t l_946 = 9UL;
            union U1 *l_955[5][2][7] = {{{&g_43[5],&g_43[5],&g_723,(void*)0,&g_43[5],(void*)0,&g_723},{&g_43[4],&g_43[4],&g_43[5],&g_43[5],&g_43[1],&g_43[5],&g_43[1]}},{{(void*)0,&g_723,&g_723,(void*)0,(void*)0,&g_43[5],(void*)0},{&g_834,&g_43[1],(void*)0,(void*)0,&g_43[1],&g_834,&g_723}},{{(void*)0,(void*)0,&g_723,&g_43[5],&g_43[5],&g_723,(void*)0},{&g_43[1],&g_723,&g_834,&g_43[1],(void*)0,(void*)0,&g_43[1]}},{{&g_43[5],(void*)0,&g_43[5],(void*)0,(void*)0,&g_723,&g_723},{&g_43[5],&g_43[1],&g_43[5],&g_43[1],&g_43[5],&g_43[5],&g_43[4]}},{{&g_43[5],&g_723,(void*)0,&g_43[5],(void*)0,&g_723,&g_43[5]},{&g_834,&g_43[4],&g_723,(void*)0,&g_43[4],(void*)0,&g_723}}};
            uint16_t l_973 = 1UL;
            uint64_t l_1023 = 0x4BECD466B92C48EALL;
            int32_t l_1043 = 0x8EAC720CL;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_925[i] = 0x03L;
            if ((0x2B2D9A09L || 0x056D605EL))
            { 
lbl_996:
                if (g_138.f0)
                    goto lbl_890;
                return &g_284;
            }
            else
            { 
                uint32_t l_893 = 0x92088C25L;
                uint16_t l_924 = 65535UL;
                union U1 *l_930 = &g_43[5];
                int32_t l_937 = 0xA1E78E5EL;
                int32_t l_940 = 0x35041255L;
                int32_t l_941[5][6][7] = {{{(-1L),(-1L),0x430B9CB4L,0x2E0C6663L,0L,1L,0x40EC52C7L},{1L,(-1L),1L,0xB7195E03L,0x6B303FB3L,0x523C7CEEL,0x6FFFA50DL},{0x6EDE336EL,(-1L),0x8FCE4A9EL,1L,1L,(-1L),(-1L)},{(-10L),(-1L),0x6A551899L,0x6A551899L,(-1L),(-10L),1L},{0x523C7CEEL,(-1L),0x2E0C6663L,0x24312509L,(-3L),(-1L),0x1380527AL},{0L,(-1L),0x24312509L,0x430B9CB4L,0xD1C34C11L,0x6EDE336EL,0L}},{{(-1L),(-1L),0xB7195E03L,0x8FCE4A9EL,0xC84D4F18L,0L,0xD4C044F6L},{(-1L),(-1L),0x430B9CB4L,0x2E0C6663L,0L,1L,0x40EC52C7L},{1L,(-1L),1L,0xB7195E03L,0x6B303FB3L,0x523C7CEEL,0x6FFFA50DL},{0x6EDE336EL,(-1L),0x8FCE4A9EL,1L,1L,(-1L),(-1L)},{(-10L),(-1L),0x6A551899L,0x6A551899L,(-1L),(-10L),1L},{0x523C7CEEL,(-1L),0x2E0C6663L,0x24312509L,(-3L),(-1L),0x1380527AL}},{{0L,(-1L),0x24312509L,0x430B9CB4L,0xD1C34C11L,0x6EDE336EL,0L},{(-1L),(-1L),0xB7195E03L,0x8FCE4A9EL,0xC84D4F18L,0L,0xD4C044F6L},{(-1L),(-1L),0x430B9CB4L,0x2E0C6663L,0x8FCE4A9EL,0xDA0CFBB9L,(-10L)},{0xDA0CFBB9L,0x2E0C6663L,0x6FFFA50DL,(-1L),0x24312509L,0x6A29FFC5L,(-8L)},{9L,0x2E0C6663L,0x1380527AL,0x6FFFA50DL,1L,4L,0x95B0EDE5L},{0xACAE9454L,0x2E0C6663L,0x40EC52C7L,0x40EC52C7L,0x2E0C6663L,0xACAE9454L,(-2L)}},{{0x6A29FFC5L,0x2E0C6663L,1L,0xD4C044F6L,0x430B9CB4L,(-4L),0L},{0x7208DBB7L,0x2E0C6663L,0xD4C044F6L,0L,0x6A551899L,9L,(-6L)},{(-4L),0x2E0C6663L,(-1L),0x1380527AL,0xB7195E03L,0x7208DBB7L,0xFB964D41L},{4L,0x2E0C6663L,0L,1L,0x8FCE4A9EL,0xDA0CFBB9L,(-10L)},{0xDA0CFBB9L,0x2E0C6663L,0x6FFFA50DL,(-1L),0x24312509L,0x6A29FFC5L,(-8L)},{9L,0x2E0C6663L,0x1380527AL,0x6FFFA50DL,1L,4L,0x95B0EDE5L}},{{0xACAE9454L,0x2E0C6663L,0x40EC52C7L,0x40EC52C7L,0x2E0C6663L,0xACAE9454L,(-2L)},{0x6A29FFC5L,0x2E0C6663L,1L,0xD4C044F6L,0x430B9CB4L,(-4L),0L},{0x7208DBB7L,0x2E0C6663L,0xD4C044F6L,0L,0x6A551899L,9L,(-6L)},{(-4L),0x2E0C6663L,(-1L),0x1380527AL,0xB7195E03L,0x7208DBB7L,0xFB964D41L},{4L,0x2E0C6663L,0L,1L,0x8FCE4A9EL,0xDA0CFBB9L,(-10L)},{0xDA0CFBB9L,0x2E0C6663L,0x6FFFA50DL,(-1L),0x24312509L,0x6A29FFC5L,(-8L)}}};
                const int32_t *l_1035[6] = {(void*)0,(void*)0,&g_160,(void*)0,(void*)0,&g_160};
                const int32_t **l_1034 = &l_1035[3];
                const int32_t *** const l_1033[7] = {&l_1034,&l_1034,(void*)0,&l_1034,&l_1034,(void*)0,&l_1034};
                const int32_t *** const *l_1032[1];
                union U1 ***l_1041[3][6][3] = {{{(void*)0,&l_750,(void*)0},{(void*)0,&l_750,&l_750},{&l_750,&l_750,&l_750},{&l_750,&l_750,&l_750},{&l_750,&l_750,(void*)0},{&l_750,&l_750,&l_750}},{{(void*)0,&l_750,&l_750},{(void*)0,(void*)0,&l_750},{(void*)0,(void*)0,&l_750},{&l_750,&l_750,&l_750},{&l_750,(void*)0,(void*)0},{(void*)0,&l_750,&l_750}},{{&l_750,&l_750,&l_750},{&l_750,(void*)0,&l_750},{&l_750,&l_750,(void*)0},{&l_750,(void*)0,&l_750},{(void*)0,(void*)0,&l_750},{&l_750,&l_750,&l_750}}};
                union U1 ****l_1040[2][5][6] = {{{(void*)0,&l_1041[0][1][1],&l_1041[0][1][1],(void*)0,&l_1041[0][1][1],&l_1041[0][1][1]},{(void*)0,&l_1041[0][1][1],&l_1041[0][1][1],(void*)0,&l_1041[0][1][1],&l_1041[0][1][1]},{(void*)0,&l_1041[0][1][1],&l_1041[0][1][1],(void*)0,&l_1041[0][1][1],&l_1041[0][1][1]},{&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1]},{&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1]}},{{&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1]},{&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1]},{&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1]},{&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1]},{&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1],&l_1041[0][1][1]}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1032[i] = &l_1033[5];
                if ((safe_mul_func_int16_t_s_s(l_893, p_16)))
                { 
                    int32_t ***l_894[7][7][1] = {{{&g_247},{(void*)0},{(void*)0},{&g_247},{&g_247},{&g_247},{(void*)0}},{{(void*)0},{&g_247},{&g_247},{&g_247},{(void*)0},{(void*)0},{&g_247}},{{&g_247},{&g_247},{(void*)0},{(void*)0},{&g_247},{&g_247},{&g_247}},{{(void*)0},{(void*)0},{&g_247},{&g_247},{&g_247},{(void*)0},{(void*)0}},{{&g_247},{&g_247},{&g_247},{(void*)0},{(void*)0},{&g_247},{&g_247}},{{&g_247},{(void*)0},{(void*)0},{&g_247},{&g_247},{&g_247},{(void*)0}},{{(void*)0},{&g_247},{&g_247},{&g_247},{(void*)0},{(void*)0},{&g_247}}};
                    int8_t **l_906 = &g_492[1][4][3];
                    int8_t ***l_905 = &l_906;
                    uint64_t *l_923[7][6] = {{(void*)0,&g_237,(void*)0,(void*)0,&g_237,(void*)0},{(void*)0,&g_237,(void*)0,(void*)0,&g_237,(void*)0},{(void*)0,&g_237,(void*)0,(void*)0,&g_237,(void*)0},{(void*)0,&g_237,(void*)0,(void*)0,&g_237,(void*)0},{(void*)0,&g_237,(void*)0,(void*)0,&g_237,(void*)0},{(void*)0,&g_237,(void*)0,(void*)0,&g_237,(void*)0},{(void*)0,&g_237,(void*)0,(void*)0,&g_237,(void*)0}};
                    struct S0 l_927[7] = {{-1},{-5},{-1},{-1},{-5},{-1},{-1}};
                    int32_t *l_932 = &g_428;
                    int32_t **l_931 = &l_932;
                    int i, j, k;
                    (*l_734) &= (((l_895 = &g_49[3][0][1]) != &g_49[3][4][3]) == (0UL != g_54));
                    l_925[0] ^= (safe_mul_func_uint8_t_u_u(((*p_15) = (safe_mod_func_uint8_t_u_u((l_893 || (safe_mul_func_uint16_t_u_u(65535UL, ((!l_893) >= ((l_907 = ((*l_905) = &g_53)) == (void*)0))))), (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((*l_733) = ((*l_731) = ((g_233 ^= ((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((safe_mod_func_uint64_t_u_u((g_237 &= ((p_16 , ((void*)0 != &l_780)) > l_893)), 0x1207C4F561A60B29LL)) || g_302))), 6)) >= g_465)) ^ p_16))) != l_924), p_16)), (-3L))) > 0L) , g_428) > p_16) < g_405), 7)), 5))))), 0x31L));
                    l_927[5] = l_926;
                    (*l_733) = (safe_add_func_int32_t_s_s(1L, ((*p_15) & (((((*l_931) = func_31((l_930 == l_930), &g_7[1][3])) == &g_428) , l_933) != (void*)0))));
                }
                else
                { 
                    int64_t l_935 = 0x7E20087879226194LL;
                    int32_t l_938 = 0L;
                    int32_t l_939 = 2L;
                    int32_t l_945[7][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                    int32_t l_969 = 0x7B66DDA2L;
                    int16_t *l_993 = &g_79;
                    int i, j;
                    l_946--;
                    (*l_895) = (*g_247);
                    (*l_731) = ((*l_734) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_302, l_945[3][0])), ((safe_lshift_func_int8_t_s_s((l_955[0][0][6] != ((safe_mod_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((p_16 < l_938), (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((((*p_15) || l_968) ^ l_969), (-2L))) >= 0UL) == l_893), 0L)), g_970)))), (-3L))) , g_465), (***g_876))) , &g_43[5])), p_16)) >= 0L))));
                    (*l_734) ^= ((((*l_753) = ((g_302 = ((safe_add_func_uint16_t_u_u((l_973 <= (((safe_add_func_int8_t_s_s((~(((safe_mul_func_uint8_t_u_u(((((p_16 != 0xAB7D05F4L) != ((safe_mod_func_uint64_t_u_u((l_940 == (((*l_993) &= (((*g_546) |= 1L) || (((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((*g_283) = (safe_mul_func_uint8_t_u_u(0xDBL, ((*p_15) = 0x42L)))), 1)), 0xA3CEL)), (*l_735))), g_54)), 253UL)) & p_16) , 2L))) != (-9L))), p_16)) >= 0x0DL)) | p_16) ^ 1UL), g_405)) > p_16) >= (*l_735))), l_939)) != 0L) & g_428)), g_50[3])) , 0xF8B3BCFBBE9984D4LL)) ^ 18446744073709551612UL)) , &g_49[1][5][6]) == &l_737[0][0][3]);
                    (*g_319) = ((*l_18) = l_926);
                }
                if (((safe_add_func_uint8_t_u_u((*g_283), (*g_283))) && 0x0D4E92AAL))
                { 
                    int16_t *l_1020 = &g_79;
                    int32_t l_1021 = 0x10FCA863L;
                    uint64_t *l_1022 = &g_237;
                    if (g_302)
                        goto lbl_996;
                    l_937 ^= (((safe_mod_func_int8_t_s_s((-5L), ((safe_sub_func_int32_t_s_s(((((*l_753) = ((*p_15) | (((((safe_add_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((p_16 = ((((*l_762) = (((((*l_1022) = (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(p_16, (safe_mul_func_int16_t_s_s(g_8, ((safe_sub_func_int64_t_s_s(((*l_733) |= (((*l_1020) = (((((~(((((*g_283) != 0x87L) , ((***l_877) = (**g_700))) != (void*)0) , 0x3C4199AEL)) != p_16) | 0xA7314B30D928759ALL) ^ p_16) == 252UL)) , l_1021)), l_1021)) >= 0x5BL))))) && p_16), 1L)), p_16))) < g_299) , (-7L)) , l_1021)) > p_16) ^ 4L)), 0L)), 7)) > 0x6352L) != l_941[0][4][5]), 0xDD91L)) , (****g_874)), l_1021)) && (*g_283)) , 0x2A8B0283L) >= l_1023) & g_320[0].f0))) || p_16) == 0x457A8126E14D1A7ELL), g_465)) & l_1024))) >= l_941[4][5][0]) && 0xD3C4L);
                }
                else
                { 
                    uint64_t l_1029[7] = {0x5B663341B1864733LL,0xE73580347BFD994CLL,0x5B663341B1864733LL,0x5B663341B1864733LL,0xE73580347BFD994CLL,0x5B663341B1864733LL,0x5B663341B1864733LL};
                    union U1 ***l_1039 = &l_750;
                    union U1 ****l_1038[1];
                    const int64_t ** const l_1042 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1038[i] = &l_1039;
                    (*l_735) ^= ((((((p_16 && 4294967289UL) , (!(+0UL))) && (safe_lshift_func_int16_t_s_u(l_1029[5], (((-1L) <= (65526UL <= p_16)) > l_1029[5])))) , l_1032[0]) != l_1036) == (*l_733));
                    l_1040[1][4][2] = l_1038[0];
                    (*l_735) ^= (((*g_876) = (**l_877)) != l_1042);
                    (*g_247) = func_31(l_1043, &l_925[0]);
                }
                return l_1044;
            }
        }
    }
    return &g_7[1][3];
}



static struct S0 * func_21(uint16_t  p_22, int32_t  p_23, int32_t  p_24)
{ 
    int64_t ** const l_699 = &g_546;
    int64_t ** const *l_698 = &l_699;
    int64_t ** const **l_702 = &g_700;
    uint16_t *l_707 = &g_228[5];
    int32_t *l_720 = &g_299;
    int32_t l_721 = (-9L);
    struct S0 *l_728[6][1];
    struct S0 *l_729 = (void*)0;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_728[i][j] = &g_139;
    }
    l_720 = ((((((*g_283) = 0xCAL) && p_22) < (l_698 != ((*l_702) = g_700))) && (safe_add_func_uint32_t_u_u(((g_233++) < ((((&g_43[2] != (g_722 = ((((--(*l_707)) > (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((((*g_546) ^= (((*l_720) |= (safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(0x06L, (safe_sub_func_int32_t_s_s((&g_428 != (void*)0), p_22)))), p_23))) , 0x16E1C4A3499ACF87LL)) ^ p_24), p_24)) < p_23), l_721))) && (*l_720)) , &g_537))) > 255UL) , p_24) == (*g_283))), g_405))) , &l_721);
    (*l_720) &= ((g_405--) < (-1L));
    for (g_302 = 0; (g_302 < (-18)); g_302 = safe_sub_func_uint8_t_u_u(g_302, 1))
    { 
        return l_728[3][0];
    }
    return l_729;
}



static uint16_t  func_25(int16_t  p_26)
{ 
    int16_t l_325[2][7] = {{4L,0xA1ABL,4L,0xA1ABL,4L,0xA1ABL,4L},{0xA047L,0xA047L,0xA047L,0xA047L,0xA047L,0xA047L,0xA047L}};
    int32_t l_326 = 0xBE802787L;
    int32_t l_347 = (-1L);
    const struct S0 *l_363[6][2] = {{&g_320[0],&g_320[0]},{&g_320[0],(void*)0},{(void*)0,&g_138},{(void*)0,&g_138},{(void*)0,(void*)0},{&g_320[0],&g_320[0]}};
    const struct S0 **l_362 = &l_363[5][1];
    const struct S0 ***l_361 = &l_362;
    int16_t l_378 = 1L;
    uint32_t l_389[7];
    struct S0 l_417 = {-17};
    int32_t ****l_455 = (void*)0;
    uint8_t *l_456 = (void*)0;
    int64_t *l_484 = (void*)0;
    const uint16_t *l_487[3];
    uint16_t l_500 = 65533UL;
    int32_t l_509 = 1L;
    int32_t l_511 = 0xD38944C5L;
    uint32_t *l_523 = &g_233;
    union U1 *l_639[2];
    const int64_t *l_664 = &g_491;
    const int64_t **l_663[5][4];
    int32_t l_670 = 4L;
    int32_t l_671 = (-1L);
    int32_t l_674 = 0x2F70BE73L;
    int32_t l_675 = 5L;
    int32_t l_676 = 0xF3ACA580L;
    int32_t l_678 = 0x30FA9B14L;
    int32_t l_679 = 6L;
    int32_t l_680 = 0xE38007A8L;
    int32_t l_682[7];
    uint32_t l_691 = 0UL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_389[i] = 0x20B3BE1CL;
    for (i = 0; i < 3; i++)
        l_487[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_639[i] = (void*)0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            l_663[i][j] = &l_664;
    }
    for (i = 0; i < 7; i++)
        l_682[i] = 0xE589176EL;
lbl_412:
    l_326 |= l_325[0][0];
    for (l_326 = 0; (l_326 <= 13); ++l_326)
    { 
        int32_t **l_335 = &g_49[3][4][5];
        uint64_t *l_338[4];
        int8_t **l_350[5][7] = {{&g_53,&g_53,(void*)0,(void*)0,&g_53,&g_53,&g_53},{&g_53,(void*)0,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,(void*)0,&g_53,&g_53,&g_53},{&g_53,(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_53},{(void*)0,&g_53,&g_53,&g_53,(void*)0,&g_53,(void*)0}};
        union U1 l_360 = {0};
        int32_t l_385 = 0x344A9DB2L;
        struct S0 l_413 = {-16};
        int32_t *l_501[6] = {&l_385,&l_385,&l_385,&l_385,&l_385,&l_385};
        int32_t **l_502 = (void*)0;
        int32_t **l_503 = &l_501[0];
        uint8_t l_512 = 1UL;
        struct S0 l_516 = {-0};
        const int64_t *l_662 = &g_302;
        const int64_t **l_661 = &l_662;
        int i, j;
        for (i = 0; i < 4; i++)
            l_338[i] = (void*)0;
        if ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((void*)0 == l_335), ((safe_div_func_uint64_t_u_u(((((((g_237++) , (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((l_325[0][0] && (safe_div_func_uint16_t_u_u((p_26 && (l_325[0][0] < (((((l_347 |= (*g_283)) >= (safe_div_func_uint16_t_u_u(((((-1L) ^ p_26) , 249UL) | p_26), p_26))) > p_26) , 18446744073709551613UL) > 0x25A5FD5D9550B86BLL))), l_325[0][0]))) | p_26) , 0x1649L), p_26)), g_233))) >= g_50[5]) , l_350[2][5]) != (void*)0) || 0x67C3B918032C116ELL), g_299)) == l_326))), p_26)), 0x5EB7L)))
        { 
            const int8_t l_354 = 0x56L;
            union U1 l_358 = {0};
            int32_t *l_367 = &l_347;
            struct S0 l_370 = {-10};
            int32_t l_387 = 0L;
            int32_t l_388 = 0x72545D5FL;
            int8_t l_408[3];
            int32_t ***l_444 = &g_247;
            int i;
            for (i = 0; i < 3; i++)
                l_408[i] = 0x29L;
            for (g_54 = 12; (g_54 > (-23)); g_54--)
            { 
                int32_t *l_355 = &g_160;
                (*l_335) = ((!l_354) , &g_2);
                (*l_335) = l_355;
                for (g_233 = 0; (g_233 != 12); g_233 = safe_add_func_uint64_t_u_u(g_233, 6))
                { 
                    struct S0 ***l_359 = &g_318[1][0][1];
                    (*l_355) = (((l_358 , l_359) == (g_364[2][3][0] = (l_360 , l_361))) & 0xB268AFD3L);
                }
                (*l_335) = l_367;
            }
            if (((*l_367) |= (safe_mul_func_uint8_t_u_u(((**l_361) == (l_370 , (void*)0)), 255UL))))
            { 
                struct S0 l_379 = {-31};
                for (g_54 = 5; (g_54 >= 0); g_54 -= 1)
                { 
                    uint16_t *l_384 = &g_228[5];
                    int i;
                    if ((*l_367))
                        break;
                    g_50[g_54] &= ((!(safe_lshift_func_int16_t_s_s(((((*l_384) = (safe_add_func_uint8_t_u_u(((*g_283)++), ((l_378 , (p_26 || (((*g_319) = l_370) , (l_379 , (safe_div_func_int64_t_s_s(p_26, (safe_mul_func_uint8_t_u_u(((g_228[5] ^ p_26) == (*l_367)), (*l_367))))))))) , p_26)))) <= p_26) ^ 0x2F2392FFL), l_379.f0))) , l_325[0][1]);
                }
            }
            else
            { 
                int32_t *l_386[3][7][1] = {{{(void*)0},{&l_326},{(void*)0},{&l_326},{(void*)0},{&l_326},{(void*)0}},{{&l_326},{(void*)0},{&l_326},{(void*)0},{&l_326},{(void*)0},{&l_326}},{{(void*)0},{&l_326},{(void*)0},{&l_326},{(void*)0},{&l_326},{(void*)0}}};
                uint16_t *l_406 = (void*)0;
                uint16_t *l_407 = &g_228[5];
                int16_t *l_409 = (void*)0;
                int16_t *l_410 = &g_8;
                struct S0 l_416 = {-30};
                int i, j, k;
                if (p_26)
                    break;
                l_389[1]--;
                l_347 |= p_26;
                if ((safe_mod_func_uint32_t_u_u(((0x7C5BL > ((*l_410) = (((safe_add_func_int8_t_s_s((0UL == ((safe_rshift_func_uint16_t_u_u(g_320[0].f0, 14)) ^ (((!(l_326 ^ (((*l_407) = (safe_mul_func_uint64_t_u_u((g_405 &= (safe_mul_func_int8_t_s_s(l_347, (*g_283)))), 0L))) | p_26))) > l_408[0]) == 2UL))), p_26)) , 252UL) , 0x7236L))) != 0x13C3L), p_26)))
                { 
                    int32_t *l_411 = &l_387;
                    struct S0 *l_414 = (void*)0;
                    struct S0 *l_415 = &l_370;
                    struct S0 ***l_421[2][2];
                    struct S0 ****l_420 = &l_421[1][0];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_421[i][j] = &g_322[0][4];
                    }
                    (*l_335) = l_411;
                    if (l_354)
                        goto lbl_412;
                    (*l_415) = ((*g_319) = l_413);
                    l_417 = l_416;
                    (*l_335) = (((safe_sub_func_int8_t_s_s((l_417.f0 = (g_428 |= (g_54 = ((((((*l_420) = &g_318[3][0][5]) != (void*)0) > (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(p_26, g_73)) , g_7[0][0]), g_2)), p_26))) , l_326) == 0x3CCBC94EL)))), (*l_367))) > g_8) , l_386[1][4][0]);
                }
                else
                { 
                    int32_t *l_438[3][4][3] = {{{(void*)0,&g_428,(void*)0},{(void*)0,&g_428,(void*)0},{&g_428,&g_428,&g_428},{&g_428,(void*)0,(void*)0}},{{&g_428,&g_428,(void*)0},{&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428}},{{(void*)0,&g_428,&g_428},{(void*)0,(void*)0,&g_428},{&g_428,&g_428,&g_428},{(void*)0,&g_428,(void*)0}}};
                    int32_t ***l_443 = &g_247;
                    int32_t ****l_442 = &l_443;
                    int i, j, k;
                    (*l_367) = ((safe_lshift_func_int8_t_s_s((0x54L | (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((l_386[1][4][0] == &g_299), (~((g_428 |= g_160) , p_26)))) | (((safe_lshift_func_uint16_t_u_u(((~(((*l_442) = &l_335) != (((*l_367) >= (*l_367)) , l_444))) | 0x1FL), p_26)) != 1UL) & 1UL)), p_26)), 0xEADE538FL))), (*l_367))) ^ p_26);
                    if (p_26)
                        break;
                }
                l_413.f0 |= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((((*l_410) = (&g_364[2][3][0] == &l_361)) | (safe_mul_func_int8_t_s_s(((((void*)0 == l_386[1][4][0]) , (&g_73 == (void*)0)) < ((safe_unary_minus_func_uint32_t_u(4UL)) < 0x64FDL)), p_26))) == p_26) < p_26), 6)), p_26));
            }
            for (g_8 = 0; (g_8 >= 11); ++g_8)
            { 
                union U1 l_454 = {0};
                int32_t l_461 = 0x2A33DC5AL;
                uint32_t l_464 = 0x338CA3C4L;
                uint16_t *l_486 = &g_405;
                (*l_335) = func_31((l_454 , (0xC5L ^ ((void*)0 == l_455))), l_456);
                (*l_367) = (safe_rshift_func_int8_t_s_u((g_320[0].f0 | ((safe_rshift_func_int8_t_s_u(l_461, 1)) , ((p_26 != (g_465 &= (safe_add_func_int32_t_s_s(1L, (l_413.f0 = (((((((((l_464 && ((p_26 >= p_26) <= g_237)) ^ p_26) || g_73) || g_7[1][3]) , p_26) & (*g_283)) & 8L) >= (-1L)) & 0x0882550AL)))))) <= 0x6993L))), l_461));
                for (l_388 = 2; (l_388 >= 0); l_388 -= 1)
                { 
                    int64_t *l_485 = &g_302;
                    int32_t l_488 = 0x735B0B7EL;
                    int64_t *l_489 = (void*)0;
                    int64_t *l_490 = &g_491;
                    int32_t *l_493 = &g_50[5];
                    (*g_319) = l_370;
                    (*l_493) &= ((((((safe_add_func_int64_t_s_s(((p_26 ^ (0x13D9700EA2001138LL ^ ((*l_490) ^= (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((*g_283) = (safe_div_func_uint16_t_u_u(g_299, (0L ^ ((safe_rshift_func_uint16_t_u_u((p_26 < (p_26 , ((safe_sub_func_uint64_t_u_u((g_237 = ((safe_lshift_func_uint8_t_u_u(((l_486 = (((*l_485) = (safe_rshift_func_uint16_t_u_s((l_484 != (void*)0), 11))) , &g_228[3])) == l_487[0]), 2)) >= l_488)), 18446744073709551615UL)) && p_26))), p_26)) > l_461))))), 0xADL)), g_428)), p_26))))) , p_26), 0x4D2B7A47AF7AF3A9LL)) , g_492[1][4][3]) == (void*)0) | (*l_367)) , 5L) < g_8);
                    if ((*l_367))
                        continue;
                }
            }
        }
        else
        { 
            uint8_t l_494 = 0x7EL;
            l_494 &= p_26;
            return g_50[5];
        }
        (*l_503) = ((*l_335) = (p_26 , (((++g_237) , l_413.f0) , ((+(((((l_417.f0 = (l_413.f0 = (4L >= ((8L <= (p_26 ^ ((l_413 , (((safe_rshift_func_uint8_t_u_s((0x658D188DF2D374DCLL && g_465), 5)) < g_73) <= 0xACD91A6590EBA738LL)) | l_500))) & g_7[1][3])))) > p_26) <= p_26) <= 1UL) ^ 0xC336L)) , &l_347))));
        for (g_160 = 5; (g_160 >= 0); g_160 -= 1)
        { 
            int8_t *l_531 = (void*)0;
            union U1 *l_536 = &g_537;
            int16_t *l_586 = &l_325[0][0];
            int16_t *l_591 = &g_79;
            uint16_t l_602 = 65534UL;
            union U1 *l_622 = &l_360;
            union U1 **l_634 = (void*)0;
            struct S0 *** const l_649[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            struct S0 *** const *l_648[2];
            struct S0 *** const **l_647 = &l_648[1];
            int32_t l_665 = (-1L);
            int32_t l_666 = (-5L);
            int32_t l_667 = (-1L);
            int32_t l_668 = 0L;
            int32_t l_669 = (-3L);
            int32_t l_672 = 0x906E4F6BL;
            int32_t l_673 = (-1L);
            int32_t l_677 = 0x8674CDE8L;
            int32_t l_681 = (-1L);
            int32_t l_683 = 6L;
            int32_t l_684 = (-2L);
            int32_t l_685 = 0x55D7CBE7L;
            int16_t l_686 = (-4L);
            int32_t l_687 = 0x7DA9A320L;
            int32_t l_688 = 0xBA758DDDL;
            int32_t l_689 = (-1L);
            int32_t l_690 = 1L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_648[i] = &l_649[0][4];
            if (((((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((&g_247 != (g_50[g_160] , &g_247)), ((!((void*)0 == &g_364[2][3][0])) | ((((l_360 , 0UL) > p_26) , g_50[g_160]) < p_26)))) ^ p_26) , p_26), p_26)) > 0UL) , p_26) != 4L))
            { 
                const int32_t l_520 = 0L;
                int32_t *l_538 = &l_347;
                for (g_465 = 0; (g_465 <= 6); g_465 += 1)
                { 
                    int32_t l_510[5][5][2] = {{{2L,0x617C57FCL},{2L,2L},{2L,0x617C57FCL},{2L,2L},{2L,0x617C57FCL}},{{2L,2L},{2L,0x617C57FCL},{2L,2L},{2L,0x617C57FCL},{2L,2L}},{{2L,0x617C57FCL},{2L,2L},{2L,0x617C57FCL},{2L,2L},{2L,0x617C57FCL}},{{2L,2L},{2L,0x617C57FCL},{2L,2L},{2L,0x617C57FCL},{2L,2L}},{{2L,0x617C57FCL},{2L,2L},{2L,0x617C57FCL},{2L,2L},{2L,0x617C57FCL}}};
                    struct S0 l_515 = {20};
                    int i, j, k;
                    g_50[(g_160 + 1)] = p_26;
                    ++l_512;
                    l_515 = l_515;
                }
                for (g_54 = 2; (g_54 >= 0); g_54 -= 1)
                { 
                    uint8_t l_521 = 0x65L;
                    struct S0 *l_524[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_524[i] = (void*)0;
                    (*g_319) = l_516;
                    (*l_335) = (((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(l_520)), l_521)) , ((((+((l_417 = ((*g_319) = ((&g_233 != l_523) , l_413))) , (safe_div_func_uint64_t_u_u(((3UL && (safe_add_func_uint32_t_u_u((g_50[g_160] = (safe_add_func_uint32_t_u_u((&g_54 == l_531), 0x2BF49C96L))), 0L))) & 2L), l_521)))) != p_26) <= 0xF066L) , g_405)) , (void*)0);
                    return l_520;
                }
                (**l_503) = (safe_mul_func_int8_t_s_s(p_26, p_26));
                for (l_347 = 0; (l_347 <= 2); l_347 += 1)
                { 
                    const int32_t *l_535 = &l_509;
                    const int32_t **l_534 = &l_535;
                    (*l_534) = &l_520;
                }
                for (g_299 = 0; (g_299 <= 0); g_299 += 1)
                { 
                    int i, j, k;
                    (*g_319) = (**g_365);
                    l_536 = &g_43[1];
                    l_538 = &g_50[g_160];
                }
            }
            else
            { 
                uint64_t l_550[6][4][1] = {{{18446744073709551615UL},{0x791AEED6AFEC7515LL},{0x791AEED6AFEC7515LL},{18446744073709551615UL}},{{0x791AEED6AFEC7515LL},{0x791AEED6AFEC7515LL},{18446744073709551615UL},{0x791AEED6AFEC7515LL}},{{0x791AEED6AFEC7515LL},{18446744073709551615UL},{0x791AEED6AFEC7515LL},{0x791AEED6AFEC7515LL}},{{18446744073709551615UL},{0x791AEED6AFEC7515LL},{0x791AEED6AFEC7515LL},{18446744073709551615UL}},{{0x791AEED6AFEC7515LL},{0x791AEED6AFEC7515LL},{18446744073709551615UL},{0x791AEED6AFEC7515LL}},{{0x791AEED6AFEC7515LL},{18446744073709551615UL},{0x791AEED6AFEC7515LL},{0x791AEED6AFEC7515LL}}};
                int64_t *l_578 = &g_302;
                struct S0 l_579 = {6};
                int16_t l_581[1][7][4] = {{{(-6L),(-1L),1L,1L},{(-6L),(-6L),0xD726L,0x40ADL},{1L,1L,(-6L),0L},{(-1L),(-1L),1L,0xD726L},{1L,0x40ADL,1L,0x6530L},{0x40ADL,(-1L),1L,0L},{0L,0xD726L,0xF175L,(-1L)}}};
                int i, j, k;
                (**l_503) ^= (((!(safe_lshift_func_uint8_t_u_u((0xD7239CF8L || ((g_50[g_160] | p_26) && (safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((g_50[g_160] = ((g_546 = &g_491) == (void*)0)), (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_s(0xD8L, 2)) || (((l_413 , p_26) > 1L) <= 0x859C03EFL)))))), g_138.f0)))), l_550[0][3][0]))) && 0L) & p_26);
                if (p_26)
                    continue;
                for (g_299 = 2; (g_299 >= 0); g_299 -= 1)
                { 
                    int64_t **l_577 = &l_484;
                    int32_t l_580 = 0x708F29E9L;
                    (**l_503) |= (((*g_283)--) & (safe_div_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0UL, p_26)) ^ 0xF738C20BED321F3FLL), (safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((((((l_360 , (((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_50[1], ((p_26 ^ (safe_mul_func_uint16_t_u_u(((l_578 = ((*l_577) = l_338[0])) != (void*)0), p_26))) , 0x9AACL))), p_26)), p_26)) <= 0x91L) != 0x2EL)) <= (*g_546)) & l_550[0][3][0]) , l_579) , p_26), p_26)) > l_580), l_581[0][3][2])), 14)), p_26)), p_26)), p_26)))));
                }
            }
            if (p_26)
                continue;
            if ((((safe_sub_func_int32_t_s_s(((g_73 = (safe_mul_func_int16_t_s_s(((*l_586) = g_7[0][0]), (((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u((((*l_591) = p_26) == ((safe_sub_func_int8_t_s_s(((&l_413 == (((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(p_26, ((((((void*)0 != &g_546) && (safe_div_func_int8_t_s_s((((((l_602 == p_26) | 0L) && p_26) != 8L) & (*g_283)), (*g_283)))) | g_50[5]) < 0UL) | 0UL))) >= p_26), 0x457C873BL)), 247UL)) && p_26) , (void*)0)) , p_26), p_26)) != 6L)), g_465)) && (*g_546)), p_26)) < 0xB560L) > g_7[2][4])))) != p_26), g_7[1][3])) , (void*)0) != &l_500))
            { 
                uint32_t l_603 = 4294967291UL;
                l_603++;
                return g_160;
            }
            else
            { 
                struct S0 l_615[4] = {{30},{30},{30},{30}};
                union U1 **l_621 = &l_536;
                uint16_t *l_623[3][7] = {{&g_228[5],&g_228[0],&g_228[0],&g_228[5],&g_228[5],(void*)0,&g_228[5]},{(void*)0,&g_228[1],&g_228[5],&g_228[5],&g_228[1],(void*)0,&g_228[0]},{&g_228[1],&g_228[5],&l_602,&g_228[5],&g_228[5],&l_602,&g_228[5]}};
                int64_t **l_625 = &g_546;
                int64_t ***l_624 = &l_625;
                union U1 ***l_635 = &l_634;
                int8_t l_640 = 0L;
                uint8_t l_641 = 3UL;
                int i, j;
                (**l_503) &= (p_26 , ((!(safe_lshift_func_int16_t_s_s(((g_405 ^= (safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_26, ((((((safe_add_func_int8_t_s_s(((((*g_319) = l_615[1]) , ((safe_rshift_func_int16_t_s_s(((g_50[g_160] = (g_50[g_160] && (~(safe_sub_func_int64_t_s_s(((*g_546) ^= ((((*l_621) = &l_360) != (((void*)0 != &l_615[1]) , l_622)) == 0x3B7863EA4F30E323LL)), p_26))))) == p_26), g_7[1][3])) || p_26)) , p_26), p_26)) == 0x7DE780E1E9345424LL) , p_26) , p_26) , 2UL) , p_26))), 0x4C838D1AL))) ^ 65528UL), 1))) & g_73));
                (*l_624) = &l_484;
                if ((safe_rshift_func_int16_t_s_s(((*l_586) |= (safe_rshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s((255UL ^ p_26), (((safe_rshift_func_int8_t_s_s(((l_621 != ((*l_635) = l_634)) < 246UL), 1)) < (~(safe_lshift_func_uint8_t_u_u((&g_43[5] != l_639[0]), p_26)))) | (-8L)))) && l_640) >= (*g_283)), 6))), l_615[1].f0)))
                { 
                    struct S0 ***l_646 = &g_318[1][0][1];
                    struct S0 *** const *l_645 = &l_646;
                    struct S0 *** const **l_644 = &l_645;
                    union U1 l_650 = {0};
                    uint64_t **l_656 = &l_338[1];
                    if (p_26)
                        break;
                    if (l_615[1].f0)
                        break;
                    ++l_641;
                    l_647 = l_644;
                    (**l_503) = (p_26 > ((((*l_523) = ((((l_650 , (safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((((l_641 < 18446744073709551608UL) , ((+(p_26 == (&g_237 == ((*l_656) = &g_237)))) & p_26)) != g_7[1][3]) ^ 0xC44E3779F8C319EFLL), 0xF062L)), 0xE3941890228BAA95LL))) <= 0x2E9D358EL) , 0L) && g_79)) == 0xD69CD0A8L) || 0xE4L));
                }
                else
                { 
                    uint8_t l_657 = 0x55L;
                    struct S0 *l_660 = &g_320[0];
                    (**l_503) ^= p_26;
                    if (l_657)
                        continue;
                    if (p_26)
                        break;
                    (**l_503) ^= (safe_lshift_func_uint16_t_u_s(p_26, 6));
                    (*g_365) = l_660;
                }
                l_663[0][2] = l_661;
            }
            (**l_503) ^= p_26;
            --l_691;
        }
        for (l_347 = 0; (l_347 <= 4); l_347 += 1)
        { 
            int32_t l_694 = 0L;
            int32_t l_695 = 0x062CCB8AL;
            l_695 ^= l_694;
        }
    }
    return p_26;
}



static uint16_t  func_29(uint32_t  p_30)
{ 
    union U1 l_36[2] = {{0},{0}};
    int32_t *l_44 = &g_2;
    int32_t **l_307 = &g_49[3][0][1];
    int i;
    (*l_307) = func_31((safe_add_func_uint32_t_u_u((l_36[0] , (((safe_add_func_uint64_t_u_u(func_39((g_43[5] , ((void*)0 == l_44)), (*l_44), g_8), 0xC1E3E3E5AEC1DC8DLL)) > g_50[5]) & 0L)), p_30)), g_283);
    return (*l_44);
}



static int32_t * func_31(int8_t  p_32, uint8_t * p_33)
{ 
    int32_t l_285[5][2][6] = {{{2L,0xE3313FFEL,0L,0xE3313FFEL,2L,0L},{1L,0xE3313FFEL,0xB828CDF7L,0xE3313FFEL,1L,0L}},{{2L,0xE3313FFEL,0L,0xE3313FFEL,2L,0L},{1L,0xE3313FFEL,0xB828CDF7L,0xE3313FFEL,1L,0L}},{{2L,0xE3313FFEL,0L,0xE3313FFEL,2L,0L},{1L,0xE3313FFEL,0xB828CDF7L,0xE3313FFEL,1L,0L}},{{2L,0xE3313FFEL,0L,0xE3313FFEL,2L,0L},{1L,0xE3313FFEL,0xB828CDF7L,0xE3313FFEL,1L,0L}},{{2L,0xE3313FFEL,0L,0xE3313FFEL,2L,0L},{1L,0xE3313FFEL,0xB828CDF7L,0xE3313FFEL,1L,0L}}};
    int32_t *l_286 = &g_160;
    int32_t *l_287 = (void*)0;
    int32_t *l_288 = &g_50[5];
    int32_t *l_289[7][4][4] = {{{&g_160,(void*)0,&g_50[5],&g_50[2]},{(void*)0,(void*)0,&g_50[5],&g_50[5]},{&g_160,&g_50[0],&g_50[5],&g_50[5]},{&g_160,&g_50[5],(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_50[5],(void*)0},{&g_50[5],&g_50[5],(void*)0,&g_50[5]},{&g_50[5],&g_50[0],&g_50[5],&g_50[5]},{(void*)0,(void*)0,&g_2,&g_50[2]}},{{(void*)0,(void*)0,&g_50[5],&g_50[5]},{&g_50[5],&g_50[2],(void*)0,&g_50[0]},{&g_50[5],&g_2,&g_50[5],(void*)0},{(void*)0,&g_2,(void*)0,&g_50[0]}},{{&g_160,&g_50[2],&g_50[5],&g_50[5]},{&g_160,(void*)0,&g_50[5],&g_50[2]},{(void*)0,(void*)0,&g_50[5],&g_50[5]},{&g_160,&g_50[0],&g_50[5],&g_50[5]}},{{&g_160,&g_50[5],(void*)0,(void*)0},{(void*)0,(void*)0,&g_50[5],(void*)0},{&g_50[5],&g_50[5],(void*)0,&g_50[5]},{&g_50[5],&g_50[0],&g_50[5],&g_50[5]}},{{(void*)0,(void*)0,&g_2,&g_50[2]},{(void*)0,(void*)0,&g_50[5],&g_50[5]},{&g_50[5],&g_50[2],(void*)0,&g_50[5]},{(void*)0,&g_50[5],&g_50[5],(void*)0}},{{&g_2,&g_50[5],&g_2,&g_50[5]},{&g_160,(void*)0,&g_50[5],&g_50[0]},{&g_160,(void*)0,(void*)0,(void*)0},{(void*)0,&g_50[5],(void*)0,(void*)0}}};
    uint64_t l_290 = 18446744073709551610UL;
    int16_t l_300 = 0x0679L;
    int8_t l_301 = 1L;
    int64_t l_303 = 0L;
    uint32_t l_304 = 0xF4375648L;
    int i, j, k;
    ++l_290;
    for (g_54 = 4; (g_54 <= 26); g_54++)
    { 
        struct S0 *l_295 = &g_139;
        struct S0 **l_296 = &l_295;
        uint32_t *l_298 = &g_233;
        (*l_296) = (p_32 , l_295);
        (*l_288) = (((*l_298) = (safe_unary_minus_func_uint64_t_u(g_7[2][3]))) || 0xB55BB157L);
    }
    l_304++;
    return &g_2;
}



static uint64_t  func_39(const int32_t  p_40, int8_t  p_41, uint8_t  p_42)
{ 
    int64_t l_64[7] = {0x3B919D6B80F4B430LL,0x3B919D6B80F4B430LL,0x3B919D6B80F4B430LL,0x3B919D6B80F4B430LL,0x3B919D6B80F4B430LL,0x3B919D6B80F4B430LL,0x3B919D6B80F4B430LL};
    int32_t l_80[2];
    struct S0 l_97 = {10};
    uint32_t l_135 = 2UL;
    uint64_t l_145 = 1UL;
    uint64_t l_148 = 0x1FBBDD6291BC3C69LL;
    uint32_t l_172 = 18446744073709551614UL;
    int8_t l_188 = 0x88L;
    uint16_t *l_227 = &g_228[5];
    uint16_t l_242 = 0x50ACL;
    uint32_t l_262 = 1UL;
    int8_t **l_269 = &g_53;
    const int32_t *l_282[4][2];
    const int32_t **l_281 = &l_282[3][1];
    int i, j;
    for (i = 0; i < 2; i++)
        l_80[i] = 0L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_282[i][j] = &g_160;
    }
    for (p_41 = 26; (p_41 != 9); --p_41)
    { 
        int32_t *l_48 = &g_2;
        int32_t **l_47[2];
        int16_t l_121 = 1L;
        int8_t l_183 = 0xCBL;
        struct S0 l_193 = {5};
        uint16_t l_194 = 0x5BCEL;
        int32_t l_234 = 0x62700E5FL;
        int8_t l_240 = 0xF3L;
        union U1 l_256 = {0};
        int i;
        for (i = 0; i < 2; i++)
            l_47[i] = &l_48;
        g_49[3][0][1] = &g_2;
        for (g_8 = 0; (g_8 <= 1); g_8 += 1)
        { 
            int32_t l_124 = 0x5AF60329L;
            int32_t l_127[6][6] = {{(-10L),0L,0xE61696E8L,(-10L),0x94C43567L,(-10L)},{(-10L),0x94C43567L,(-10L),0xE61696E8L,0L,(-10L)},{0xB2B9DCA8L,0xBB29333DL,0xE61696E8L,6L,0L,0xB2B9DCA8L},{0xE61696E8L,0x94C43567L,6L,6L,0x94C43567L,0xE61696E8L},{0xB2B9DCA8L,0L,6L,0xE61696E8L,0xBB29333DL,0xB2B9DCA8L},{(-10L),0L,0xE61696E8L,(-10L),0x94C43567L,(-10L)}};
            struct S0 l_142 = {2};
            union U1 l_154[5] = {{0},{0},{0},{0},{0}};
            uint64_t *l_222 = &l_148;
            uint16_t *l_229 = &l_194;
            int8_t **l_232 = &g_53;
            int8_t l_259 = (-10L);
            int8_t l_261 = (-9L);
            int i, j;
            if ((((-10L) || (((*g_53) = ((safe_rshift_func_uint16_t_u_s((((((void*)0 != g_53) <= g_7[g_8][(g_8 + 1)]) < (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(5L, (safe_mod_func_int16_t_s_s((g_50[5] , (~(safe_add_func_int32_t_s_s((l_64[6] && (*g_53)), g_50[4])))), p_41)))), l_64[6]))) <= 0x04L), 12)) == p_42)) >= p_41)) > 0x100F83BF0B62E56CLL))
            { 
                int16_t *l_72 = &g_73;
                int16_t *l_78 = &g_79;
                int32_t l_123 = (-3L);
                int32_t l_125 = 0x6B2DC29DL;
                int32_t l_126 = 0xD5909551L;
                int32_t l_128 = 1L;
                int32_t l_129 = (-1L);
                int32_t l_132 = 0x9A06BD8DL;
                int32_t l_187[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_187[i] = 7L;
                if ((l_80[1] = (((safe_mul_func_uint16_t_u_u(p_41, g_50[6])) , (((*l_78) ^= (safe_add_func_int16_t_s_s((p_40 == (safe_lshift_func_uint16_t_u_s((+(((*l_72) = g_50[5]) != (safe_rshift_func_int8_t_s_u((-1L), (safe_mul_func_int8_t_s_s(l_64[2], ((*g_53) = g_7[g_8][(g_8 + 1)]))))))), 2))), 0xDF21L))) & 0xD221L)) >= p_41)))
                { 
                    const uint8_t l_90[2] = {7UL,7UL};
                    int32_t ** const l_98[4] = {&g_49[3][0][1],&g_49[3][0][1],&g_49[3][0][1],&g_49[3][0][1]};
                    int i;
                    l_80[1] |= (safe_rshift_func_uint8_t_u_u(((g_7[g_8][(g_8 + 1)] == (!(safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_90[0] ^ (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s(0x572BL, ((*l_72) ^= (safe_mod_func_int64_t_s_s((((l_64[4] , (l_97 , p_40)) , l_98[1]) == &g_49[3][1][1]), 0x34D5E33AB57C19DELL))))) != g_7[1][3]), p_42))), g_7[g_8][(g_8 + 1)])), 0x770DL)), 0x4DBF7CD62FFE2AA9LL)))) | 0x9A1548EBL), 7));
                    l_80[0] ^= (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u((p_41 && (safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s(p_41, (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((7UL > (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(p_41, 10)) < g_54), (1L >= p_40))), l_121))) , g_7[1][3]), p_42)), g_73)))), g_50[5]))), p_41)), g_8)) ^ p_41), 6)), p_42));
                    if (p_41)
                        continue;
                }
                else
                { 
                    int32_t l_122[2][2] = {{2L,2L},{2L,2L}};
                    int32_t l_130 = 0x683BAF00L;
                    int32_t l_131 = 0L;
                    int32_t l_133 = 5L;
                    int32_t l_134 = 0x07FF6E85L;
                    int i, j;
                    ++l_135;
                    return g_2;
                }
                g_139 = g_138;
                if ((safe_rshift_func_int8_t_s_s(p_41, 1)))
                { 
                    struct S0 *l_143 = &g_139;
                    int32_t l_144 = (-9L);
                    (*l_143) = l_142;
                    if (l_144)
                        break;
                    if (l_64[6])
                        break;
                    l_97.f0 = (-9L);
                    l_145++;
                }
                else
                { 
                    l_80[1] = 0xC0BA812FL;
                    --l_148;
                    if (p_42)
                        break;
                }
                if (l_80[1])
                { 
                    uint8_t *l_153 = &g_7[2][4];
                    int64_t *l_159[7][7] = {{&l_64[6],&l_64[6],&l_64[6],&l_64[6],&l_64[6],&l_64[6],&l_64[6]},{(void*)0,&l_64[0],&l_64[3],&l_64[6],(void*)0,&l_64[6],&l_64[3]},{(void*)0,(void*)0,&l_64[6],&l_64[6],&l_64[6],&l_64[6],&l_64[4]},{&l_64[6],&l_64[6],&l_64[4],&l_64[6],(void*)0,&l_64[6],&l_64[6]},{&l_64[6],&l_64[6],&l_64[6],&l_64[4],&l_64[6],&l_64[6],&l_64[6]},{&l_64[6],&l_64[6],&l_64[6],&l_64[4],(void*)0,&l_64[6],&l_64[6]},{&l_64[6],&l_64[6],&l_64[0],&l_64[6],&l_64[6],(void*)0,(void*)0}};
                    int32_t l_173 = 3L;
                    int32_t l_174 = 0xAB573FC3L;
                    int32_t l_175 = 6L;
                    int32_t l_176 = 0xB1E9DD07L;
                    int32_t l_177 = 1L;
                    int32_t l_178 = 0xB2FBD109L;
                    int32_t l_179 = 0x632CA02BL;
                    int32_t l_180 = 3L;
                    int32_t l_181 = (-1L);
                    int32_t l_182 = 0xC3F6F0A7L;
                    int32_t l_184 = 0x6229C2D6L;
                    int32_t l_185 = 0L;
                    int32_t l_186[1][3];
                    uint8_t l_189 = 255UL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_186[i][j] = (-5L);
                    }
                    l_123 ^= ((((*l_153) |= g_139.f0) == (g_50[3] || g_50[0])) < (((p_41 , (((g_160 = ((l_154[0] , (l_80[1] = (safe_add_func_uint32_t_u_u(g_139.f0, (safe_mod_func_uint32_t_u_u((g_50[5] ^ g_54), (*l_48))))))) || p_42)) != g_50[5]) , p_42)) >= 0xC598L) == (*g_53)));
                    l_173 = ((1UL | (!((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s(0xB421L, (safe_rshift_func_uint16_t_u_u(((((safe_div_func_uint64_t_u_u(((((l_142.f0 = (((safe_mul_func_uint8_t_u_u(0xB6L, l_124)) != (l_172 = g_7[g_8][(g_8 + 1)])) ^ p_40)) | g_79) || p_42) , g_8), g_50[5])) <= g_73) | g_8) <= 0L), 12)))), p_42)) , l_124))) && g_54);
                    l_189++;
                    g_49[3][0][1] = (void*)0;
                    if (p_41)
                        break;
                }
                else
                { 
                    struct S0 *l_192 = (void*)0;
                    l_193 = l_142;
                    if (l_194)
                        continue;
                }
            }
            else
            { 
                uint32_t l_216[1];
                int32_t l_219 = 1L;
                int i;
                for (i = 0; i < 1; i++)
                    l_216[i] = 0x91D69343L;
                for (l_183 = 0; (l_183 <= 3); l_183 += 1)
                { 
                    uint16_t *l_214 = &l_194;
                    struct S0 *l_215 = &l_97;
                    int i, j, k;
                    (*l_215) = ((p_42 = ((p_41 & ((l_64[6] , (((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((!(safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((g_50[5] ^ ((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((*g_53) = (p_40 ^ (safe_rshift_func_uint16_t_u_s(((*l_214) = (&g_54 == ((safe_lshift_func_uint8_t_u_s(0xA0L, 0)) , &p_41))), l_142.f0)))) , 5L), g_2)), (*l_48))) , p_40)), p_42)), g_73))) || 1UL) != 0x16L), g_160)) , (-1L)), l_97.f0)), 255UL)) != p_40) , 0xD97F3C724B45B9D2LL)) < g_50[5])) >= 0xBA1BEA94EF2FCB7DLL)) , l_97);
                    g_49[2][4][5] = &g_50[2];
                    (*l_215) = g_138;
                    l_216[0]--;
                    l_219 = 0x011F4225L;
                }
            }
            l_80[1] = (l_234 |= (0xDCF8C009L <= (((((safe_rshift_func_int8_t_s_s(0L, 5)) == ((*l_222)--)) <= (g_2 <= ((safe_lshift_func_int16_t_s_u(((l_227 != l_229) != 0x27E7C44743152C32LL), 9)) , (safe_lshift_func_int8_t_s_u((((*l_232) = &l_188) != &g_54), l_127[5][0]))))) || g_2) >= g_233)));
            for (g_54 = 0; (g_54 == 7); g_54 = safe_add_func_uint32_t_u_u(g_54, 6))
            { 
                int32_t **l_245[5][1][1];
                uint16_t l_258 = 1UL;
                int8_t l_260 = 0x03L;
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_245[i][j][k] = &l_48;
                    }
                }
                g_237--;
                if (l_240)
                { 
                    int32_t *l_241 = &l_124;
                    l_241 = &g_160;
                    --l_242;
                    return p_42;
                }
                else
                { 
                    int32_t ***l_246[3][3][4] = {{{(void*)0,(void*)0,&l_47[1],&l_47[1]},{&l_47[1],&l_47[1],&l_47[0],&l_47[0]},{&l_47[1],&l_47[1],&l_47[1],&l_245[4][0][0]}},{{(void*)0,&l_47[0],&l_47[1],(void*)0},{&l_47[1],&l_245[3][0][0],&l_47[0],&l_47[1]},{&l_47[1],&l_245[3][0][0],&l_47[1],(void*)0}},{{&l_245[3][0][0],&l_47[0],&l_245[3][0][0],&l_245[4][0][0]},{&l_245[4][0][0],&l_47[1],&l_47[1],&l_47[0]},{&l_47[1],&l_47[1],&l_47[1],&l_47[1]}}};
                    struct S0 *l_249 = &g_139;
                    struct S0 **l_248 = &l_249;
                    int16_t *l_257[4][5] = {{&l_121,&l_121,&l_121,&l_121,&l_121},{&g_79,&g_8,&g_79,&g_8,&g_79},{&l_121,&l_121,&l_121,&l_121,&l_121},{&l_121,&g_8,&l_121,&g_8,&l_121}};
                    int i, j, k;
                    g_247 = l_245[3][0][0];
                    (*l_248) = &l_193;
                    l_80[0] &= (l_258 = (safe_mul_func_int8_t_s_s((p_41 == (safe_mod_func_uint8_t_u_u(((((0x788CE28CL | (safe_div_func_int16_t_s_s((l_256 , (g_73 = 0xB537L)), g_160))) <= (g_79 ^= p_42)) || ((void*)0 == &l_127[5][0])) || p_40), l_145))), (*g_53))));
                    l_262++;
                }
                if (p_42)
                    break;
                for (l_242 = 5; (l_242 < 8); l_242++)
                { 
                    struct S0 *l_267 = (void*)0;
                    struct S0 *l_268[2][7] = {{&l_97,(void*)0,&l_97,&l_97,(void*)0,&l_97,&l_142},{&l_142,&l_142,&l_97,&l_142,&l_142,&l_97,&l_142}};
                    int i, j;
                    l_142 = l_142;
                }
                if (p_42)
                    continue;
            }
            l_80[0] = (((l_97.f0 = (*l_48)) == ((void*)0 != l_269)) , l_261);
        }
        l_97.f0 = (*l_48);
    }
    (*l_281) = &p_40;
    (*l_281) = (void*)0;
    return g_237;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);

    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_228[i], "g_228[i]", print_hash_value);

    }
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_320[i].f0, "g_320[i].f0", print_hash_value);

    }
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1077[i], "g_1077[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1079[i], "g_1079[i]", print_hash_value);

    }
    transparent_crc(g_1080, "g_1080", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1182[i][j], "g_1182[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1278[i], "g_1278[i]", print_hash_value);

    }
    transparent_crc(g_1286, "g_1286", print_hash_value);
    transparent_crc(g_1340, "g_1340", print_hash_value);
    transparent_crc(g_1409, "g_1409", print_hash_value);
    transparent_crc(g_1471, "g_1471", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
