// SPDX-License-Identifier: MIT
// cctest_csmith_219517b2.c --- cctest case csmith_219517b2 (csmith seed 563419058)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1764d67b */

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

// Options:   -s 563419058 -o /tmp/csmith_gen_o3fcvfou/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int64_t  f1;
};
#pragma pack(pop)

union U1 {
   const struct S0  f0;
};

union U2 {
   int16_t  f0;
   const uint8_t  f1;
   int8_t  f2;
};


static int32_t g_9 = 0L;
static uint32_t g_21 = 4294967287UL;
static int32_t g_57 = 0xA74B80CDL;
static int8_t g_60 = 0x3BL;
static int32_t g_73 = 0xE7F6328DL;
static union U2 g_81 = {0xF3D9L};
static uint32_t g_87 = 0xF84CD17FL;
static uint32_t g_124 = 18446744073709551614UL;
static struct S0 g_126 = {0xAEAA53E6L,0x3F393C2DF5847FBBLL};
static union U1 g_142 = {{0x4222F612L,0xDDC992EEADF95454LL}};
static const union U2 g_143 = {-1L};
static int64_t g_148 = 0x9547BAECA1BBDA26LL;
static uint32_t g_168 = 0xBA9F1CB0L;
static int32_t g_174 = 8L;
static uint32_t g_175 = 0xFEB46863L;
static int32_t g_190 = 0L;
static int32_t g_191[4] = {0xF6597B28L,0xF6597B28L,0xF6597B28L,0xF6597B28L};
static uint8_t g_196 = 0x78L;
static int8_t g_209 = 0x80L;



static uint64_t  func_1(void);
static struct S0  func_2(const union U1  p_3);
static const union U1  func_4(int8_t  p_5, union U1  p_6, uint32_t  p_7, const union U2  p_8);
static union U1  func_10(uint64_t  p_11, uint32_t  p_12, struct S0  p_13, union U1  p_14);




static uint64_t  func_1(void)
{ 
    uint32_t l_19[3][2][1] = {{{0x1EC2184EL},{0UL}},{{0x1EC2184EL},{0UL}},{{0x1EC2184EL},{0UL}}};
    int8_t l_20 = 0L;
    struct S0 l_22 = {-1L,1L};
    union U1 l_23 = {{-1L,0x78CCA69919C44D4ELL}};
    int32_t l_149[2][1];
    const union U1 l_157 = {{0xBF06CFF2L,0x2B29A1D6AACE6E22LL}};
    const struct S0 l_171 = {-1L,0xCD46132A9E99FB6ELL};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_149[i][j] = 0x94222837L;
    }
lbl_184:
    l_22 = func_2(func_4(g_9, (func_10((g_21 = (safe_mod_func_uint32_t_u_u(((g_9 ^ (l_19[1][0][0] = ((safe_rshift_func_uint16_t_u_s(65535UL, 2)) <= (g_9 > 1UL)))) & 0xC84902314AF12A83LL), l_20))), g_9, l_22, l_23) , l_23), g_9, g_143));
    for (g_126.f0 = (-10); (g_126.f0 >= (-6)); g_126.f0 = safe_add_func_uint64_t_u_u(g_126.f0, 8))
    { 
        int32_t l_147 = 1L;
        int32_t l_158[1];
        uint32_t l_193 = 0xE60D97CCL;
        int32_t l_213 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_158[i] = 1L;
        l_158[0] &= ((l_149[0][0] = (l_147 >= g_148)) >= ((((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s((((g_57 >= (((((!(safe_sub_func_int32_t_s_s(((func_2(l_157) , 0x9DCB8710L) , g_73), l_147))) , l_147) >= g_73) < l_19[1][0][0]) | g_81.f2)) , 0xAD2651A9L) , g_143.f2), g_9)), g_143.f1)) , l_147) < g_21) == 0x35L));
        for (g_57 = 0; (g_57 <= 0); g_57 += 1)
        { 
            int32_t l_173 = 1L;
            int i;
            if (((l_158[g_57] > (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((0x3D79527A06FA74B5LL && (-6L)), ((((g_60 ^= (safe_sub_func_int64_t_s_s(l_158[g_57], l_158[g_57]))) & l_158[g_57]) > l_158[g_57]) | g_126.f1))), l_22.f0))) <= g_73))
            { 
                int32_t l_165 = 1L;
                int32_t l_166 = 4L;
                int32_t l_167 = (-1L);
                int i, j;
                g_168++;
            }
            else
            { 
                struct S0 l_172[5] = {{1L,0x7EEBA36B31EA8A68LL},{1L,0x7EEBA36B31EA8A68LL},{1L,0x7EEBA36B31EA8A68LL},{1L,0x7EEBA36B31EA8A68LL},{1L,0x7EEBA36B31EA8A68LL}};
                int i;
                l_172[0] = l_171;
                ++g_175;
            }
            for (g_81.f2 = 0; (g_81.f2 >= 0); g_81.f2 -= 1)
            { 
                int i, j, k;
                g_9 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(l_19[(g_57 + 2)][g_81.f2][g_57], 7)) | g_168), 3)), 5));
                if (g_142.f0.f0)
                    goto lbl_184;
            }
        }
        if ((safe_unary_minus_func_uint8_t_u(2UL)))
        { 
            return l_149[0][0];
        }
        else
        { 
            const uint64_t l_188 = 0UL;
            if (((((g_21 ^ (g_73 , (0x440195C6L && ((((safe_mod_func_int64_t_s_s((-4L), g_21)) , g_57) | g_9) < 0x7983L)))) & l_188) >= 0UL) > g_148))
            { 
                int16_t l_189 = 0x0638L;
                int32_t l_192 = 0x356361B4L;
                g_9 = l_188;
                ++l_193;
                if (g_57)
                    continue;
            }
            else
            { 
                l_149[0][0] |= l_188;
                g_196 = 1L;
            }
            for (g_124 = 0; (g_124 >= 21); g_124++)
            { 
                g_73 = ((l_188 , 18446744073709551615UL) && (((g_209 = (((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((g_196 ^= (l_188 || l_188)), 2)), 7)), 18446744073709551615UL)) ^ g_87) || l_157.f0.f1), 1L)), l_188)) , 0xEDL) > l_171.f0)) < 0x66L) ^ g_73));
            }
            g_73 |= (!(safe_mul_func_int16_t_s_s((l_22.f0 , l_213), (safe_sub_func_uint32_t_u_u(g_87, (safe_mod_func_uint16_t_u_u(65535UL, 0x9429L)))))));
        }
    }
    return g_73;
}



static struct S0  func_2(const union U1  p_3)
{ 
    struct S0 l_144 = {-1L,0xA46D666DE7A280F6LL};
    l_144 = g_126;
    return g_126;
}



static const union U1  func_4(int8_t  p_5, union U1  p_6, uint32_t  p_7, const union U2  p_8)
{ 
    return p_6;
}



static union U1  func_10(uint64_t  p_11, uint32_t  p_12, struct S0  p_13, union U1  p_14)
{ 
    int32_t l_42 = 1L;
    int32_t l_43[5][1][1] = {{{0L}},{{(-5L)}},{{0L}},{{(-5L)}},{{0L}}};
    const int64_t l_82 = (-7L);
    union U2 l_102 = {0xEB33L};
    union U1 l_110 = {{0x44AA8452L,1L}};
    int i, j, k;
    if (((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((l_43[0][0][0] = (((((safe_mod_func_uint16_t_u_u(((p_14.f0.f0 < (safe_rshift_func_uint16_t_u_u(g_21, (((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_11, (safe_mul_func_int16_t_s_s(p_13.f1, p_13.f0)))), p_14.f0.f1)), 0L)), 5)) <= p_13.f1) , 0xA60CL)))) > g_9), p_11)) && 0x69L) , g_9) , l_42) && l_42)), 0xE3E4L)) ^ g_21), g_9)) , 9L))
    { 
        int64_t l_52 = 0xF74462D17F4926A6LL;
        int32_t l_53 = 0x7AB81002L;
        l_53 = ((safe_div_func_uint16_t_u_u((((0UL != ((safe_add_func_int8_t_s_s((0x2E31L | (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((0xDC46221EB1ED3090LL || l_42), p_13.f0)) && l_52), g_21))), 0UL)) <= l_52)) && 0xB933DF47L) >= p_13.f0), 0x87F9L)) , g_9);
    }
    else
    { 
        uint16_t l_54[5] = {0xAC86L,0xAC86L,0xAC86L,0xAC86L,0xAC86L};
        int32_t l_58 = 0x27936456L;
        int32_t l_59 = 0x153D5795L;
        int32_t l_61 = (-1L);
        int i;
lbl_65:
        ++l_54[2];
        for (g_21 = 0; (g_21 <= 0); g_21 += 1)
        { 
            uint32_t l_62 = 8UL;
            int32_t l_74 = 0x33967BE2L;
            int i;
            for (l_42 = 0; (l_42 >= 0); l_42 -= 1)
            { 
                l_62--;
            }
            if (p_13.f1)
                goto lbl_65;
            l_74 = (((safe_mod_func_uint32_t_u_u(((((l_54[(g_21 + 1)] = ((l_54[g_21] > 0xC9DBL) >= (+(g_73 = (safe_add_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u(((0UL && g_60) & g_21), 0x8DE384C7D0E75FCALL)) > g_60) || p_13.f0), g_9)))))) <= 0x1B0FL) <= p_13.f0) > 255UL), 0xBE229A0CL)) <= p_13.f1) | 0xDFL);
            for (p_12 = 0; (p_12 <= 0); p_12 += 1)
            { 
                l_74 &= ((safe_add_func_uint64_t_u_u(((g_81.f2 = ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((g_81 , p_14) , (g_57 || g_81.f1)), g_57)) >= 0x17B57B06L), 2)) && l_54[g_21])) | p_13.f0), p_13.f1)) & p_13.f1);
                if (g_57)
                    break;
                if (g_9)
                    goto lbl_65;
            }
        }
        l_43[3][0][0] = (((l_82 >= (((((safe_div_func_uint64_t_u_u(1UL, ((p_11 = ((246UL < (-6L)) & g_81.f1)) || p_13.f1))) < l_54[2]) > p_14.f0.f1) == p_13.f1) && 0xD4EBL)) && g_81.f2) ^ l_58);
    }
    for (g_81.f2 = 21; (g_81.f2 == (-9)); --g_81.f2)
    { 
        const int32_t l_104 = 0x092B2853L;
        uint32_t l_116 = 0xFFA6F56AL;
        int32_t l_125 = 3L;
        int16_t l_138 = 0x2C63L;
        if (l_43[1][0][0])
            break;
        g_87++;
        for (l_42 = 0; (l_42 >= (-11)); l_42--)
        { 
            int32_t l_113 = 0x7C9D89B7L;
            int32_t l_115 = 8L;
            struct S0 l_137 = {1L,0xCEBAF4236FC2CA39LL};
            if (((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((l_43[2][0][0] > (safe_mod_func_int8_t_s_s((-1L), (safe_rshift_func_int16_t_s_s((l_102 , ((safe_unary_minus_func_uint8_t_u(l_42)) || g_87)), 10))))), g_87)) & l_102.f1) <= l_104), 0x45L)), 11)) || g_60))
            { 
                int32_t l_114 = (-1L);
                l_116 = ((+(0xC5L >= (((safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u((p_11 ^ (l_110 , (safe_div_func_int8_t_s_s((((((l_113 |= (p_13.f1 = ((g_60 && 0x8F170593L) > l_104))) ^ 0x04EFFBF5E0DC0726LL) == l_104) && 0xA078L) != 0xEFB57A5127A50812LL), l_114)))), 0x4487636F93E04930LL)) != l_115) , 0x6640L) ^ l_82), 0xF9L)) && p_13.f0) < 0xD8BEL))) | (-3L));
                g_73 = ((4L == (safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((+l_115) <= g_81.f2), 4)) != g_57), 0xDEDCL))) != g_81.f1);
            }
            else
            { 
                l_125 = ((safe_rshift_func_uint8_t_u_s(0x80L, g_124)) || ((p_14.f0.f0 == g_9) != p_14.f0.f1));
                g_126 = p_14.f0;
            }
            for (g_57 = 28; (g_57 <= (-22)); g_57 = safe_sub_func_int64_t_s_s(g_57, 5))
            { 
                g_73 = l_110.f0.f1;
            }
            for (p_13.f1 = 0; (p_13.f1 > (-12)); p_13.f1--)
            { 
                uint8_t l_141 = 247UL;
                g_73 |= (((l_113 , ((((l_125 <= (safe_lshift_func_uint16_t_u_s((p_14.f0.f0 && (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((l_137 , p_12), p_13.f1)), p_14.f0.f0))), p_12))) , p_13.f0) != g_9) && 0x6A9EL)) , 65534UL) >= g_60);
                l_115 |= (l_102 , ((l_138 , (g_81.f2 || (safe_mod_func_uint32_t_u_u((l_138 <= l_141), g_57)))) & 0x3CAE63CD3D8531B7LL));
                if (g_81.f1)
                    continue;
            }
        }
    }
    return g_142;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_142.f0.f0, "g_142.f0.f0", print_hash_value);
    transparent_crc(g_142.f0.f1, "g_142.f0.f1", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1, "g_143.f1", print_hash_value);
    transparent_crc(g_143.f2, "g_143.f2", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
