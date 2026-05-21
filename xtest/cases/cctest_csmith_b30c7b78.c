// SPDX-License-Identifier: MIT
// cctest_csmith_b30c7b78.c --- cctest case csmith_b30c7b78 (csmith seed 3003939704)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x23925050 */

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

// Options:   -s 3003939704 -o /tmp/csmith_gen_n28m8h8x/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
};

union U2 {
   const uint64_t  f0;
   uint16_t  f1;
   uint8_t  f2;
};

union U3 {
   int8_t  f0;
   struct S0  f1;
};


static int16_t g_36 = 0xDE45L;
static int32_t g_50 = 0xBB5FB49AL;
static uint16_t g_51 = 0xA21BL;
static int64_t g_69 = 0x12ACF1929B4DB59FLL;
static uint32_t g_78 = 0UL;
static int32_t g_86[1][5] = {{1L,1L,1L,1L,1L}};
static const union U3 g_101 = {-6L};
static union U2 g_102 = {0xBF9AB2FCBA4768E4LL};
static union U1 g_105[4] = {{65535UL},{65535UL},{65535UL},{65535UL}};
static int16_t g_125 = 0x731BL;
static uint64_t g_139 = 18446744073709551615UL;
static int8_t g_141[4] = {(-6L),(-6L),(-6L),(-6L)};
static int32_t g_143 = 2L;
static uint64_t g_161 = 0x4755464F81135C14LL;
static struct S0 g_229 = {0xB7FA829B7C7E5BD8LL};
static struct S0 g_230 = {0xF78381580886FBCFLL};
static int16_t g_309 = 0xDD05L;
static struct S0 g_318 = {18446744073709551615UL};



static int32_t  func_1(void);
static int8_t  func_3(union U3  p_4, int64_t  p_5, const union U3  p_6, int8_t  p_7, union U2  p_8);
static union U3  func_9(int64_t  p_10);
static int16_t  func_20(const uint32_t  p_21, const int8_t  p_22, union U3  p_23, int32_t  p_24, uint64_t  p_25);




static int32_t  func_1(void)
{ 
    uint16_t l_2 = 65532UL;
    const uint16_t l_26 = 65535UL;
    const union U1 l_27 = {65535UL};
    int8_t l_37 = 0x8FL;
    int32_t l_38 = 1L;
    union U3 l_39 = {0xBFL};
    int32_t l_351 = 0x86E1F5E1L;
    int32_t l_352 = 0x3055DAE0L;
    l_351 &= (l_2 == func_3(func_9((((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((~func_20(l_26, (((l_27 , (l_38 = (((safe_sub_func_uint16_t_u_u(((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(6L, 0x96A5L)), g_36)), g_36)) , g_36), l_37)) < g_36) == g_36))) && 0UL) , (-1L)), l_39, l_26, g_36)), g_50)), g_50)), l_27.f0)), l_39.f0)) <= g_50) > 0x10F1939EFD9132E8LL)), g_86[0][4], g_101, g_86[0][2], g_102));
    l_352 = ((l_351 = g_125) || 0x90L);
    return l_351;
}



static int8_t  func_3(union U3  p_4, int64_t  p_5, const union U3  p_6, int8_t  p_7, union U2  p_8)
{ 
    int16_t l_116[4] = {0x2199L,0x2199L,0x2199L,0x2199L};
    int32_t l_118 = (-1L);
    int32_t l_146 = 0xF114C857L;
    int32_t l_147 = 0xAF5B9146L;
    int32_t l_151 = 0L;
    int32_t l_155[2];
    union U1 l_195 = {0x2D86L};
    int32_t l_236[2][1];
    int8_t l_268 = (-8L);
    struct S0 l_287[5] = {{0xA9AE2DBC6560A787LL},{0xA9AE2DBC6560A787LL},{0xA9AE2DBC6560A787LL},{0xA9AE2DBC6560A787LL},{0xA9AE2DBC6560A787LL}};
    int64_t l_298[5][4][3] = {{{6L,6L,0xF3E88C3CE80497F3LL},{(-1L),(-1L),3L},{6L,6L,0xF3E88C3CE80497F3LL},{(-1L),(-1L),3L}},{{6L,6L,0xF3E88C3CE80497F3LL},{(-1L),(-1L),3L},{6L,6L,0xF3E88C3CE80497F3LL},{(-1L),(-1L),3L}},{{2L,2L,6L},{0x2DD5C52C77892577LL,0x2DD5C52C77892577LL,(-1L)},{2L,2L,6L},{0x2DD5C52C77892577LL,0x2DD5C52C77892577LL,(-1L)}},{{2L,2L,6L},{0x2DD5C52C77892577LL,0x2DD5C52C77892577LL,(-1L)},{2L,2L,6L},{0x2DD5C52C77892577LL,0x2DD5C52C77892577LL,(-1L)}},{{2L,2L,6L},{0x2DD5C52C77892577LL,0x2DD5C52C77892577LL,(-1L)},{2L,2L,6L},{0x2DD5C52C77892577LL,0x2DD5C52C77892577LL,(-1L)}}};
    uint32_t l_311[2][5][1] = {{{0x41806711L},{0xA81A918CL},{0x41806711L},{0xA81A918CL},{0x41806711L}},{{0xA81A918CL},{0x41806711L},{0xA81A918CL},{0x41806711L},{0xA81A918CL}}};
    int32_t l_323 = 1L;
    union U2 l_337 = {9UL};
    int8_t l_350 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_155[i] = 0x01610A32L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_236[i][j] = (-6L);
    }
    if ((g_69 , 0xD54F57EBL))
    { 
        int8_t l_106 = 0x31L;
        int32_t l_134 = 0x722EB29FL;
        uint8_t l_140 = 0x09L;
        int32_t l_144 = 0x1E1EA803L;
        int32_t l_145 = 0x54A6F35BL;
        int32_t l_148 = 9L;
        int32_t l_149 = 1L;
        int32_t l_150 = (-10L);
        int32_t l_152 = 0x95F642D8L;
        int32_t l_153 = 0xE8A79AF8L;
        int32_t l_154 = (-5L);
        int32_t l_156 = 0x47CF268AL;
        int32_t l_157 = 0x58C38B95L;
        int32_t l_158 = 0x4C5D88C5L;
        int32_t l_159 = 0L;
        int32_t l_160 = 0xCD2B34E3L;
        int8_t l_183[3];
        union U1 l_194 = {0x3E7FL};
        int i;
        for (i = 0; i < 3; i++)
            l_183[i] = 0x89L;
lbl_142:
        if ((((((((0x6F96L != (safe_sub_func_uint32_t_u_u((g_78 = g_86[0][4]), (g_50 != ((g_105[1] , p_4.f0) , p_5))))) , p_8.f2) < 0xB7L) & g_50) != g_102.f2) < 5UL) <= l_106))
        { 
            int8_t l_117 = 2L;
            int32_t l_119 = 0x70792702L;
            l_119 &= (l_118 = ((((l_106 != ((+(safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((0x35L == 0L) > p_6.f0), p_8.f0)), l_116[2])) && l_106) & 0xB6B7D2F2L), l_117)), 0x5AAB37417BD2F3BELL))) & l_116[0])) ^ 65533UL) && l_106) >= 0x25L));
            if (g_69)
                goto lbl_142;
        }
        else
        { 
            uint32_t l_131 = 1UL;
            union U1 l_135 = {0xABD0L};
            if (g_101.f0)
            { 
                struct S0 l_120 = {0x9A964D50EE726552LL};
                int32_t l_130[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_130[i][j] = (-3L);
                }
                p_4.f1 = l_120;
                g_86[0][4] = (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((p_4.f0 , (((g_125 &= (-1L)) , ((((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_106, l_120.f0)), (-10L))) < g_50) ^ g_51) == 255UL)) ^ 6UL)) > g_86[0][3]) == p_6.f0), 1UL)), p_7));
                --l_131;
            }
            else
            { 
                l_134 = g_86[0][4];
            }
            l_118 = g_102.f1;
            for (l_106 = 0; (l_106 <= 3); l_106 += 1)
            { 
                int i;
                g_141[2] &= (((g_139 = ((l_135 , 0x7AAFE8A4A7E50284LL) , (g_69 = (((safe_unary_minus_func_int16_t_s((safe_mul_func_int16_t_s_s(l_116[l_106], l_135.f0)))) , p_7) && l_116[l_106])))) != l_140) >= 1L);
                if (p_5)
                    break;
            }
        }
        --g_161;
        for (g_36 = 0; (g_36 <= 3); g_36 += 1)
        { 
            int32_t l_184 = 0xDA66330FL;
            int32_t l_185 = 0L;
            int32_t l_186 = 0x20D8B5B8L;
            int32_t l_188 = 0x86CCD6D7L;
            int32_t l_190 = 0xFFD8805FL;
            for (g_125 = 0; (g_125 <= 3); g_125 += 1)
            { 
                int32_t l_187 = (-6L);
                int32_t l_189 = 0x211735A4L;
                uint8_t l_191 = 0UL;
                int i;
                l_183[1] |= (l_116[g_36] > (safe_lshift_func_int8_t_s_u((((safe_mod_func_int32_t_s_s(g_86[0][3], (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(l_116[g_36])) < (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((p_5 >= 0x16L), 0x8036L)), l_118)), g_102.f2)) != l_147), g_161)), (-7L)))), 0x6AL)), l_147)))) > g_141[0]) , g_50), 0)));
                l_191--;
                l_155[1] = ((((l_195 = l_194) , ((g_139 != ((g_86[0][1] == (g_101.f0 , 0UL)) != 0x4DC0AA95C4C3C445LL)) & 0xA339AD12C72D1252LL)) | p_8.f2) && p_8.f1);
            }
        }
    }
    else
    { 
        int16_t l_204 = 0x7D52L;
        int32_t l_223 = 0xD0D33459L;
        int32_t l_224 = 0x36D3559EL;
        uint8_t l_259 = 0xC3L;
        int32_t l_299 = 1L;
        int32_t l_300 = 0xC2A71DD7L;
        int32_t l_301 = 0x01473823L;
        int32_t l_302 = 0x6AC65B61L;
        int32_t l_303 = 0x4DBD819FL;
        int32_t l_304 = 1L;
        int32_t l_305 = 3L;
        int32_t l_306 = 0x7B942CA0L;
        int32_t l_307 = 0x29B80A16L;
        int32_t l_308[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
        int32_t l_310[3][3][3] = {{{0L,0L,0xFD91DCD4L},{1L,0xFBA5C353L,0xFD91DCD4L},{0x783CCC9BL,0xFD91DCD4L,0L}},{{0x3CE6440DL,0x7469C53BL,4L},{0xFD91DCD4L,0xFD91DCD4L,0x7469C53BL},{0x550B14C5L,0xFBA5C353L,0x79B97212L}},{{0x550B14C5L,0L,0x3CE6440DL},{0xFD91DCD4L,0L,0xFBA5C353L},{0x3CE6440DL,0x550B14C5L,0x3CE6440DL}}};
        int i, j, k;
        if (((safe_lshift_func_int16_t_s_s((((g_125 ^= ((safe_add_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u((g_51 ^= (safe_rshift_func_uint8_t_u_s(((0xD87FAE0A69A7D356LL | ((((253UL <= g_86[0][4]) == (p_8.f2 , l_204)) & 4294967293UL) ^ 18446744073709551615UL)) == 0xC3F1L), 5))), p_8.f2)) && g_141[2]), 18446744073709551611UL)) != 0x86L)) || p_8.f1) < g_36), 3)) != 1UL))
        { 
            int8_t l_222[3];
            int32_t l_251[4][2][4];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_222[i] = (-6L);
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_251[i][j][k] = 0x7B25FE38L;
                }
            }
            l_146 = (safe_mul_func_int8_t_s_s((l_224 = (safe_sub_func_int32_t_s_s(((--p_8.f2) | ((((g_102.f0 < (l_223 &= ((p_6.f0 , 18446744073709551609UL) && ((safe_add_func_int32_t_s_s((~((((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((((safe_mod_func_int64_t_s_s(l_222[0], p_7)) && p_4.f0) || p_6.f0) | l_222[2]), g_102.f2)), l_204)) ^ (-7L)) == l_222[0]) || l_151)), l_204)) == g_78)))) == l_204) < l_222[2]) , g_51)), g_141[2]))), p_5));
            for (p_8.f2 = 28; (p_8.f2 >= 39); p_8.f2 = safe_add_func_int32_t_s_s(p_8.f2, 2))
            { 
                return l_222[0];
            }
            for (g_50 = 1; (g_50 < 28); ++g_50)
            { 
                uint16_t l_237 = 2UL;
                const uint32_t l_250 = 0x34A44F27L;
                g_86[0][4] = (((g_230 = g_229) , (safe_unary_minus_func_int8_t_s(0x18L))) | (g_141[2] | ((safe_add_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u(l_236[1][0], 0L)), l_237)) ^ (-1L))));
                l_251[0][1][1] |= (l_204 > ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((p_7 = (safe_sub_func_int32_t_s_s(((((++g_102.f2) , (-2L)) , ((p_5 > ((0x85C46A8985A425B5LL > 0x33137A95C22D9D8ALL) | l_237)) && 0L)) >= g_51), l_250))) || (-1L)), 6)), g_101.f0)) < 0x6BL), g_229.f0)) < l_237));
                g_86[0][4] = p_8.f2;
            }
        }
        else
        { 
            uint32_t l_256 = 0UL;
            int8_t l_266 = 0x0FL;
            struct S0 l_267[3][5] = {{{0x29B9CDFA42261996LL},{0x1BD3BCB1EAC38ED0LL},{0x72D0B3D723124B16LL},{0x72D0B3D723124B16LL},{0x1BD3BCB1EAC38ED0LL}},{{18446744073709551615UL},{5UL},{0x72D0B3D723124B16LL},{1UL},{1UL}},{{5UL},{18446744073709551615UL},{5UL},{0x72D0B3D723124B16LL},{1UL}}};
            uint8_t l_269 = 0UL;
            int32_t l_270[5][2][4] = {{{0xDE3D06CCL,0xDE3D06CCL,0x484D7843L,1L},{0L,(-1L),0L,0x484D7843L}},{{0L,0x484D7843L,0x484D7843L,0L},{0xDE3D06CCL,0x484D7843L,1L,0x484D7843L}},{{0x484D7843L,(-1L),1L,1L},{0xDE3D06CCL,0xDE3D06CCL,0x484D7843L,1L}},{{0L,(-1L),0L,0x484D7843L},{0L,0x484D7843L,0x484D7843L,0L}},{{0xDE3D06CCL,0x484D7843L,1L,0x484D7843L},{0x484D7843L,(-1L),1L,1L}}};
            int i, j, k;
            g_50 = ((safe_add_func_int16_t_s_s((g_161 , (((safe_rshift_func_int16_t_s_u(l_256, 7)) & (l_266 = (safe_mod_func_uint16_t_u_u((l_259 < (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((p_8.f0 , 0x09E64E21L), 0x50B3B619L)), l_204)), l_223))), p_8.f1)))) , g_102.f1)), 0xBE9BL)) || l_266);
            l_270[1][0][3] = ((l_269 ^= (((g_50 , (l_267[2][0] , ((g_229.f0 && (l_195 , 65535UL)) , p_8.f1))) == l_268) < l_266)) > l_236[1][0]);
            if ((((safe_sub_func_int64_t_s_s((+(g_69 |= (l_118 , ((((safe_mul_func_int16_t_s_s(0xF1B9L, 1L)) <= (safe_rshift_func_int16_t_s_s((g_141[1] , g_102.f1), 10))) > 0UL) && g_102.f1)))), l_259)) > l_223) > p_5))
            { 
                int16_t l_286 = 0x1195L;
                l_223 = (p_5 == (safe_add_func_int32_t_s_s(((((g_141[2] ^= 0x3EL) | ((g_101 , (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(l_286, 1UL)) | 1UL), 0x811C0DFE4C1CF038LL)), g_102.f2))) & g_36)) >= g_229.f0) >= 1L), g_101.f0)));
                l_267[1][4] = l_287[1];
            }
            else
            { 
                uint64_t l_288 = 18446744073709551615UL;
                l_288--;
                return l_224;
            }
        }
        l_146 ^= ((0xDCFDL > (!(safe_mod_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((((safe_mod_func_int64_t_s_s((l_224 ^= (p_5 = (((l_223 | p_6.f0) <= g_143) , l_118))), g_141[3])) <= 0L) | 3UL) < g_229.f0) ^ p_8.f2), g_143)), l_236[1][0])))) ^ p_4.f0);
        l_311[1][1][0]++;
    }
    if (((l_155[1] = (l_146 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(255UL, 4)), ((((g_318 , ((safe_div_func_int64_t_s_s(p_5, (l_236[1][0] = (safe_rshift_func_uint8_t_u_s(0x0DL, g_86[0][4]))))) > l_323)) == l_146) | p_8.f2) | (-5L)))))) != 4294967290UL))
    { 
        uint16_t l_324 = 1UL;
        int32_t l_325 = (-1L);
        l_325 &= l_324;
    }
    else
    { 
        uint64_t l_331[4][1] = {{0xFBE857C816288D38LL},{0x4E592116FD6CFE86LL},{0xFBE857C816288D38LL},{0x4E592116FD6CFE86LL}};
        int i, j;
        for (p_8.f1 = 1; (p_8.f1 <= 4); p_8.f1 += 1)
        { 
            const uint32_t l_330 = 0UL;
            g_50 = ((l_155[1] = ((g_78 & (((safe_lshift_func_int8_t_s_s(0x27L, ((safe_lshift_func_int8_t_s_u((g_102.f2 > (0xBF8E8E59L == l_330)), l_331[3][0])) <= p_4.f0))) == p_6.f0) & g_318.f0)) ^ 0x4AL)) || g_78);
        }
        l_236[1][0] = ((((((safe_unary_minus_func_int64_t_s((safe_sub_func_uint16_t_u_u(((0x917BC99AC3B92062LL && 0xFCB92070D6D4A889LL) <= ((func_9((safe_div_func_uint32_t_u_u(0UL, (l_337 , (-1L))))) , (-6L)) | l_331[0][0])), l_298[4][2][0])))) == g_230.f0) >= l_236[1][0]) && l_337.f1) & p_5) , 0x7B0CE8A8L);
    }
    g_86[0][4] = (safe_lshift_func_int16_t_s_u(0x6807L, (((l_350 = (((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((--g_51), (0xD39461BCL | ((safe_lshift_func_uint8_t_u_u((8UL >= (p_4.f0 && 0x15L)), 5)) < p_8.f2)))) == p_8.f2), g_86[0][4])), l_268)) , g_51) >= p_4.f0)) != l_155[0]) == p_4.f0)));
    return g_143;
}



static union U3  func_9(int64_t  p_10)
{ 
    struct S0 l_65 = {0x6C79A83ADAB8F5B6LL};
    int32_t l_74[3][4];
    int32_t l_75 = 0x7466640DL;
    int32_t l_76[5][2][1];
    uint16_t l_88[5][1] = {{0xEE13L},{65528UL},{0xEE13L},{65528UL},{0xEE13L}};
    const int32_t l_99 = 0L;
    union U3 l_100 = {0x76L};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_74[i][j] = 0xAC3517D3L;
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_76[i][j][k] = 1L;
        }
    }
    for (g_36 = (-20); (g_36 != 16); ++g_36)
    { 
        uint32_t l_60[1][2];
        int32_t l_83 = (-1L);
        int32_t l_84 = 4L;
        int32_t l_87 = 0x80087D4EL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_60[i][j] = 0x9098934EL;
        }
        for (g_50 = 0; (g_50 <= 0); g_50 += 1)
        { 
            uint32_t l_61 = 0x7B8A5F03L;
            l_61++;
        }
        for (g_50 = 0; (g_50 >= 0); g_50 -= 1)
        { 
            struct S0 l_64 = {0x0486D4D441147C03LL};
            int32_t l_85[4] = {0x3987EDF5L,0x3987EDF5L,0x3987EDF5L,0x3987EDF5L};
            int i;
            if (p_10)
            { 
                l_65 = l_64;
            }
            else
            { 
                int32_t l_77 = (-1L);
                int i, j;
                g_69 &= ((p_10 == (p_10 | ((+(l_60[g_50][g_50] = p_10)) , ((safe_mod_func_uint64_t_u_u((p_10 <= 18446744073709551607UL), 0x000BAF34C2E3979DLL)) ^ 6L)))) >= g_36);
                l_85[1] &= (safe_mod_func_int32_t_s_s((l_75 |= (p_10 <= (safe_sub_func_uint32_t_u_u(g_69, (l_74[1][3] = p_10))))), (((--g_78) == (safe_mul_func_int8_t_s_s((l_84 = ((l_83 = g_50) == p_10)), 7UL))) , p_10)));
            }
        }
        l_88[4][0]++;
    }
    l_75 = ((safe_mul_func_int16_t_s_s(l_88[4][0], (safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(g_86[0][4], (((l_76[4][1][0] ^= ((0x5F43C719L == ((p_10 <= 0x01120EACL) && 0x6E5819C35E3C92ACLL)) >= 0x432CFC9AL)) ^ l_88[4][0]) < p_10))) && p_10), 0xA71DL)))) , 3L);
    l_76[0][1][0] = ((((l_74[1][3] |= 0x64F5L) && (0x7609E5B73647B8CELL & (l_76[3][0][0] != (safe_mul_func_uint16_t_u_u(((l_74[2][2] && g_86[0][4]) ^ l_99), p_10))))) && 1UL) , l_74[1][3]);
    return l_100;
}



static int16_t  func_20(const uint32_t  p_21, const int8_t  p_22, union U3  p_23, int32_t  p_24, uint64_t  p_25)
{ 
    uint64_t l_40 = 0xC1477A14A9C79EBELL;
    int32_t l_47 = (-2L);
    int32_t l_48 = (-6L);
    int32_t l_49[4] = {0x20525C7EL,0x20525C7EL,0x20525C7EL,0x20525C7EL};
    int i;
    l_49[2] |= ((l_40 <= ((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u((l_47 = (++g_51)), 15)) , p_23.f0), (((safe_sub_func_int8_t_s_s((251UL == ((g_36 = (safe_mul_func_uint16_t_u_u(p_21, g_50))) , l_40)), l_40)) ^ g_50) <= p_25))) >= 2UL) ^ 0x7D5B4499L), 7)) | 1L)) <= l_40);
    return l_47;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_86[i][j], "g_86[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_102.f2, "g_102.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_105[i].f0, "g_105[i].f0", print_hash_value);

    }
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_230.f0, "g_230.f0", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_318.f0, "g_318.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
