// SPDX-License-Identifier: MIT
// cctest_csmith_d1142b22.c --- cctest case csmith_d1142b22 (csmith seed 3507759906)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd90b102a */

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

// Options:   -s 3507759906 -o /tmp/csmith_gen_c07wo2g2/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
   int8_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
   struct S0  f1;
   const uint64_t  f2;
   uint32_t  f3;
   uint64_t  f4;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
};


static int32_t g_3 = 0x770A77C8L;
static uint64_t g_14 = 0xB15E314A5EA964A9LL;
static const struct S1 g_37 = {0xCEL,{0L,1L},0x3DCEDB1A73B020B2LL,0xE47E5F8FL,18446744073709551607UL};
static int16_t g_50 = 0x0040L;
static int32_t * const *g_59 = (void*)0;
static int32_t *g_61 = &g_3;
static int32_t **g_60 = &g_61;
static uint8_t g_83[5] = {0xB5L,0xB5L,0xB5L,0xB5L,0xB5L};
static int32_t g_85[4][4][1] = {{{0x1C653C2AL},{0L},{0x1C653C2AL},{(-8L)}},{{0xED7628F8L},{(-8L)},{0x1C653C2AL},{0L}},{{0x1C653C2AL},{(-8L)},{0xED7628F8L},{(-8L)}},{{0x1C653C2AL},{0L},{0x1C653C2AL},{(-8L)}}};
static int32_t ***g_88 = &g_60;
static int32_t ****g_87 = &g_88;
static union U2 g_115 = {18446744073709551615UL};
static int8_t g_142[5][3][7] = {{{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L}},{{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L}},{{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L}},{{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L}},{{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L},{0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L}}};
static uint16_t g_151[2][3][2] = {{{7UL,0UL},{0UL,7UL},{0UL,0UL}},{{7UL,0UL},{0UL,7UL},{0UL,0UL}}};
static int16_t g_160[6] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
static struct S0 g_163 = {-1L,0x91L};
static uint32_t g_190 = 4294967295UL;
static uint8_t g_213 = 0x2CL;
static int64_t g_236 = 0x25B64AA44A49ADE8LL;
static int64_t *g_235 = &g_236;
static int64_t **g_234[1] = {&g_235};
static int64_t ** const *g_233 = &g_234[0];
static int32_t *g_248 = (void*)0;
static int32_t ** const **g_273 = (void*)0;
static int32_t ** const ***g_272 = &g_273;
static uint64_t g_290 = 0UL;
static int32_t g_293 = 0L;
static int8_t g_296[6][7] = {{1L,0x23L,0L,1L,0x61L,(-8L),0x61L},{0xEBL,0x40L,0x40L,0xEBL,0x2EL,0xEBL,0x40L},{0x33L,6L,1L,1L,1L,6L,0x33L},{1L,0x40L,0x5AL,0x40L,1L,1L,0x40L},{0x62L,0x23L,0x62L,(-8L),1L,(-1L),0x61L},{0x40L,0x2EL,0x5AL,0x5AL,0x2EL,0x40L,0x2EL}};
static int16_t **g_308 = (void*)0;
static const int64_t ***g_310 = (void*)0;
static int16_t g_338 = 0x3165L;
static struct S0 *g_342 = &g_163;
static struct S0 **g_341 = &g_342;
static uint16_t g_345 = 0x232FL;
static int32_t *g_352[2] = {&g_3,&g_3};
static uint16_t g_358[4][3] = {{0x6A1AL,0x6A1AL,0x6A1AL},{5UL,5UL,5UL},{0x6A1AL,0x6A1AL,0x6A1AL},{5UL,5UL,5UL}};
static const int16_t g_580 = 0x5DAFL;
static const int16_t *g_579 = &g_580;
static union U2 *g_610 = &g_115;
static union U2 **g_609 = &g_610;
static uint32_t g_638 = 4294967294UL;
static int32_t g_753 = 1L;
static uint8_t g_768[1][5] = {{0UL,0UL,0UL,0UL,0UL}};
static uint32_t g_791 = 4294967295UL;
static uint16_t *g_821 = &g_358[2][1];
static int64_t g_829 = 6L;
static int64_t *****g_859 = (void*)0;
static uint8_t *g_986[4] = {&g_768[0][4],&g_768[0][4],&g_768[0][4],&g_768[0][4]};
static int32_t g_1008[7][5] = {{0xED1C615CL,1L,1L,1L,1L},{0xB48C27C9L,0xF3D19783L,(-1L),1L,0xAE3D5F6FL},{0xF3D19783L,1L,(-1L),(-1L),(-1L)},{0xAE3D5F6FL,0xAE3D5F6FL,1L,0xB48C27C9L,0x5F4324A7L},{0xF3D19783L,0x5F4324A7L,0xED1C615CL,0xB48C27C9L,0xB48C27C9L},{0xB48C27C9L,(-4L),1L,0xF3D19783L,0x5F4324A7L},{0xB48C27C9L,(-1L),(-4L),1L,0x5F4324A7L}};
static int64_t ***g_1021 = &g_234[0];
static int64_t ****g_1020 = &g_1021;
static struct S1 g_1024[7] = {{0xECL,{0xDACAA3E1L,0L},0xC4AE6DF3E45C8E69LL,0xD65B40F9L,0UL},{0L,{-5L,0x26L},18446744073709551609UL,0UL,0x2859BAB779187522LL},{0L,{-5L,0x26L},18446744073709551609UL,0UL,0x2859BAB779187522LL},{0xECL,{0xDACAA3E1L,0L},0xC4AE6DF3E45C8E69LL,0xD65B40F9L,0UL},{0L,{-5L,0x26L},18446744073709551609UL,0UL,0x2859BAB779187522LL},{0L,{-5L,0x26L},18446744073709551609UL,0UL,0x2859BAB779187522LL},{0xECL,{0xDACAA3E1L,0L},0xC4AE6DF3E45C8E69LL,0xD65B40F9L,0UL}};
static int32_t g_1040 = 0xDF40C630L;
static struct S0 *** const g_1051 = (void*)0;
static struct S0 *** const *g_1050 = &g_1051;
static int64_t **g_1099[6][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_235,&g_235,&g_235,&g_235,&g_235},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_235,&g_235,&g_235,&g_235,&g_235},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_235,&g_235,&g_235,&g_235,&g_235}};
static int32_t *g_1175 = &g_293;
static int32_t **g_1174 = &g_1175;
static int16_t ***g_1194 = &g_308;
static struct S1 *g_1216 = (void*)0;
static struct S1 **g_1215 = &g_1216;
static struct S1 ***g_1214[2] = {&g_1215,&g_1215};
static uint8_t g_1286 = 0x29L;
static int64_t *** const *g_1295 = &g_1021;
static int64_t *** const **g_1294 = &g_1295;
static const int32_t *g_1394 = &g_1040;
static uint16_t g_1445 = 1UL;
static int64_t g_1504 = 5L;
static uint64_t g_1633[7][5] = {{0xAA8BEAFED92F61BFLL,0xAA8BEAFED92F61BFLL,1UL,0x111378DCA012FB00LL,1UL},{0xAA8BEAFED92F61BFLL,0xAA8BEAFED92F61BFLL,1UL,0x111378DCA012FB00LL,1UL},{0xAA8BEAFED92F61BFLL,0xAA8BEAFED92F61BFLL,1UL,0x111378DCA012FB00LL,1UL},{0xAA8BEAFED92F61BFLL,0xAA8BEAFED92F61BFLL,1UL,0x111378DCA012FB00LL,1UL},{0xAA8BEAFED92F61BFLL,0xAA8BEAFED92F61BFLL,1UL,0x111378DCA012FB00LL,1UL},{0xAA8BEAFED92F61BFLL,0xAA8BEAFED92F61BFLL,1UL,0x111378DCA012FB00LL,1UL},{0xAA8BEAFED92F61BFLL,0xAA8BEAFED92F61BFLL,1UL,0x111378DCA012FB00LL,1UL}};
static int32_t * const **g_1647 = &g_59;
static int32_t * const ** const *g_1646 = &g_1647;
static int32_t * const ** const * const *g_1645[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t g_1669 = 0x8265EEE8A8515A11LL;
static struct S0 *g_1864 = &g_1024[4].f1;
static struct S1 ****g_1885 = &g_1214[1];
static struct S1 ***** const g_1884 = &g_1885;
static const struct S1 g_1896[1] = {{0x3EL,{-1L,0x6EL},0x2043158C976C024BLL,0x1BE50387L,0UL}};
static uint32_t g_2062 = 4294967286UL;
static uint32_t g_2066 = 0xEFC4E7EAL;
static uint8_t **g_2099 = &g_986[2];
static uint8_t ***g_2098[6][6] = {{&g_2099,&g_2099,&g_2099,&g_2099,&g_2099,&g_2099},{&g_2099,&g_2099,&g_2099,&g_2099,&g_2099,&g_2099},{&g_2099,&g_2099,&g_2099,&g_2099,&g_2099,&g_2099},{&g_2099,&g_2099,&g_2099,&g_2099,&g_2099,&g_2099},{&g_2099,&g_2099,&g_2099,&g_2099,&g_2099,&g_2099},{&g_2099,&g_2099,&g_2099,&g_2099,&g_2099,&g_2099}};
static int32_t g_2166 = 1L;
static struct S1 ** const *g_2205 = &g_1215;
static struct S1 ** const * const *g_2204[3][6] = {{&g_2205,&g_2205,&g_2205,&g_2205,&g_2205,&g_2205},{(void*)0,&g_2205,(void*)0,&g_2205,(void*)0,&g_2205},{&g_2205,&g_2205,&g_2205,&g_2205,&g_2205,&g_2205}};
static int32_t g_2300 = 9L;
static int32_t g_2302 = 0L;
static int32_t g_2364[6] = {0x5E2D46AFL,0x5E2D46AFL,9L,0x5E2D46AFL,0x5E2D46AFL,9L};
static int8_t g_2367 = (-4L);
static union U2 ***g_2443 = (void*)0;
static struct S1 g_2494 = {-1L,{0x1239C5FEL,0x90L},0UL,8UL,0x63FC2EAE26FEAED0LL};
static int16_t g_2564[2] = {5L,5L};
static uint16_t g_2567 = 0x36FAL;
static const int64_t g_2631 = 9L;
static const uint32_t *g_2822 = &g_1024[4].f3;
static const uint32_t **g_2821 = &g_2822;
static uint64_t g_2824 = 0x1A11E36FEB9BA661LL;



static struct S0  func_1(void);
static int64_t  func_18(int32_t * const  p_19);
static int32_t * func_21(int32_t * p_22, struct S1  p_23);
static struct S1  func_24(struct S1  p_25, const int32_t * p_26, int64_t  p_27, uint32_t  p_28);
static struct S1  func_29(uint32_t  p_30, uint64_t  p_31);
static struct S0  func_34(const struct S1  p_35, uint32_t  p_36);
static int32_t * func_39(int32_t  p_40, uint32_t  p_41);
static int16_t  func_42(int32_t * p_43, const uint64_t  p_44, int32_t * p_45, int32_t * p_46, int16_t  p_47);




static struct S0  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = (void*)0;
    int32_t l_7 = 0x835A23E8L;
    int32_t *l_8 = &l_7;
    int32_t l_9 = 1L;
    int32_t *l_10 = (void*)0;
    int32_t l_11 = 0xA9F8D19CL;
    int32_t *l_12 = &l_11;
    int32_t *l_13[4];
    int32_t l_2848 = 0L;
    struct S1 ***l_2855 = &g_1215;
    const struct S1 l_2856 = {0x44L,{0L,1L},0x1130AAACF8207063LL,0UL,0x0ABA5829B874DE09LL};
    union U2 l_2861 = {6UL};
    struct S1 ****l_2871[7][4][2] = {{{&g_1214[1],(void*)0},{&g_1214[1],&g_1214[1]},{(void*)0,&l_2855},{&g_1214[1],&g_1214[1]}},{{&l_2855,&g_1214[1]},{&g_1214[1],&g_1214[1]},{&g_1214[1],&g_1214[1]},{&g_1214[1],&g_1214[1]}},{{&g_1214[1],(void*)0},{&l_2855,(void*)0},{&g_1214[1],&g_1214[1]},{&g_1214[1],&g_1214[1]}},{{&g_1214[1],&g_1214[1]},{&g_1214[1],&g_1214[1]},{&l_2855,&g_1214[1]},{&g_1214[1],&l_2855}},{{(void*)0,&g_1214[1]},{&g_1214[1],(void*)0},{&g_1214[1],&g_1214[1]},{&g_1214[1],(void*)0}},{{(void*)0,(void*)0},{&l_2855,&g_1214[1]},{&l_2855,(void*)0},{&g_1214[1],&g_1214[1]}},{{&g_1214[1],&g_1214[1]},{&g_1214[1],&g_1214[1]},{&g_1214[1],&l_2855},{&g_1214[1],&g_1214[1]}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_13[i] = &g_3;
    --g_14;
    for (l_7 = 3; (l_7 >= 0); l_7 -= 1)
    { 
        uint8_t l_2839 = 255UL;
        int32_t l_2840 = 0xED5BDB3DL;
        uint32_t l_2862 = 0x52ABEE90L;
        struct S0 l_2869[3] = {{2L,9L},{2L,9L},{2L,9L}};
        int i;
        g_3 = (safe_unary_minus_func_uint32_t_u(0x28787D63L));
        for (l_9 = 3; (l_9 >= 0); l_9 -= 1)
        { 
            uint64_t *l_2823 = &g_2824;
            int32_t l_2829[1][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)}};
            struct S1 *l_2844 = (void*)0;
            int i, j;
            (*l_5) = ((void*)0 != l_13[l_9]);
        }
        (*g_341) = ((*g_610) , (*g_341));
        for (g_1445 = 0; (g_1445 <= 3); g_1445 += 1)
        { 
            int64_t ***l_2870 = &g_234[0];
            (*l_2870) = (*g_233);
        }
    }
    l_2871[3][0][0] = &l_2855;
    return (*g_342);
}



static int64_t  func_18(int32_t * const  p_19)
{ 
    uint64_t l_20 = 18446744073709551615UL;
    const int32_t *l_2059 = &g_37.f1.f0;
    int32_t l_2060 = 2L;
    uint32_t *l_2061 = &g_2062;
    uint32_t *l_2065 = &g_2066;
    union U2 l_2516 = {0xDD1B537BL};
    struct S0 l_2543 = {-6L,0xEEL};
    struct S1 l_2553 = {8L,{1L,3L},0x88C8367531E7A223LL,0x0AA638B8L,0x63EF2FF9423E8223LL};
    int32_t l_2566 = (-4L);
    int64_t l_2572 = 0x35D221B9B46EB468LL;
    uint32_t l_2574 = 0xDAC151B7L;
    int32_t l_2601 = 1L;
    int32_t l_2602 = (-1L);
    int32_t l_2603 = 0xA6D7D1A0L;
    uint8_t l_2604 = 0x11L;
    const int64_t *l_2630[5] = {&g_2631,&g_2631,&g_2631,&g_2631,&g_2631};
    const int64_t **l_2629[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    const int64_t ***l_2628[3][7][6] = {{{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],(void*)0},{&l_2629[1],&l_2629[1],(void*)0,(void*)0,&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],(void*)0,&l_2629[1],&l_2629[1],(void*)0},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],(void*)0,&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]}},{{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],(void*)0},{&l_2629[1],&l_2629[1],(void*)0,(void*)0,&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],(void*)0,&l_2629[1],&l_2629[1],(void*)0},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],(void*)0,&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]}},{{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],(void*)0},{&l_2629[1],&l_2629[1],(void*)0,(void*)0,&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],(void*)0,&l_2629[1],&l_2629[1],(void*)0},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],(void*)0,&l_2629[1],&l_2629[1]},{&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1],&l_2629[1]}}};
    uint32_t l_2652[1];
    int32_t l_2673 = 0L;
    int8_t l_2767[5];
    int8_t l_2773 = 0x7AL;
    int64_t l_2777 = 0x97D5068B18E0588DLL;
    int32_t l_2780[4] = {1L,1L,1L,1L};
    int32_t ***l_2802 = &g_1174;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2652[i] = 0x88BC8DFAL;
    for (i = 0; i < 5; i++)
        l_2767[i] = 0x76L;
    l_20 = g_3;
    (***g_87) = func_21(&g_3, func_24(func_29(l_20, l_20), l_2059, (*l_2059), ((*l_2065) ^= (--(*l_2061)))));
    (*p_19) = (l_2516 , 0x9A9B090FL);
    for (g_50 = 0; (g_50 <= 2); g_50 += 1)
    { 
        int16_t *l_2518[6][4][7] = {{{(void*)0,&g_160[0],&g_160[2],&g_160[0],&g_160[3],(void*)0,(void*)0},{&g_50,&g_338,(void*)0,&g_160[2],(void*)0,&g_338,&g_50},{&g_160[4],&g_50,&g_160[5],&g_160[2],(void*)0,(void*)0,&g_160[0]},{&g_160[0],(void*)0,&g_160[0],&g_160[0],&g_160[4],&g_160[3],&g_160[2]}},{{(void*)0,&g_160[0],&g_160[0],&g_160[0],(void*)0,&g_160[2],&g_160[4]},{&g_160[4],&g_160[0],&g_160[0],(void*)0,&g_160[0],&g_50,&g_338},{&g_160[0],(void*)0,&g_160[0],&g_50,&g_160[0],&g_160[0],&g_50},{&g_160[4],(void*)0,&g_160[4],&g_160[0],(void*)0,(void*)0,&g_50}},{{(void*)0,(void*)0,&g_50,&g_160[2],&g_50,&g_160[4],&g_338},{&g_160[5],&g_160[4],(void*)0,(void*)0,(void*)0,(void*)0,&g_160[4]},{&g_338,&g_160[3],(void*)0,&g_160[5],(void*)0,&g_160[0],&g_160[2]},{(void*)0,(void*)0,&g_160[3],&g_160[0],&g_50,&g_50,(void*)0}},{{&g_160[2],(void*)0,&g_160[5],&g_160[5],(void*)0,&g_160[2],(void*)0},{&g_160[3],(void*)0,&g_160[5],(void*)0,&g_160[0],&g_160[2],(void*)0},{&g_160[2],&g_50,&g_160[3],&g_160[2],&g_160[0],(void*)0,&g_160[0]},{&g_160[0],(void*)0,(void*)0,&g_160[0],(void*)0,(void*)0,&g_50}},{{&g_160[0],(void*)0,(void*)0,&g_50,&g_338,&g_160[0],&g_160[5]},{&g_160[2],(void*)0,&g_50,(void*)0,&g_160[3],(void*)0,&g_50},{&g_160[3],&g_160[3],&g_160[4],&g_160[0],&g_160[0],(void*)0,&g_160[0]},{&g_160[2],&g_160[4],&g_160[0],(void*)0,&g_160[2],&g_160[0],(void*)0}},{{(void*)0,(void*)0,&g_160[0],&g_160[0],&g_160[0],(void*)0,(void*)0},{&g_338,(void*)0,&g_160[0],&g_160[0],&g_160[3],(void*)0,(void*)0},{&g_160[5],(void*)0,(void*)0,(void*)0,&g_338,&g_160[2],&g_160[2]},{(void*)0,&g_160[0],&g_160[0],&g_160[0],(void*)0,&g_160[2],&g_160[4]}}};
        int16_t **l_2517 = &l_2518[2][2][5];
        int32_t l_2525 = 0x326AFEBCL;
        int32_t l_2526 = (-1L);
        union U2 *l_2546 = &l_2516;
        int32_t l_2558 = (-3L);
        int32_t l_2559 = 9L;
        int32_t l_2560 = (-1L);
        int32_t l_2561 = (-5L);
        int32_t l_2562[5];
        int64_t l_2573 = 1L;
        int64_t ***l_2632 = &g_1099[0][4];
        int32_t l_2635[2];
        uint16_t l_2663 = 8UL;
        uint32_t l_2672 = 4294967288UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2562[i] = 0xC89F05B9L;
        for (i = 0; i < 2; i++)
            l_2635[i] = 0x736A5A1CL;
        for (g_1504 = 3; (g_1504 >= 0); g_1504 -= 1)
        { 
            uint8_t l_2521 = 0x3CL;
            int32_t l_2522 = 0L;
            int32_t l_2524 = 1L;
            int32_t l_2527 = (-1L);
            uint32_t l_2528 = 18446744073709551607UL;
            struct S0 l_2531 = {9L,-1L};
            uint32_t l_2532[4];
            union U2 *l_2547 = &l_2516;
            int32_t l_2563 = 0xEE1CF53BL;
            int32_t l_2565[1];
            int32_t *** const *l_2580 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_2532[i] = 1UL;
            for (i = 0; i < 1; i++)
                l_2565[i] = 7L;
            for (g_14 = 0; (g_14 <= 5); g_14 += 1)
            { 
                if (((l_2517 = (void*)0) != &g_579))
                { 
                    int i, j;
                    (*p_19) ^= (safe_lshift_func_int8_t_s_s(g_1633[g_14][g_1504], g_1633[(g_1504 + 1)][g_50]));
                }
                else
                { 
                    int i, j;
                    return g_296[(g_50 + 1)][(g_1504 + 1)];
                }
                return l_2521;
            }
            for (g_2494.f1.f0 = 0; (g_2494.f1.f0 <= 3); g_2494.f1.f0 += 1)
            { 
                int32_t *l_2523[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_2523[i] = (void*)0;
                ++l_2528;
                if ((*l_2059))
                    continue;
                for (l_2060 = 0; (l_2060 <= 2); l_2060 += 1)
                { 
                    return l_2524;
                }
            }
            (*g_1864) = l_2531;
        }
        for (l_2516.f0 = 0; (l_2516.f0 <= 2); l_2516.f0 += 1)
        { 
            const union U2 *l_2655 = &g_115;
            const union U2 **l_2656 = &l_2655;
            const int32_t l_2659 = 4L;
            int32_t l_2674 = (-5L);
            struct S1 l_2705 = {1L,{3L,1L},4UL,7UL,18446744073709551615UL};
            (*l_2656) = l_2655;
            for (g_1040 = 2; (g_1040 >= 0); g_1040 -= 1)
            { 
                int64_t l_2662 = 0L;
                uint8_t *l_2671 = &g_83[4];
                int32_t *l_2676 = &g_1024[4].f1.f0;
                uint32_t l_2710 = 0xFAEF2FBFL;
            }
            l_2553.f1.f0 ^= (safe_mul_func_int8_t_s_s(((void*)0 == &l_2705), (!l_2635[0])));
        }
    }
    for (g_163.f0 = 0; (g_163.f0 < 6); g_163.f0 = safe_add_func_int32_t_s_s(g_163.f0, 1))
    { 
        uint8_t * const *l_2730 = &g_986[1];
        int32_t l_2750 = 0xC66E23A4L;
        int32_t l_2752 = 0L;
        int32_t l_2762 = 1L;
        int32_t l_2766 = (-1L);
        int32_t l_2771 = 0x7E8C5A83L;
        int32_t l_2778[6][7][2] = {{{4L,(-1L)},{(-1L),4L},{0x4B86328DL,0xA881210FL},{0x4B86328DL,4L},{(-1L),(-1L)},{4L,(-1L)},{(-1L),0L}},{{(-1L),0x37532192L},{0x37532192L,0x37532192L},{(-1L),0L},{(-1L),(-1L)},{4L,(-1L)},{(-1L),4L},{0x4B86328DL,0xA881210FL}},{{0x4B86328DL,4L},{(-1L),(-1L)},{4L,(-1L)},{(-1L),0L},{(-1L),0x37532192L},{0x37532192L,0x37532192L},{(-1L),0L}},{{(-1L),(-1L)},{4L,(-1L)},{(-1L),4L},{0x4B86328DL,0xA881210FL},{0L,0xA881210FL},{(-1L),0x37532192L},{0xA881210FL,(-1L)}},{{0x4B86328DL,(-1L)},{0x37532192L,0L},{0L,0L},{0x37532192L,(-1L)},{0x4B86328DL,(-1L)},{0xA881210FL,0x37532192L},{(-1L),0xA881210FL}},{{0L,0xAF33F7ECL},{0L,0xA881210FL},{(-1L),0x37532192L},{0xA881210FL,(-1L)},{0x4B86328DL,(-1L)},{0x37532192L,0L},{0L,0L}}};
        int32_t l_2785[5];
        uint32_t l_2786 = 0UL;
        int8_t l_2803 = 0L;
        int32_t **** const l_2813 = (void*)0;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2785[i] = (-8L);
        for (l_2060 = 0; (l_2060 <= 6); l_2060 = safe_add_func_uint8_t_u_u(l_2060, 1))
        { 
            uint8_t **l_2729 = &g_986[1];
            const int32_t l_2733[7][3] = {{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L},{(-2L),(-2L),(-2L)},{1L,1L,1L}};
            struct S0 **l_2737[4];
            int64_t l_2763 = 0x3D1C64141DC057B0LL;
            int32_t l_2764 = 0xF62EB55AL;
            int32_t l_2768 = (-1L);
            int32_t l_2769 = 0xC4F186A0L;
            int32_t l_2770 = 0xF3966894L;
            int32_t l_2772 = 0xE5467569L;
            int32_t l_2774 = 1L;
            int32_t l_2775 = 5L;
            int32_t l_2776 = 1L;
            int32_t l_2779[7] = {0xE36CB55BL,0xE36CB55BL,0xE36CB55BL,0xE36CB55BL,0xE36CB55BL,0xE36CB55BL,0xE36CB55BL};
            const uint32_t *l_2818[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
            const uint32_t **l_2817 = &l_2818[0][1];
            int i, j;
            for (i = 0; i < 4; i++)
                l_2737[i] = &g_1864;
            for (g_290 = 0; (g_290 <= 1); g_290 += 1)
            { 
                struct S0 *l_2726 = &g_1024[4].f1;
                const int32_t l_2734 = 0x90CD9E6EL;
                for (g_2494.f1.f0 = 0; (g_2494.f1.f0 <= 4); g_2494.f1.f0 += 1)
                { 
                    int16_t l_2725 = 6L;
                    l_2725 ^= ((***g_88) = 0L);
                }
                if ((*p_19))
                { 
                    (*p_19) = (-1L);
                }
                else
                { 
                    (*g_341) = l_2726;
                }
                (****g_87) ^= (safe_mul_func_uint16_t_u_u((l_2729 == l_2730), (safe_mod_func_int16_t_s_s(l_2733[0][1], l_2734))));
            }
            for (g_2567 = 0; (g_2567 <= 2); g_2567 += 1)
            { 
                uint32_t l_2735 = 0x82CD9939L;
                int32_t l_2748 = 0L;
                int32_t l_2759 = (-9L);
                int32_t l_2760 = (-10L);
                int32_t l_2765[6] = {0L,0x1183375EL,0x1183375EL,0L,0x1183375EL,0x1183375EL};
                uint8_t l_2782[5][4][7] = {{{0x47L,250UL,0x8CL,0x8FL,1UL,1UL,0x8FL},{0x6AL,0UL,0x6AL,0x8FL,2UL,1UL,0UL},{0x8FL,0x10L,0x25L,254UL,0UL,0x8FL,0UL},{0xB4L,0x68L,2UL,0x6AL,0UL,1UL,250UL}},{{0UL,1UL,255UL,0x74L,255UL,1UL,0UL},{0UL,2UL,0xE1L,0x68L,1UL,0xE2L,255UL},{0xB4L,0UL,0x6AL,250UL,0x8FL,0x7AL,0UL},{0x8FL,0UL,0xE1L,0x8CL,0x71L,0x8FL,0x71L}},{{0x6AL,255UL,255UL,0x6AL,0x71L,0x0DL,0x68L},{0x47L,1UL,2UL,0x25L,0x8FL,249UL,0UL},{249UL,0x8FL,0x25L,2UL,1UL,0x47L,0x68L},{0x0DL,0x71L,0x6AL,255UL,255UL,0x6AL,0x71L}},{{0x8FL,0x71L,0x8CL,0xE1L,0UL,0x8FL,0UL},{0x7AL,0x8FL,250UL,0x6AL,0UL,0xB4L,255UL},{0xE2L,1UL,0x68L,0xE1L,2UL,0UL,0UL},{1UL,255UL,0x74L,255UL,1UL,0UL,250UL}},{{1UL,0UL,0x6AL,2UL,0x68L,0xB4L,0UL},{0xB4L,249UL,0x71L,0UL,0xE2L,0xB4L,1UL},{0x25L,0x0DL,0xB4L,254UL,1UL,254UL,0xB4L},{0x8FL,0x8FL,0xB4L,0x10L,1UL,255UL,2UL}}};
                int i, j, k;
                if (l_2735)
                { 
                    struct S0 ***l_2736[2][5] = {{&g_341,&g_341,&g_341,&g_341,&g_341},{&g_341,&g_341,&g_341,&g_341,&g_341}};
                    const int32_t l_2743 = 1L;
                    int32_t l_2749 = 0xD4813E96L;
                    int32_t l_2751 = 2L;
                    int32_t *l_2753 = (void*)0;
                    int32_t *l_2754 = &l_2749;
                    int32_t *l_2755 = &l_2603;
                    int32_t *l_2756 = &l_2752;
                    int32_t *l_2757 = &g_2494.f1.f0;
                    int32_t *l_2758 = &g_2364[5];
                    int32_t *l_2761[7] = {&g_1024[4].f1.f0,&g_1024[4].f1.f0,&g_1024[4].f1.f0,&g_1024[4].f1.f0,&g_1024[4].f1.f0,&g_1024[4].f1.f0,&g_1024[4].f1.f0};
                    int32_t l_2781 = 0xEDF17C6DL;
                    int i, j;
                    (***g_88) = (0xC0919041L >= ((((l_2737[0] = (void*)0) == &g_342) && ((safe_mul_func_uint8_t_u_u((!(((*g_821) ^ (safe_lshift_func_int16_t_s_u((0xDC40C231L && (l_2743 | (safe_sub_func_int16_t_s_s((l_2566 = (safe_mul_func_int8_t_s_s(l_2735, l_2743))), l_2733[0][1])))), 7))) < g_1024[4].f1.f0)), l_2743)) | l_2733[0][1])) & 0x066CL));
                    l_2782[2][1][0]--;
                    l_2786++;
                }
                else
                { 
                    uint64_t l_2789 = 0UL;
                    if (l_2789)
                        break;
                    (*p_19) = (*p_19);
                }
            }
            for (g_2166 = 0; (g_2166 >= 0); g_2166 -= 1)
            { 
                int32_t l_2790 = 0xD21D941BL;
                int32_t *l_2791 = &l_2553.f1.f0;
                int32_t *l_2792 = &l_2766;
                int32_t *l_2793[6] = {&l_2771,&l_2769,&l_2771,&l_2771,&l_2769,&l_2771};
                uint16_t l_2794 = 65535UL;
                uint64_t *l_2797 = &g_290;
                int8_t *l_2814[7];
                const uint32_t ***l_2819 = &l_2817;
                const uint32_t ***l_2820 = (void*)0;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_2814[i] = &l_2803;
                ++l_2794;
                if (g_85[(g_2166 + 2)][(g_2166 + 2)][g_2166])
                    break;
                (****g_87) = ((-1L) != (((((*l_2059) < ((((*l_2797) = 4UL) > ((!(~(safe_add_func_int64_t_s_s((*l_2792), ((l_2802 == &g_1174) < (*l_2791)))))) != l_2763)) != l_2803)) == g_190) , 1L) | (*l_2059)));
                if ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((~((safe_sub_func_int64_t_s_s((((l_2673 |= (safe_rshift_func_uint8_t_u_s((((***g_88) = ((l_2516 , (g_2494.f4 , l_2813)) == (void*)0)) <= 1L), 2))) < (((safe_mul_func_uint16_t_u_u((0x6BL < 1L), (-8L))) , 0xD3AC6195L) != l_2775)) | (*l_2059)), g_1286)) , g_345)), l_2762)), (*l_2059))))
                { 
                    (*g_1864) = (*g_1864);
                }
                else
                { 
                    return l_2774;
                }
                g_2821 = ((*l_2819) = l_2817);
            }
        }
    }
    return (*l_2059);
}



static int32_t * func_21(int32_t * p_22, struct S1  p_23)
{ 
    uint16_t l_2480 = 0x0F0DL;
    struct S1 **l_2483 = (void*)0;
    int32_t l_2484 = 1L;
    struct S1 **l_2492[3];
    struct S1 *l_2493 = &g_2494;
    int32_t l_2505[3][1];
    int16_t ** const *l_2511 = (void*)0;
    int16_t ** const **l_2512 = &l_2511;
    int32_t *l_2515[5];
    int i, j;
    for (i = 0; i < 3; i++)
        l_2492[i] = (void*)0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2505[i][j] = (-7L);
    }
    for (i = 0; i < 5; i++)
        l_2515[i] = &g_85[3][0][0];
lbl_2497:
    l_2484 = (((safe_unary_minus_func_uint16_t_u((*g_821))) & ((-1L) >= (!(safe_mod_func_int64_t_s_s((((safe_div_func_int16_t_s_s((((-6L) <= (safe_mul_func_int8_t_s_s(0x27L, (safe_mod_func_uint8_t_u_u((++l_2480), (((((***g_1884) = l_2483) == l_2483) < (((p_22 == (void*)0) | 0x11EC5547L) >= l_2484)) && 0xE3758F47A48975C4LL)))))) & l_2484), 65535UL)) <= g_2367) != 4294967292UL), 0x85BEF1E6096ACF36LL))))) != p_23.f0);
    for (g_1445 = 0; (g_1445 == 35); g_1445 = safe_add_func_int64_t_s_s(g_1445, 8))
    { 
        (*p_22) = l_2480;
        for (g_1669 = (-20); (g_1669 <= 54); g_1669++)
        { 
            uint8_t l_2489 = 0UL;
            --l_2489;
        }
    }
    l_2493 = (void*)0;
    for (g_3 = 0; (g_3 >= (-17)); g_3 = safe_sub_func_uint64_t_u_u(g_3, 6))
    { 
        int32_t *l_2498 = &g_1024[4].f1.f0;
        int32_t *l_2499 = (void*)0;
        int32_t *l_2500 = &l_2484;
        int32_t *l_2501 = &g_1008[6][2];
        int32_t *l_2502 = &g_753;
        int32_t *l_2503 = (void*)0;
        int32_t *l_2504[7][7][1] = {{{&g_2494.f1.f0},{&g_2364[1]},{&g_2364[1]},{&g_2494.f1.f0},{&g_753},{(void*)0},{&g_85[0][0][0]}},{{(void*)0},{&g_2364[1]},{(void*)0},{(void*)0},{&g_753},{&g_1008[6][2]},{&g_753}},{{(void*)0},{(void*)0},{&g_2364[1]},{(void*)0},{&g_85[0][0][0]},{(void*)0},{&g_753}},{{&g_2494.f1.f0},{&g_2364[1]},{&g_2364[1]},{&g_2494.f1.f0},{&g_753},{(void*)0},{&g_85[0][0][0]}},{{(void*)0},{&g_2364[1]},{(void*)0},{(void*)0},{&g_753},{&g_1008[6][2]},{&g_753}},{{(void*)0},{(void*)0},{&g_2364[1]},{(void*)0},{&g_85[0][0][0]},{(void*)0},{&g_753}},{{&g_2494.f1.f0},{&g_2364[1]},{&g_2364[1]},{&g_2494.f1.f0},{&g_753},{(void*)0},{&g_85[0][0][0]}}};
        uint8_t l_2506[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2506[i] = 0x23L;
        if (p_23.f0)
            goto lbl_2497;
        l_2506[2]--;
    }
    l_2515[1] = &l_2505[2][0];
    return p_22;
}



static struct S1  func_24(struct S1  p_25, const int32_t * p_26, int64_t  p_27, uint32_t  p_28)
{ 
    int16_t l_2068[1];
    int32_t l_2069 = 5L;
    uint8_t *l_2077[4];
    int32_t l_2078 = 0xAC8B2B09L;
    struct S0 l_2079 = {0x1BF734AAL,0x97L};
    union U2 **l_2080[1][4];
    int16_t ***l_2081 = &g_308;
    struct S0 ***l_2085 = &g_341;
    struct S0 ****l_2084 = &l_2085;
    int64_t *l_2096[4];
    uint16_t l_2097 = 9UL;
    uint8_t ***l_2100 = &g_2099;
    int32_t l_2117 = (-5L);
    uint8_t l_2121 = 4UL;
    int32_t l_2152[7][1] = {{0xD7BB7B9FL},{0x571E82C1L},{0xD7BB7B9FL},{0x571E82C1L},{0xD7BB7B9FL},{0x571E82C1L},{0xD7BB7B9FL}};
    int8_t l_2153 = 0xBCL;
    uint32_t l_2163[2][2][3] = {{{0x05AFB092L,0x05AFB092L,0x05AFB092L},{0x13DA773CL,0x13DA773CL,0x13DA773CL}},{{0x05AFB092L,0x05AFB092L,0x05AFB092L},{0x13DA773CL,0x13DA773CL,0x13DA773CL}}};
    int8_t l_2242 = 7L;
    const struct S1 l_2244 = {0x37L,{7L,-1L},0xDCCD75A5499AB60ELL,1UL,18446744073709551609UL};
    int32_t l_2266 = 1L;
    int64_t l_2297 = 3L;
    uint8_t l_2314 = 0xC4L;
    int32_t l_2368 = 0L;
    int16_t l_2392 = 0x0520L;
    int16_t l_2419[5] = {0L,0L,0L,0L,0L};
    struct S0 l_2446 = {-1L,6L};
    union U2 **l_2462 = &g_610;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2068[i] = 0L;
    for (i = 0; i < 4; i++)
        l_2077[i] = &g_768[0][1];
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_2080[i][j] = &g_610;
    }
    for (i = 0; i < 4; i++)
        l_2096[i] = &g_829;
    p_25.f1.f0 = (l_2068[0] = (safe_unary_minus_func_uint8_t_u(0x04L)));
lbl_2232:
    p_25.f1.f0 = (((l_2069 ^= l_2068[0]) > ((((l_2079 , &g_610) == l_2080[0][0]) ^ l_2068[0]) >= l_2068[0])) , 0x05FD96E7L);
    if (((l_2081 == l_2081) && ((((*g_821) = ((((~((~(l_2084 == (void*)0)) & (safe_div_func_int64_t_s_s((p_27 = (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_2069, (safe_rshift_func_int8_t_s_u((p_25.f2 && (((safe_mod_func_uint16_t_u_u(((l_2079.f0 = 9L) && (*g_579)), p_25.f1.f1)) , p_25.f3) < p_25.f2)), l_2069)))), l_2068[0]))), l_2068[0])))) == 0x5576L) == (*p_26)) < p_25.f1.f1)) || (*g_821)) >= l_2097)))
    { 
        uint16_t l_2101 = 0x8591L;
        struct S0 l_2146 = {-1L,0L};
        int32_t l_2155 = (-1L);
        int32_t l_2156 = 0x4C3EEC73L;
        int32_t l_2157 = 0x597A0B89L;
        int32_t l_2158 = 2L;
        int32_t l_2159 = 0xAC411777L;
        int32_t l_2160 = 0L;
        int32_t l_2161 = (-8L);
        int32_t l_2169 = (-1L);
        int32_t l_2170 = 5L;
        int32_t l_2171[4] = {(-7L),(-7L),(-7L),(-7L)};
        uint32_t l_2176 = 0xDD3F592DL;
        union U2 **l_2179 = &g_610;
        const uint32_t l_2238 = 0x34CBB608L;
        struct S1 **l_2245 = &g_1216;
        int32_t *l_2265 = &g_1008[6][2];
        int i;
        if (((18446744073709551608UL <= (g_2098[2][4] != l_2100)) <= l_2101))
        { 
            int32_t ***l_2109 = &g_60;
            int32_t *l_2112 = &g_1040;
            int32_t l_2150 = 0xF1F85F2DL;
            int32_t l_2151[3][4] = {{0x7B18F75CL,(-1L),(-1L),0x7B18F75CL},{(-1L),0x7B18F75CL,(-1L),(-1L)},{0x7B18F75CL,0x7B18F75CL,0x0F588AE7L,0x7B18F75CL}};
            int32_t l_2154 = (-4L);
            int32_t l_2162[7] = {(-10L),0x22AD6179L,0x22AD6179L,(-10L),0x22AD6179L,0x22AD6179L,(-10L)};
            uint16_t l_2172 = 0x4528L;
            int i, j;
lbl_2175:
            (*l_2112) &= (safe_add_func_int32_t_s_s((*p_26), ((safe_sub_func_uint16_t_u_u(65535UL, (~((safe_div_func_int64_t_s_s(p_25.f2, (g_290 ^= (l_2109 == (void*)0)))) , (safe_lshift_func_int16_t_s_s(((void*)0 == &g_308), l_2068[0])))))) , 4294967291UL)));
            l_2069 &= ((((*l_2112) = (safe_unary_minus_func_uint16_t_u(l_2101))) <= ((p_25.f1 , p_28) || (!g_142[3][2][0]))) == ((*g_821) ^= ((safe_add_func_uint64_t_u_u(l_2117, 0x64DF1D3446677347LL)) <= (l_2068[0] , p_27))));
            (*l_2112) = 0xC926C9FBL;
            (*l_2112) &= (*p_26);
            for (p_25.f1.f0 = 0; (p_25.f1.f0 == (-30)); p_25.f1.f0--)
            { 
                int8_t l_2120[1][3];
                int32_t l_2136[7];
                int8_t l_2147 = 0L;
                int64_t l_2167[7];
                union U2 ***l_2180 = &g_609;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_2120[i][j] = 0L;
                }
                for (i = 0; i < 7; i++)
                    l_2136[i] = 0xF8FE2A91L;
                for (i = 0; i < 7; i++)
                    l_2167[i] = 0x2E7B85461874A806LL;
                for (g_791 = 0; (g_791 <= 0); g_791 += 1)
                { 
                    const int32_t l_2135 = 0x538C95E9L;
                    l_2120[0][0] |= (*p_26);
                    if (l_2121)
                        continue;
                    l_2136[0] = (safe_mul_func_int8_t_s_s((0x98L != (safe_sub_func_int32_t_s_s((p_25.f1.f0 > (safe_mul_func_int16_t_s_s(p_25.f1.f0, (safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u(0x122FA7A0L, ((((65526UL || (safe_div_func_int16_t_s_s(p_25.f3, ((!0xA7C29AD0L) | 0xF1595A56L)))) && l_2101) & 0UL) , l_2120[0][1]))), 0x293C8C87L))))), l_2135))), g_151[1][1][0]));
                }
                if (((safe_rshift_func_uint16_t_u_u(p_25.f4, (l_2101 < ((safe_div_func_uint16_t_u_u((*g_821), (g_1896[0].f4 & (~(safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(g_1504, (1UL & ((l_2079.f0 ^= ((l_2146 , l_2147) < (*g_821))) , g_768[0][0])))), g_142[2][1][1])))))) , g_580)))) != g_1504))
                { 
                    int32_t *l_2148 = &g_1008[6][2];
                    (***g_87) = l_2148;
                    return p_25;
                }
                else
                { 
                    int32_t *l_2149[5];
                    int32_t l_2168 = 0x90C650DFL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2149[i] = &g_753;
                    l_2163[0][1][1]++;
                    l_2172++;
                    l_2078 = 0L;
                    if (l_2167[2])
                        break;
                }
                for (p_25.f0 = 0; (p_25.f0 <= 4); p_25.f0 += 1)
                { 
                    if (l_2069)
                        goto lbl_2175;
                    if ((*p_26))
                        break;
                }
                l_2176++;
                (*l_2180) = l_2179;
            }
        }
        else
        { 
            uint32_t l_2200 = 4UL;
            struct S1 l_2215 = {-6L,{0L,0xA1L},0xF8910C71A7AFFC2ELL,4294967291UL,0x6FCF51EDEC698B38LL};
            union U2 *l_2234[3][4][2] = {{{(void*)0,&g_115},{&g_115,&g_115},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{&g_115,&g_115},{&g_115,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_115}},{{&g_115,&g_115},{(void*)0,&g_115},{&g_115,&g_115},{(void*)0,&g_115}}};
            int16_t l_2243 = 0x8F45L;
            int32_t *l_2246 = &l_2171[0];
            int8_t *l_2262 = (void*)0;
            int8_t *l_2263 = &l_2146.f1;
            int i, j, k;
            if ((p_25.f1.f1 < p_27))
            { 
                uint16_t l_2183 = 0xAA70L;
                struct S1 ** const * const **l_2206 = &g_2204[1][1];
                int8_t *l_2209 = &g_1024[4].f1.f1;
                int8_t *l_2210[5];
                int32_t l_2211 = 0xE3779D11L;
                int16_t *l_2212 = &g_160[5];
                int16_t *l_2213[1][1];
                int16_t l_2222 = 0xAB7EL;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_2210[i] = &g_1024[4].f0;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2213[i][j] = &l_2068[0];
                }
                if ((safe_mul_func_uint8_t_u_u((--l_2183), (safe_rshift_func_int16_t_s_u((g_50 ^= ((*l_2212) &= (safe_sub_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((-7L), l_2200)), ((((void*)0 != &l_2159) , (safe_sub_func_int32_t_s_s((~p_25.f2), (((*l_2206) = g_2204[2][3]) != ((l_2211 &= ((*l_2209) = (safe_div_func_int64_t_s_s(l_2153, 1UL)))) , (void*)0))))) , g_358[2][2]))), (*g_821))), 4)), 0xEE46DF66AD19DAF4LL)) , p_27), p_27)))), l_2163[0][1][1])))))
                { 
                    int32_t *l_2214 = &l_2078;
                    (*l_2214) = 0x4987F47BL;
                    return l_2215;
                }
                else
                { 
                    uint32_t *l_2227 = &l_2200;
                    l_2160 &= (p_27 && ((((*g_1175) , l_2069) & (safe_sub_func_uint32_t_u_u(((*l_2227) = (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_2222, 7)), (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(3L, 6)), (*g_821)))))), (safe_add_func_int8_t_s_s(((l_2169 = p_25.f1.f1) >= l_2161), p_25.f4))))) & (*g_821)));
                    return l_2215;
                }
            }
            else
            { 
                g_1394 = p_26;
                for (l_2101 = 9; (l_2101 == 19); l_2101 = safe_add_func_uint64_t_u_u(l_2101, 7))
                { 
                    uint32_t l_2233 = 1UL;
                    if ((*p_26))
                        break;
                    p_26 = ((***g_87) = &l_2078);
                    if (g_290)
                        goto lbl_2232;
                    l_2233 ^= 0x0DAE4CDDL;
                }
            }
            (*l_2179) = l_2234[1][2][1];
            for (l_2146.f0 = 3; (l_2146.f0 >= 0); l_2146.f0 -= 1)
            { 
                struct S1 ***l_2235 = &g_1215;
                int32_t l_2241 = (-1L);
                int i;
                p_25.f1.f0 |= (l_2161 || (l_2242 = (((l_2235 != (void*)0) >= ((safe_add_func_uint16_t_u_u(((l_2171[l_2146.f0] = (*p_26)) & l_2238), (safe_lshift_func_int16_t_s_s((p_25.f3 == p_25.f2), p_25.f1.f1)))) > l_2241)) & l_2078)));
                if (l_2243)
                    continue;
            }
            p_25.f1.f0 = ((*l_2246) = ((((p_25.f1 , 0x23L) >= p_25.f1.f1) , (*g_821)) & 0x3880L));
            l_2146.f0 |= ((safe_add_func_int64_t_s_s(((((g_142[0][2][5] &= ((*p_26) >= p_25.f1.f1)) >= ((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(p_28, (((((safe_mul_func_uint16_t_u_u(((((*l_2263) = (0UL && ((safe_lshift_func_int8_t_s_s((~(p_27 >= (((safe_sub_func_int64_t_s_s(l_2153, ((safe_sub_func_int16_t_s_s(0x5E05L, (*l_2246))) <= 0xC7055960L))) | (*l_2246)) || 0x7FL))), (*l_2246))) , g_1633[4][2]))) && g_791) != g_791), l_2101)) | g_2062) & 0x80F592F2L) || 0xFCB7L) ^ p_25.f4))), (*p_26))) != (*l_2246))) >= (-1L)) , l_2171[1]), l_2244.f4)) && l_2170);
        }
        for (g_345 = 1; (g_345 <= 4); g_345 += 1)
        { 
            int32_t *l_2264 = (void*)0;
            for (g_213 = 0; (g_213 <= 4); g_213 += 1)
            { 
                (**g_88) = (l_2265 = l_2264);
            }
        }
        return p_25;
    }
    else
    { 
        union U2 l_2272 = {5UL};
        int32_t l_2282 = 0xE56988B7L;
        int32_t l_2283 = (-1L);
        int32_t l_2288 = 0x852073C4L;
        int32_t l_2289 = 1L;
        int32_t l_2290 = 0x325293B3L;
        int32_t l_2292[2];
        uint8_t l_2294 = 0x14L;
        int32_t l_2298[2][7] = {{(-8L),(-8L),1L,0x04A4E16EL,(-8L),0x04A4E16EL,1L},{(-8L),(-8L),1L,0x04A4E16EL,(-8L),0x04A4E16EL,1L}};
        int32_t l_2299 = 0L;
        int32_t *l_2306 = (void*)0;
        int32_t *l_2307 = (void*)0;
        int32_t *l_2308 = (void*)0;
        int32_t *l_2309 = &g_1008[6][2];
        int32_t *l_2310 = &l_2152[4][0];
        int32_t *l_2311 = &l_2079.f0;
        int32_t *l_2312 = (void*)0;
        int32_t *l_2313[3];
        struct S1 **l_2321 = &g_1216;
        uint16_t l_2335 = 65527UL;
        int64_t * const *l_2340 = &l_2096[0];
        struct S0 l_2362 = {-6L,0L};
        int32_t l_2365 = 0L;
        uint8_t l_2369 = 0x68L;
        const int32_t **l_2373 = &g_1394;
        int i, j;
        for (i = 0; i < 2; i++)
            l_2292[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_2313[i] = &g_3;
        for (g_2062 = 0; (g_2062 <= 0); g_2062 += 1)
        { 
            int32_t *l_2267 = &l_2078;
            int32_t l_2273 = 1L;
            int32_t l_2281 = (-1L);
            int32_t l_2284 = (-3L);
            int32_t l_2291[1];
            int i;
            for (i = 0; i < 1; i++)
                l_2291[i] = (-4L);
            p_25.f1.f0 = l_2153;
            (*l_2267) = l_2266;
            for (g_345 = 0; (g_345 <= 4); g_345 += 1)
            { 
                int32_t l_2285 = 0L;
                int32_t l_2286 = 0xFD5D65EFL;
                int32_t l_2287[1][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                int i, j;
                l_2152[g_345][g_2062] = l_2152[(g_2062 + 5)][g_2062];
                l_2078 |= (safe_sub_func_uint8_t_u_u(1UL, (((safe_add_func_int64_t_s_s(((((l_2272 , p_25) , (void*)0) != &g_2204[2][2]) , (l_2152[(g_2062 + 4)][g_2062] , l_2152[(g_2062 + 3)][g_2062])), g_1008[g_345][(g_2062 + 3)])) <= g_1008[(g_2062 + 5)][g_345]) ^ l_2272.f0)));
                for (g_829 = 0; (g_829 <= 0); g_829 += 1)
                { 
                    int32_t *l_2274 = (void*)0;
                    int32_t *l_2275 = (void*)0;
                    int32_t l_2276 = 8L;
                    int32_t *l_2277 = &l_2152[4][0];
                    int32_t *l_2278 = &l_2273;
                    int32_t *l_2279 = &l_2152[(g_2062 + 5)][g_2062];
                    int32_t *l_2280[2][1];
                    int8_t l_2293 = 1L;
                    int8_t l_2301 = 0x23L;
                    uint32_t l_2303[5][3][1] = {{{4294967287UL},{3UL},{3UL}},{{4294967287UL},{4294967295UL},{6UL}},{{4294967287UL},{6UL},{4294967295UL}},{{4294967295UL},{6UL},{4294967287UL}},{{4294967294UL},{4294967287UL},{6UL}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2280[i][j] = &g_85[3][2][0];
                    }
                    --l_2294;
                    --l_2303[2][1][0];
                }
            }
        }
        l_2314--;
        for (g_638 = 0; (g_638 >= 60); g_638++)
        { 
            int32_t l_2328 = 0L;
            int32_t l_2329 = 0L;
            int32_t l_2333[7] = {0xA485E1A5L,0L,0L,0xA485E1A5L,0L,0L,0xA485E1A5L};
            int64_t l_2366 = 1L;
            struct S1 l_2372 = {0xACL,{-1L,0xB7L},0x2AF48BF851929012LL,0x159FF848L,0xC3B4D5A4B20804B7LL};
            int i;
            for (g_338 = (-28); (g_338 <= (-8)); g_338 = safe_add_func_int8_t_s_s(g_338, 2))
            { 
                uint32_t l_2325 = 0xF37A37F9L;
                int32_t l_2330 = 0L;
                int32_t l_2331 = 0x6A6CC4BAL;
                int32_t l_2332 = (-3L);
                int32_t l_2334[5] = {0L,0L,0L,0L,0L};
                int i;
                if ((l_2321 != (g_142[2][1][1] , l_2321)))
                { 
                    uint64_t l_2322 = 0xED740B899C51D297LL;
                    ++l_2322;
                }
                else
                { 
                    l_2325++;
                }
                --l_2335;
                for (l_2332 = 0; (l_2332 > (-3)); --l_2332)
                { 
                    uint64_t l_2345[1][5] = {{4UL,4UL,4UL,4UL,4UL}};
                    const int32_t *l_2363 = &l_2069;
                    int i, j;
                    if ((*p_26))
                        break;
                    (*l_2311) ^= (l_2340 != &l_2096[1]);
                    (*l_2311) = ((((((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((++l_2345[0][0]) && 0x7CL), (safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((p_25.f1 , ((*g_821) , (safe_add_func_int64_t_s_s((l_2244.f1.f1 , p_25.f1.f0), 0x75CC0B02012BC01DLL)))), p_27)), 9UL)) ^ p_28), (*p_26))) ^ l_2329), (*g_579))))), p_25.f1.f1)) > l_2328) , l_2069) , (void*)0) != (**l_2100)) & p_27);
                    l_2069 = ((*l_2311) &= ((safe_sub_func_int16_t_s_s(l_2333[1], ((*g_821)--))) , ((-1L) == (0x0CB1L >= (l_2362 , 0xBAA6L)))));
                    l_2363 = p_26;
                }
                l_2369--;
            }
            return l_2372;
        }
        p_25.f1.f0 = l_2121;
        (*l_2373) = p_26;
    }
    for (p_28 = 0; (p_28 >= 27); ++p_28)
    { 
        int16_t l_2376 = 0xCCCDL;
        int32_t l_2377[2];
        union U2 l_2380 = {0xB899928AL};
        struct S1 l_2385 = {2L,{0x8B43348EL,0xD2L},18446744073709551610UL,1UL,0UL};
        uint64_t *l_2388 = &g_1633[1][0];
        uint64_t *l_2389 = &g_1024[4].f4;
        int64_t l_2411 = 0x21A81BED6979E649LL;
        int64_t l_2424 = 0x3922A1726D216B52LL;
        int8_t l_2425 = 6L;
        uint16_t l_2430 = 65534UL;
        struct S0 **l_2447 = &g_1864;
        int i;
        for (i = 0; i < 2; i++)
            l_2377[i] = 0xA9450DB9L;
        l_2377[1] = l_2376;
        if ((safe_mul_func_uint16_t_u_u(((l_2380 , (((safe_lshift_func_uint16_t_u_s(((*g_821) = (l_2385 , l_2385.f3)), p_28)) || 249UL) == l_2385.f1.f1)) == 1UL), p_25.f3)))
        { 
            uint16_t * const l_2397[2][3] = {{&l_2097,&l_2097,&l_2097},{&g_151[0][2][1],&g_151[0][2][1],&g_151[0][2][1]}};
            int64_t *l_2400 = &g_236;
            int32_t ** const ** const *l_2405 = &g_273;
            int32_t l_2420 = 0x7EE5BCAEL;
            int32_t l_2421 = 0x29EC9288L;
            int32_t l_2422[2][4];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_2422[i][j] = (-4L);
            }
            for (l_2153 = 0; (l_2153 == 22); l_2153 = safe_add_func_uint32_t_u_u(l_2153, 3))
            { 
                for (g_1669 = 0; (g_1669 == 35); g_1669 = safe_add_func_uint64_t_u_u(g_1669, 8))
                { 
                    return p_25;
                }
                for (g_290 = 0; g_290 < 2; g_290 += 1)
                {
                    for (g_829 = 0; g_829 < 2; g_829 += 1)
                    {
                        for (l_2266 = 0; l_2266 < 3; l_2266 += 1)
                        {
                            l_2163[g_290][g_829][l_2266] = 18446744073709551612UL;
                        }
                    }
                }
            }
            l_2377[1] |= ((void*)0 != l_2397[1][1]);
            for (l_2266 = 0; (l_2266 <= 1); l_2266 += 1)
            { 
                struct S1 l_2398 = {-1L,{0xD272C52DL,0L},18446744073709551614UL,1UL,0x3C1E21A49FD5ED30LL};
                int8_t *l_2401 = (void*)0;
                int8_t *l_2402 = &l_2153;
                const int32_t **l_2406 = &g_1394;
                struct S0 **l_2409 = (void*)0;
                uint16_t *l_2410 = &l_2097;
                int32_t l_2417 = 0x0CE321BFL;
                int32_t l_2418[5][4] = {{8L,0xE4D396F7L,0xF687136DL,0xE4D396F7L},{0xE4D396F7L,0x85BECEBEL,1L,0xE4D396F7L},{1L,0xE4D396F7L,0x920B0570L,0x920B0570L},{(-2L),(-2L),0xF687136DL,8L},{(-2L),0x85BECEBEL,0x920B0570L,(-2L)}};
                int i, j;
                for (g_2166 = 0; (g_2166 <= 0); g_2166 += 1)
                { 
                    return l_2398;
                }
                (*l_2406) = p_26;
                (*l_2406) = p_26;
                for (l_2153 = 4; (l_2153 >= 0); l_2153 -= 1)
                { 
                    int32_t *l_2412 = (void*)0;
                    int32_t *l_2413 = &g_753;
                    int32_t *l_2414 = &l_2069;
                    int32_t l_2415[5] = {1L,1L,1L,1L,1L};
                    int32_t *l_2416[5][7][5] = {{{(void*)0,(void*)0,&g_1024[4].f1.f0,&g_3,&l_2152[4][0]},{&g_163.f0,&l_2377[1],&l_2069,&l_2069,&l_2377[1]},{&g_2364[(l_2153 + 1)],&g_1008[6][2],&l_2415[3],&l_2079.f0,&l_2415[3]},{&l_2377[1],&l_2079.f0,&g_2300,&l_2152[2][0],&l_2069},{&l_2069,&l_2078,&g_1024[4].f1.f0,&g_1024[4].f1.f0,(void*)0},{&l_2377[1],&l_2377[0],&l_2415[3],&l_2078,&l_2368},{&g_2364[(l_2153 + 1)],&g_2364[5],&g_163.f0,&l_2377[1],&l_2079.f0}},{{&g_163.f0,&l_2368,&l_2377[1],&l_2368,&g_163.f0},{(void*)0,(void*)0,&l_2377[1],&l_2079.f0,(void*)0},{&l_2368,&g_2364[1],(void*)0,&l_2377[1],&l_2368},{&l_2377[1],(void*)0,&g_1024[4].f1.f0,(void*)0,(void*)0},{(void*)0,&l_2377[1],(void*)0,&l_2377[1],&g_163.f0},{(void*)0,&g_1024[4].f1.f0,&g_3,&l_2152[4][0],&l_2079.f0},{&g_2300,&g_2300,&g_2300,&g_2300,&l_2368}},{{&l_2377[1],&l_2377[1],&l_2078,&l_2152[3][0],(void*)0},{&l_2368,&l_2377[1],&l_2368,&g_2300,&l_2069},{&l_2152[4][0],&l_2377[1],&l_2079.f0,&l_2152[3][0],&l_2415[3]},{&g_2300,(void*)0,&l_2368,&g_2300,&l_2377[1]},{&g_85[0][0][0],&l_2415[3],&l_2377[0],&l_2152[4][0],&l_2152[4][0]},{&l_2377[0],(void*)0,&l_2377[0],&l_2377[1],&l_2152[2][0]},{&g_1024[4].f1.f0,&g_85[0][0][0],&l_2152[4][0],(void*)0,&l_2079.f0}},{{(void*)0,&g_163.f0,&l_2152[2][0],&l_2377[1],&g_1008[5][2]},{&l_2079.f0,&l_2377[0],&l_2152[4][0],&l_2079.f0,&l_2069},{&l_2415[3],&l_2152[2][0],&l_2377[0],&l_2368,&l_2079.f0},{&g_1024[4].f1.f0,&g_163.f0,&l_2377[0],&l_2377[1],&l_2377[0]},{&l_2377[1],&l_2377[1],&l_2368,&l_2078,&g_1008[6][2]},{&l_2152[3][0],&l_2377[1],&l_2079.f0,&g_1024[4].f1.f0,&g_2364[5]},{&l_2377[1],&l_2377[1],&g_1008[6][2],&l_2377[0],&g_1008[0][1]}},{{&l_2069,&l_2377[1],&l_2377[1],&g_1008[6][2],&g_85[0][0][0]},{(void*)0,&g_1008[6][2],(void*)0,&l_2398.f1.f0,&l_2078},{&l_2377[1],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_2377[0],&l_2377[1],&l_2152[2][0],&g_1008[6][2]},{&l_2079.f0,&l_2415[3],&l_2377[0],&g_85[0][0][0],(void*)0},{&g_1008[5][2],&l_2415[3],&l_2368,(void*)0,&l_2368},{&l_2079.f0,&l_2377[1],&g_1024[4].f1.f0,&l_2377[1],&l_2415[3]}}};
                    int16_t l_2423 = 0xDD67L;
                    int16_t l_2426 = 0xEBCDL;
                    uint16_t l_2427[3][7][4] = {{{65526UL,0xA89CL,65526UL,6UL},{8UL,0xFE7AL,6UL,6UL},{0xA89CL,0xA89CL,1UL,0xFE7AL},{0xFE7AL,8UL,1UL,8UL},{0xA89CL,65526UL,6UL,1UL},{8UL,65526UL,65526UL,8UL},{65526UL,8UL,0xA89CL,0xFE7AL}},{{65526UL,0xA89CL,65526UL,6UL},{8UL,0xFE7AL,6UL,6UL},{0xA89CL,0xA89CL,1UL,0xFE7AL},{0xFE7AL,8UL,1UL,8UL},{0xA89CL,65526UL,6UL,1UL},{8UL,65526UL,65526UL,8UL},{65526UL,8UL,0xA89CL,0xFE7AL}},{{65526UL,0xA89CL,65526UL,6UL},{8UL,0xFE7AL,6UL,6UL},{0xA89CL,0xA89CL,1UL,0xFE7AL},{0xFE7AL,8UL,1UL,8UL},{0xA89CL,65526UL,6UL,1UL},{8UL,65526UL,65526UL,8UL},{65526UL,8UL,0xA89CL,0xFE7AL}}};
                    int i, j, k;
                    (*l_2406) = l_2412;
                    l_2427[1][4][1]++;
                    --l_2430;
                    (*l_2406) = p_26;
                }
            }
            for (g_829 = 0; (g_829 <= 1); g_829 += 1)
            { 
                return p_25;
            }
        }
        else
        { 
            union U2 ***l_2441 = (void*)0;
            int32_t *l_2465[7][3][7] = {{{&g_2364[5],(void*)0,&g_2364[3],&g_1008[2][1],(void*)0,&g_1008[2][1],&g_2364[3]},{&l_2152[6][0],&l_2152[6][0],&g_1040,(void*)0,&l_2377[1],&g_1040,&l_2377[1]},{&g_85[0][2][0],&g_2364[3],&g_2364[3],&g_85[0][2][0],&g_1008[2][1],&g_2364[5],&g_85[0][2][0]}},{{&g_2364[1],&l_2377[1],&g_753,&g_753,&l_2377[1],&g_2364[1],&g_1008[1][1]},{&l_2152[5][0],&g_85[0][2][0],(void*)0,(void*)0,(void*)0,(void*)0,&g_85[0][2][0]},{&l_2377[1],&g_1008[1][1],&g_2364[1],&l_2377[1],&g_753,&g_753,&l_2377[1]}},{{&g_2364[5],&g_85[0][2][0],&g_2364[5],&g_1008[2][1],&g_85[0][2][0],&g_2364[3],&g_2364[3]},{(void*)0,&l_2377[1],&g_1040,&l_2377[1],(void*)0,&g_1040,&l_2152[6][0]},{(void*)0,&g_2364[3],&g_1008[2][1],(void*)0,&g_1008[2][1],&g_2364[3],(void*)0}},{{&g_2364[1],&l_2152[6][0],&g_1008[1][1],&g_753,&g_2364[1],&g_753,&g_1040},{&g_2364[5],&g_2364[5],(void*)0,&g_2364[3],&g_1008[2][1],(void*)0,&g_1008[2][1]},{&g_1008[1][1],&g_1040,&g_1040,&g_1008[1][1],&g_753,&l_2446.f0,&g_1008[1][1]}},{{&g_1008[6][2],&g_1008[2][1],(void*)0,(void*)0,&g_1008[2][1],&g_1008[6][2],(void*)0},{&g_753,&g_1008[1][1],&l_2152[6][0],&g_2364[1],&g_2364[1],&l_2152[6][0],&g_1008[1][1]},{&g_1008[2][1],(void*)0,&g_1008[6][2],&g_1008[2][1],(void*)0,(void*)0,&g_1008[2][1]}},{{&l_2446.f0,&g_1008[1][1],&l_2446.f0,&g_753,&g_1008[1][1],&g_1040,&g_1040},{&g_2364[3],&g_1008[2][1],(void*)0,&g_1008[2][1],&g_2364[3],(void*)0,&g_2364[5]},{&g_2364[1],&g_1040,&g_753,&g_2364[1],&g_753,&g_1040,&g_2364[1]}},{{&g_1008[6][2],&g_2364[5],(void*)0,(void*)0,&g_2364[5],(void*)0,(void*)0},{&g_2364[1],&g_2364[1],&l_2152[6][0],&g_1008[1][1],&g_753,&l_2152[6][0],&g_753},{&g_2364[3],(void*)0,(void*)0,&g_2364[3],(void*)0,&g_1008[6][2],&g_2364[3]}}};
            struct S1 l_2469 = {0xCDL,{-3L,0xFDL},0x3B7DC5117560F222LL,0x5B519FE2L,0x7DAC5EF5FCF47031LL};
            int i, j, k;
            for (g_791 = 0; (g_791 < 11); ++g_791)
            { 
                const union U2 *l_2439 = &l_2380;
                const union U2 **l_2438[7];
                const union U2 ***l_2437 = &l_2438[6];
                const union U2 ****l_2440 = &l_2437;
                union U2 ****l_2442[7] = {&l_2441,&l_2441,&l_2441,&l_2441,&l_2441,&l_2441,&l_2441};
                const struct S0 *l_2445 = (void*)0;
                const struct S0 **l_2444 = &l_2445;
                int i;
                for (i = 0; i < 7; i++)
                    l_2438[i] = &l_2439;
                if ((p_25.f1.f0 = (safe_rshift_func_uint16_t_u_s(l_2377[1], (((((*l_2440) = l_2437) != (g_2443 = l_2441)) , l_2444) != (l_2446 , l_2447))))))
                { 
                    p_25.f1.f0 = ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((*g_579), 12)), ((*g_821)++))) , (-1L));
                    (**g_2205) = (****g_1884);
                    p_25.f1.f0 ^= (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((0L >= p_25.f3), (0x94D9L < ((((safe_lshift_func_uint16_t_u_u(l_2411, ((void*)0 != l_2462))) , (safe_unary_minus_func_int64_t_s((!(l_2465[0][2][5] != (void*)0))))) && 1UL) != p_25.f3)))), 1L)) & 0x9763L), (-1L)));
                    return p_25;
                }
                else
                { 
                    uint32_t l_2466[1][5][5] = {{{4UL,4UL,7UL,4UL,4UL},{1UL,0xED228859L,1UL,1UL,0xED228859L},{4UL,0UL,0UL,4UL,0UL},{0xED228859L,0xED228859L,1UL,0xED228859L,0xED228859L},{0UL,4UL,0UL,0UL,4UL}}};
                    int i, j, k;
                    l_2466[0][1][3]++;
                    return l_2385;
                }
            }
            return l_2469;
        }
    }
    return p_25;
}



static struct S1  func_29(uint32_t  p_30, uint64_t  p_31)
{ 
    int32_t *l_38 = (void*)0;
    int16_t *l_49 = &g_50;
    int32_t l_161[5][4][3] = {{{4L,(-1L),4L},{0xFAB46776L,0x804189EEL,0x804189EEL},{9L,(-1L),9L},{0xFAB46776L,0xFAB46776L,0x804189EEL}},{{4L,(-1L),4L},{0xFAB46776L,0x804189EEL,0x804189EEL},{9L,(-1L),9L},{0xFAB46776L,0xFAB46776L,0x804189EEL}},{{4L,(-1L),4L},{0xFAB46776L,0x804189EEL,0x804189EEL},{9L,(-1L),9L},{0xFAB46776L,0xFAB46776L,0x804189EEL}},{{4L,(-1L),4L},{0xFAB46776L,0x804189EEL,0x804189EEL},{9L,(-1L),9L},{0xFAB46776L,0xFAB46776L,0x804189EEL}},{{4L,(-1L),4L},{0xFAB46776L,0x804189EEL,0x804189EEL},{9L,(-1L),9L},{0xFAB46776L,0xFAB46776L,0x804189EEL}}};
    struct S1 l_1414 = {-5L,{8L,0xFBL},0x641642545DC6C7C8LL,0x70242A87L,0x8C7FF0154C34A837LL};
    int32_t ***l_1450 = &g_60;
    int64_t l_1503 = 0x1714A36E9F674403LL;
    uint16_t **l_1534 = &g_821;
    uint64_t l_1553 = 0xFBFC4CD26CE0B020LL;
    int32_t *****l_1566 = &g_87;
    struct S1 ****l_1623[1];
    int32_t l_1741 = (-1L);
    const uint64_t l_1762 = 0x707A9F54BB2FAF9CLL;
    struct S0 ***l_1764[2][4];
    struct S0 ****l_1763 = &l_1764[0][3];
    int8_t l_1765[4][7][2] = {{{0x85L,(-3L)},{0x85L,1L},{0x3EL,1L},{0x85L,(-3L)},{0x85L,1L},{0x3EL,1L},{0x85L,(-3L)}},{{0x85L,1L},{0x3EL,(-3L)},{0x3EL,(-1L)},{0x3EL,(-3L)},{0x7EL,(-3L)},{0x3EL,(-1L)},{0x3EL,(-3L)}},{{0x7EL,(-3L)},{0x3EL,(-1L)},{0x3EL,(-3L)},{0x7EL,(-3L)},{0x3EL,(-1L)},{0x3EL,(-3L)},{0x7EL,(-3L)}},{{0x3EL,(-1L)},{0x3EL,(-3L)},{0x7EL,(-3L)},{0x3EL,(-1L)},{0x3EL,(-3L)},{0x7EL,(-3L)},{0x3EL,(-1L)}}};
    uint32_t l_1804 = 0x704AE99AL;
    int16_t l_1823 = 1L;
    union U2 l_1851[4] = {{0x65A4E2BAL},{0x65A4E2BAL},{0x65A4E2BAL},{0x65A4E2BAL}};
    uint64_t l_1872 = 0x540B37FCA2FDBB40LL;
    const union U2 *l_1938 = &l_1851[2];
    uint8_t **l_1951 = &g_986[3];
    uint32_t l_1964[3][3] = {{0x350A39A4L,4294967294UL,0x350A39A4L},{9UL,9UL,9UL},{0x350A39A4L,4294967294UL,0x350A39A4L}};
    uint16_t l_1999[7];
    uint64_t l_2006[6][4] = {{0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL},{0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL},{0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL},{0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL},{0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL},{0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL,0xDE1D1DE6390A27E0LL}};
    int64_t l_2037 = 1L;
    int32_t l_2038 = 0L;
    int8_t *l_2042 = &g_296[5][3];
    uint64_t *l_2049 = &l_1414.f4;
    const struct S1 l_2050 = {1L,{0xD347E273L,-3L},18446744073709551615UL,5UL,0UL};
    int32_t *l_2051 = &g_3;
    int32_t *l_2052[2];
    int16_t l_2053 = 0x879DL;
    int32_t l_2054 = 0x5F549D13L;
    uint16_t l_2055[7] = {0xFF03L,0xA9E5L,0xA9E5L,0xFF03L,0xA9E5L,0xA9E5L,0xFF03L};
    struct S1 l_2058 = {0x10L,{0x7F21DE96L,9L},0x5E665F9F6531C5BBLL,0x3EB70FCBL,0x9037064068CA944FLL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1623[i] = &g_1214[0];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_1764[i][j] = &g_341;
    }
    for (i = 0; i < 7; i++)
        l_1999[i] = 65535UL;
    for (i = 0; i < 2; i++)
        l_2052[i] = (void*)0;
    if ((safe_lshift_func_int16_t_s_s(((func_34(g_37, (l_38 == ((*g_60) = func_39((l_161[0][3][1] = ((func_42(l_38, (safe_unary_minus_func_int32_t_s(g_37.f1.f1)), &g_3, l_38, ((*l_49) |= g_14)) & g_37.f2) | p_31)), g_142[2][1][1])))) , l_1414) , l_1414.f1.f0), 11)))
    { 
        int32_t *l_1433 = &g_293;
        int32_t l_1434 = 0x102EE31FL;
        int8_t *l_1435 = &g_142[2][1][1];
        int32_t l_1439 = 0x32B2A1E0L;
        int32_t l_1440 = 0x8493AAF4L;
        int32_t l_1441 = 9L;
        int32_t l_1442[7] = {0x0C7CE526L,0xB27D0016L,0x0C7CE526L,0x0C7CE526L,0xB27D0016L,0x0C7CE526L,0x0C7CE526L};
        int32_t *l_1462 = &g_753;
        union U2 ***l_1481[2];
        uint8_t l_1482 = 0xFDL;
        uint8_t **l_1483 = &g_986[3];
        int32_t l_1484 = 0x8BF94088L;
        uint16_t l_1486 = 0UL;
        int32_t l_1497 = (-2L);
        int64_t l_1498 = 6L;
        struct S0 ***l_1535 = &g_341;
        struct S1 *l_1552 = &g_1024[4];
        int32_t l_1586 = 0xE4981C42L;
        int8_t l_1737 = (-4L);
        int32_t l_1739 = 0x37785368L;
        int i;
        for (i = 0; i < 2; i++)
            l_1481[i] = &g_609;
        l_1434 = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((((((safe_rshift_func_uint8_t_u_u((((*l_1435) &= ((safe_mul_func_int8_t_s_s(g_14, (((*g_821) || (safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((void*)0 != l_1433) , (*g_579)), (*g_579))), p_31)), 0L)), g_753))) >= (***g_233)))) && l_1434)) < p_31), p_31)) <= 0xBC080252E5952C37LL) < p_30) > l_1434) >= 3UL), 2)), p_31)), l_1434));
        if (g_14)
            goto lbl_1594;
        for (p_31 = 0; (p_31 <= 1); p_31 += 1)
        { 
            int32_t l_1438 = 2L;
            int32_t l_1443 = 1L;
            int32_t l_1444 = 0x18B27CB0L;
            int8_t l_1448 = 0xEAL;
            const int32_t * const **l_1449 = (void*)0;
            int32_t l_1455[1];
            int32_t l_1499 = (-1L);
            uint32_t l_1500 = 0x86A1EA7CL;
            union U2 l_1521[1][3][1] = {{{{0xB920A09FL}},{{0xB920A09FL}},{{0xB920A09FL}}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1455[i] = 0x7868BA60L;
            for (g_50 = 0; (g_50 <= 1); g_50 += 1)
            { 
                uint8_t *l_1436[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1437[5][2][5] = {{{(-10L),0xD04D0922L,0xA13F1DEDL,0x17D4AF94L,0x11D4E654L},{2L,(-1L),2L,0x56F2935EL,0xC6D474F6L}},{{1L,0xEB7522E5L,1L,1L,0xEB7522E5L},{0x11D4E654L,0xEB7522E5L,(-8L),0xEAA27DD7L,6L}},{{0L,(-1L),0xC6D474F6L,(-10L),0x97B6062AL},{2L,0xD04D0922L,0L,2L,8L}},{{0L,1L,0x17D4AF94L,1L,(-8L)},{0x11D4E654L,(-10L),(-10L),0x11D4E654L,(-8L)}},{{1L,0x17D4AF94L,1L,0L,8L},{2L,0L,0xD04D0922L,2L,0x97B6062AL}}};
                uint16_t l_1456[4][2][5] = {{{0x895FL,0UL,0x6A01L,0x6A01L,0UL},{0xB4ACL,1UL,0xEEC9L,0xEEC9L,1UL}},{{0x895FL,0UL,0x6A01L,0x6A01L,0UL},{0xB4ACL,1UL,0xEEC9L,0xEEC9L,1UL}},{{0x895FL,0UL,0x6A01L,0x6A01L,0UL},{0xB4ACL,1UL,0xEEC9L,0xEEC9L,1UL}},{{0x895FL,0UL,0x6A01L,0x6A01L,0UL},{0xB4ACL,1UL,0xEEC9L,0xEEC9L,1UL}}};
                struct S0 ***l_1463 = (void*)0;
                int8_t l_1485 = 0x93L;
                int32_t *l_1495 = &g_753;
                int32_t *l_1496[7][6] = {{&g_1024[4].f1.f0,&l_1440,&l_1455[0],&l_1440,&l_1455[0],&l_1434},{&g_1024[4].f1.f0,&l_1434,&l_1440,&l_1434,&g_1024[4].f1.f0,&g_1024[4].f1.f0},{&l_1455[0],&l_1434,&l_1434,&l_1455[0],&l_1455[0],&l_1455[0]},{&l_1455[0],&l_1455[0],&l_1455[0],&l_1434,&l_1434,&l_1455[0]},{&g_1024[4].f1.f0,&g_1024[4].f1.f0,&l_1434,&l_1440,&l_1434,&g_1024[4].f1.f0},{&l_1434,&l_1455[0],&l_1440,&l_1440,&l_1455[0],&l_1434},{&g_1024[4].f1.f0,&l_1434,&l_1440,&l_1434,&g_1024[4].f1.f0,&g_1024[4].f1.f0}};
                int i, j, k;
            }
            for (l_1497 = 0; (l_1497 <= 1); l_1497 += 1)
            { 
                int32_t l_1520 = 0xA4522BA6L;
                struct S0 ***l_1522 = (void*)0;
                struct S0 ****l_1523 = &l_1522;
                int32_t l_1526[6][3] = {{0xAB378C02L,3L,0xAB378C02L},{0xAB378C02L,3L,0xAB378C02L},{0xAB378C02L,3L,0xAB378C02L},{0xAB378C02L,3L,0xAB378C02L},{0xAB378C02L,3L,0xAB378C02L},{0xAB378C02L,3L,0xAB378C02L}};
                const struct S1 l_1536 = {0x8EL,{0xD770F7F9L,8L},0x062953238D04AB81LL,1UL,18446744073709551615UL};
                int i, j;
                (*l_1462) = (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_int32_t_s_s((l_1520 = 0x7E48A7EEL), ((l_1521[0][1][0] , ((*l_1523) = l_1522)) == (((safe_rshift_func_uint8_t_u_u(((l_1526[0][0] , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((p_30 != (l_1455[0] = (safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_u((((p_31 , l_1534) != (void*)0) && (*l_1462)), p_31)))))) != p_31), p_31)), 0))) || p_30), l_1526[3][1])) != p_31) , l_1535)))), (-1L))), 0x2EF7L));
                (**g_341) = l_1414.f1;
                (*l_1462) = 1L;
                for (l_1498 = 1; (l_1498 >= 0); l_1498 -= 1)
                { 
                    int32_t *l_1537 = &g_1040;
                    int32_t *l_1538 = (void*)0;
                    int32_t *l_1539 = &l_1414.f1.f0;
                    int32_t *l_1540 = &l_1484;
                    int32_t *l_1541 = &l_1455[0];
                    int32_t *l_1542 = &l_1443;
                    int32_t *l_1543 = &l_1438;
                    int32_t *l_1544 = &l_1443;
                    int32_t *l_1545 = &l_1444;
                    int32_t *l_1546 = &l_161[1][0][1];
                    int32_t *l_1547 = &g_753;
                    int32_t *l_1548[5];
                    uint32_t l_1549 = 3UL;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1548[i] = &l_1526[1][1];
                    --l_1549;
                    if (g_151[l_1497][(l_1497 + 1)][l_1498])
                        continue;
                    (*g_1215) = l_1552;
                    ++l_1553;
                    return (*l_1552);
                }
                for (g_115.f0 = 0; (g_115.f0 <= 2); g_115.f0 += 1)
                { 
                    uint32_t l_1556 = 9UL;
                    ++l_1556;
                    return (*l_1552);
                }
                for (g_345 = 0; (g_345 <= 2); g_345 += 1)
                { 
                    uint32_t *l_1569[2][4] = {{&g_638,&g_638,&g_638,&g_638},{&g_638,&g_638,&g_638,&g_638}};
                    uint64_t *l_1587 = &g_290;
                    uint8_t *l_1588[4][6] = {{&g_768[0][4],&g_83[4],&g_83[4],&g_768[0][4],&g_83[4],&g_83[4]},{&g_768[0][4],&g_83[4],&g_83[4],&g_768[0][4],&g_83[4],&g_83[4]},{&g_768[0][4],&g_83[4],&g_83[4],&g_768[0][4],&g_83[4],&g_83[4]},{&g_768[0][4],&g_83[4],&g_83[4],&g_768[0][4],&g_83[4],&g_83[4]}};
                    int32_t l_1589 = (-1L);
                    int i, j, k;
                    (*l_1462) = (((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((l_1589 = (((l_1566 != &g_273) || (safe_sub_func_uint16_t_u_u((p_31 | 4L), (((*l_1587) = ((g_190--) != (safe_mod_func_int8_t_s_s(p_30, (safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((g_151[p_31][g_345][p_31] &= ((safe_mod_func_uint8_t_u_u((((((*l_1462) != (safe_lshift_func_int16_t_s_u(((*l_49) = l_1586), p_31))) <= (-1L)) , (*g_579)) >= p_31), 0x5DL)) <= 4294967290UL)), 15)) >= p_30), 0x28L)), l_1526[0][0])) && p_31), 0xC7L)))))) != p_31)))) || 0x4C9A810680F4CF0ELL)))), p_31)), 1)) || g_50), p_30)) && l_1589) & 9L);
                    if (l_1536.f1.f0)
                        continue;
                }
            }
            for (g_338 = 0; (g_338 <= 0); g_338 += 1)
            { 
                uint32_t l_1590[3][6] = {{0x6F438D82L,0UL,0UL,0x6F438D82L,0xAD782C66L,18446744073709551612UL},{0UL,0UL,0xAD782C66L,0UL,0xAD782C66L,0UL},{0UL,0UL,18446744073709551612UL,0UL,0xAD782C66L,0xAD782C66L}};
                struct S1 l_1593[1][3] = {{{0x29L,{0x37176359L,0xAAL},1UL,0xAFDD9A61L,1UL},{0x29L,{0x37176359L,0xAAL},1UL,0xAFDD9A61L,1UL},{0x29L,{0x37176359L,0xAAL},1UL,0xAFDD9A61L,1UL}}};
                int i, j;
                l_1590[2][0]++;
                return l_1593[0][2];
            }
        }
lbl_1594:
        (*l_1462) = 9L;
        for (g_3 = 0; (g_3 <= (-5)); --g_3)
        { 
            uint64_t l_1609 = 0x5114AE0A0D18025CLL;
            int32_t l_1610 = 0x192B5996L;
            struct S1 l_1612 = {6L,{-10L,0xAAL},0UL,0UL,1UL};
            uint8_t ** const l_1626 = &g_986[2];
            struct S1 ***l_1630 = (void*)0;
            int32_t **l_1637 = (void*)0;
            uint32_t l_1641 = 0UL;
            int32_t l_1648 = 0L;
            int32_t **l_1660 = (void*)0;
        }
    }
    else
    { 
        int8_t l_1740[2][4] = {{4L,0x51L,0x51L,4L},{0x51L,4L,0x51L,0x51L}};
        struct S1 **l_1744 = &g_1216;
        struct S1 **l_1745 = &g_1216;
        int32_t l_1746 = 4L;
        int32_t l_1770 = 1L;
        int32_t l_1795 = (-2L);
        int32_t l_1796[6][5][2] = {{{(-7L),(-7L)},{0x495EA8C6L,(-7L)},{(-7L),0x495EA8C6L},{(-7L),(-7L)},{0x495EA8C6L,(-7L)}},{{(-7L),0x495EA8C6L},{(-7L),(-7L)},{0x495EA8C6L,(-7L)},{(-7L),0x495EA8C6L},{(-7L),(-7L)}},{{0x495EA8C6L,(-7L)},{(-7L),0x495EA8C6L},{(-7L),(-7L)},{0x495EA8C6L,(-7L)},{(-7L),0x495EA8C6L}},{{(-7L),(-7L)},{0x495EA8C6L,(-7L)},{(-7L),0x495EA8C6L},{(-7L),(-7L)},{0x495EA8C6L,(-7L)}},{{(-7L),0x495EA8C6L},{(-7L),(-7L)},{0x495EA8C6L,(-7L)},{(-7L),0x495EA8C6L},{(-7L),(-7L)}},{{0x495EA8C6L,(-7L)},{(-7L),0x495EA8C6L},{(-7L),(-7L)},{0x495EA8C6L,(-7L)},{(-7L),0x495EA8C6L}}};
        union U2 * const l_1809 = (void*)0;
        int32_t **l_1822[3];
        uint64_t l_1826[6];
        int16_t **l_1829 = &l_49;
        struct S0 *l_1863 = &l_1414.f1;
        uint64_t l_1868 = 1UL;
        int32_t ***l_1887[1];
        struct S0 ***l_1893 = &g_341;
        int32_t l_1963[5][2][5] = {{{0x123B9817L,0x681A29D2L,1L,0x681A29D2L,0x123B9817L},{(-1L),0x9707C91BL,(-1L),(-1L),0x9707C91BL}},{{0x123B9817L,0L,(-1L),0L,1L},{(-1L),(-1L),0x9707C91BL,(-1L),(-1L)}},{{1L,0L,1L,0L,(-1L)},{(-1L),0L,0L,(-1L),0L}},{{(-1L),0L,0x123B9817L,0L,(-1L)},{0L,(-1L),0L,0L,(-1L)}},{{(-1L),0L,1L,0L,1L},{(-1L),(-1L),0x9707C91BL,(-1L),(-1L)}}};
        int32_t l_1968 = 0xEEB8CE61L;
        uint64_t l_2002 = 0x14EA4B867D14EFFFLL;
        uint8_t *l_2017 = &g_1286;
        uint16_t *l_2033 = (void*)0;
        int64_t l_2034 = 0x58AB50BD6161C209LL;
        int8_t *l_2035 = &g_1024[4].f1.f1;
        int8_t *l_2036[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1822[i] = &g_248;
        for (i = 0; i < 6; i++)
            l_1826[i] = 18446744073709551615UL;
        for (i = 0; i < 1; i++)
            l_1887[i] = &g_1174;
        for (i = 0; i < 3; i++)
            l_2036[i] = &l_1765[2][6][1];
        if ((l_1746 = (((l_1741 &= (l_1740[0][0] = p_31)) < p_31) && (safe_mod_func_int64_t_s_s((l_1744 == (g_142[2][1][1] , (l_1745 = l_1744))), ((*g_235) |= l_1740[0][0]))))))
        { 
            int32_t l_1761 = 0xE3B662C5L;
            int32_t l_1766 = 0L;
            struct S1 **l_1769 = &g_1216;
            int32_t l_1791 = 0L;
            int32_t l_1792 = 7L;
            int32_t l_1797 = 0x1D6B5C4AL;
            int32_t l_1798 = 0xC317AF48L;
            int32_t l_1799 = (-2L);
            int32_t l_1800 = 6L;
            int32_t l_1801 = 0x5AB3F283L;
            int32_t l_1802[5] = {0x9B0CC174L,0x9B0CC174L,0x9B0CC174L,0x9B0CC174L,0x9B0CC174L};
            int8_t l_1803 = 0L;
            int8_t *l_1825 = &l_1740[0][0];
            int16_t ***l_1830 = &g_308;
            int16_t ***l_1831 = (void*)0;
            int16_t ***l_1832 = &g_308;
            int16_t ***l_1833 = &g_308;
            int16_t ***l_1834 = (void*)0;
            int16_t **l_1835 = &l_49;
            uint8_t **l_1842 = &g_986[2];
            struct S0 *l_1862 = &g_1024[4].f1;
            uint64_t l_1871 = 0x96AA9D0E2044E918LL;
            int64_t *l_1921 = (void*)0;
            int64_t *l_1922[5][2][5] = {{{&l_1503,(void*)0,&g_1504,&g_236,&g_1504},{&g_1504,&g_829,&g_1504,&g_1504,&g_236}},{{&l_1503,&g_1504,&g_236,&g_1504,&l_1503},{&l_1503,&g_1504,&g_236,&g_1504,&g_1504}},{{&g_236,&g_829,&g_1504,&g_1504,&g_1504},{&g_1504,&l_1503,&g_1504,&g_1504,&g_1504}},{{&g_236,&g_1504,&g_1504,&g_236,&l_1503},{&g_1504,&g_1504,&l_1503,(void*)0,&g_236}},{{&g_1504,&l_1503,&g_1504,(void*)0,&g_1504},{&l_1503,&g_829,&g_829,(void*)0,(void*)0}}};
            union U2 *l_1935 = &l_1851[1];
            int8_t l_1943[7][5][7] = {{{0x38L,(-3L),3L,4L,0xB4L,0L,(-3L)},{0x4EL,0L,0x06L,0xB3L,0xB3L,0x06L,0L},{0x21L,0L,3L,0x04L,5L,9L,0L},{0x4EL,0xFFL,0xD9L,1L,0xD6L,0x06L,0xFFL},{0x38L,1L,9L,0x04L,4L,0L,1L}},{{0x10L,0xFFL,1L,0xB3L,0xAAL,0L,0xFFL},{0x83L,0L,0x7BL,4L,4L,0x7BL,0L},{0x43L,0L,1L,(-5L),0xD6L,0xD9L,0L},{0x83L,(-3L),9L,0x2CL,5L,0x7BL,(-3L)},{0x10L,1L,0xD9L,(-5L),0xB3L,0L,1L}},{{0x38L,(-3L),3L,4L,0xB4L,0L,(-3L)},{0x4EL,0L,0x06L,0xB3L,0xB3L,0x06L,0L},{0x21L,0L,3L,0x04L,5L,9L,0L},{0x4EL,0xFFL,0xD9L,1L,0xD6L,0x06L,0xFFL},{0x47L,5L,0x2CL,0xA7L,0x83L,4L,5L}},{{0L,0L,0xD6L,0x4EL,0x43L,0xB3L,0L},{0x52L,0L,0x04L,0x83L,0x83L,0x04L,0L},{(-1L),3L,0xD6L,0x59L,0x10L,1L,3L},{0x52L,1L,0x2CL,0x2AL,0x38L,0x04L,1L},{0L,1L,1L,0x59L,0x4EL,0xB3L,1L}},{{0x47L,1L,5L,0x83L,0x21L,4L,1L},{1L,3L,(-5L),0x4EL,0x4EL,(-5L),3L},{0x17L,0L,5L,0xA7L,0x38L,0x2CL,0L},{1L,0L,1L,(-1L),0x10L,(-5L),0L},{0x47L,5L,0x2CL,0xA7L,0x83L,4L,5L}},{{0L,0L,0xD6L,0x4EL,0x43L,0xB3L,0L},{0x52L,0L,0x04L,0x83L,0x83L,0x04L,0L},{(-1L),3L,0xD6L,0x59L,0x10L,1L,3L},{0x52L,1L,0x2CL,0x2AL,0x38L,0x04L,1L},{0L,1L,1L,0x59L,0x4EL,0xB3L,1L}},{{0x47L,1L,5L,0x83L,0x21L,4L,1L},{1L,3L,(-5L),0x4EL,0x4EL,(-5L),3L},{0x17L,0L,5L,0xA7L,0x38L,0x2CL,0L},{1L,0L,1L,(-1L),0x10L,(-5L),0L},{0x47L,5L,0x2CL,0xA7L,0x83L,4L,5L}}};
            uint8_t l_1958 = 0x80L;
            uint16_t *l_1983[4][4][5] = {{{&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1]},{&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0]},{&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1]},{&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0]}},{{&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1]},{&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0]},{&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1]},{&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0]}},{{&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1]},{&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0]},{&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1]},{&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0]}},{{&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1]},{&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0]},{&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1],&g_358[2][1]},{&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0],&g_151[1][1][0]}}};
            uint32_t l_1988 = 0xBF18C49CL;
            int i, j, k;
            l_1766 &= (p_31 <= (((((+0L) & (~0xE7905E78055E3F2FLL)) > (safe_rshift_func_uint8_t_u_s(255UL, ((((&g_1051 == ((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((((((safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(p_30, 2UL)), l_1761)) || p_30) == l_1762) > l_1761) > 4L), 2)), 2)), l_1761)) , l_1763)) & l_1746) > 0xC0L) , p_31)))) > l_1765[2][2][1]) > p_31));
lbl_1841:
            for (g_638 = 0; (g_638 != 30); g_638 = safe_add_func_int32_t_s_s(g_638, 2))
            { 
                uint64_t l_1778 = 4UL;
                int32_t l_1782 = 0x58ACA981L;
                int32_t l_1793 = (-2L);
                int32_t l_1794[2];
                struct S0 *l_1824[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_1794[i] = 4L;
                for (i = 0; i < 1; i++)
                    l_1824[i] = (void*)0;
                l_1769 = l_1745;
                l_1782 |= ((l_1770 & (!((l_1761 = (safe_rshift_func_int16_t_s_s(l_1740[1][1], 6))) ^ (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(l_1778, (((((void*)0 != l_1623[0]) != l_1770) && (!((l_1746 &= (safe_add_func_uint32_t_u_u((l_1766 > 0xF58B83E8L), p_31))) == p_30))) || 8L))) , 255UL), l_1778))))) >= 0x8035L);
                for (g_115.f0 = (-27); (g_115.f0 < 17); g_115.f0 = safe_add_func_int32_t_s_s(g_115.f0, 5))
                { 
                    int32_t *l_1785 = &l_161[0][3][1];
                    int32_t *l_1786 = &g_1040;
                    int32_t *l_1787 = (void*)0;
                    int32_t l_1788 = 2L;
                    int32_t *l_1789 = (void*)0;
                    int32_t *l_1790[1][1][4];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_1790[i][j][k] = &l_161[0][3][1];
                        }
                    }
                    l_1804--;
                    (*l_1786) = l_1800;
                    if (p_31)
                        continue;
                    l_1797 ^= ((safe_div_func_int8_t_s_s(((1UL | ((void*)0 == l_1809)) == ((l_1793 = (safe_add_func_uint16_t_u_u((((0xF0L != (safe_mul_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((((l_1823 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((*l_1785), l_1795)) >= ((((void*)0 != l_1822[1]) , p_31) <= p_30)), p_30)), p_31))) & p_30) <= p_31), p_30)) <= 0xBABAC71C980CAB36LL) || 1L), p_30))) != p_30) || (-1L)), p_30))) | 0L)), p_30)) , (-6L));
                    (*g_341) = l_1824[0];
                }
            }
            l_1761 = (((*l_1825) = g_160[0]) > (l_1826[0] ^ (safe_add_func_uint16_t_u_u(0xAE07L, (((l_1835 = l_1829) == &l_49) != p_30)))));
            for (g_338 = 0; (g_338 >= 7); ++g_338)
            { 
                struct S1 **l_1847 = &g_1216;
                int32_t l_1849 = (-8L);
                struct S1 l_1850[6][5] = {{{0x42L,{0x4826CF47L,0x58L},0x9776BA90F50ECD2BLL,6UL,0xBB1634AA3F7F56BALL},{1L,{0L,0x13L},0x794C4DC9915D3958LL,6UL,18446744073709551606UL},{-10L,{0xDA76534FL,0xEAL},0x778B42E636C0A55CLL,0x72DC23C4L,3UL},{1L,{0x8057BA4EL,0xE3L},0xB562F26FFC5C7AF4LL,0UL,0UL},{-10L,{0xDA76534FL,0xEAL},0x778B42E636C0A55CLL,0x72DC23C4L,3UL}},{{1L,{0x8057BA4EL,0xE3L},0xB562F26FFC5C7AF4LL,0UL,0UL},{1L,{0x8057BA4EL,0xE3L},0xB562F26FFC5C7AF4LL,0UL,0UL},{0x6AL,{3L,0x7AL},18446744073709551615UL,1UL,0xACCF888C2A3244CDLL},{0L,{0xF17D6B96L,0xECL},6UL,0x7F440AA2L,0xE6726B5E321D4271LL},{2L,{0xB0980294L,0x62L},18446744073709551615UL,0x426DE0CFL,0x2FE7EF9A2C83BEC7LL}},{{7L,{0x601FEC25L,1L},18446744073709551615UL,4294967295UL,18446744073709551608UL},{0x00L,{-1L,-6L},0x4C096A0C42C6C62BLL,0xECBD537DL,0xD1E87042DD8B6D43LL},{0x6AL,{3L,0x7AL},18446744073709551615UL,1UL,0xACCF888C2A3244CDLL},{-6L,{-2L,4L},18446744073709551610UL,0x637AA133L,4UL},{0x42L,{0x4826CF47L,0x58L},0x9776BA90F50ECD2BLL,6UL,0xBB1634AA3F7F56BALL}},{{-1L,{0xF4F58518L,-5L},0x012B30FBE5E7F699LL,0UL,18446744073709551615UL},{0x6AL,{3L,0x7AL},18446744073709551615UL,1UL,0xACCF888C2A3244CDLL},{-10L,{0xDA76534FL,0xEAL},0x778B42E636C0A55CLL,0x72DC23C4L,3UL},{0x6AL,{3L,0x7AL},18446744073709551615UL,1UL,0xACCF888C2A3244CDLL},{-1L,{0xF4F58518L,-5L},0x012B30FBE5E7F699LL,0UL,18446744073709551615UL}},{{0L,{0xF17D6B96L,0xECL},6UL,0x7F440AA2L,0xE6726B5E321D4271LL},{0x00L,{-1L,-6L},0x4C096A0C42C6C62BLL,0xECBD537DL,0xD1E87042DD8B6D43LL},{2L,{0xB0980294L,0x62L},18446744073709551615UL,0x426DE0CFL,0x2FE7EF9A2C83BEC7LL},{-1L,{0xF4F58518L,-5L},0x012B30FBE5E7F699LL,0UL,18446744073709551615UL},{1L,{0x8057BA4EL,0xE3L},0xB562F26FFC5C7AF4LL,0UL,0UL}},{{0L,{0xF17D6B96L,0xECL},6UL,0x7F440AA2L,0xE6726B5E321D4271LL},{1L,{0x8057BA4EL,0xE3L},0xB562F26FFC5C7AF4LL,0UL,0UL},{0x42L,{0x4826CF47L,0x58L},0x9776BA90F50ECD2BLL,6UL,0xBB1634AA3F7F56BALL},{1L,{0L,0x15L},18446744073709551615UL,1UL,0x078B7AC7D8DA99C7LL},{1L,{0L,0x15L},18446744073709551615UL,1UL,0x078B7AC7D8DA99C7LL}}};
                union U2 *l_1853 = &g_115;
                int i, j;
                for (g_1669 = 21; (g_1669 <= 43); ++g_1669)
                { 
                    struct S1 l_1840 = {0L,{1L,0xCBL},0xB74B9A19513F5F66LL,0xB75B83F0L,0xE593DCED09810914LL};
                    return l_1840;
                }
                (**l_1450) = &l_1802[4];
                if (g_791)
                    goto lbl_1841;
                for (l_1766 = 4; (l_1766 >= 0); l_1766 -= 1)
                { 
                    uint8_t *l_1848 = &g_83[3];
                    uint8_t l_1852 = 0xC8L;
                    int i, j;
                    l_1802[l_1766] = (((void*)0 != l_1842) ^ g_1008[(l_1766 + 1)][l_1766]);
                    g_1008[(l_1766 + 1)][l_1766] |= (((safe_lshift_func_uint16_t_u_s((0L || ((((safe_rshift_func_uint16_t_u_s((((*l_1848) = ((void*)0 != l_1847)) > (l_1849 ^= l_1802[l_1766])), (&l_1847 != (l_1850[3][1] , (l_1851[1] , &g_1215))))) > l_1802[l_1766]) < (***l_1450)) && (*g_821))), p_30)) || 0L) <= l_1852);
                }
                (**g_60) |= (l_1853 == (void*)0);
            }
            if (((l_1797 != (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(p_30, p_30)), 1))) & ((safe_rshift_func_uint8_t_u_s(((l_1802[3] == ((safe_lshift_func_uint8_t_u_s(((l_1863 = l_1862) == g_1864), g_580)) == l_1766)) < p_31), 7)) | 0xFC34E7F078346B1BLL)))
            { 
                uint16_t l_1865 = 0UL;
                int32_t l_1867 = 0x611376A7L;
                uint8_t l_1881[5][5] = {{0x27L,0x27L,0x27L,0x27L,0x27L},{253UL,253UL,253UL,253UL,253UL},{0x27L,0x27L,0x27L,0x27L,0x27L},{253UL,253UL,253UL,253UL,253UL},{0x27L,0x27L,0x27L,0x27L,0x27L}};
                uint64_t *l_1882 = &g_290;
                int64_t l_1886 = (-1L);
                const struct S0 *l_1892 = &g_37.f1;
                const struct S0 **l_1891[2];
                const struct S0 *** const l_1890[4] = {&l_1891[0],&l_1891[0],&l_1891[0],&l_1891[0]};
                struct S0 l_1918 = {-10L,1L};
                int64_t *****l_1928 = (void*)0;
                const struct S1 l_1939 = {0xDBL,{0xBE23BBAEL,0x00L},0x6D8F4B7246FC0B8FLL,0xF84D95CEL,7UL};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1891[i] = &l_1892;
                if ((0x1F101635L | (p_31 | l_1865)))
                { 
                    int32_t l_1866[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1866[i] = 0L;
                    ++l_1868;
                }
                else
                { 
                    (***l_1763) = (***l_1763);
                    if (g_14)
                        goto lbl_1875;
                }
                if (l_1871)
                { 
lbl_1875:
                    ++l_1872;
                    l_1867 |= ((void*)0 == &g_308);
                    l_1886 ^= (+(((((p_31 | (safe_lshift_func_int8_t_s_u((l_1881[2][4] == ((*l_1882) = (4294967295UL == g_213))), (l_1802[2] = p_31)))) , (!(p_31 <= 0x65L))) >= 0x6DL) , g_1884) != &g_1885));
                }
                else
                { 
                    int32_t ***l_1888 = &g_1174;
                    struct S0 l_1889 = {0x7ABC4ECBL,1L};
                    l_1888 = l_1887[0];
                    (*g_1864) = l_1889;
                    l_1867 = ((l_1798 , (p_30 && 1UL)) & 0x0ED00745L);
                    l_1867 |= (p_30 & (((((l_1890[2] == l_1893) > l_1791) || g_768[0][1]) != 0xACL) == 0xCA95L));
                }
                for (l_1872 = (-20); (l_1872 < 36); l_1872++)
                { 
                    int64_t l_1916 = 0xDA49FA118701A6E8LL;
                    uint8_t *l_1917 = &g_768[0][4];
                    int64_t *l_1923 = (void*)0;
                    int32_t l_1927 = 0x813C33C1L;
                    union U2 **l_1936 = (void*)0;
                    union U2 **l_1937 = &l_1935;
                    l_1918 = l_1918;
                    l_38 = ((****l_1566) = &l_1800);
                    (**g_60) |= (((*l_1937) = (((((p_30 , (safe_mod_func_int64_t_s_s((l_1867 &= (((**g_233) = l_1921) != (l_1922[0][1][4] = l_1921))), (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u(((**l_1534) = ((l_1927 = p_30) , (((l_1928 == (((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((p_30 ^ (safe_lshift_func_uint8_t_u_s(p_30, p_31))), p_31)) == 0xF7L), 4L)) || p_30) , (void*)0)) | l_1916) | p_30))), p_30))))))) ^ 0x3148L) ^ 0UL) && p_30) , l_1935)) == l_1938);
                    (****g_87) &= ((void*)0 != (*g_1295));
                }
                (*g_1864) = (*l_1862);
            }
            else
            { 
                uint64_t l_1940 = 18446744073709551606UL;
                struct S0 l_1947 = {-3L,0x2EL};
                uint8_t ***l_1952 = &l_1842;
                const struct S1 l_1955 = {1L,{-1L,-2L},0xB57C0A929A88BF89LL,0x39E1F682L,0xA6A724B3D0EC0A85LL};
                int32_t l_1960[4][7] = {{0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L},{0xAD9F0C0FL,0xEEE9501EL,0xAD9F0C0FL,0xEEE9501EL,0xAD9F0C0FL,0xEEE9501EL,0xAD9F0C0FL},{0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L,0xB2A94AC2L},{0xAD9F0C0FL,0xEEE9501EL,0xAD9F0C0FL,0xEEE9501EL,0xAD9F0C0FL,0xEEE9501EL,0xAD9F0C0FL}};
                uint8_t l_1971[7][3][7] = {{{1UL,0xB0L,0xB0L,1UL,6UL,0xB0L,1UL},{255UL,254UL,255UL,255UL,0x75L,255UL,255UL},{1UL,1UL,0UL,1UL,1UL,255UL,1UL}},{{255UL,255UL,0xBBL,254UL,0xBBL,255UL,255UL},{6UL,1UL,0xB0L,6UL,1UL,0xB0L,0xB0L},{0x75L,254UL,0x62L,254UL,0x75L,0UL,0x75L}},{{1UL,6UL,0xB0L,1UL,6UL,6UL,1UL},{0xBBL,254UL,0xBBL,255UL,255UL,255UL,0xBBL},{1UL,1UL,0UL,1UL,1UL,0UL,1UL}},{{0x75L,255UL,255UL,254UL,255UL,0UL,255UL},{255UL,6UL,0UL,0UL,6UL,255UL,0UL},{0xBBL,255UL,255UL,255UL,0xBBL,254UL,0xBBL}},{{6UL,0UL,0UL,6UL,255UL,0UL,0xB0L},{0x62L,255UL,0x62L,0UL,255UL,0UL,0x62L},{6UL,6UL,1UL,0xB0L,6UL,1UL,0xB0L}},{{0xBBL,0UL,0x9AL,255UL,0x9AL,0UL,0xBBL},{255UL,0xB0L,0UL,255UL,6UL,0UL,0UL},{255UL,255UL,0x75L,255UL,255UL,254UL,255UL}},{{6UL,255UL,0UL,0xB0L,255UL,255UL,0xB0L},{0x9AL,255UL,0x9AL,0UL,0xBBL,0UL,0x9AL},{6UL,0xB0L,1UL,6UL,6UL,1UL,0xB0L}}};
                int i, j, k;
lbl_1967:
                l_1940 = p_30;
                for (g_190 = 0; (g_190 < 23); g_190 = safe_add_func_uint16_t_u_u(g_190, 1))
                { 
                    uint32_t l_1944 = 0xE2A1CD19L;
                    struct S1 l_1948 = {0x8BL,{-1L,0x0CL},0x965F82B5C41D71BFLL,0x683D6F9AL,0x465B79B3AC3DD6D6LL};
                    (*l_1863) = (*l_1863);
                    l_1944++;
                    (*l_1863) = l_1947;
                    return l_1948;
                }
                if ((safe_add_func_int64_t_s_s(((l_1951 != ((*l_1952) = &g_986[3])) || (!((!(l_1791 == (l_1947 , p_31))) > p_30))), p_30)))
                { 
                    l_1761 &= ((0xAB61L <= p_30) <= (safe_add_func_int64_t_s_s((****g_1295), l_1958)));
                    l_1947.f0 = ((void*)0 != l_1566);
                }
                else
                { 
                    int16_t l_1959 = 1L;
                    int32_t l_1961 = 0x59C7058EL;
                    int32_t l_1962 = (-3L);
                    int32_t l_1969 = 0xB3071FDEL;
                    int32_t l_1970 = 1L;
                    ++l_1964[2][2];
                    if (l_1871)
                        goto lbl_1967;
                    l_1971[3][2][2]++;
                }
                for (l_1940 = 0; (l_1940 == 38); l_1940 = safe_add_func_uint16_t_u_u(l_1940, 1))
                { 
                    int8_t l_1976 = 0x9CL;
                    uint16_t **l_1984 = (void*)0;
                    uint16_t **l_1985 = &l_1983[2][2][0];
                    int32_t l_1989 = (-5L);
                    if (l_1976)
                        break;
                    l_1989 |= (safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((void*)0 != (*g_1174)), (safe_sub_func_int8_t_s_s((((*l_1935) , (*l_1534)) != ((*l_1985) = l_1983[1][2][1])), (((safe_add_func_uint8_t_u_u(l_1988, p_30)) , l_1766) ^ (-1L)))))), l_1976));
                }
            }
        }
        else
        { 
            uint16_t l_1990 = 0x1187L;
            int32_t *l_1996 = &l_1741;
            uint16_t *l_2003[2][2][4] = {{{&g_151[0][2][1],&g_345,(void*)0,(void*)0},{&g_151[0][1][0],&g_151[0][1][0],&g_151[0][2][1],(void*)0}},{{&l_1990,&g_345,&l_1990,&g_151[0][2][1]},{&l_1990,&g_151[0][2][1],&g_151[0][2][1],&l_1990}}};
            int32_t l_2004 = 8L;
            uint8_t *l_2005 = &g_768[0][4];
            int i, j, k;
            l_1990 = p_30;
            l_2006[3][0] = (safe_rshift_func_uint8_t_u_u(((*l_2005) |= (!((safe_rshift_func_int8_t_s_u(((0x828E5BDDL != 0x20A5E8B5L) > (l_1996 != (*g_1174))), 2)) != (safe_add_func_uint16_t_u_u(((*g_821) = l_1999[5]), (l_1990 , (l_2004 &= (((safe_div_func_int64_t_s_s((g_1024[4].f2 && l_2002), 0xC908606F26D24A48LL)) >= 255UL) & (*g_579))))))))), 3));
            l_2004 |= 1L;
        }
        l_1414.f1.f0 = ((safe_div_func_int16_t_s_s(p_30, (safe_add_func_int8_t_s_s(g_345, ((safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((1UL < ((((safe_mul_func_uint16_t_u_u(((p_30 || ((*l_2017) |= p_30)) && (((safe_add_func_uint64_t_u_u(g_1024[4].f1.f0, (((g_791--) , (*l_1534)) == (void*)0))) && 0UL) & 0UL)), 0x504DL)) < p_30) <= (-1L)) < 9L)), p_31)) != 0x773E8C7BL), p_31)) ^ g_358[1][1]))))) , 8L);
        (*g_1864) = (*l_1863);
        l_2038 |= (safe_lshift_func_uint16_t_u_u((~((safe_sub_func_uint16_t_u_u(1UL, ((*l_49) &= p_31))) , p_31)), (safe_sub_func_uint16_t_u_u(((**l_1534) ^= p_30), (safe_mod_func_int32_t_s_s(((g_296[1][1] = ((safe_rshift_func_int8_t_s_s(((p_30 || ((*l_2035) = (0x3CF3L == (l_2034 = ((p_30 <= 0x7AD0C7B4L) & p_31))))) <= (*g_579)), 4)) | p_30)) , 0xEA39F562L), l_2037))))));
    }
    (*g_1864) = (*g_1864);
    l_2055[2]++;
    (****l_1566) = &l_2038;
    return l_2058;
}



static struct S0  func_34(const struct S1  p_35, uint32_t  p_36)
{ 
    int8_t l_686 = 1L;
    uint64_t *l_687[4];
    int32_t l_688[3][1];
    int16_t * const l_690 = (void*)0;
    int16_t * const *l_689 = &l_690;
    struct S0 **l_712 = &g_342;
    uint32_t l_727 = 0x7341E91BL;
    uint32_t l_734 = 0x35963236L;
    uint16_t l_778 = 65535UL;
    uint32_t l_801 = 18446744073709551615UL;
    int64_t ***l_808[5] = {&g_234[0],&g_234[0],&g_234[0],&g_234[0],&g_234[0]};
    int64_t **** const l_807 = &l_808[0];
    int64_t **** const *l_806 = &l_807;
    int32_t l_860 = 0xE7755AE4L;
    const uint32_t l_921 = 0x1890E1CFL;
    int64_t l_943[6][4] = {{0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL},{0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL},{0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL},{0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL},{0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL},{0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL,0x99FEC33332D567EFLL}};
    union U2 l_944[4][6][4] = {{{{0xF75EEA8BL},{2UL},{0x402AC370L},{0xED198FF6L}},{{0xA2BFAD0FL},{0x7B2697BFL},{0xF75EEA8BL},{2UL}},{{0x7F17F234L},{0xF77D4676L},{0xED198FF6L},{18446744073709551615UL}},{{0UL},{18446744073709551615UL},{0xF40804E5L},{0x7F17F234L}},{{0x2C666634L},{0UL},{0x91639D4CL},{0x7C847F0EL}},{{2UL},{0UL},{18446744073709551615UL},{0UL}}},{{{1UL},{0x7F17F234L},{0UL},{0x3CA50A2AL}},{{0x3CA50A2AL},{0xED198FF6L},{2UL},{0x2C666634L}},{{18446744073709551614UL},{18446744073709551607UL},{2UL},{18446744073709551615UL}},{{18446744073709551614UL},{1UL},{2UL},{8UL}},{{0x3CA50A2AL},{18446744073709551615UL},{0UL},{0x3602350BL}},{{1UL},{2UL},{18446744073709551615UL},{0UL}}},{{{2UL},{2UL},{0x91639D4CL},{1UL}},{{0x2C666634L},{0x91639D4CL},{0xF40804E5L},{1UL}},{{0UL},{0x1DDE2AF5L},{0xED198FF6L},{18446744073709551615UL}},{{0x7F17F234L},{8UL},{0xF75EEA8BL},{0xF75EEA8BL}},{{0xA2BFAD0FL},{0xA2BFAD0FL},{0x402AC370L},{0x880161BAL}},{{8UL},{0x7F17F234L},{2UL},{0x7C847F0EL}}},{{{0x91639D4CL},{18446744073709551615UL},{0xF75EEA8BL},{2UL}},{{0xED198FF6L},{18446744073709551615UL},{0x877E3D28L},{0x7C847F0EL}},{{18446744073709551615UL},{0x7F17F234L},{0UL},{0x880161BAL}},{{2UL},{0x402AC370L},{0xED198FF6L},{8UL}},{{0xDD9913C0L},{0x877E3D28L},{0x3602350BL},{0x7B2697BFL}},{{18446744073709551610UL},{1UL},{18446744073709551613UL},{18446744073709551607UL}}}};
    int32_t *l_954 = &g_85[1][3][0];
    struct S0 ** const *l_1030 = (void*)0;
    uint32_t l_1083 = 0xBA736FC1L;
    int16_t l_1084 = 0x7C81L;
    uint32_t l_1122 = 9UL;
    uint16_t *l_1148 = (void*)0;
    struct S1 l_1246 = {-1L,{-1L,-10L},18446744073709551615UL,0xDD1EA363L,0x746C5EC6FC41E349LL};
    int8_t l_1261[6][1];
    uint64_t l_1266 = 0x6903C077686CB68ALL;
    int32_t l_1309[3];
    uint32_t l_1361 = 4294967295UL;
    struct S0 * const *l_1392 = &g_342;
    struct S0 * const **l_1391 = &l_1392;
    int32_t ****l_1407 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_687[i] = &g_290;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_688[i][j] = 0L;
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_1261[i][j] = (-1L);
    }
    for (i = 0; i < 3; i++)
        l_1309[i] = 0x06E87B41L;
    if ((((7L & ((safe_add_func_uint64_t_u_u((l_688[2][0] = (safe_mul_func_uint32_t_u_u((+4294967294UL), (safe_div_func_uint32_t_u_u(0UL, l_686))))), (((void*)0 != l_689) ^ (g_345 ^ p_35.f1.f1)))) ^ p_35.f0)) , (*g_579)) != l_686))
    { 
        uint32_t l_695 = 18446744073709551614UL;
        int64_t ***l_701 = &g_234[0];
        int32_t l_713 = 0L;
        int32_t l_723[3][3] = {{(-1L),1L,1L},{(-1L),1L,1L},{(-1L),1L,1L}};
        union U2 l_745 = {18446744073709551612UL};
        int8_t l_767 = 0L;
        uint32_t *l_804 = &g_791;
        int32_t *l_815[1];
        struct S0 l_885[4] = {{0xB73BB9EFL,0L},{0xB73BB9EFL,0L},{0xB73BB9EFL,0L},{0xB73BB9EFL,0L}};
        int16_t l_923[1][1][1];
        const int64_t ****l_945 = &g_310;
        int16_t *l_959 = &g_160[2];
        uint16_t l_970 = 0UL;
        int16_t l_971 = (-1L);
        struct S1 *l_1023 = &g_1024[4];
        struct S1 **l_1022 = &l_1023;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_815[i] = &g_85[0][0][0];
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_923[i][j][k] = (-2L);
            }
        }
        if (p_35.f4)
        { 
            int64_t l_693 = 0x0F4DF76F852E86C6LL;
            int32_t l_730 = 0xAE32E122L;
            int32_t l_731 = 0xEC52D49BL;
            int32_t l_732 = 1L;
            int32_t l_733 = (-1L);
            int32_t *l_746 = &l_688[2][0];
            int32_t l_758 = 0x78DF261EL;
            int32_t l_759 = 0xA43DAE49L;
            int32_t l_762 = 0x1B3668EFL;
            int32_t l_764 = 0xD4E361C6L;
            int32_t l_765[3];
            int32_t *l_794 = &g_3;
            int32_t *l_795 = (void*)0;
            int32_t *l_796 = &l_730;
            int32_t *l_797 = &l_730;
            int32_t *l_798 = &l_758;
            int32_t *l_799 = &l_723[0][1];
            int32_t *l_800[5] = {&l_723[0][1],&l_723[0][1],&l_723[0][1],&l_723[0][1],&l_723[0][1]};
            int i;
            for (i = 0; i < 3; i++)
                l_765[i] = 0x4F25E994L;
            for (g_338 = 0; (g_338 >= (-22)); g_338--)
            { 
                uint32_t l_704[7] = {0x53C0BACBL,0x53C0BACBL,0x53C0BACBL,0x53C0BACBL,0x53C0BACBL,0x53C0BACBL,0x53C0BACBL};
                int32_t l_714 = (-1L);
                int32_t l_724 = 0x2772719AL;
                int32_t l_725 = 0x5B8315CDL;
                int32_t l_726 = 0x8884AF09L;
                uint64_t l_739[1];
                int16_t *l_743 = &g_160[1];
                int16_t **l_742 = &l_743;
                int i;
                for (i = 0; i < 1; i++)
                    l_739[i] = 18446744073709551615UL;
                if (p_35.f0)
                { 
                    int32_t l_694 = 0x7809B6F4L;
                    --l_695;
                }
                else
                { 
                    int64_t ***l_703 = &g_234[0];
                    int64_t ****l_702 = &l_703;
                    int32_t l_705 = 0x0839000DL;
                    struct S0 **l_710 = &g_342;
                    struct S0 ***l_711 = &g_341;
                    int32_t l_717 = 7L;
                    int32_t *l_718 = &l_705;
                    int32_t *l_719 = &l_688[2][0];
                    int32_t *l_720 = &g_3;
                    int32_t *l_721 = &l_717;
                    int32_t *l_722[3][2];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_722[i][j] = (void*)0;
                    }
                    l_714 &= (l_693 , ((((0xC444E598L == (((safe_mod_func_int16_t_s_s(((~((l_701 != ((*l_702) = &g_234[0])) > (l_704[1] , l_705))) <= ((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_713 = (((((((*l_711) = l_710) == l_712) != p_35.f0) || p_35.f2) >= 0L) <= l_695)), p_36)) > 0x11A9E63EL), (-6L))) < (*g_235))), g_296[0][2])) != 0UL) && l_704[0])) < 9UL) , l_695) || 0x222E997EFA28BFE2LL));
                    l_688[2][0] = (safe_mul_func_uint16_t_u_u(l_705, 0xA858L));
                    l_727++;
                    if (p_35.f0)
                        break;
                    --l_734;
                }
                for (l_693 = 0; (l_693 == (-29)); --l_693)
                { 
                    int16_t ***l_744[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    --l_739[0];
                    (***g_87) = &l_723[0][0];
                }
            }
lbl_782:
            (*l_746) ^= (p_36 != ((l_734 || ((l_745 , &g_190) != (void*)0)) | g_293));
            for (g_190 = 0; (g_190 <= 0); g_190 += 1)
            { 
                int16_t *l_749[6][4][1] = {{{&g_160[0]},{&g_160[0]},{&g_160[0]},{&g_160[0]}},{{&g_160[0]},{&g_160[0]},{&g_160[0]},{&g_160[0]}},{{&g_160[0]},{&g_160[0]},{&g_160[0]},{&g_160[0]}},{{&g_160[0]},{&g_160[0]},{&g_160[0]},{&g_160[0]}},{{&g_160[0]},{&g_160[0]},{&g_160[0]},{&g_160[0]}},{{&g_160[0]},{&g_160[0]},{&g_160[0]},{&g_160[0]}}};
                int32_t l_756 = 7L;
                int32_t l_757 = 1L;
                int32_t l_760 = (-9L);
                int32_t l_761 = 0x645141DFL;
                int32_t l_763 = 0xC21F4E8CL;
                int32_t l_766[2];
                uint16_t *l_773 = (void*)0;
                uint16_t *l_774 = &g_151[1][1][0];
                uint16_t l_781 = 0UL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_766[i] = 0xA7D1DC54L;
                for (l_727 = 0; (l_727 <= 0); l_727 += 1)
                { 
                    int16_t *l_750[3];
                    int32_t *l_754 = &g_3;
                    int32_t *l_755[6][3][2] = {{{&l_723[1][0],&g_163.f0},{&l_723[1][0],&l_723[1][0]},{&g_163.f0,&l_723[1][0]}},{{&l_723[1][0],&g_163.f0},{&l_723[1][0],&l_723[1][0]},{&g_163.f0,&l_723[1][0]}},{{&l_723[1][0],&g_163.f0},{&l_723[1][0],&l_723[1][0]},{&g_163.f0,&l_723[1][0]}},{{&l_723[1][0],&g_163.f0},{&l_723[1][0],&l_723[1][0]},{&g_163.f0,&l_723[1][0]}},{{&l_723[1][0],&g_163.f0},{&l_723[1][0],&l_723[1][0]},{&g_163.f0,&l_723[1][0]}},{{&l_723[1][0],&g_163.f0},{&l_723[1][0],&l_723[1][0]},{&g_163.f0,&l_723[1][0]}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_750[i] = (void*)0;
                    (*l_746) = ((((((safe_sub_func_int32_t_s_s(0xE5834189L, 1UL)) , l_749[0][2][0]) != l_750[1]) == ((safe_lshift_func_uint8_t_u_s(((((((-8L) != ((void*)0 == (*g_341))) == g_296[l_727][(g_190 + 6)]) & l_688[(g_190 + 2)][g_190]) & l_688[(g_190 + 1)][g_190]) != 0L), 6)) , p_35.f1.f0)) , (void*)0) == l_746);
                    if (l_686)
                        continue;
                    --g_768[0][4];
                }
                if ((((*g_235) >= p_36) <= ((safe_rshift_func_uint8_t_u_s((0UL < 7UL), (g_83[2] >= g_37.f3))) ^ ((*l_774) = l_723[0][1]))))
                { 
                    (*g_60) = &l_758;
                    return p_35.f1;
                }
                else
                { 
                    int32_t *l_775 = &l_733;
                    int32_t *l_776 = &l_713;
                    int32_t *l_777[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_777[i] = &l_759;
                    (*g_342) = (*g_342);
                    --l_778;
                }
                l_763 = l_781;
                for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
                { 
                    uint32_t l_783[1][6];
                    int32_t *l_786 = &l_731;
                    int32_t *l_787 = &l_761;
                    int32_t *l_788 = &l_765[0];
                    int32_t *l_789[7] = {&l_731,&l_760,&l_760,&l_731,&l_760,&l_760,&l_731};
                    int16_t l_790 = 0x998CL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_783[i][j] = 18446744073709551615UL;
                    }
                    if (p_35.f2)
                        goto lbl_782;
                    l_783[0][5]--;
                    g_791++;
                    if (p_35.f4)
                        goto lbl_782;
                    (**g_88) = &l_763;
                }
            }
            l_801++;
        }
        else
        { 
            int8_t l_805 = (-1L);
            int64_t **** const l_810 = &l_701;
            int64_t **** const *l_809 = &l_810;
            const int32_t *l_811 = &g_163.f0;
            int32_t l_830 = 0xBFB9D836L;
            const int64_t l_831 = 1L;
            uint64_t l_834 = 2UL;
            struct S1 l_857 = {0xD4L,{0x22510C1AL,0x93L},0xDFFAE5F632862D90LL,1UL,0xB896A4390E1587A8LL};
            int32_t *l_881[5][2] = {{&l_713,&l_830},{&l_713,&l_830},{&l_713,&l_830},{&l_713,&l_830},{&l_713,&l_830}};
            struct S0 l_904[1][3][6] = {{{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}}}};
            uint8_t *l_922 = &g_768[0][2];
            int32_t **l_953 = &l_881[2][1];
            union U2 l_1016 = {18446744073709551615UL};
            int i, j, k;
            if ((g_37 , ((l_804 != &g_791) > 0L)))
            { 
                int8_t l_816 = 0x90L;
                uint16_t *l_833 = (void*)0;
                int16_t l_845 = 1L;
                union U2 l_866 = {3UL};
                int32_t l_882 = 0x6DD69F7AL;
                for (g_236 = 2; (g_236 >= 0); g_236 -= 1)
                { 
                    const int32_t **l_812 = &l_811;
                    if (p_35.f2)
                        break;
                    l_805 ^= 1L;
                    l_809 = l_806;
                    (*l_812) = l_811;
                }
                for (l_767 = 0; (l_767 < (-6)); l_767 = safe_sub_func_int64_t_s_s(l_767, 3))
                { 
                    uint16_t *l_819 = (void*)0;
                    uint16_t **l_820[2];
                    int32_t l_832 = 0x5085EC5EL;
                    uint32_t l_858 = 0x619674FEL;
                    int32_t l_861 = 0x4C94B606L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_820[i] = &l_819;
                    l_815[0] = (*g_60);
                    (***g_87) = (**g_88);
                    (***g_87) = (***g_87);
                    l_861 ^= (l_860 |= (safe_mul_func_int16_t_s_s((*g_579), ((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u((((l_688[2][0] = (0xD3EA869AL >= ((l_845 | ((safe_lshift_func_int16_t_s_u(p_35.f0, (safe_lshift_func_uint16_t_u_s(((((safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((~(safe_div_func_uint16_t_u_u(p_35.f0, (l_857 , ((p_35.f0 <= 0xCD7CC6AFL) & l_688[2][0]))))) & 18446744073709551614UL), p_35.f0)) | 0x6DL), l_858)) >= p_35.f3) , g_859) != (void*)0), p_35.f4)))) && l_832)) , 0xC480DB80L))) ^ l_734) && (*g_579)), p_35.f1.f0)), p_35.f4)), 0x70FA05C0L)), 0x70L)) , 0xC2F1L))));
                }
                for (g_115.f0 = 0; (g_115.f0 >= 48); ++g_115.f0)
                { 
                    int32_t * const **l_879 = &g_59;
                    int8_t l_880 = 0xFAL;
                    l_857.f1.f0 = ((*l_811) ^ ((((l_830 = (safe_lshift_func_uint16_t_u_u((l_866 , ((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*g_821) = (safe_add_func_uint32_t_u_u((((0x023796C7L == (safe_div_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u(((l_879 == (*g_87)) | ((void*)0 == &g_87)), g_160[0])) && p_35.f1.f0) | l_801), 65531UL))) <= (*l_811)) != l_727), p_35.f1.f1))), p_36)), 253UL)) , l_880), 0xC00DEAF108DDE026LL)) > l_866.f0)), 13))) && 4294967295UL) <= p_36) ^ 0x131C4701C9A9C1BALL));
                    l_881[2][1] = &l_713;
                    l_860 = (l_882 = p_35.f3);
                    (*g_60) = (***g_87);
                }
                return (*g_342);
            }
            else
            { 
                int8_t l_891 = 0x1CL;
                int32_t l_896 = 0x8FDFBA23L;
                int32_t l_902 = 0x8F1D9E6BL;
                int32_t l_903 = (-10L);
                for (l_745.f0 = 0; (l_745.f0 < 35); l_745.f0 = safe_add_func_int16_t_s_s(l_745.f0, 1))
                { 
                    uint8_t *l_888[1][2][2] = {{{&g_213,&g_213},{&g_213,&g_213}}};
                    int8_t *l_901[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_901[i] = &g_142[2][1][1];
                    (**g_341) = l_885[2];
                    l_903 = ((safe_mul_func_uint8_t_u_u((g_83[4] |= g_293), ((((***g_233) && (((safe_lshift_func_int8_t_s_s((p_35.f0 & l_891), 6)) , (g_142[2][2][1] = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(l_896, 4)), (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_811) ^ (l_902 = p_35.f1.f1)), l_891)), 9UL)))) , p_35.f4))) || g_50)) != (*l_811)) >= 0xA43BCCE3A34EDBC2LL))) == 0xF08EA8E7L);
                    return l_904[0][1][0];
                }
            }
            if ((safe_mul_func_int16_t_s_s((g_83[3] <= ((l_923[0][0][0] = (p_35.f1 , ((safe_div_func_int8_t_s_s((g_163.f1 = (g_37 , ((safe_sub_func_uint8_t_u_u(((l_860 &= (((*l_922) = ((safe_lshift_func_uint8_t_u_s(8UL, 5)) < (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(p_35.f1.f0, 10)) <= (((0x9BL > (((safe_div_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((p_35.f1.f1 || g_83[4]), l_688[2][0])) > 5UL), p_35.f2)) < p_35.f4) && (*g_579))) == 0L) , p_35.f0)), l_921)))) == g_638)) >= 0xE7L), p_35.f4)) ^ 1L))), p_35.f3)) != 0x3284L))) >= 0x3F32862BL)), 65529UL)))
            { 
                for (g_829 = 0; (g_829 <= (-16)); g_829--)
                { 
                    uint8_t l_926 = 1UL;
                    int32_t l_927 = (-3L);
                    l_927 ^= (p_35.f2 > ((*l_922) = l_926));
                }
            }
            else
            { 
                int32_t l_928 = 0x2174D9C1L;
                uint8_t l_929 = 0x9FL;
                int16_t *l_933 = &g_160[0];
                int16_t **l_932 = &l_933;
                uint16_t *l_942 = &g_345;
                const int64_t *****l_946 = &l_945;
                l_929 |= (l_928 | 1L);
                l_943[1][3] = (safe_rshift_func_uint16_t_u_s((l_932 != &g_579), (safe_mod_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_922) = (l_860 < ((!((*l_942) |= (~(safe_div_func_int16_t_s_s((((((((**l_712) , ((l_928 |= 0UL) , &l_723[0][1])) != (void*)0) > p_35.f1.f0) || g_37.f0) <= 5L) < 0x60L), (*g_821)))))) >= 18446744073709551615UL))), p_35.f1.f0)) , l_929), (***g_233)))));
                l_688[2][0] = ((*l_811) > ((p_36 < (l_944[1][4][0] , (((*l_946) = l_945) != &l_701))) != ((((safe_div_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(0x7400L, l_929)), p_35.f3)) , p_35.f3), (*g_821))) , 0x15E9C2C5L) ^ p_35.f2) <= g_768[0][4])));
            }
            (**g_341) = p_35.f1;
            l_954 = ((*l_953) = ((***g_87) = &l_830));
            if ((l_688[2][0] &= ((safe_sub_func_int16_t_s_s((*g_579), (((*l_954) | (((*l_689) != l_959) == (safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((*l_954), ((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((l_970 = (safe_mul_func_int8_t_s_s(p_35.f2, ((**l_953) ^ p_35.f1.f1)))), p_35.f4)) ^ p_35.f2), 12)) ^ 6UL) == 0xFDL) , (*l_954)))), 0x236275B91AB68D9BLL)))) , l_971))) ^ 0xCAD3L)))
            { 
                uint32_t l_989 = 0x906E8CB9L;
                int32_t l_990[5] = {0L,0L,0L,0L,0L};
                int i;
                for (l_971 = 0; (l_971 >= 2); ++l_971)
                { 
                    uint8_t **l_985[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_985[i] = &l_922;
                    l_990[3] &= (safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((0xB4FCL != (++(*g_821))) > (!((((g_986[3] = (void*)0) == l_922) >= (g_142[2][1][1] = (((safe_lshift_func_int8_t_s_u((((*l_804) |= p_35.f1.f0) ^ ((*l_954) & (*l_954))), ((*l_922) &= 0x70L))) ^ 18446744073709551607UL) <= (*l_811)))) , (***g_233)))) && 1UL), 1UL)), p_36)) & 1UL), l_989)), (*g_579)));
                    if ((*g_61))
                        break;
                }
            }
            else
            { 
                int8_t l_997[6][7] = {{0x04L,0x04L,0xAEL,0x04L,0x04L,0xAEL,0x04L},{0x04L,1L,1L,0x04L,1L,1L,0x04L},{1L,0x04L,1L,1L,0x04L,1L,1L},{0x04L,0x04L,0xAEL,0x04L,0x04L,0xAEL,1L},{1L,0xAEL,0xAEL,1L,0xAEL,0xAEL,1L},{0xAEL,1L,0xAEL,0xAEL,1L,0xAEL,0xAEL}};
                uint16_t *l_998 = &l_778;
                int i, j;
                if ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((*g_821)++) ^ ((*l_954) , (--(*l_998)))), (0x5481233A2CB4337CLL || (!((((*l_953) = (*l_953)) != &l_688[2][0]) != ((l_997[1][2] < ((((safe_mul_func_int8_t_s_s(((*g_610) , (safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(p_36, g_37.f1.f1)), (*l_954)))), 0x46L)) & (*l_954)) , (void*)0) != &g_308)) , 3UL)))))), 0x1825L)))
                { 
                    uint32_t *l_1018[2][7] = {{&g_638,&g_638,&g_638,&g_638,&g_638,&g_638,&g_638},{&g_190,&g_638,&g_190,&g_638,&g_190,&g_638,&g_190}};
                    int32_t l_1019 = 0L;
                    int i, j;
                    (*g_342) = ((((1UL & (g_1008[6][2] | 18446744073709551615UL)) != (((safe_div_func_int8_t_s_s((!(safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((((l_1016 , (((((*l_959) |= l_997[1][2]) | (+(p_36 = ((*l_804) = ((void*)0 == g_859))))) , 0x0A07A32AL) ^ g_3)) >= l_997[1][2]) >= (-1L)), p_35.f3)) && p_35.f1.f0), l_1019))), p_35.f0)) || 0x5FL) < p_35.f1.f0)) , 248UL) , (*g_342));
                }
                else
                { 
                    g_1020 = (*l_806);
                    l_688[1][0] ^= (**g_60);
                }
                return l_885[3];
            }
        }
        (*l_1022) = (void*)0;
        (***g_87) = &l_713;
    }
    else
    { 
        struct S0 ** const l_1029 = (void*)0;
        struct S0 ** const *l_1028 = &l_1029;
        struct S0 ** const **l_1027[5][3] = {{&l_1028,&l_1028,&l_1028},{&l_1028,(void*)0,&l_1028},{&l_1028,&l_1028,&l_1028},{&l_1028,(void*)0,&l_1028},{&l_1028,&l_1028,&l_1028}};
        struct S0 ***l_1031 = (void*)0;
        int32_t l_1032 = 0x4B0F5C66L;
        int16_t l_1085 = 0x0C68L;
        int64_t **l_1098 = &g_235;
        int32_t l_1113 = (-10L);
        uint16_t l_1138 = 65535UL;
        int32_t l_1151 = 5L;
        int32_t l_1152 = 0x5B69BEE2L;
        int32_t l_1153 = 0x666D32D1L;
        int32_t l_1154[7][6][2] = {{{(-6L),0L},{0L,0xE3A5E3A6L},{(-1L),9L},{0xF911F65AL,0L},{0x892678F3L,0x892678F3L},{0xF375F090L,0xF86F7993L}},{{0xE3A5E3A6L,(-6L)},{1L,0L},{0xF86F7993L,1L},{4L,0xB670DD6BL},{4L,1L},{0xF86F7993L,0L}},{{1L,(-6L)},{0xE3A5E3A6L,0xF86F7993L},{0xF375F090L,0x892678F3L},{0x892678F3L,0L},{0xF911F65AL,9L},{(-1L),0xE3A5E3A6L}},{{0L,0L},{(-6L),0L},{0L,0xE3A5E3A6L},{(-1L),9L},{0xF911F65AL,0L},{0x892678F3L,0x892678F3L}},{{0xF375F090L,0xF86F7993L},{0xE3A5E3A6L,(-6L)},{1L,0L},{0xF86F7993L,1L},{4L,0xB670DD6BL},{4L,1L}},{{0xF86F7993L,0L},{1L,(-6L)},{0xE3A5E3A6L,0xF86F7993L},{0xF375F090L,0x892678F3L},{0x892678F3L,0L},{0xF911F65AL,9L}},{{(-1L),0xE3A5E3A6L},{0L,0L},{(-6L),0L},{0L,0xE3A5E3A6L},{(-1L),9L},{0xF911F65AL,0L}}};
        int32_t l_1155 = 0x8DDFFB4BL;
        int32_t **l_1176 = &g_248;
        uint16_t *l_1184 = (void*)0;
        int32_t l_1186 = 0xDB16A142L;
        int16_t ***l_1193 = &g_308;
        uint32_t l_1257 = 1UL;
        struct S1 *l_1260 = &g_1024[4];
        int64_t *** const **l_1296 = &g_1295;
        uint64_t l_1306 = 2UL;
        int32_t *l_1307 = &l_688[2][0];
        int32_t *l_1308[4] = {&l_1152,&l_1152,&l_1152,&l_1152};
        int i, j, k;
lbl_1185:
        (*l_954) = (safe_div_func_int64_t_s_s(((*g_235) = ((l_1030 = &g_341) == l_1031)), l_1032));
        for (g_791 = 0; (g_791 >= 18); g_791 = safe_add_func_uint8_t_u_u(g_791, 1))
        { 
            if (p_36)
                break;
            (**g_88) = &l_1032;
            for (p_36 = 23; (p_36 <= 50); p_36 = safe_add_func_int8_t_s_s(p_36, 8))
            { 
                return (**g_341);
            }
            (***l_1030) = (*g_342);
            (*l_954) = (*l_954);
        }
        for (l_686 = 20; (l_686 >= (-15)); l_686 = safe_sub_func_int32_t_s_s(l_686, 5))
        { 
            struct S0 ****l_1052[1];
            uint16_t *l_1081 = &g_345;
            int32_t l_1082[1];
            int32_t l_1086 = 0x58010BC7L;
            const uint32_t l_1114 = 0xF9A965A9L;
            int16_t l_1118 = 0xBEDBL;
            int8_t *l_1131[3];
            uint8_t *l_1137 = &g_213;
            uint32_t *l_1139[4][7][1] = {{{&g_791},{&g_190},{&g_791},{&g_1024[4].f3},{&g_791},{&g_1024[4].f3},{(void*)0}},{{&g_1024[4].f3},{&g_791},{&g_1024[4].f3},{&g_791},{&g_190},{&g_791},{&g_1024[4].f3}},{{&g_791},{&g_1024[4].f3},{(void*)0},{&g_1024[4].f3},{&g_791},{&g_1024[4].f3},{&g_791}},{{&g_190},{&g_791},{&g_1024[4].f3},{&g_791},{&g_1024[4].f3},{(void*)0},{&g_1024[4].f3}}};
            int32_t l_1140 = 0x6541F99AL;
            int32_t *l_1141 = &l_688[1][0];
            uint16_t **l_1147[2];
            int32_t *l_1149 = (void*)0;
            int32_t *l_1150[2];
            uint64_t l_1156[5] = {0x992A57B33D429DA0LL,0x992A57B33D429DA0LL,0x992A57B33D429DA0LL,0x992A57B33D429DA0LL,0x992A57B33D429DA0LL};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1052[i] = &l_1031;
            for (i = 0; i < 1; i++)
                l_1082[i] = 0x968C1858L;
            for (i = 0; i < 3; i++)
                l_1131[i] = &g_1024[4].f0;
            for (i = 0; i < 2; i++)
                l_1147[i] = &l_1081;
            for (i = 0; i < 2; i++)
                l_1150[i] = &l_1082[0];
            if ((g_1040 |= p_36))
            { 
                uint8_t l_1080 = 0x7FL;
                int32_t l_1109 = 0x8785C804L;
                union U2 ** const *l_1110 = &g_609;
                int8_t *l_1111[1][3][1];
                int16_t *l_1112 = &g_160[2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1111[i][j][k] = &g_1024[4].f1.f1;
                    }
                }
                (***g_87) = (**g_88);
                for (l_734 = 26; (l_734 > 44); l_734++)
                { 
                    int16_t l_1049 = 0x20D0L;
                    (*l_954) &= (~(safe_unary_minus_func_int8_t_s((safe_mul_func_uint8_t_u_u((g_1040 , (l_1049 >= ((g_1050 == l_1052[0]) < ((l_1049 && ((**g_341) , (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_35.f1.f1, 0)), (*g_821))) && l_1049), 65530UL)))) <= l_1032)))), p_35.f2)))));
                    l_1086 ^= ((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((((((((((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((p_35.f2 > (safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((**g_609) , ((p_35.f4 > (safe_mod_func_int8_t_s_s(g_37.f0, (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((~0UL), l_1049)), ((((p_36 == l_1032) && l_1080) && g_1024[4].f2) <= (*l_954))))))) , (void*)0)) != l_1081), 0x6683CC1FL)) , 0x57B9L), p_36))), 0xE3543F85E67FE97ELL)) <= 0x8EL), p_35.f1.f0)), p_35.f3)) | l_1082[0]) ^ l_1083) >= l_1049) , l_1084) & p_35.f3) >= p_35.f0) ^ 0x89AFL) < l_1085), g_345)), 1UL)) || p_35.f3);
                }
                if (((*l_954) = ((safe_rshift_func_uint16_t_u_s(((*g_821) = (((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u(((((((**l_807) = l_1098) != (g_1099[0][4] = (void*)0)) <= (safe_rshift_func_int8_t_s_s((((((safe_unary_minus_func_int32_t_s((l_1113 = (((0x92L | (safe_mul_func_int16_t_s_s(((*l_1112) = (safe_sub_func_uint64_t_u_u((l_1032 = (p_35.f1.f1 | (l_1109 = (safe_mod_func_int8_t_s_s((-1L), p_35.f1.f1))))), (((g_296[2][5] ^= (l_1110 == (void*)0)) >= 0L) <= 0UL)))), p_36))) , 0L) ^ 0xEB9BCB46L)))) & l_1080) || (*g_235)) , l_1114) ^ p_35.f1.f0), 7))) > (*g_821)) <= 0xF6L), 0x81L)))), 0xE18BL)), p_35.f1.f1)), p_35.f1.f0)) == p_35.f2) > p_35.f0)), 0)) < p_35.f3)))
                { 
                    union U2 *l_1115 = &l_944[1][4][0];
                    union U2 **l_1116 = &l_1115;
                    int32_t l_1117 = 0xBCB3CC03L;
                    (*l_1116) = ((**l_1110) = l_1115);
                    l_1032 ^= l_1086;
                    l_1117 &= ((*l_954) = p_35.f0);
                    (**g_341) = p_35.f1;
                }
                else
                { 
                    struct S0 l_1119 = {-4L,-3L};
                    if (l_1118)
                        break;
                    (***l_1030) = l_1119;
                    return p_35.f1;
                }
            }
            else
            { 
                int32_t *l_1120 = &l_1082[0];
                int32_t *l_1121[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1121[i] = (void*)0;
                l_1122++;
                return p_35.f1;
            }
            (*l_1141) &= ((l_1082[0] = 1L) > ((l_1140 = (safe_div_func_uint32_t_u_u((g_791 ^= ((safe_add_func_uint16_t_u_u(((((-1L) | (*l_954)) ^ ((safe_lshift_func_int16_t_s_s((((((g_142[3][1][3] = 1L) >= (((g_160[0] = (l_1086 = (255UL != ((*l_1137) = (((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((l_1113 <= p_36) ^ p_35.f2), 8)), (-1L))))) ^ l_1085) , (*l_954)))))) > p_35.f1.f1) == l_1138)) != p_35.f2) , (void*)0) != (*g_88)), 11)) | 0xD76F210FCAA7689BLL)) , (*g_821)), l_1032)) != p_35.f3)), g_296[0][5]))) , (****g_1020)));
            (*l_954) ^= (+(safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((l_1148 = &l_1138) == &l_1138), (g_1024[3] , (l_1138 < (*g_821))))) ^ p_35.f0), (l_1085 , p_35.f1.f1))));
            --l_1156[4];
        }
        if (((p_35.f0 || ((safe_mod_func_uint8_t_u_u(8UL, (0x85E67DD7L | (((*l_954) , p_35.f3) & (((l_1138 != g_338) && 0xD8L) < p_35.f1.f1))))) , p_35.f1.f0)) && (*l_954)))
        { 
            int32_t l_1164 = (-3L);
            int32_t l_1169 = 0x593443EEL;
            int32_t l_1223 = (-1L);
            int32_t l_1225 = 3L;
            if ((((*l_954) > ((((((safe_div_func_int16_t_s_s((!(((g_290 = ((l_1164 < ((*g_342) , (g_791 == (safe_rshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u((l_1169 = p_35.f3), 0xF7644A622AD264AFLL)), 0))))) & 0x73CE75CDAAB82E2DLL)) && (*l_954)) || 1UL)), p_35.f0)) >= (***g_1021)) , &g_293) == &g_293) != (*g_579)) == p_35.f3)) <= 0x14B7L))
            { 
                int32_t *l_1173 = (void*)0;
                int32_t **l_1172 = &l_1173;
                int32_t l_1179 = 0x2D58F7F9L;
                const int64_t *l_1182 = &l_943[1][3];
                const int64_t **l_1181[7];
                uint32_t l_1212 = 9UL;
                int i;
                for (i = 0; i < 7; i++)
                    l_1181[i] = &l_1182;
                (*l_954) ^= (safe_sub_func_uint64_t_u_u((l_1172 == g_1174), (0L && ((((((((*g_88) != l_1176) , 0xB001B57FL) >= (safe_lshift_func_uint16_t_u_u(((*g_821) = (p_35.f3 , l_1179)), l_1164))) ^ 0L) != 0x9DL) <= 0x44B6AF7BL) != p_35.f4))));
                if (((*l_954) ^= p_35.f3))
                { 
                    const uint16_t *l_1180[6][6][6] = {{{&l_1138,&g_358[1][0],&g_358[2][1],&l_778,(void*)0,&g_358[2][1]},{(void*)0,&g_358[1][0],&l_1138,&g_358[1][0],&g_358[0][2],&g_358[2][1]},{&g_358[1][0],&g_358[0][2],&g_358[2][1],&l_1138,&l_778,&l_1138},{&g_358[0][2],&g_358[2][1],&g_358[2][1],&g_358[1][0],&g_358[1][0],&g_358[2][1]},{&l_778,&l_778,&g_358[1][0],&g_358[2][0],(void*)0,(void*)0},{&g_358[2][0],(void*)0,(void*)0,&g_345,&g_151[1][1][1],&g_358[1][0]}},{{&g_151[0][1][1],&g_358[2][0],(void*)0,&g_151[0][0][0],&l_1138,(void*)0},{&l_1138,&g_151[0][0][0],&g_358[1][0],&g_358[2][1],&g_151[0][1][1],(void*)0},{&g_358[2][1],&g_151[0][1][1],(void*)0,&g_151[0][1][1],&g_358[2][1],&g_358[1][0]},{(void*)0,&g_151[1][1][1],(void*)0,&l_1138,&g_151[0][0][0],(void*)0},{&g_151[0][0][0],&l_1138,&g_358[1][0],&g_151[1][1][1],&g_345,(void*)0},{&g_151[1][1][1],&g_345,(void*)0,(void*)0,&g_358[2][0],&g_358[1][0]}},{{&g_345,&g_358[2][1],(void*)0,&l_1138,&l_1138,(void*)0},{&l_1138,&l_1138,&g_358[1][0],&g_358[2][0],(void*)0,(void*)0},{&g_358[2][0],(void*)0,(void*)0,&g_345,&g_151[1][1][1],&g_358[1][0]},{&g_151[0][1][1],&g_358[2][0],(void*)0,&g_151[0][0][0],&l_1138,(void*)0},{&l_1138,&g_151[0][0][0],&g_358[1][0],&g_358[2][1],&g_151[0][1][1],(void*)0},{&g_358[2][1],&g_151[0][1][1],(void*)0,&g_151[0][1][1],&g_358[2][1],&g_358[1][0]}},{{(void*)0,&g_151[1][1][1],(void*)0,&l_1138,&g_151[0][0][0],(void*)0},{&g_151[0][0][0],&l_1138,&g_358[1][0],&g_151[1][1][1],&g_345,(void*)0},{&g_151[1][1][1],&g_345,(void*)0,(void*)0,&g_358[2][0],&g_358[1][0]},{&g_345,&g_358[2][1],(void*)0,&l_1138,&l_1138,(void*)0},{&l_1138,&l_1138,&g_358[1][0],&g_358[2][0],(void*)0,(void*)0},{&g_358[2][0],(void*)0,(void*)0,&g_345,&g_151[1][1][1],&g_358[1][0]}},{{&g_151[0][1][1],&g_358[2][0],(void*)0,&g_151[0][0][0],&l_1138,(void*)0},{&l_1138,&g_151[0][0][0],&g_358[1][0],&g_358[2][1],&g_151[0][1][1],(void*)0},{&g_358[2][1],&g_151[0][1][1],(void*)0,&g_151[0][1][1],&g_358[2][1],&g_358[1][0]},{(void*)0,&g_151[1][1][1],(void*)0,&l_1138,&g_151[0][0][0],(void*)0},{&g_151[0][0][0],&l_1138,&g_358[1][0],&g_151[1][1][1],&g_345,(void*)0},{&g_151[1][1][1],&g_345,(void*)0,(void*)0,&g_358[2][0],&g_358[1][0]}},{{&g_345,&g_358[2][1],(void*)0,&l_1138,&l_1138,(void*)0},{&l_1138,&l_1138,&g_358[1][0],&g_358[2][0],(void*)0,(void*)0},{&g_358[2][0],(void*)0,(void*)0,&g_345,&g_151[1][1][1],&g_358[1][0]},{&g_151[0][1][1],&g_358[2][0],(void*)0,&g_151[0][0][0],&l_1138,(void*)0},{&l_1138,&g_151[0][0][0],&g_358[1][0],&g_358[2][1],&g_151[0][1][1],(void*)0},{&g_358[2][1],&g_151[0][1][1],(void*)0,&g_151[0][1][1],&g_358[2][1],&g_358[1][0]}}};
                    const int64_t ***l_1183 = &l_1181[2];
                    int8_t *l_1195 = &l_686;
                    int32_t l_1196 = 0x133D898AL;
                    int i, j, k;
                    (*l_954) |= (p_35.f3 != (((l_1180[1][2][3] == (l_1184 = (((((((*l_1183) = l_1181[2]) != (void*)0) , &l_689) != (void*)0) , g_37) , (void*)0))) <= 0x6548820A422535C6LL) > 1UL));
                    if (l_727)
                        goto lbl_1185;
                    (**g_88) = (p_35.f3 , &l_1179);
                    (**g_60) &= ((p_35.f1 , (safe_lshift_func_uint16_t_u_s((((4294967286UL && 0xD4E41515L) || ((safe_sub_func_uint64_t_u_u(((p_35.f3 , (*g_610)) , (((*l_1195) = (~((l_1193 == (g_1194 = l_1193)) ^ 0UL))) != p_35.f1.f0)), g_151[1][1][0])) <= 0x8193FDD1L)) < g_296[3][3]), 5))) , l_1196);
                }
                else
                { 
                    uint16_t *l_1197[6];
                    struct S1 ****l_1217 = &g_1214[1];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1197[i] = &g_358[2][1];
                    l_688[0][0] |= (((*l_954) |= ((void*)0 != l_1197[2])) , (safe_mul_func_uint8_t_u_u((*l_954), (l_1212 = (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((g_1024[4].f1.f0 && (((safe_mul_func_uint8_t_u_u(((g_290 = ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(1L, 0)) || g_163.f0), 0)) <= ((0xA4C7L == (*g_821)) == 0x25L))) == p_35.f1.f1), 1UL)) != g_151[1][1][0]) != g_50)) != p_36) == 0x0B0CL), 7)), l_1164)), 12))))));
                    (*l_954) |= (~p_35.f3);
                    (*l_1217) = g_1214[1];
                }
            }
            else
            { 
                int8_t l_1218 = 0x69L;
                int32_t *l_1219 = &l_1154[5][4][1];
                int32_t *l_1220 = &g_85[0][0][0];
                int32_t *l_1221 = &l_1113;
                int32_t *l_1222[3];
                int32_t l_1224 = (-1L);
                uint8_t l_1226 = 1UL;
                uint32_t l_1233 = 0x0178F86FL;
                int16_t *l_1254 = (void*)0;
                int16_t *l_1255[3][2][7] = {{{&g_338,&g_338,&g_338,&g_338,&g_338,&g_338,&g_338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_338,&g_338,&g_338,&g_338,&g_338,&g_338,&g_338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_338,&g_338,&g_338,&g_338,&g_338,&g_338,&g_338},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                struct S1 l_1256 = {0x26L,{0x0D5193A9L,1L},0xE1D1C645E6887AB7LL,0xEDF2DE7FL,0xAADF643262518B70LL};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1222[i] = (void*)0;
                --l_1226;
                (***g_87) = (*g_60);
                l_1152 = ((*l_1221) = (safe_lshift_func_int8_t_s_u((l_1219 != (((safe_mod_func_int32_t_s_s((l_1233 | (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((&g_358[2][1] == ((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((l_1246 , (0x64L < (safe_add_func_int32_t_s_s((0x6DA2L >= ((*l_954) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_1219) |= (!(p_35 , 0x65L))), 5)), (*l_954))))), p_36)))), 0xE0D76432ED0EDA19LL)) >= g_768[0][4]), l_1223)), 1UL)), (*g_821))) , (void*)0)) >= p_35.f2), g_14)) || p_35.f0), 0x73L))), p_35.f1.f0)) , l_1256) , &g_791)), 3)));
                l_1257--;
                if ((*l_954))
                { 
                    uint8_t l_1262 = 0xF8L;
                    int32_t *l_1265[1][6] = {{&g_85[0][0][0],&g_85[0][0][0],&g_85[0][0][0],&g_85[0][0][0],&g_85[0][0][0],&g_85[0][0][0]}};
                    int i, j;
                    (*g_1215) = l_1260;
                    l_1262--;
                    l_1265[0][5] = l_1265[0][5];
                    l_1266++;
                }
                else
                { 
                    int64_t l_1269 = 0x37CC33778BBD09FELL;
                    int32_t l_1278[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1278[i] = 0x652F923CL;
                    l_1278[2] |= ((((l_1269 == (p_35.f4 ^ ((safe_mod_func_uint16_t_u_u(65526UL, (*g_821))) != (p_35.f1.f1 , (safe_div_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((0x22DF5ABC8624F5D0LL > ((-1L) <= (*g_579))), l_1269)) , (*l_954)), 0xC4L)))))) & 1L) >= p_35.f0) < p_35.f1.f1);
                    if (g_37.f2)
                        goto lbl_1279;
lbl_1279:
                    (*l_1221) |= (&g_1175 == (void*)0);
                    (*l_1221) &= (safe_sub_func_int32_t_s_s(p_35.f2, ((*g_821) || (((18446744073709551615UL & ((safe_lshift_func_int16_t_s_s(p_35.f0, 5)) , ((-1L) < (&g_308 != l_1193)))) >= p_35.f1.f1) == (*l_954)))));
                    g_1286--;
                }
            }
        }
        else
        { 
            int16_t *l_1300[6][3][5] = {{{&g_338,&l_1085,(void*)0,(void*)0,&g_338},{&g_160[0],(void*)0,&l_1084,&l_1084,&g_338},{&g_160[2],&g_338,(void*)0,&g_338,&g_160[2]}},{{&g_160[0],(void*)0,&g_160[0],(void*)0,&l_1084},{(void*)0,(void*)0,&g_160[0],&l_1084,&g_50},{&g_338,&g_160[0],&l_1084,(void*)0,&l_1084}},{{&l_1084,&l_1084,&l_1085,&g_160[0],&g_160[2]},{&l_1084,&g_50,&g_160[3],&l_1084,&g_338},{(void*)0,&g_50,&g_50,&g_50,&g_338}},{{&g_160[0],&g_50,&g_50,&g_160[0],&g_338},{(void*)0,&l_1084,(void*)0,&g_160[2],&g_160[2]},{&g_160[3],&g_160[0],&l_1085,&g_338,&g_50}},{{&g_50,(void*)0,&g_160[2],&g_160[2],(void*)0},{&g_338,(void*)0,(void*)0,&g_160[0],&g_160[0]},{(void*)0,&g_338,&l_1084,&g_50,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_1084,&l_1084},{(void*)0,&l_1085,(void*)0,&g_160[0],(void*)0},{&g_338,(void*)0,&g_338,(void*)0,(void*)0}}};
            int16_t **l_1299 = &l_1300[1][1][1];
            int32_t l_1301 = 0x4B1ADA49L;
            int32_t l_1302 = 0x0F21BB93L;
            int i, j, k;
            l_1302 &= ((l_860 &= (safe_sub_func_int8_t_s_s(p_35.f1.f1, (((((+(((safe_rshift_func_int16_t_s_u(((g_1294 = (l_1296 = g_1294)) == (void*)0), ((safe_lshift_func_uint8_t_u_s((((((p_35.f1.f1 , &l_1098) != (**l_806)) < ((((*l_1193) = (((***g_233) && p_35.f1.f0) , l_1299)) == &l_690) > l_1301)) | p_35.f1.f0) | 251UL), g_1024[4].f1.f1)) | 0x7AL))) ^ (*l_954)) ^ 0UL)) != p_35.f2) ^ p_35.f1.f1) < p_35.f2) & p_35.f2)))) ^ (*l_954));
        }
        l_1246.f1.f0 = ((*l_1307) = ((*l_954) = (safe_add_func_uint32_t_u_u((((((4UL == (+((((*l_1260) , (*l_954)) , l_1306) == (((&l_689 != l_1193) , &l_1030) == &g_1051)))) , &g_1051) == &l_1028) != g_1286) >= p_35.f2), p_35.f3))));
    }
    l_688[2][0] |= l_1309[0];
    for (g_293 = (-9); (g_293 == (-9)); g_293 = safe_add_func_int8_t_s_s(g_293, 9))
    { 
        const uint8_t l_1325 = 0xD4L;
        uint8_t l_1340 = 0x63L;
        int32_t l_1342 = 0x466265D7L;
        int32_t *l_1345 = &l_860;
        int32_t l_1368 = 1L;
        int32_t l_1372 = 0x59B273CBL;
        int32_t l_1376[6][7][3] = {{{0xD7F74F44L,0xA7D3893EL,(-1L)},{0L,(-1L),(-6L)},{(-1L),(-1L),(-4L)},{0x5226BDDBL,0xA7D3893EL,5L},{0x335CF46BL,(-9L),(-3L)},{(-6L),0xCE6F3058L,0xBF8FE717L},{0xA7D3893EL,0x335CF46BL,(-3L)}},{{(-1L),0x3398A4D3L,5L},{0x15D57139L,(-1L),(-4L)},{(-1L),(-6L),(-6L)},{(-1L),(-4L),(-1L)},{0x15D57139L,5L,0x3398A4D3L},{(-1L),(-3L),0x335CF46BL},{0xA7D3893EL,0xBF8FE717L,0xCE6F3058L}},{{(-6L),(-3L),(-9L)},{0x335CF46BL,5L,0xA7D3893EL},{0x5226BDDBL,(-4L),(-1L)},{(-1L),(-6L),0xCBCC6DDEL},{0x3398A4D3L,(-6L),0L},{0xA7D3893EL,5L,0x335CF46BL},{0x72F2C109L,0xD7F74F44L,(-4L)}},{{5L,(-4L),0xD7F74F44L},{0x72F2C109L,0x335CF46BL,5L},{0xA7D3893EL,0L,(-6L)},{0x3398A4D3L,0xCBCC6DDEL,0L},{0xCBCC6DDEL,0xCBCC6DDEL,0xBF8FE717L},{(-1L),0L,0xCE6F3058L},{0xD7F74F44L,0x335CF46BL,0x5226BDDBL}},{{0L,(-4L),0x9BE17D9AL},{0L,0xD7F74F44L,0x5226BDDBL},{(-6L),5L,0xCE6F3058L},{(-9L),(-6L),0xBF8FE717L},{5L,0L,0L},{5L,0xBF8FE717L,(-6L)},{(-9L),0xCE6F3058L,5L}},{{(-6L),0x5226BDDBL,0xD7F74F44L},{0L,0x9BE17D9AL,(-4L)},{0L,0x5226BDDBL,0x335CF46BL},{0xD7F74F44L,0xCE6F3058L,0L},{(-1L),0xBF8FE717L,0xCBCC6DDEL},{0xCBCC6DDEL,0L,0xCBCC6DDEL},{0x3398A4D3L,(-6L),0L}}};
        uint16_t l_1386 = 1UL;
        const int32_t *l_1393 = &l_1368;
        uint32_t l_1410 = 0xABEFC019L;
        uint8_t *l_1411 = &g_768[0][3];
        int i, j, k;
        for (g_236 = 0; (g_236 <= (-5)); g_236 = safe_sub_func_uint64_t_u_u(g_236, 6))
        { 
            int8_t l_1319 = 0x43L;
            int32_t l_1324 = 0L;
            int32_t *****l_1339 = (void*)0;
            struct S1 l_1350 = {0x2DL,{0L,-4L},0xA330ACE8E6DDC223LL,0x76C8C942L,0UL};
            const int32_t * const l_1365 = &l_1342;
            int32_t l_1371[7][4][2] = {{{(-1L),(-1L)},{0x3FA31127L,(-1L)},{(-1L),0x3FA31127L},{(-1L),(-1L)}},{{0x3FA31127L,(-1L)},{(-1L),0x3FA31127L},{(-1L),(-1L)},{0x3FA31127L,(-1L)}},{{(-1L),0x3FA31127L},{(-1L),(-1L)},{0x3FA31127L,(-1L)},{(-1L),0x3FA31127L}},{{(-1L),(-1L)},{0x3FA31127L,(-1L)},{(-1L),0x3FA31127L},{(-1L),(-1L)}},{{0x3FA31127L,(-1L)},{(-1L),0x3FA31127L},{(-1L),(-1L)},{0x3FA31127L,(-1L)}},{{(-1L),0x3FA31127L},{(-1L),(-1L)},{0x3FA31127L,(-1L)},{(-1L),0x3FA31127L}},{{(-1L),(-1L)},{0x3FA31127L,(-1L)},{(-1L),0x3FA31127L},{(-1L),(-1L)}}};
            int16_t l_1385 = 0x128DL;
            int i, j, k;
            for (l_801 = 0; (l_801 < 60); ++l_801)
            { 
                int16_t l_1322 = 0xBC6CL;
                int16_t l_1323 = 0x1655L;
                uint8_t l_1344[5];
                struct S0 ***l_1347[6];
                uint16_t l_1362[7] = {0UL,0x5923L,0UL,0UL,0x5923L,0UL,0UL};
                uint32_t *l_1363 = &g_1024[4].f3;
                struct S1 *l_1366 = &g_1024[1];
                int32_t l_1373 = 1L;
                int32_t l_1374 = (-7L);
                int32_t l_1377 = 0x52399B20L;
                int32_t l_1378 = 0L;
                int32_t l_1379 = 1L;
                int32_t l_1380[3];
                int16_t l_1384 = 0x53C3L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1344[i] = 1UL;
                for (i = 0; i < 6; i++)
                    l_1347[i] = &g_341;
                for (i = 0; i < 3; i++)
                    l_1380[i] = 0x6B705EE4L;
                if ((safe_sub_func_uint8_t_u_u(((!((l_1319 = g_1024[4].f2) | (((((((*g_821) |= p_36) , g_1024[4].f2) && 0x2628A9200A6154F8LL) >= (safe_lshift_func_uint16_t_u_u((((*g_1175) , p_35.f4) || l_1322), l_1323))) , g_37.f0) != 0xFF40ACADL))) >= l_1324), l_1325)))
                { 
                    int16_t l_1326 = 0L;
                    if (l_1326)
                        break;
                }
                else
                { 
                    uint8_t **l_1331 = &g_986[3];
                    int32_t *****l_1338 = &g_87;
                    int16_t *l_1341 = &g_50;
                    int32_t *l_1343 = &l_1246.f1.f0;
                    l_1344[2] = ((*l_1343) = (safe_rshift_func_int8_t_s_s(((0xBFL > 253UL) | ((((safe_div_func_uint16_t_u_u((((*l_1331) = &g_83[0]) == ((safe_mod_func_int64_t_s_s(((l_1342 &= ((*l_1341) |= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((p_35.f0 <= ((l_1338 != (l_1339 = &g_87)) > ((p_35.f1.f0 && p_35.f3) ^ 65526UL))), 6)), p_35.f1.f1)) < l_1340))) , p_35.f0), 0x1AB0CE62CD07902BLL)) , &g_213)), l_1319)) & l_1322) <= (*g_821)) || p_35.f4)), p_35.f1.f0)));
                    (****l_1338) = l_1345;
                }
                (**l_712) = p_35.f1;
                if ((~((((*g_1050) == l_1347[0]) | (safe_add_func_uint32_t_u_u((l_1350 , ((*l_1363) |= (safe_mod_func_int16_t_s_s(((l_1362[4] ^= ((((****g_1295) != ((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((p_35.f1.f0 >= (*l_1345)) <= ((((((((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((l_944[2][5][3] , g_163.f0), 0x78DF18798B96A297LL)), 1L)) ^ 4294967291UL) || 0x95D3L) >= 0xDEA5F710L) | l_1361) , p_35.f2) != (*l_1345)) < (*g_579))), 7)), p_35.f2)) ^ l_1344[0])) != p_35.f2) == (*l_1345))) <= l_1322), 0x68E5L)))), 0x3DFA267EL))) , (*g_821))))
                { 
                    uint64_t l_1367 = 0xF6A694F1A6012F6ELL;
                    (*g_342) = (**g_341);
                    l_1367 = (safe_unary_minus_func_int32_t_s((((p_35.f4 & (l_1363 != l_1365)) , &p_35) != l_1366)));
                    return (**g_341);
                }
                else
                { 
                    int32_t l_1369 = 1L;
                    int32_t *l_1370[7];
                    int64_t l_1375 = 1L;
                    uint8_t l_1381 = 0UL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1370[i] = &g_1008[5][0];
                    ++l_1381;
                    l_1386++;
                    if (p_35.f3)
                        continue;
                    return p_35.f1;
                }
            }
            (*l_1345) |= (safe_add_func_uint16_t_u_u(9UL, (l_1391 == (void*)0)));
            g_1394 = l_1393;
            for (l_1083 = 0; (l_1083 >= 1); ++l_1083)
            { 
                for (l_1246.f3 = 0; (l_1246.f3 > 17); l_1246.f3++)
                { 
                    return p_35.f1;
                }
            }
        }
    }
    return p_35.f1;
}



static int32_t * func_39(int32_t  p_40, uint32_t  p_41)
{ 
    struct S0 *l_162 = &g_163;
    int32_t l_166 = 2L;
    int32_t l_181 = (-2L);
    int32_t l_182 = (-6L);
    int16_t l_183 = 8L;
    int16_t l_185 = 0xFF45L;
    int32_t l_189 = 0L;
    int32_t ***l_243 = &g_60;
    uint8_t *l_258[7][7][5] = {{{(void*)0,&g_83[0],&g_83[4],&g_213,&g_83[0]},{&g_213,&g_83[0],&g_83[0],&g_83[0],&g_83[0]},{(void*)0,(void*)0,&g_83[0],&g_213,(void*)0},{(void*)0,&g_83[0],&g_83[4],&g_213,&g_83[0]},{&g_213,&g_83[0],&g_83[0],&g_83[0],&g_83[0]},{(void*)0,(void*)0,&g_83[0],&g_213,(void*)0},{(void*)0,&g_83[0],&g_83[4],&g_213,&g_83[0]}},{{&g_213,&g_83[0],&g_83[0],&g_83[0],&g_83[0]},{(void*)0,(void*)0,&g_83[0],&g_213,(void*)0},{(void*)0,&g_83[0],&g_83[4],&g_213,&g_83[0]},{&g_213,&g_83[0],&g_83[0],&g_83[0],&g_83[0]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]}},{{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213}},{{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]}},{{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]}},{{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213}},{{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]},{&g_213,&g_83[3],&g_83[4],&g_83[4],&g_83[3]},{&g_213,&g_213,&g_83[4],(void*)0,&g_213},{&g_213,&g_83[3],&g_83[0],(void*)0,&g_83[3]}}};
    const uint8_t l_279 = 0xBCL;
    union U2 l_372 = {0x9F555241L};
    int32_t *** const *l_385 = (void*)0;
    int32_t *** const **l_384 = &l_385;
    uint32_t l_477[4];
    struct S0 ***l_479 = &g_341;
    int32_t l_524 = 0x4F824CFFL;
    uint32_t l_629 = 0xE9428136L;
    int64_t l_630 = 0L;
    int64_t l_677 = 0x6D6C4DF26C3CB232LL;
    uint16_t *l_678 = &g_358[2][1];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_477[i] = 0x91C398CDL;
    (*l_162) = g_37.f1;
    if ((safe_mod_func_int32_t_s_s(((l_166 = l_166) && p_41), (-6L))))
    { 
        int16_t l_167[7];
        int32_t l_177 = 0x2EDF7288L;
        int32_t l_178 = 1L;
        int32_t l_180 = 0xBF0AE526L;
        int32_t l_184 = (-7L);
        int32_t l_186 = 0x88F51149L;
        int32_t l_187 = (-7L);
        int32_t l_188[5][2][4] = {{{1L,(-4L),0x42A246DCL,0xB9B84EC6L},{6L,(-4L),1L,0x331724B2L}},{{(-4L),0x4124E36CL,1L,0x4124E36CL},{0L,0x42A246DCL,1L,(-10L)}},{{1L,(-1L),(-1L),0xEE405A42L},{(-10L),(-1L),(-4L),1L}},{{(-10L),0xA265524AL,(-1L),(-1L)},{1L,1L,1L,1L}},{{0L,0x331724B2L,1L,(-1L)},{(-4L),(-1L),1L,0x1521089FL}}};
        int32_t l_199 = 1L;
        uint8_t l_240 = 1UL;
        int32_t *****l_244[5] = {&g_87,&g_87,&g_87,&g_87,&g_87};
        int32_t *l_246 = &l_181;
        int32_t *l_247 = &l_182;
        const uint64_t l_255 = 0x5FF90D86D0E1961FLL;
        uint8_t *l_259 = (void*)0;
        const uint64_t l_311 = 18446744073709551612UL;
        int32_t l_336 = 0xAC56C3ADL;
        int8_t l_343 = 0x09L;
        union U2 *l_408 = (void*)0;
        uint64_t l_461 = 4UL;
        int64_t **l_471[1];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_167[i] = 3L;
        for (i = 0; i < 1; i++)
            l_471[i] = (void*)0;
        for (g_14 = 0; (g_14 <= 0); g_14 += 1)
        { 
            int32_t *l_168 = (void*)0;
            int32_t *l_169 = (void*)0;
            int32_t *l_170 = &g_163.f0;
            int32_t *l_171 = &g_3;
            int32_t l_172 = 0L;
            int32_t *l_173 = (void*)0;
            int32_t *l_174 = &l_166;
            int32_t *l_175 = &l_166;
            int32_t l_176[4][7][6] = {{{0x7282AEC8L,1L,1L,0x6EA20896L,1L,0xD96AF810L},{0x7D878659L,0x02573FF7L,0x9658A0C0L,0xD96AF810L,0x7D878659L,0xD2371772L},{(-1L),0x02573FF7L,0xE914ED28L,0x89F2780FL,1L,0x89F2780FL},{2L,1L,2L,0x02573FF7L,0x68A41854L,1L},{0xF6EEB393L,0L,0xE914ED28L,0x6EA20896L,0x7282AEC8L,0L},{0x68A41854L,0xDFE881F7L,0x9658A0C0L,0x6EA20896L,0x96BABB2BL,0x02573FF7L},{0xF6EEB393L,0x02573FF7L,1L,0x02573FF7L,0xF6EEB393L,0xD2371772L}},{{2L,0xD96AF810L,0x68A41854L,0x89F2780FL,0x96BABB2BL,1L},{(-1L),1L,0L,0xD96AF810L,0x7282AEC8L,1L},{0x7D878659L,0xD2371772L,0x68A41854L,0x6EA20896L,0x68A41854L,0xD2371772L},{0x7282AEC8L,0xDFE881F7L,1L,0x4F96D8EFL,1L,0x02573FF7L},{0x7D878659L,0xD96AF810L,0x9658A0C0L,0x02573FF7L,0x7D878659L,0L},{(-1L),0xD96AF810L,0xE914ED28L,1L,1L,1L},{2L,0xDFE881F7L,2L,0xD96AF810L,0x68A41854L,0x89F2780FL}},{{0xF6EEB393L,0xD2371772L,0xE914ED28L,0x4F96D8EFL,0x7282AEC8L,0xD2371772L},{0x68A41854L,1L,0x9658A0C0L,0x4F96D8EFL,0x96BABB2BL,0xD96AF810L},{0xF6EEB393L,0xD96AF810L,1L,0xD96AF810L,0xF6EEB393L,0L},{2L,0x02573FF7L,0x68A41854L,1L,0x96BABB2BL,0x89F2780FL},{(-1L),0xDFE881F7L,0L,0x02573FF7L,0x7282AEC8L,0x89F2780FL},{0x7D878659L,0L,0x68A41854L,0x4F96D8EFL,0x68A41854L,0L},{0x7282AEC8L,1L,1L,0x6EA20896L,1L,0xD96AF810L}},{{0x7D878659L,0x02573FF7L,0x9658A0C0L,0xD96AF810L,0x7D878659L,0xD2371772L},{(-1L),0x02573FF7L,0xE914ED28L,0x89F2780FL,1L,0x89F2780FL},{2L,1L,2L,0x02573FF7L,0x68A41854L,1L},{0xF6EEB393L,0L,0L,1L,(-1L),0xD96AF810L},{2L,0xD2371772L,0x96BABB2BL,1L,0x7D878659L,0x89F2780FL},{0x7282AEC8L,0x89F2780FL,0xE4AD5F31L,0x89F2780FL,0x7282AEC8L,0x02573FF7L},{0x9658A0C0L,1L,2L,0x4F96D8EFL,0x7D878659L,0x6EA20896L}}};
            int32_t *l_179[5][7] = {{&l_177,(void*)0,&l_177,&l_177,(void*)0,&l_177,&l_177},{(void*)0,(void*)0,&g_163.f0,(void*)0,(void*)0,&g_163.f0,(void*)0},{(void*)0,&l_177,&l_177,(void*)0,&l_177,&l_177,(void*)0},{&l_177,(void*)0,&l_177,&l_177,(void*)0,&l_177,&l_177},{(void*)0,(void*)0,&g_163.f0,(void*)0,(void*)0,&g_163.f0,(void*)0}};
            int16_t *l_262 = &l_167[0];
            int64_t *l_299 = (void*)0;
            int32_t *l_348 = &l_176[3][4][0];
            int32_t *l_350 = &l_180;
            struct S0 l_373 = {2L,-1L};
            uint8_t l_383 = 250UL;
            uint64_t l_420 = 18446744073709551612UL;
            const struct S0 *l_433 = &g_37.f1;
            const struct S0 **l_432 = &l_433;
            int32_t l_437 = (-1L);
            uint32_t l_440 = 0xD0670CA0L;
            int16_t l_443[7][6][1] = {{{0x49FDL},{(-4L)},{(-4L)},{0x49FDL},{0x4CE7L},{5L}},{{3L},{0x2DCEL},{0x86D2L},{0x2DCEL},{3L},{5L}},{{0x4CE7L},{0x49FDL},{(-4L)},{(-4L)},{0x49FDL},{0x4CE7L}},{{5L},{3L},{0x2DCEL},{0x86D2L},{0x2DCEL},{3L}},{{5L},{0x4CE7L},{0x49FDL},{(-4L)},{(-4L)},{0x49FDL}},{{0x4CE7L},{5L},{3L},{0x2DCEL},{0x86D2L},{0x2DCEL}},{{3L},{5L},{0x4CE7L},{0x49FDL},{(-4L)},{(-4L)}}};
            int i, j, k;
            g_190++;
        }
    }
    else
    { 
        int8_t *l_488 = &g_142[2][1][1];
        int32_t l_506 = 0x4D3E2F91L;
        int32_t * const *l_522 = &g_248;
        int32_t l_554 = 4L;
        int32_t l_564 = (-4L);
        int32_t * const l_576 = &l_189;
        int64_t l_587 = 0x8ED5E364CF0F0750LL;
        int16_t l_596 = 0xDB2DL;
        uint16_t *l_642[7][3][3] = {{{&g_151[1][0][0],&g_151[1][0][0],(void*)0},{&g_358[3][1],&g_151[1][0][0],&g_151[1][1][0]},{&g_151[1][1][0],(void*)0,&g_345}},{{&g_151[1][1][0],&g_345,&g_151[1][1][1]},{(void*)0,&g_151[1][1][0],&g_345},{(void*)0,&g_151[1][0][1],&g_151[1][1][0]}},{{&g_151[1][1][0],(void*)0,(void*)0},{&g_358[3][0],&g_151[1][1][0],&g_358[3][1]},{&g_151[1][0][0],&g_358[2][0],&g_151[1][1][0]}},{{&g_151[1][0][0],&g_358[2][0],&g_345},{&g_358[2][1],&g_151[1][1][0],&g_358[2][1]},{&g_151[0][0][1],(void*)0,&g_358[2][0]}},{{&g_358[2][1],&g_151[1][0][1],&g_345},{&g_345,&g_151[1][1][0],&g_151[1][0][0]},{&g_358[2][0],&g_345,&g_151[1][1][1]}},{{&g_345,(void*)0,&g_358[3][0]},{&g_358[2][1],&g_151[1][0][0],&g_151[1][0][1]},{&g_151[0][0][1],&g_151[1][0][0],&g_358[2][1]}},{{&g_358[2][1],&g_151[1][1][0],(void*)0},{&g_151[1][0][0],&g_345,(void*)0},{&g_151[1][0][0],&g_358[2][1],&g_358[2][1]}}};
        union U2 *l_655 = &l_372;
        int32_t *l_659 = &g_3;
        int i, j, k;
        (****g_87) &= ((void*)0 == l_488);
        for (l_183 = 0; (l_183 >= 9); l_183++)
        { 
            uint8_t l_503 = 7UL;
            int32_t l_507[7];
            const int32_t **l_529 = (void*)0;
            const int32_t *** const l_528[4] = {&l_529,&l_529,&l_529,&l_529};
            int32_t ***l_531 = &g_60;
            int32_t *l_575 = &l_524;
            int32_t **l_574 = &l_575;
            const int16_t *l_577 = &g_160[3];
            const int16_t **l_578 = (void*)0;
            uint16_t *l_581 = &g_151[1][1][0];
            uint32_t l_584[2][3] = {{0UL,2UL,0UL},{0UL,2UL,0UL}};
            int16_t l_594[4];
            uint16_t l_597 = 1UL;
            struct S1 l_606 = {2L,{0L,0x60L},18446744073709551615UL,0xB9D92140L,18446744073709551615UL};
            int i, j;
            for (i = 0; i < 7; i++)
                l_507[i] = 0x853DDCF3L;
            for (i = 0; i < 4; i++)
                l_594[i] = 0x513EL;
        }
        (**l_243) = (void*)0;
    }
    l_182 ^= (((!(((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((g_142[2][1][1] , (safe_mod_func_uint8_t_u_u(g_14, (((*g_610) , ((safe_lshift_func_uint8_t_u_u(246UL, (g_83[0]--))) , (((*l_678) = (p_41 < (((g_115.f0 , (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_14 && 0L), p_40)), p_41))) & p_41) && l_677))) | g_638))) & g_296[1][1])))) & p_41), p_41)), p_40)) <= p_41) && 0x7B8BL)) >= 5L) <= p_41);
    (*g_60) = (**g_88);
    p_40 |= p_41;
    return (**g_88);
}



static int16_t  func_42(int32_t * p_43, const uint64_t  p_44, int32_t * p_45, int32_t * p_46, int16_t  p_47)
{ 
    uint64_t l_53[4][3] = {{0UL,0xB32A1BF33464EB7FLL,0UL},{0x42724202D95C7885LL,0xB3460EE42AC96AAELL,0xE87198B9DB5DF1D9LL},{0x42724202D95C7885LL,0x42724202D95C7885LL,0xB3460EE42AC96AAELL},{0UL,0xB3460EE42AC96AAELL,0xB3460EE42AC96AAELL}};
    int32_t l_90[5];
    int16_t l_123[7] = {1L,1L,1L,1L,1L,1L,1L};
    struct S0 l_132 = {0x2E0867DBL,0x50L};
    union U2 *l_159 = &g_115;
    int i, j;
    for (i = 0; i < 5; i++)
        l_90[i] = 0xEE4CBE06L;
    for (g_50 = 0; (g_50 >= 10); ++g_50)
    { 
        int32_t l_105 = 7L;
        int32_t l_107 = (-6L);
        int32_t l_108 = 0x081AEEC9L;
        int32_t l_109[5];
        struct S0 l_133 = {0x511BF24CL,0x29L};
        union U2 *l_158[7] = {&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115};
        union U2 **l_157[6] = {&l_158[4],&l_158[4],&l_158[4],&l_158[4],&l_158[4],&l_158[4]};
        int i;
        for (i = 0; i < 5; i++)
            l_109[i] = 0L;
        for (g_3 = 0; (g_3 <= 2); g_3 += 1)
        { 
            int32_t ***l_62 = &g_60;
            uint8_t *l_81 = (void*)0;
            uint8_t *l_82[6] = {&g_83[4],&g_83[1],&g_83[1],&g_83[4],&g_83[1],&g_83[1]};
            int32_t *l_84 = &g_85[0][0][0];
            int32_t **l_86 = &g_61;
            int32_t l_104 = 0xD5298B49L;
            int32_t l_106 = 0L;
            int i, j;
        }
        (*p_45) = 0xC1E3CE9EL;
        for (l_132.f1 = (-24); (l_132.f1 < (-13)); l_132.f1++)
        { 
            int64_t **l_154 = (void*)0;
            int64_t ***l_155 = &l_154;
            int32_t *l_156 = &g_85[0][0][0];
            (*l_155) = l_154;
            if ((****g_87))
                continue;
            l_90[1] &= (-2L);
            (**g_88) = l_156;
        }
        (**g_60) = (*g_61);
        l_159 = &g_115;
    }
    return g_160[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1.f0, "g_37.f1.f0", print_hash_value);
    transparent_crc(g_37.f1.f1, "g_37.f1.f1", print_hash_value);
    transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
    transparent_crc(g_37.f3, "g_37.f3", print_hash_value);
    transparent_crc(g_37.f4, "g_37.f4", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_85[i][j][k], "g_85[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_142[i][j][k], "g_142[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_151[i][j][k], "g_151[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);

    }
    transparent_crc(g_163.f0, "g_163.f0", print_hash_value);
    transparent_crc(g_163.f1, "g_163.f1", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_296[i][j], "g_296[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_358[i][j], "g_358[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_768[i][j], "g_768[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1008[i][j], "g_1008[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1024[i].f0, "g_1024[i].f0", print_hash_value);
        transparent_crc(g_1024[i].f1.f0, "g_1024[i].f1.f0", print_hash_value);
        transparent_crc(g_1024[i].f1.f1, "g_1024[i].f1.f1", print_hash_value);
        transparent_crc(g_1024[i].f2, "g_1024[i].f2", print_hash_value);
        transparent_crc(g_1024[i].f3, "g_1024[i].f3", print_hash_value);
        transparent_crc(g_1024[i].f4, "g_1024[i].f4", print_hash_value);

    }
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1286, "g_1286", print_hash_value);
    transparent_crc(g_1445, "g_1445", print_hash_value);
    transparent_crc(g_1504, "g_1504", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1633[i][j], "g_1633[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1669, "g_1669", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1896[i].f0, "g_1896[i].f0", print_hash_value);
        transparent_crc(g_1896[i].f1.f0, "g_1896[i].f1.f0", print_hash_value);
        transparent_crc(g_1896[i].f1.f1, "g_1896[i].f1.f1", print_hash_value);
        transparent_crc(g_1896[i].f2, "g_1896[i].f2", print_hash_value);
        transparent_crc(g_1896[i].f3, "g_1896[i].f3", print_hash_value);
        transparent_crc(g_1896[i].f4, "g_1896[i].f4", print_hash_value);

    }
    transparent_crc(g_2062, "g_2062", print_hash_value);
    transparent_crc(g_2066, "g_2066", print_hash_value);
    transparent_crc(g_2166, "g_2166", print_hash_value);
    transparent_crc(g_2300, "g_2300", print_hash_value);
    transparent_crc(g_2302, "g_2302", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2364[i], "g_2364[i]", print_hash_value);

    }
    transparent_crc(g_2367, "g_2367", print_hash_value);
    transparent_crc(g_2494.f0, "g_2494.f0", print_hash_value);
    transparent_crc(g_2494.f1.f0, "g_2494.f1.f0", print_hash_value);
    transparent_crc(g_2494.f1.f1, "g_2494.f1.f1", print_hash_value);
    transparent_crc(g_2494.f2, "g_2494.f2", print_hash_value);
    transparent_crc(g_2494.f3, "g_2494.f3", print_hash_value);
    transparent_crc(g_2494.f4, "g_2494.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2564[i], "g_2564[i]", print_hash_value);

    }
    transparent_crc(g_2567, "g_2567", print_hash_value);
    transparent_crc(g_2631, "g_2631", print_hash_value);
    transparent_crc(g_2824, "g_2824", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
